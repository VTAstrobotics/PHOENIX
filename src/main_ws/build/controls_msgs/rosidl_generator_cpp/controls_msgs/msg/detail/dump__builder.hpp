// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controls_msgs:msg/Dump.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__DUMP__BUILDER_HPP_
#define CONTROLS_MSGS__MSG__DETAIL__DUMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controls_msgs/msg/detail/dump__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controls_msgs
{

namespace msg
{

namespace builder
{

class Init_Dump_lins
{
public:
  Init_Dump_lins()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controls_msgs::msg::Dump lins(::controls_msgs::msg::Dump::_lins_type arg)
  {
    msg_.lins = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controls_msgs::msg::Dump msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controls_msgs::msg::Dump>()
{
  return controls_msgs::msg::builder::Init_Dump_lins();
}

}  // namespace controls_msgs

#endif  // CONTROLS_MSGS__MSG__DETAIL__DUMP__BUILDER_HPP_
