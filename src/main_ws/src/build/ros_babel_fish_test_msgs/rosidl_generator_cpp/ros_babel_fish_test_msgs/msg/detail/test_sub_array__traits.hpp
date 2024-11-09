// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_babel_fish_test_msgs:msg/TestSubArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__TRAITS_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'times'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ros_babel_fish_test_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestSubArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: ints
  {
    if (msg.ints.size() == 0) {
      out << "ints: []";
    } else {
      out << "ints: [";
      size_t pending_items = msg.ints.size();
      for (auto item : msg.ints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: strings
  {
    if (msg.strings.size() == 0) {
      out << "strings: []";
    } else {
      out << "strings: [";
      size_t pending_items = msg.strings.size();
      for (auto item : msg.strings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: times
  {
    if (msg.times.size() == 0) {
      out << "times: []";
    } else {
      out << "times: [";
      size_t pending_items = msg.times.size();
      for (auto item : msg.times) {
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
  const TestSubArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ints.size() == 0) {
      out << "ints: []\n";
    } else {
      out << "ints:\n";
      for (auto item : msg.ints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: strings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.strings.size() == 0) {
      out << "strings: []\n";
    } else {
      out << "strings:\n";
      for (auto item : msg.strings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.times.size() == 0) {
      out << "times: []\n";
    } else {
      out << "times:\n";
      for (auto item : msg.times) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestSubArray & msg, bool use_flow_style = false)
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
  const ros_babel_fish_test_msgs::msg::TestSubArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_babel_fish_test_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_babel_fish_test_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_babel_fish_test_msgs::msg::TestSubArray & msg)
{
  return ros_babel_fish_test_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_babel_fish_test_msgs::msg::TestSubArray>()
{
  return "ros_babel_fish_test_msgs::msg::TestSubArray";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::msg::TestSubArray>()
{
  return "ros_babel_fish_test_msgs/msg/TestSubArray";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::msg::TestSubArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::msg::TestSubArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_babel_fish_test_msgs::msg::TestSubArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__TRAITS_HPP_
