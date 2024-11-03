#include <stdio.h>

#include <rcl/error_handling.h>
#include <rcl/rcl.h>
#include <rclc/executor.h>
#include <rclc/rclc.h>
#include <sensor_msgs/msg/joy.h>
#include <std_msgs/msg/float32_multi_array.h>
#include <std_msgs/msg/int32.h>

#include <rmw_microros/rmw_microros.h>

#include "pico/stdlib.h"
#include "pico_uart_transport.h"

// need to configure these
const uint LED_PIN = 25;
const uint TEST_PIN = 12;
const uint LEFT_MOTOR = 10;
const uint RIGHT_MOTOR = 14;

rcl_publisher_t publisher;
std_msgs__msg__Int32 msg;

std_msgs__msg__Float32MultiArray drive;

void configurePWM()
{
    gpio_set_function(LEFT_MOTOR, GPIO_FUNC_PWM);
    gpio_set_function(RIGHT_MOTOR, GPIO_FUNC_PWM);

    uint slice_num_left = pwm_gpio_to_slice_num(LEFT_MOTOR);
    uint slice_num_right = pwm_gpio_to_slice_num(RIGHT_MOTOR);

    pwm_set_wrap(slice_num_left, 3000);
    pwm_set_wrap(slice_num_right, 3000);
    pwm_set_clkdiv(slice_num_left, 255);
    pwm_set_clkdiv(slice_num_right, 255);

    pwm_set_chan_level(slice_num_left, PWM_CHAN_A, 2000);
    pwm_set_chan_level(slice_num_right, PWM_CHAN_A, 2000);
    pwm_set_enabled(slice_num_left, true);
    pwm_set_enabled(slice_num_right, true);
}

uint32_t pwm_set_freq_duty(uint slice_num, uint chan, uint32_t f, int d)
{
    uint32_t clock = 125000000;
    uint32_t divider16 = clock / f / 4096 + (clock % (f * 4096) != 0);
    if (divider16 / 16 == 0) divider16 = 16;
    uint32_t wrap = clock * 16 / divider16 / f - 1;
    pwm_set_clkdiv_int_frac(slice_num, divider16 / 16, divider16 & 0xF);
    pwm_set_wrap(slice_num, wrap);
    pwm_set_chan_level(slice_num, chan, wrap * d / 100);
    return wrap;
}

void timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
    rcl_ret_t ret = rcl_publish(&publisher, &msg, NULL);
    msg.data++;
}

void drive_callback(const void *msgin)
{
    const std_msgs__msg__Float32MultiArray *msg =
        (const std_msgs__msg__Float32MultiArray *)msgin;

    float left_speed = msg->data.data[0];
    float right_speed = msg->data.data[1];

    int left_power =
        (int)((left_speed * 90) +
              90); // setting between 0-180? need to talk to Cameron about this
    int right_power = (int)((right_speed * 90) + 90);

    pwm_set_freq_duty(pwm_gpio_to_slice_num(LEFT_MOTOR), PWM_CHAN_A, 340,
                      left_power);
    pwm_set_freq_duty(pwm_gpio_to_slice_num(RIGHT_MOTOR), PWM_CHAN_A, 340,
                      right_power);

    printf("Left motor power: %d, Right motor power: %d\n", left_power,
           right_power);
}

int main()
{
    rmw_uros_set_custom_transport(
        true, NULL, pico_serial_transport_open, pico_serial_transport_close,
        pico_serial_transport_write, pico_serial_transport_read);

    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    rcl_timer_t timer;
    rcl_node_t node;
    rcl_allocator_t allocator;
    rclc_support_t support;
    rclc_executor_t executor;

    allocator = rcl_get_default_allocator();

    // Wait for agent successful ping for 2 minutes.
    const int timeout_ms = 1000;
    const uint8_t attempts = 120;

    rcl_ret_t ret = rmw_uros_ping_agent(timeout_ms, attempts);

    if (ret != RCL_RET_OK)
    {
        // Unreachable agent, exiting program.
        return ret;
    }

    rclc_support_init(&support, 0, NULL, &allocator);

    rclc_node_init_default(&node, "pico_node", "", &support);
    rclc_publisher_init_default(
        &publisher, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        "pico_publisher");

    rclc_timer_init_default(&timer, &support, RCL_MS_TO_NS(50), timer_callback);
    rcl_subscription_t drive_sub;
    rclc_executor_init(&executor, &support.context, 1, &allocator);
    rclc_executor_add_timer(&executor, &timer);

    rclc_subscription_init_default(
        &drive_sub, &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32MultiArray),
        "drive"); // TODO: can I just get the type or do I need the sequence
                  // type
    gpio_put(LED_PIN, 1);

    msg.data = 0;
    drive.data.capacity = 2;
    drive.data.size = 2;
    drive.data.data = malloc(2 * sizeof(float));

    rclc_executor_add_subscription(&executor, &drive_sub, &drive,
                                   &drive_callback, ON_NEW_DATA);

    while (true)
    {
        rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
    }

    free(drive.data.data);

    return 0;
}
