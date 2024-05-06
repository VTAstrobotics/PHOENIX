#ifndef UART_HPP_
#define UART_HPP_

#include <fcntl.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <string>

#define NO_ERROR 0
#define SRL_NO_OPEN 1
#define SRL_WRITE_ERROR 2

#define BAUD_RATE B1152000
#define RX_BUFFER_LEN 512
#define TX_BUFFER_LEN 512

class UART
{
   public:
    UART() : UART("/dev/ttyTHS1") {}
    UART(const char* port)
    {
        error_code = NO_ERROR;
        uart_fd = open(port, O_RDWR | O_NOCTTY | O_NONBLOCK);
        if (-1 == uart_fd)
        {
            error_code = SRL_NO_OPEN;
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
        if (-1 == rx_length && errno == EAGAIN)
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
            error_code = SRL_WRITE_ERROR;
        }
    }

    void stop() { close(uart_fd); }

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

    std::string get_error()
    {
        std::string msg = "";
        switch (error_code)
        {
            case (NO_ERROR):
                break;
            case (SRL_NO_OPEN):
                msg = "UART unable to open";
                break;
            default:
                msg = "Unknown error code";
                break;
        }
        return msg;
    }

   private:
    int uart_fd;
    int error_code;
    char rx_buf[RX_BUFFER_LEN];
    char tx_buf[TX_BUFFER_LEN];
};
#endif