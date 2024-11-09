// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_babel_fish_test_msgs:msg/TestMessage.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_MESSAGE__STRUCT_H_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'str'
// Member 'bounded_str'
#include "rosidl_runtime_c/string.h"
// Member 't'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'd'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'point_arr'
#include "geometry_msgs/msg/detail/point__struct.h"

// constants for array fields with an upper bound
// bounded_str
enum
{
  ros_babel_fish_test_msgs__msg__TestMessage__bounded_str__MAX_STRING_SIZE = 12
};

/// Struct defined in msg/TestMessage in the package ros_babel_fish_test_msgs.
typedef struct ros_babel_fish_test_msgs__msg__TestMessage
{
  std_msgs__msg__Header header;
  bool b;
  uint8_t ui8;
  uint16_t ui16;
  uint32_t ui32;
  uint64_t ui64;
  int8_t i8;
  /// With default value
  int16_t i16;
  int32_t i32;
  int64_t i64;
  /// Comment
  float f32;
  /// Also a comment but closer
  double f64;
  /// Two comment signs # and a third
  rosidl_runtime_c__String str;
  rosidl_runtime_c__String bounded_str;
  builtin_interfaces__msg__Time t;
  builtin_interfaces__msg__Duration d;
  /// more comment
  geometry_msgs__msg__Point__Sequence point_arr;
} ros_babel_fish_test_msgs__msg__TestMessage;

// Struct for a sequence of ros_babel_fish_test_msgs__msg__TestMessage.
typedef struct ros_babel_fish_test_msgs__msg__TestMessage__Sequence
{
  ros_babel_fish_test_msgs__msg__TestMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_babel_fish_test_msgs__msg__TestMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_MESSAGE__STRUCT_H_
