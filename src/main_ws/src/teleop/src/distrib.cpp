#include <memory>

#include "controls_msgs/msg/dig.hpp"
#include "controls_msgs/msg/drivetrain.hpp"
#include "controls_msgs/msg/dump.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "settings.h"
#include "utils.h"
using std::placeholders::_1;

class Distributor : public rclcpp::Node
{
   public:
    Distributor() : Node("distrib")
    {
        subscription_ = this->create_subscription<sensor_msgs::msg::Joy>(
            DISTRIB_TOPIC, 10,
            std::bind(&Distributor::topic_callback, this, _1));
    }

   private:
    void topic_callback(const sensor_msgs::msg::Joy& distribRaw)
    {
        // TODO: interpret messages from joy and send messages to each subsystem
    }
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription_;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Distributor>());
    rclcpp::shutdown();
    return 0;
}