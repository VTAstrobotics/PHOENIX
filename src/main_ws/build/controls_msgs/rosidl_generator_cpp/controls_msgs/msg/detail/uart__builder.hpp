// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controls_msgs:msg/Uart.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__UART__BUILDER_HPP_
#define CONTROLS_MSGS__MSG__DETAIL__UART__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controls_msgs/msg/detail/uart__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controls_msgs
{

namespace msg
{

namespace builder
{

class Init_Uart_msg
{
public:
  Init_Uart_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controls_msgs::msg::Uart msg(::controls_msgs::msg::Uart::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controls_msgs::msg::Uart msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controls_msgs::msg::Uart>()
{
  return controls_msgs::msg::builder::Init_Uart_msg();
}

}  // namespace controls_msgs

#endif  // CONTROLS_MSGS__MSG__DETAIL__UART__BUILDER_HPP_
