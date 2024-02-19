#include <memory>

#include "controls_msgs/msg/dump.hpp"
#include "rclcpp/rclcpp.hpp"
#include "settings.h"

using std::placeholders::_1;

class Dump : public rclcpp::Node
{
   public:
    Dump() : Node("dump")
    {
        subscription_ = this->create_subscription<controls_msgs::msg::Dump>(
            DUMP_TOPIC, 10, std::bind(&Dump::topic_callback, this, _1));
    }

   private:
    void topic_callback(const controls_msgs::msg::Dump& dumpRaw) const
    {
        RCLCPP_INFO(this->get_logger(), "I heard: '%lf'", dumpRaw.lins[0]);
    }
    rclcpp::Subscription<controls_msgs::msg::Dump>::SharedPtr subscription_;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Dump>());
    rclcpp::shutdown();
    return 0;
}