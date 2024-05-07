#include <iostream>
#include <memory>

#include "../include/settings.h"
#include "../include/utils.h"
#include "controls_msgs/msg/dig.hpp"
#include "controls_msgs/msg/uart.hpp"
#include "rclcpp/rclcpp.hpp"
using std::placeholders::_1;

class Dig : public rclcpp::Node
{
   public:
    Dig() : Node("dig")
    {
        subscription_ = this->create_subscription<controls_msgs::msg::Dig>(
            DIG_TOPIC, QOS, std::bind(&Dig::topic_callback, this, _1));
        uart_link =
            this->create_publisher<controls_msgs::msg::Uart>(UART_TOPIC, QOS);
    }

   private:
    controls_msgs::msg::Dig oldDig;

    void topic_callback(const controls_msgs::msg::Dig& digRaw)
    {
        /* reduce load by ignoring duplicate message */
        if (APPROX(digRaw.lins, oldDig.lins) &&
            APPROX(digRaw.motors, oldDig.motors))
        {
            return;
        }

        RCLCPP_INFO_STREAM(this->get_logger(),
                           "Dig act: [" << digRaw.lins << std::endl);
        RCLCPP_INFO_STREAM(this->get_logger(),
                           "Dig mot: [" << digRaw.motors << std::endl);
        oldDig = digRaw;

        controls_msgs::msg::Uart send;
        send.msg = "3:" + std::to_string(digRaw.lins) + ";";
        uart_link->publish(send);

        send.msg = "4:" + std::to_string(digRaw.motors) + ";";
        uart_link->publish(send);
    }
    rclcpp::Subscription<controls_msgs::msg::Dig>::SharedPtr subscription_;
    rclcpp::Publisher<controls_msgs::msg::Uart>::SharedPtr uart_link;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Dig>());
    rclcpp::shutdown();
    return 0;
}