#include <memory>
#include <cmath> // for pow

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

        dumpAscending = false;
        dumpDescending = false;
        slowTurnMode = false;
        cooldown = false;
        last_time = 0;
    }

   private:
    void topic_callback(const sensor_msgs::msg::Joy &raw)
    {
        int32_t cur_time = raw.header.stamp.sec;
        auto digSend = controls_msgs::msg::Dig();
        auto dumpSend = controls_msgs::msg::Dump();
        auto driveSend = controls_msgs::msg::Drivetrain();

        // handles debouncing buttons
        if (cur_time - last_time > 0.01)
        {
            cooldown = false;
        }

        // Stop sequence activated
        if (raw.buttons[CTRL_STOP_SEQ_1] && raw.buttons[CTRL_STOP_SEQ_2] &&
            raw.buttons[CTRL_STOP_SEQ_3])
        {
            exit(0);
        }

        /**********************************************************************
         *                                                                    *
         * Drive controls                                                     *
         *                                                                    *
         * Trigger drives forwards; Trigger drives backwards                  *
         * Axis controls turning                                              *
         *                                                                    *
         **********************************************************************/

        /*
         * Since triggers are [-1, 1] where
         * 1 = not pressed, -1 = fully pressed, 0 = halfway, etc.
         * convert to [0, 1] for ease of use
         */
        float_t driveFwd = raw.axes[CTRL_DRIVE_FWD];
        float_t driveBack = raw.axes[CTRL_DRIVE_BCK];
        driveFwd = ((-1 * driveFwd) + 1) * 0.5;
        driveBack = ((-1 * driveBack) + 1) * 0.5;

        float_t lsX = raw.axes[CTRL_DRIVE_TRN];

        // cubic control for easier control
        driveFwd = std::pow(driveFwd, 3);
        driveBack = std::pow(driveBack, 3);
        lsX = std::pow(lsX, 3);

        if (!cooldown && raw.buttons[CTRL_DRIVE_SLOW_TURN]) {
            cooldown = true;
            last_time = raw.header.stamp.sec;
            slowTurnMode = !slowTurnMode;
        }

        if (slowTurnMode) {
            lsX *= 0.25;
        } else {
            lsX *= 0.5;
        }

        float_t leftTread = driveFwd - driveBack + lsX;
        float_t rightTread = driveFwd - driveBack - lsX;

        // currently [-2, 2], so cap at [-1, 1]
        leftTread = std::clamp(leftTread, -1.0f, 1.0f);
        rightTread = std::clamp(rightTread, -1.0f, 1.0f);

        // invert left since it is mounted mirrored
        leftTread *= -1;

        // convert from [-1, 1] to [0, 180] since we currently use Servo library
        leftTread = std::min((leftTread * 90) + 90, 180.0f);
        rightTread = std::min((rightTread * 90) + 90, 180.0f);

        driveSend.motors[DRIVE_L_MOTOR] = leftTread;
        driveSend.motors[DRIVE_R_MOTOR] = rightTread;

        /**********************************************************************
         *                                                                    *
         * Dig controls                                                       *
         * Button1 extends (lower dig bucket); button2 retracts.              *
         * B1 | B2 | Output                                                   *
         * ----------------                                                   *
         *  0 |  0 | 0                                                        *
         *  0 |  1 | -1                                                       *
         *  1 |  0 | 1                                                        *
         *  1 |  1 | 0                                                        *
         *                                                                    *
         * Axis dictates the rotation of the dig bucket                       *
         *                                                                    *
         **********************************************************************/
        digSend.lins = raw.axes[CTRL_DIG_UP] - raw.axes[CTRL_DIG_DOWN];

        float_t digLins = std::min((raw.axes[CTRL_DIG_BUCKET] * 90) + 90, 180.0f);
        digLins = std::pow(digLins, 3);
        digLins *= 0.125;

        digSend.motors = digLins;

        /**********************************************************************
         *                                                                    *
         * Dump controls                                                      *
         * Manual controls using axis of the dpad                             *
         * Automatic sequences using buttons                                  *
         *                                                                    *
         **********************************************************************/
        // Automatic button sequencing setup
        if (!cooldown && raw.buttons[CTRL_DUMP_ASCEND]) {
            cooldown = true;
            last_time = raw.header.stamp.sec;
            dumpAscending = !dumpAscending;
        } else if (!cooldown && raw.buttons[CTRL_DUMP_DESCEND]) {
            cooldown = true;
            last_time = raw.header.stamp.sec;
            dumpDescending = !dumpDescending;
        } 

        // assign value to dump lins
        if (dumpAscending && dumpDescending) {
            dumpSend.lins = 0;
        } else if (dumpAscending) {
            dumpSend.lins = 1;
        } else if (dumpDescending) {
            dumpSend.lins = -1;
        } else {
            dumpSend.lins = raw.axes[CTRL_DUMP_LINS];
        }

        // Send messages to each subsystem
        digPub->publish(digSend);
        dumpPub->publish(dumpSend);
        drivePub->publish(driveSend);
    }

    bool cooldown;
    bool dumpAscending;
    bool dumpDescending;
    bool slowTurnMode;
    int32_t last_time;
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription;
    rclcpp::Publisher<controls_msgs::msg::Dig>::SharedPtr digPub;
    rclcpp::Publisher<controls_msgs::msg::Dump>::SharedPtr dumpPub;
    rclcpp::Publisher<controls_msgs::msg::Drivetrain>::SharedPtr drivePub;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Distributor>());
    rclcpp::shutdown();
    return 0;
}
