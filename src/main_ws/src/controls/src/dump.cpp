#include <iostream>
#include <memory>

#include "../include/settings.h"
#include "../include/utils.h"
#include "controls_msgs/msg/dump.hpp"
#include "controls_msgs/msg/uart.hpp"
#include "rclcpp/rclcpp.hpp"

using std::placeholders::_1;

class Dump : public rclcpp::Node
{
  public:
    Dump() : Node("dump")
    {
        subscription_ = this->create_subscription<controls_msgs::msg::Dump>(DUMP_TOPIC, QOS,
                                                                            std::bind(&Dump::topic_callback, this, _1));
        uart_link = this->create_publisher<controls_msgs::msg::Uart>(UART_TOPIC, QOS);
    }

  private:
    controls_msgs::msg::Dump oldDump;

    void topic_callback(const controls_msgs::msg::Dump &dumpRaw)
    {
        /* reduce load by ignoring duplicate message */
        if (APPROX(dumpRaw.lins, oldDump.lins))
        {
            return;
        }

        RCLCPP_INFO_STREAM(this->get_logger(), "Dump act: [" << dumpRaw.lins << std::endl);

        oldDump = dumpRaw;

        controls_msgs::msg::Uart send;
        send.msg = "5:" + std::to_string(dumpRaw.lins) + ";";
        uart_link->publish(send);
    }
    rclcpp::Subscription<controls_msgs::msg::Dump>::SharedPtr subscription_;
    rclcpp::Publisher<controls_msgs::msg::Uart>::SharedPtr uart_link;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Dump>());
    rclcpp::shutdown();
    return 0;
}