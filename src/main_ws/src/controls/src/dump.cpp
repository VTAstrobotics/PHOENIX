#include <memory>

#include "../include/settings.h"
#include "../include/utils.h"
#include "controls_msgs/msg/dump.hpp"
#include "rclcpp/rclcpp.hpp"

using std::placeholders::_1;

class Dump : public rclcpp::Node
{
   public:
    Dump() : Node("dump")
    {
        subscription_ = this->create_subscription<controls_msgs::msg::Dump>(
            DUMP_TOPIC, QOS, std::bind(&Dump::topic_callback, this, _1));
    }

   private:
    controls_msgs::msg::Dump oldDump;

    void topic_callback(const controls_msgs::msg::Dump& dumpRaw)
    {
        /* reduce load by ignoring duplicate message */
        for (int i = 0; i < DUMP_A_COUNT; i++)
        {
            if (!APPROX(dumpRaw.lins[i], oldDump.lins[i]))
            {
                goto unequal;
            }
        }
        return;
    unequal:

        oldDump = dumpRaw;
        // TODO: send message to dump motors here
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