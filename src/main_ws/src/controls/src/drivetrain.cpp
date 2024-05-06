#include <iostream>
#include <memory>

#include "../include/settings.h"
#include "../include/utils.h"
#include "controls_msgs/msg/drivetrain.hpp"
#include "rclcpp/rclcpp.hpp"
// #include "teleop/Controller.hpp"
#include "uart.hpp"
using std::placeholders::_1;

class Drivetrain : public rclcpp::Node
{
   public:
    Drivetrain() : Node("drivetrain")
    {
        subscription_ =
            this->create_subscription<controls_msgs::msg::Drivetrain>(
                DRIVE_TOPIC, QOS,
                std::bind(&Drivetrain::topic_callback, this, _1));
        uart = UART("/dev/ttyTHS1");
        std::string error = uart.get_error();
        if ("" != error)
        {
            RCLCPP_ERROR_STREAM(this->get_logger(), error << std::endl);
        }
    }

   private:
    controls_msgs::msg::Drivetrain oldDrive;
    UART uart;

    void topic_callback(const controls_msgs::msg::Drivetrain& driveRaw)
    {
        /* reduce load by ignoring duplicate message */
        for (int i = 0; i < DRIVE_M_COUNT; i++)
        {
            if (!APPROX(driveRaw.motors[i], oldDrive.motors[i]))
            {
                goto unequal;
            }
        }
        return;
    unequal:
        RCLCPP_INFO_STREAM(this->get_logger(),
                           "Drive mot: ["
                               << driveRaw.motors[DRIVE_L_MOTOR] << ", "
                               << driveRaw.motors[DRIVE_R_MOTOR] << std::endl);

        oldDrive = driveRaw;

        std::string resp = "";

        uart.send("1:" + std::to_string(driveRaw.motors[DRIVE_L_MOTOR]) + ";");
        resp = uart.get_all_feedback();
        RCLCPP_INFO_STREAM(this->get_logger(), resp);

        uart.send("2:" + std::to_string(driveRaw.motors[DRIVE_R_MOTOR]) + ";");
        resp = uart.get_all_feedback();
        RCLCPP_INFO_STREAM(this->get_logger(), resp);
    }
    rclcpp::Subscription<controls_msgs::msg::Drivetrain>::SharedPtr
        subscription_;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Drivetrain>());
    rclcpp::shutdown();

    return 0;
}