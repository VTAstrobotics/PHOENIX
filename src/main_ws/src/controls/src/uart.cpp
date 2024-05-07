#include <fcntl.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <string>

#include "../include/settings.h"
#include "controls_msgs/msg/uart.hpp"
#include "rclcpp/rclcpp.hpp"

using std::placeholders::_1;

class UART : public rclcpp::Node
{
   public:
    UART() : Node("uart")
    {
        subscription = this->create_subscription<controls_msgs::msg::Uart>(
            UART_TOPIC, QOS, std::bind(&UART::topic_callback, this, _1));

        uart_fd = open(UART_PATH, UART_FD_SETTINGS);
        if (-1 == uart_fd)
        {
            RCLCPP_ERROR_STREAM(this->get_logger(),
                                "UART could not be opened" << std::endl);
            return;
        }

        struct termios options;
        tcgetattr(uart_fd, &options);
        options.c_cflag = BAUD_RATE | CS8 | CLOCAL | CREAD;
        options.c_iflag = IGNPAR;
        options.c_lflag = 0;
        options.c_oflag = 0;
        tcflush(uart_fd, TCIOFLUSH);
        tcsetattr(uart_fd, TCSANOW, &options);
    }

    std::string get()
    {
        int rx_length = read(uart_fd, (void*)rx_buf, RX_BUFFER_LEN);
        if (-1 == rx_length &&
            errno == EAGAIN)  // return a null string if no data to read
        {
            return "";
        }
        return std::string(rx_buf);
    }

    void send(std::string msg)
    {
        strncpy(tx_buf, msg.c_str(), TX_BUFFER_LEN);
        int tx_length = write(uart_fd, (void*)tx_buf, strlen(tx_buf) + 1);
        if (-1 == tx_length)
        {
            RCLCPP_ERROR_STREAM(this->get_logger(),
                                "Could not write to UART" << std::endl);
        }
    }

    void stop()
    {
        if (-1 == close(uart_fd))
        {
            RCLCPP_ERROR_STREAM(this->get_logger(),
                                "Could not close to UART" << std::endl);
        }
    }

    std::string get_all_feedback()
    {
        std::string res = "";
        std::string feedback = get();
        /* Keep trying until we get data */
        while (feedback == "")
        {
            feedback = get();
        }

        /* Got data, keep reading until we run out */
        while (feedback != "")
        {
            res += feedback;
            feedback = get();
        }

        return res;
    }

   private:
    void topic_callback(const controls_msgs::msg::Uart msgRaw)
    {
        this->send(msgRaw.msg);
        std::string resp = this->get_all_feedback();
        RCLCPP_INFO_STREAM(this->get_logger(), resp);
    }

    int uart_fd;
    char rx_buf[RX_BUFFER_LEN];
    char tx_buf[TX_BUFFER_LEN];

    rclcpp::Subscription<controls_msgs::msg::Uart>::SharedPtr subscription;
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<UART>());
    std::make_shared<UART>()->send("1:90;2:90;3:0;4:90;5:0;");
    rclcpp::shutdown();
    return 0;
}