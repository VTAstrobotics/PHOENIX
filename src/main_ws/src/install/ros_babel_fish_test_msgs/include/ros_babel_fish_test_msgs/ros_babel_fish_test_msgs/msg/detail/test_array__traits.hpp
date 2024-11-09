// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_babel_fish_test_msgs:msg/TestArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__TRAITS_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_babel_fish_test_msgs/msg/detail/test_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'times'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'durations'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'subarrays_fixed'
// Member 'subarrays'
#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__traits.hpp"

namespace ros_babel_fish_test_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: bools
  {
    if (msg.bools.size() == 0) {
      out << "bools: []";
    } else {
      out << "bools: [";
      size_t pending_items = msg.bools.size();
      for (auto item : msg.bools) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint8s
  {
    if (msg.uint8s.size() == 0) {
      out << "uint8s: []";
    } else {
      out << "uint8s: [";
      size_t pending_items = msg.uint8s.size();
      for (auto item : msg.uint8s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint16s
  {
    if (msg.uint16s.size() == 0) {
      out << "uint16s: []";
    } else {
      out << "uint16s: [";
      size_t pending_items = msg.uint16s.size();
      for (auto item : msg.uint16s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint32s
  {
    if (msg.uint32s.size() == 0) {
      out << "uint32s: []";
    } else {
      out << "uint32s: [";
      size_t pending_items = msg.uint32s.size();
      for (auto item : msg.uint32s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint64s
  {
    if (msg.uint64s.size() == 0) {
      out << "uint64s: []";
    } else {
      out << "uint64s: [";
      size_t pending_items = msg.uint64s.size();
      for (auto item : msg.uint64s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int8s
  {
    if (msg.int8s.size() == 0) {
      out << "int8s: []";
    } else {
      out << "int8s: [";
      size_t pending_items = msg.int8s.size();
      for (auto item : msg.int8s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int16s
  {
    if (msg.int16s.size() == 0) {
      out << "int16s: []";
    } else {
      out << "int16s: [";
      size_t pending_items = msg.int16s.size();
      for (auto item : msg.int16s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int32s
  {
    if (msg.int32s.size() == 0) {
      out << "int32s: []";
    } else {
      out << "int32s: [";
      size_t pending_items = msg.int32s.size();
      for (auto item : msg.int32s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int64s
  {
    if (msg.int64s.size() == 0) {
      out << "int64s: []";
    } else {
      out << "int64s: [";
      size_t pending_items = msg.int64s.size();
      for (auto item : msg.int64s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: float32s
  {
    if (msg.float32s.size() == 0) {
      out << "float32s: []";
    } else {
      out << "float32s: [";
      size_t pending_items = msg.float32s.size();
      for (auto item : msg.float32s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: float64s
  {
    if (msg.float64s.size() == 0) {
      out << "float64s: []";
    } else {
      out << "float64s: [";
      size_t pending_items = msg.float64s.size();
      for (auto item : msg.float64s) {
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
    out << ", ";
  }

  // member: durations
  {
    if (msg.durations.size() == 0) {
      out << "durations: []";
    } else {
      out << "durations: [";
      size_t pending_items = msg.durations.size();
      for (auto item : msg.durations) {
        to_flow_style_yaml(item, out);
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

  // member: subarrays_fixed
  {
    if (msg.subarrays_fixed.size() == 0) {
      out << "subarrays_fixed: []";
    } else {
      out << "subarrays_fixed: [";
      size_t pending_items = msg.subarrays_fixed.size();
      for (auto item : msg.subarrays_fixed) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: subarrays
  {
    if (msg.subarrays.size() == 0) {
      out << "subarrays: []";
    } else {
      out << "subarrays: [";
      size_t pending_items = msg.subarrays.size();
      for (auto item : msg.subarrays) {
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
  const TestArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bools
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bools.size() == 0) {
      out << "bools: []\n";
    } else {
      out << "bools:\n";
      for (auto item : msg.bools) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint8s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint8s.size() == 0) {
      out << "uint8s: []\n";
    } else {
      out << "uint8s:\n";
      for (auto item : msg.uint8s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint16s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint16s.size() == 0) {
      out << "uint16s: []\n";
    } else {
      out << "uint16s:\n";
      for (auto item : msg.uint16s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint32s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint32s.size() == 0) {
      out << "uint32s: []\n";
    } else {
      out << "uint32s:\n";
      for (auto item : msg.uint32s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint64s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint64s.size() == 0) {
      out << "uint64s: []\n";
    } else {
      out << "uint64s:\n";
      for (auto item : msg.uint64s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int8s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int8s.size() == 0) {
      out << "int8s: []\n";
    } else {
      out << "int8s:\n";
      for (auto item : msg.int8s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int16s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int16s.size() == 0) {
      out << "int16s: []\n";
    } else {
      out << "int16s:\n";
      for (auto item : msg.int16s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int32s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int32s.size() == 0) {
      out << "int32s: []\n";
    } else {
      out << "int32s:\n";
      for (auto item : msg.int32s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int64s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int64s.size() == 0) {
      out << "int64s: []\n";
    } else {
      out << "int64s:\n";
      for (auto item : msg.int64s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float32s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float32s.size() == 0) {
      out << "float32s: []\n";
    } else {
      out << "float32s:\n";
      for (auto item : msg.float32s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float64s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float64s.size() == 0) {
      out << "float64s: []\n";
    } else {
      out << "float64s:\n";
      for (auto item : msg.float64s) {
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

  // member: durations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.durations.size() == 0) {
      out << "durations: []\n";
    } else {
      out << "durations:\n";
      for (auto item : msg.durations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
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

  // member: subarrays_fixed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.subarrays_fixed.size() == 0) {
      out << "subarrays_fixed: []\n";
    } else {
      out << "subarrays_fixed:\n";
      for (auto item : msg.subarrays_fixed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: subarrays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.subarrays.size() == 0) {
      out << "subarrays: []\n";
    } else {
      out << "subarrays:\n";
      for (auto item : msg.subarrays) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestArray & msg, bool use_flow_style = false)
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
  const ros_babel_fish_test_msgs::msg::TestArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_babel_fish_test_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_babel_fish_test_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_babel_fish_test_msgs::msg::TestArray & msg)
{
  return ros_babel_fish_test_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_babel_fish_test_msgs::msg::TestArray>()
{
  return "ros_babel_fish_test_msgs::msg::TestArray";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::msg::TestArray>()
{
  return "ros_babel_fish_test_msgs/msg/TestArray";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::msg::TestArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::msg::TestArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_babel_fish_test_msgs::msg::TestArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__TRAITS_HPP_
