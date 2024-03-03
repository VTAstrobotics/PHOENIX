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
        subscription = this->create_subscription<sensor_msgs::msg::Joy>(
            DISTRIB_TOPIC, QOS,
            std::bind(&Distributor::topic_callback, this, _1));
        digPub =
            this->create_publisher<controls_msgs::msg::Dig>(DIG_TOPIC, QOS);
        dumpPub =
            this->create_publisher<controls_msgs::msg::Dump>(DUMP_TOPIC, QOS);
        drivePub = this->create_publisher<controls_msgs::msg::Drivetrain>(
            DRIVE_TOPIC, QOS);

        digMode = false;
        cooldown = false;
        last_time = 0;
    }

   private:
    void topic_callback(const sensor_msgs::msg::Joy& distribRaw)
    {
        int32_t cur_time = distribRaw.header.stamp.sec;
        auto digSend = controls_msgs::msg::Dig();
        auto dumpSend = controls_msgs::msg::Dump();
        auto driveSend = controls_msgs::msg::Drivetrain();

        // handles debouncing buttons
        if (cur_time - last_time > 1)
        {
            cooldown = false;
        }

        // Stop sequence activated
        if (distribRaw.buttons[CTRL_STOP_SEQ_1] &&
            distribRaw.buttons[CTRL_STOP_SEQ_2] &&
            distribRaw.buttons[CTRL_STOP_SEQ_3])
        {
            exit(0);
        }

        // dump any errors to console (Is this needed anymore?)
        if (distribRaw.buttons[CTRL_DUMP_ERRORS] && !cooldown)
        {
            cooldown = true;
            last_time = cur_time;
        }

        // clear any errors on board (Is this needed anymore?)
        if (distribRaw.buttons[CTRL_CLEAR_ERRORS] && !cooldown)
        {
            cooldown = true;
            last_time = cur_time;
        }

        // Drive controls
        if (!APPROX(distribRaw.axes[CTRL_TANK_L_TREAD] - DEADZONE_SIZE, 0))
        {
            driveSend.motors[DRIVE_L_MOTOR] =
                distribRaw.axes[CTRL_TANK_L_TREAD] * MAX_SPEED;
        }
        else
        {
            driveSend.motors[DRIVE_L_MOTOR] = 0;
        }

        if (!APPROX(distribRaw.axes[CTRL_TANK_R_TREAD] - DEADZONE_SIZE, 0))
        {
            driveSend.motors[DRIVE_R_MOTOR] =
                distribRaw.axes[CTRL_TANK_R_TREAD] * MAX_SPEED;
        }
        else
        {
            driveSend.motors[DRIVE_R_MOTOR] = 0;
        }

        // Dig controls
        if (distribRaw.axes[CTRL_SCOOP] > DPAD_ACTIVATION_DISTANCE)
        {
            digSend.lins[DIG_L_LIN] = MAX_SPEED;
            digSend.lins[DIG_R_LIN] = MAX_SPEED;
        }
        else if (distribRaw.axes[CTRL_SCOOP] < -DPAD_ACTIVATION_DISTANCE)
        {
            digSend.lins[DIG_L_LIN] = -MAX_SPEED;
            digSend.lins[DIG_R_LIN] = -MAX_SPEED;
        }
        else
        {
            digSend.lins[DIG_L_LIN] = 0;
            digSend.lins[DIG_R_LIN] = 0;
        }
        digSend.motors[DIG_L_MOTOR] = 0;
        digSend.motors[DIG_R_MOTOR] = 0;

        // Dump controls
        if (distribRaw.axes[CTRL_BUCKET] > DPAD_ACTIVATION_DISTANCE)
        {
            dumpSend.lins[DUMP_L_LIN] = MAX_SPEED;
            dumpSend.lins[DUMP_R_LIN] = MAX_SPEED;
        }
        else if (distribRaw.axes[CTRL_BUCKET] < -DPAD_ACTIVATION_DISTANCE)
        {
            dumpSend.lins[DUMP_L_LIN] = -MAX_SPEED;
            dumpSend.lins[DUMP_R_LIN] = -MAX_SPEED;
        }
        else
        {
            dumpSend.lins[DUMP_L_LIN] = 0;
            dumpSend.lins[DUMP_R_LIN] = 0;
        }

        // Send messages to each subsystem
        digPub->publish(digSend);
        dumpPub->publish(dumpSend);
        drivePub->publish(driveSend);
    }

    bool cooldown;
    bool digMode;
    int32_t last_time;
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription;
    rclcpp::Publisher<controls_msgs::msg::Dig>::SharedPtr digPub;
    rclcpp::Publisher<controls_msgs::msg::Dump>::SharedPtr dumpPub;
    rclcpp::Publisher<controls_msgs::msg::Drivetrain>::SharedPtr drivePub;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Distributor>());
    rclcpp::shutdown();
    return 0;
}