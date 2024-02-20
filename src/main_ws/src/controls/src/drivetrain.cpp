#include <memory>

#include "controls_msgs/msg/drivetrain.hpp"
#include "rclcpp/rclcpp.hpp"
#include "settings.h"
#include "utils.h"
// #include "teleop/Controller.hpp"
// #include "teleop/UART.hpp"
using std::placeholders::_1;

class Drivetrain : public rclcpp::Node
{
   public:
    Drivetrain() : Node("drivetrain")
    {
        subscription_ =
            this->create_subscription<controls_msgs::msg::Drivetrain>(
                DRIVE_TOPIC, 10,
                std::bind(&Drivetrain::topic_callback, this, _1));
    }

   private:
    controls_msgs::msg::Drivetrain oldDrive;

    void topic_callback(const controls_msgs::msg::Drivetrain& driveRaw)
    {
        /* reduce load by ignoring duplicate message */
        for (int i = 0; i < DRIVE_COUNT; i++)
        {
            if (!APPROX(driveRaw.motors[i], oldDrive.motors[i]))
            {
                goto unequal;
            }
        }
        return;
    unequal:

        oldDrive = driveRaw;
        // TODO: send message to drive motors here
    }
    rclcpp::Subscription<controls_msgs::msg::Drivetrain>::SharedPtr
        subscription_;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Drivetrain>());
    rclcpp::shutdown();
    /*
    auto driveSub = std::make_shared<Drivetrain>();
    auto uart = std::make_shared<UART>("/dev/ttyTHS1", 115200);
    RCLCPP_INFO(driveSub->get_logger(), "DRIVETRAIN started");

    // main control loop, terminates when stop combo pressed
    RCLCPP_DEBUG(driveSub->get_logger(), "1");

    while (!driveSub->stop_sub())
    {
        RCLCPP_DEBUG(driveSub->get_logger(), "1.5");
        rclcpp::spin_once(driveSub);
        RCLCPP_DEBUG(driveSub->get_logger(), "1.75");
    }

    // convert analog value from [-1, 1] to [0, 180]
    // BUT where 0 corresponds to 95
    float left_converted =
        std::min((-1 * driveSub->left_vel_ * 90) + 90, 180.0f);
    float right_converted = std::min((driveSub->right_vel_ * 90) + 90, 180.0f);

    // round numbers to 2 decimal places
    left_converted = std::round(left_converted * 100) / 100;
    right_converted = std::round(right_converted * 100) / 100;

    // for debugging only
    // RCLCPP_INFO(driveSub->get_logger(), "left_vel: %f", left_converted);
    // RCLCPP_INFO(driveSub->get_logger(), "right_vel: %f",
    // right_converted);

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
    RCLCPP_INFO(driveSub->get_logger(), "Drivetrain shutdown complete");
*/
    return 0;
}