// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_babel_fish_test_msgs:msg/TestMessage.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_MESSAGE__TRAITS_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_babel_fish_test_msgs/msg/detail/test_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 't'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'd'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'point_arr'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace ros_babel_fish_test_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: ui8
  {
    out << "ui8: ";
    rosidl_generator_traits::value_to_yaml(msg.ui8, out);
    out << ", ";
  }

  // member: ui16
  {
    out << "ui16: ";
    rosidl_generator_traits::value_to_yaml(msg.ui16, out);
    out << ", ";
  }

  // member: ui32
  {
    out << "ui32: ";
    rosidl_generator_traits::value_to_yaml(msg.ui32, out);
    out << ", ";
  }

  // member: ui64
  {
    out << "ui64: ";
    rosidl_generator_traits::value_to_yaml(msg.ui64, out);
    out << ", ";
  }

  // member: i8
  {
    out << "i8: ";
    rosidl_generator_traits::value_to_yaml(msg.i8, out);
    out << ", ";
  }

  // member: i16
  {
    out << "i16: ";
    rosidl_generator_traits::value_to_yaml(msg.i16, out);
    out << ", ";
  }

  // member: i32
  {
    out << "i32: ";
    rosidl_generator_traits::value_to_yaml(msg.i32, out);
    out << ", ";
  }

  // member: i64
  {
    out << "i64: ";
    rosidl_generator_traits::value_to_yaml(msg.i64, out);
    out << ", ";
  }

  // member: f32
  {
    out << "f32: ";
    rosidl_generator_traits::value_to_yaml(msg.f32, out);
    out << ", ";
  }

  // member: f64
  {
    out << "f64: ";
    rosidl_generator_traits::value_to_yaml(msg.f64, out);
    out << ", ";
  }

  // member: str
  {
    out << "str: ";
    rosidl_generator_traits::value_to_yaml(msg.str, out);
    out << ", ";
  }

  // member: bounded_str
  {
    out << "bounded_str: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_str, out);
    out << ", ";
  }

  // member: t
  {
    out << "t: ";
    to_flow_style_yaml(msg.t, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    to_flow_style_yaml(msg.d, out);
    out << ", ";
  }

  // member: point_arr
  {
    if (msg.point_arr.size() == 0) {
      out << "point_arr: []";
    } else {
      out << "point_arr: [";
      size_t pending_items = msg.point_arr.size();
      for (auto item : msg.point_arr) {
        to_flow_style_yaml(item, out);
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
  const TestMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: ui8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ui8: ";
    rosidl_generator_traits::value_to_yaml(msg.ui8, out);
    out << "\n";
  }

  // member: ui16
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ui16: ";
    rosidl_generator_traits::value_to_yaml(msg.ui16, out);
    out << "\n";
  }

  // member: ui32
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ui32: ";
    rosidl_generator_traits::value_to_yaml(msg.ui32, out);
    out << "\n";
  }

  // member: ui64
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ui64: ";
    rosidl_generator_traits::value_to_yaml(msg.ui64, out);
    out << "\n";
  }

  // member: i8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i8: ";
    rosidl_generator_traits::value_to_yaml(msg.i8, out);
    out << "\n";
  }

  // member: i16
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i16: ";
    rosidl_generator_traits::value_to_yaml(msg.i16, out);
    out << "\n";
  }

  // member: i32
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i32: ";
    rosidl_generator_traits::value_to_yaml(msg.i32, out);
    out << "\n";
  }

  // member: i64
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i64: ";
    rosidl_generator_traits::value_to_yaml(msg.i64, out);
    out << "\n";
  }

  // member: f32
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f32: ";
    rosidl_generator_traits::value_to_yaml(msg.f32, out);
    out << "\n";
  }

  // member: f64
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f64: ";
    rosidl_generator_traits::value_to_yaml(msg.f64, out);
    out << "\n";
  }

  // member: str
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "str: ";
    rosidl_generator_traits::value_to_yaml(msg.str, out);
    out << "\n";
  }

  // member: bounded_str
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounded_str: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_str, out);
    out << "\n";
  }

  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t:\n";
    to_block_style_yaml(msg.t, out, indentation + 2);
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d:\n";
    to_block_style_yaml(msg.d, out, indentation + 2);
  }

  // member: point_arr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.point_arr.size() == 0) {
      out << "point_arr: []\n";
    } else {
      out << "point_arr:\n";
      for (auto item : msg.point_arr) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestMessage & msg, bool use_flow_style = false)
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

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_babel_fish_test_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_babel_fish_test_msgs::msg::TestMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_babel_fish_test_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_babel_fish_test_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_babel_fish_test_msgs::msg::TestMessage & msg)
{
  return ros_babel_fish_test_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_babel_fish_test_msgs::msg::TestMessage>()
{
  return "ros_babel_fish_test_msgs::msg::TestMessage";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::msg::TestMessage>()
{
  return "ros_babel_fish_test_msgs/msg/TestMessage";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::msg::TestMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::msg::TestMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_babel_fish_test_msgs::msg::TestMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_MESSAGE__TRAITS_HPP_
