// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controls_msgs:msg/Dig.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__DIG__BUILDER_HPP_
#define CONTROLS_MSGS__MSG__DETAIL__DIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controls_msgs/msg/detail/dig__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controls_msgs
{

namespace msg
{

namespace builder
{

class Init_Dig_lins
{
public:
  explicit Init_Dig_lins(::controls_msgs::msg::Dig & msg)
  : msg_(msg)
  {}
  ::controls_msgs::msg::Dig lins(::controls_msgs::msg::Dig::_lins_type arg)
  {
    msg_.lins = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controls_msgs::msg::Dig msg_;
};

class Init_Dig_motors
{
public:
  Init_Dig_motors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dig_lins motors(::controls_msgs::msg::Dig::_motors_type arg)
  {
    msg_.motors = std::move(arg);
    return Init_Dig_lins(msg_);
  }

private:
  ::controls_msgs::msg::Dig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controls_msgs::msg::Dig>()
{
  return controls_msgs::msg::builder::Init_Dig_motors();
}

}  // namespace controls_msgs

#endif  // CONTROLS_MSGS__MSG__DETAIL__DIG__BUILDER_HPP_
