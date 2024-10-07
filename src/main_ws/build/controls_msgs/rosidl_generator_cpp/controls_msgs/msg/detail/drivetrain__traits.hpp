// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controls_msgs:msg/Drivetrain.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__DRIVETRAIN__TRAITS_HPP_
#define CONTROLS_MSGS__MSG__DETAIL__DRIVETRAIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controls_msgs/msg/detail/drivetrain__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controls_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Drivetrain & msg,
  std::ostream & out)
{
  out << "{";
  // member: motors
  {
    if (msg.motors.size() == 0) {
      out << "motors: []";
    } else {
      out << "motors: [";
      size_t pending_items = msg.motors.size();
      for (auto item : msg.motors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Drivetrain & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motors.size() == 0) {
      out << "motors: []\n";
    } else {
      out << "motors:\n";
      for (auto item : msg.motors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Drivetrain & msg, bool use_flow_style = false)
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
  const controls_msgs::msg::Drivetrain & msg,
  std::ostream & out, size_t indentation = 0)
{
  controls_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controls_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const controls_msgs::msg::Drivetrain & msg)
{
  return controls_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<controls_msgs::msg::Drivetrain>()
{
  return "controls_msgs::msg::Drivetrain";
}

template<>
inline const char * name<controls_msgs::msg::Drivetrain>()
{
  return "controls_msgs/msg/Drivetrain";
}

template<>
struct has_fixed_size<controls_msgs::msg::Drivetrain>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controls_msgs::msg::Drivetrain>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controls_msgs::msg::Drivetrain>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLS_MSGS__MSG__DETAIL__DRIVETRAIN__TRAITS_HPP_
