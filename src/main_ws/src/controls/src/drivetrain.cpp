#include <memory>
#include <chrono>
#include <thread>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "teleop/Controller.hpp" 
#include "teleop/UART.hpp"
using std::placeholders::_1;

class Drivetrain : public rclcpp::Node {
 public:
  Drivetrain() : Node("drivetrain") {
    subscription_ = this->create_subscription<std_msgs::msg::String>(
        "joy", 10, std::bind(&Drivetrain::topic_callback, this, _1));

    oldMsg.data = "";  // keeps track of last message received
    stop = false;  // stops script when true
    dump_err = false;
    clear_err = false;
    digMode = false; // enable or disable digging mode
    // drivetrain motor settings
    left_vel = 0, right_vel = 0, max_speed = 1;
    // cooldown to prevent double switching by mistake (not super necessary but helpful)
    cooldown = false;
    first_time = 0, cur_time = 0;

    std::this_thread::sleep_for(std::chrono::seconds(1));

  }

  bool stop_sub() {
    return stop;
  }

 private:
  std_msgs::msg::String oldMsg;
  bool stop;
  bool dump_err;
  bool clear_err;
  bool digMode;
  int left_vel, right_vel, max_speed;
  bool cooldown;
  int first_time, cur_time;

  void topic_callback(const std_msgs::msg::String& msg) const {
    RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg.data.c_str());

    if (!oldMsg || oldMsg != msg) { // to reduce load
      oldMsg = msg;
    }

    // for the cooldown
    cur_time = msg->header.stamp.sec;
    if (cur_time - first_time > 1) {
      cooldown = false;
    }

    //         ------------------ BUTTONS ------------------
    if (msg->buttons[ctrl.BACK.value] == 1 && msg->buttons[ctrl.START.value] == 1 && msg->buttons[ctrl.XBOX.value] == 1) {  // STOP button
      stop = true;
      RCLCPP_INFO(get_logger(), "Subscribing STOPPED by user");
    }

    if (msg->buttons[ctrl.B.value] == 1 && !cooldown) { // dump errors
      dump_err = true;
      cooldown = true;
      first_time = msg->header.stamp.sec;
    }

    if (msg->buttons[ctrl.LB.value] == 1 && !cooldown) {
      clear_err = true;
      cooldown = true;
      first_time = msg->header.stamp.sec;
    }

    if (msg->buttons[ctrl.A.value] == 1 && !cooldown) { // switch to dig mode
      digMode = ~digMode;
      RCLCPP_INFO(get_logger(), "Dig mode switch, driving is now %s", digMode_ ? "disabled" : "enabled");
      cooldown = true;
      first_time = msg->header.stamp.sec;
    }

    //         ------------------  AXES  ------------------
    // sets bool vars if stick's pot exceeds deadzone in that direction
    bool LY = msg->axes[ctrl.LS_Y.value] != 0;
    bool RY = msg->axes[ctrl.RS_Y.value] != 0;

    //               ----------- Tank Mode -----------
    if (!digMode) {
      if (LY) {
        left_vel = msg->axes[ctrl.LS_Y.value] * max_speed;
      }
      else {
        left_vel = 0;
      }

      if (RY) {
        right_vel = msg->axes[ctrl.RS_Y.value] * max_speed;
      }
      else {
        right_vel = 0;
      }
    }
  }

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;

};

int main(int argc, char* argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Drivetrain>());
  auto driveSub = std::make_shared<Drivetrain>();
  auto uart = std::make_shared<UART>("/dev/ttyTHS1", 115200);
  RCLCPP_INFO(driveSub->get_logger(), "DRIVETRAIN started");

  // main control loop, terminates when stop combo pressed
  RCLCPP_DEBUG(driveSub->get_logger(), "1");

  while (!driveSub->stop_sub()) {
    RCLCPP_DEBUG(driveSub->get_logger(), "1.5");
    rclcpp::spin_once(driveSub);
    RCLCPP_DEBUG(driveSub->get_logger(), "1.75");
  }

    // convert analog value from [-1, 1] to [0, 180]
    // BUT where 0 corresponds to 95
    float left_converted = std::min((-1 * driveSub->left_vel_ * 90) + 90, 180.0f);
    float right_converted = std::min((driveSub->right_vel_ * 90) + 90, 180.0f);
        
    // round numbers to 2 decimal places
    left_converted = std::round(left_converted * 100) / 100;
    right_converted = std::round(right_converted * 100) / 100;

    // for debugging only
    // RCLCPP_INFO(driveSub->get_logger(), "left_vel: %f", left_converted);
    // RCLCPP_INFO(driveSub->get_logger(), "right_vel: %f", right_converted);

    // tell Arduino the value we want to give the motors
    RCLCPP_DEBUG(driveSub->get_logger(), "2");
    uart->send(("1:" + std::to_string(left_converted) + ";").c_str());
    RCLCPP_DEBUG(driveSub->get_logger(), "3");
    auto resp = uart->getAllFeedback();
    RCLCPP_DEBUG(driveSub->get_logger(), resp);

    uart->send(("2:" + std::to_string(right_converted) + ";").c_str());
    resp = uart->getAllFeedback();
    RCLCPP_DEBUG(driveSub->get_logger(), resp);
        
    // get feedback, this ensures the Arduino has had time to
    // get the message before overwriting the buffer

  // turn motors off (important)
  uart->send("1:95;2:95;");
  RCLCPP_INFO(driveSub->get_logger(), "Motors Halted");

  // Destroy the node explicitly
  // (optional - otherwise it will be done automatically)
  uart->stop();
  rclcpp::shutdown();
  RCLCPP_INFO(driveSub->get_logger(), "Drivetrain shutdown complete");

  return 0;
}