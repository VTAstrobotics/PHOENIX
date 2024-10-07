// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controls_msgs:msg/Uart.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__UART__TRAITS_HPP_
#define CONTROLS_MSGS__MSG__DETAIL__UART__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controls_msgs/msg/detail/uart__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controls_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Uart & msg,
  std::ostream & out)
{
  out << "{";
  // member: msg
  {
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Uart & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Uart & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace controls_msgs

namespace rosidl_generator_traits
{

[[deprecated("use controls_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controls_msgs::msg::Uart & msg,
  std::ostream & out, size_t indentation = 0)
{
  controls_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controls_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const controls_msgs::msg::Uart & msg)
{
  return controls_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<controls_msgs::msg::Uart>()
{
  return "controls_msgs::msg::Uart";
}

template<>
inline const char * name<controls_msgs::msg::Uart>()
{
  return "controls_msgs/msg/Uart";
}

template<>
struct has_fixed_size<controls_msgs::msg::Uart>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controls_msgs::msg::Uart>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controls_msgs::msg::Uart>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLS_MSGS__MSG__DETAIL__UART__TRAITS_HPP_
