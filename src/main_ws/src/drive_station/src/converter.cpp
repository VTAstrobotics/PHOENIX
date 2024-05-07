
#include "controls_msgs/msg/conversion.hpp"
#include "rclcpp/rclcpp.hpp"
#include "settings.h"

class Converter : public rclcpp::Node
{
   public:
    Converter() : Node("converter")
    {
        guiPub = this->create_publisher<controls_msgs::msg::Conversion>(
            CONVERTER_TOPIC, QOS);
    }

   private:
    rclcpp::Publisher<controls_msgs::msg::Conversion>::SharedPtr guiPub;
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Converter>());
    rclcpp::shutdown();
    return 0;
}