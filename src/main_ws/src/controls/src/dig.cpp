#include <memory>

#include "controls_msgs/msg/dig.hpp"
#include "rclcpp/rclcpp.hpp"
#include "settings.h"
#include "utils.h"
using std::placeholders::_1;

class Dig : public rclcpp::Node
{
   public:
    Dig() : Node("dig")
    {
        subscription_ = this->create_subscription<controls_msgs::msg::Dig>(
            DIG_TOPIC, 10, std::bind(&Dig::topic_callback, this, _1));
    }

   private:
    controls_msgs::msg::Dig oldDig;

    void topic_callback(const controls_msgs::msg::Dig& digRaw)
    {
        /* reduce load by ignoring duplicate message */
        for (int i = 0; i < DIG_A_COUNT; i++)
        {
            if (!APPROX(digRaw.lins[i], oldDig.lins[i]))
            {
                goto unequal;
            }
        }
        for (int i = 0; i < DIG_M_COUNT; i++)
        {
            if (!APPROX(digRaw.motors[i], oldDig.motors[i]))
            {
                goto unequal;
            }
        }
        return;
    unequal:

        oldDig = digRaw;
        // TODO: send message to dump motors here
    }
    rclcpp::Subscription<controls_msgs::msg::Dig>::SharedPtr subscription_;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Dig>());
    rclcpp::shutdown();
    return 0;
}