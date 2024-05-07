#include <iostream>
#include <memory>

#include "../include/settings.h"
#include "../include/utils.h"
#include "controls_msgs/msg/drivetrain.hpp"
#include "controls_msgs/msg/uart.hpp"
#include "rclcpp/rclcpp.hpp"
// #include "teleop/Controller.hpp"
using std::placeholders::_1;

class Drivetrain : public rclcpp::Node
{
   public:
    Drivetrain() : Node("drivetrain")
    {
        subscription =
            this->create_subscription<controls_msgs::msg::Drivetrain>(
                DRIVE_TOPIC, QOS,
                std::bind(&Drivetrain::topic_callback, this, _1));
        uart_link =
            this->create_publisher<controls_msgs::msg::Uart>(UART_TOPIC, QOS);
    }

   private:
    controls_msgs::msg::Drivetrain oldDrive;

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
        // TODO: remove this print?
        RCLCPP_INFO_STREAM(this->get_logger(),
                           "Drive mot: ["
                               << driveRaw.motors[DRIVE_L_MOTOR] << ", "
                               << driveRaw.motors[DRIVE_R_MOTOR] << std::endl);

        oldDrive = driveRaw;

        controls_msgs::msg::Uart send;
        send.msg = "1:" + std::to_string(driveRaw.motors[DRIVE_L_MOTOR]) + ";";
        uart_link->publish(send);

        send.msg = "2:" + std::to_string(driveRaw.motors[DRIVE_R_MOTOR]) + ";";
        uart_link->publish(send);
    }
    rclcpp::Subscription<controls_msgs::msg::Drivetrain>::SharedPtr
        subscription;
    rclcpp::Publisher<controls_msgs::msg::Uart>::SharedPtr uart_link;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Drivetrain>());
    rclcpp::shutdown();

    return 0;
}