// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ros_babel_fish_test_msgs:msg/TestSubArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_babel_fish_test_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ros_babel_fish_test_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_babel_fish_test_msgs
cdr_serialize(
  const ros_babel_fish_test_msgs::msg::TestSubArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_babel_fish_test_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros_babel_fish_test_msgs::msg::TestSubArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_babel_fish_test_msgs
get_serialized_size(
  const ros_babel_fish_test_msgs::msg::TestSubArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_babel_fish_test_msgs
max_serialized_size_TestSubArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros_babel_fish_test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_babel_fish_test_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_babel_fish_test_msgs, msg, TestSubArray)();

#ifdef __cplusplus
}
#endif

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
