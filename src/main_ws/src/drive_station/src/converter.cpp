
#include "rclcpp/rclcpp.hpp"

class Converter : public rclcpp::Node
{
   public:
    Converter() : Node("converter") {}

   private:

};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Converter>());
    rclcpp::shutdown();
    return 0;
}