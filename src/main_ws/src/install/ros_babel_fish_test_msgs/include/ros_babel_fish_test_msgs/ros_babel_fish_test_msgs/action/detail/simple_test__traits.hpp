// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_babel_fish_test_msgs:action/SimpleTest.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__TRAITS_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_babel_fish_test_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SimpleTest_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimpleTest_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimpleTest_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_babel_fish_test_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_babel_fish_test_msgs::action::SimpleTest_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_babel_fish_test_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_babel_fish_test_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_babel_fish_test_msgs::action::SimpleTest_Goal & msg)
{
  return ros_babel_fish_test_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_babel_fish_test_msgs::action::SimpleTest_Goal>()
{
  return "ros_babel_fish_test_msgs::action::SimpleTest_Goal";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::action::SimpleTest_Goal>()
{
  return "ros_babel_fish_test_msgs/action/SimpleTest_Goal";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_babel_fish_test_msgs::action::SimpleTest_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_babel_fish_test_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SimpleTest_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: final_value
  {
    out << "final_value: ";
    rosidl_generator_traits::value_to_yaml(msg.final_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimpleTest_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: final_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_value: ";
    rosidl_generator_traits::value_to_yaml(msg.final_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimpleTest_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_babel_fish_test_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_babel_fish_test_msgs::action::SimpleTest_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_babel_fish_test_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_babel_fish_test_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_babel_fish_test_msgs::action::SimpleTest_Result & msg)
{
  return ros_babel_fish_test_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_babel_fish_test_msgs::action::SimpleTest_Result>()
{
  return "ros_babel_fish_test_msgs::action::SimpleTest_Result";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::action::SimpleTest_Result>()
{
  return "ros_babel_fish_test_msgs/action/SimpleTest_Result";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_babel_fish_test_msgs::action::SimpleTest_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_babel_fish_test_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SimpleTest_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_value
  {
    out << "current_value: ";
    rosidl_generator_traits::value_to_yaml(msg.current_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimpleTest_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_value: ";
    rosidl_generator_traits::value_to_yaml(msg.current_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimpleTest_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_babel_fish_test_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_babel_fish_test_msgs::action::SimpleTest_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_babel_fish_test_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_babel_fish_test_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_babel_fish_test_msgs::action::SimpleTest_Feedback & msg)
{
  return ros_babel_fish_test_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_babel_fish_test_msgs::action::SimpleTest_Feedback>()
{
  return "ros_babel_fish_test_msgs::action::SimpleTest_Feedback";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::action::SimpleTest_Feedback>()
{
  return "ros_babel_fish_test_msgs/action/SimpleTest_Feedback";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_babel_fish_test_msgs::action::SimpleTest_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ros_babel_fish_test_msgs/action/detail/simple_test__traits.hpp"

namespace ros_babel_fish_test_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SimpleTest_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimpleTest_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimpleTest_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_babel_fish_test_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_babel_fish_test_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_babel_fish_test_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request & msg)
{
  return ros_babel_fish_test_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request>()
{
  return "ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request>()
{
  return "ros_babel_fish_test_msgs/action/SimpleTest_SendGoal_Request";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ros_babel_fish_test_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SimpleTest_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimpleTest_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimpleTest_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_babel_fish_test_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_babel_fish_test_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_babel_fish_test_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response & msg)
{
  return ros_babel_fish_test_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response>()
{
  return "ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response>()
{
  return "ros_babel_fish_test_msgs/action/SimpleTest_SendGoal_Response";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal>()
{
  return "ros_babel_fish_test_msgs::action::SimpleTest_SendGoal";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal>()
{
  return "ros_babel_fish_test_msgs/action/SimpleTest_SendGoal";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request>::value &&
    has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request>::value &&
    has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ros_babel_fish_test_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SimpleTest_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimpleTest_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimpleTest_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_babel_fish_test_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_babel_fish_test_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_babel_fish_test_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request & msg)
{
  return ros_babel_fish_test_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request>()
{
  return "ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request>()
{
  return "ros_babel_fish_test_msgs/action/SimpleTest_GetResult_Request";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__traits.hpp"

namespace ros_babel_fish_test_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SimpleTest_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimpleTest_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimpleTest_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_babel_fish_test_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_babel_fish_test_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_babel_fish_test_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response & msg)
{
  return ros_babel_fish_test_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response>()
{
  return "ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response>()
{
  return "ros_babel_fish_test_msgs/action/SimpleTest_GetResult_Response";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_Result>::value> {};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_Result>::value> {};

template<>
struct is_message<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_babel_fish_test_msgs::action::SimpleTest_GetResult>()
{
  return "ros_babel_fish_test_msgs::action::SimpleTest_GetResult";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::action::SimpleTest_GetResult>()
{
  return "ros_babel_fish_test_msgs/action/SimpleTest_GetResult";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request>::value &&
    has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request>::value &&
    has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ros_babel_fish_test_msgs::action::SimpleTest_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__traits.hpp"

namespace ros_babel_fish_test_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SimpleTest_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimpleTest_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimpleTest_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_babel_fish_test_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_babel_fish_test_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_babel_fish_test_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage & msg)
{
  return ros_babel_fish_test_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage>()
{
  return "ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage";
}

template<>
inline const char * name<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage>()
{
  return "ros_babel_fish_test_msgs/action/SimpleTest_FeedbackMessage";
}

template<>
struct has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ros_babel_fish_test_msgs::action::SimpleTest_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ros_babel_fish_test_msgs::action::SimpleTest_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ros_babel_fish_test_msgs::action::SimpleTest>
  : std::true_type
{
};

template<>
struct is_action_goal<ros_babel_fish_test_msgs::action::SimpleTest_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ros_babel_fish_test_msgs::action::SimpleTest_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ros_babel_fish_test_msgs::action::SimpleTest_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__TRAITS_HPP_
