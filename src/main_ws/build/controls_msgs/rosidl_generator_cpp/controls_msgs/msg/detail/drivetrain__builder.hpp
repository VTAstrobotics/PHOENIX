// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controls_msgs:msg/Drivetrain.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__DRIVETRAIN__BUILDER_HPP_
#define CONTROLS_MSGS__MSG__DETAIL__DRIVETRAIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controls_msgs/msg/detail/drivetrain__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controls_msgs
{

namespace msg
{

namespace builder
{

class Init_Drivetrain_motors
{
public:
  Init_Drivetrain_motors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controls_msgs::msg::Drivetrain motors(::controls_msgs::msg::Drivetrain::_motors_type arg)
  {
    msg_.motors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controls_msgs::msg::Drivetrain msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controls_msgs::msg::Drivetrain>()
{
  return controls_msgs::msg::builder::Init_Drivetrain_motors();
}

}  // namespace controls_msgs

#endif  // CONTROLS_MSGS__MSG__DETAIL__DRIVETRAIN__BUILDER_HPP_
