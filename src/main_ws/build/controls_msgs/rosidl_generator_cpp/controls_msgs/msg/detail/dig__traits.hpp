// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controls_msgs:msg/Dig.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__DIG__TRAITS_HPP_
#define CONTROLS_MSGS__MSG__DETAIL__DIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controls_msgs/msg/detail/dig__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controls_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Dig & msg,
  std::ostream & out)
{
  out << "{";
  // member: motors
  {
    out << "motors: ";
    rosidl_generator_traits::value_to_yaml(msg.motors, out);
    out << ", ";
  }

  // member: lins
  {
    out << "lins: ";
    rosidl_generator_traits::value_to_yaml(msg.lins, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motors: ";
    rosidl_generator_traits::value_to_yaml(msg.motors, out);
    out << "\n";
  }

  // member: lins
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lins: ";
    rosidl_generator_traits::value_to_yaml(msg.lins, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dig & msg, bool use_flow_style = false)
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
  const controls_msgs::msg::Dig & msg,
  std::ostream & out, size_t indentation = 0)
{
  controls_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controls_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const controls_msgs::msg::Dig & msg)
{
  return controls_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<controls_msgs::msg::Dig>()
{
  return "controls_msgs::msg::Dig";
}

template<>
inline const char * name<controls_msgs::msg::Dig>()
{
  return "controls_msgs/msg/Dig";
}

template<>
struct has_fixed_size<controls_msgs::msg::Dig>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controls_msgs::msg::Dig>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controls_msgs::msg::Dig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLS_MSGS__MSG__DETAIL__DIG__TRAITS_HPP_
