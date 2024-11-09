// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_babel_fish_test_msgs:msg/TestSubArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__STRUCT_H_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ints'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'strings'
#include "rosidl_runtime_c/string.h"
// Member 'times'
#include "builtin_interfaces/msg/detail/time__struct.h"

// constants for array fields with an upper bound
// strings
enum
{
  ros_babel_fish_test_msgs__msg__TestSubArray__strings__MAX_SIZE = 10
};

/// Struct defined in msg/TestSubArray in the package ros_babel_fish_test_msgs.
typedef struct ros_babel_fish_test_msgs__msg__TestSubArray
{
  rosidl_runtime_c__int32__Sequence ints;
  rosidl_runtime_c__String__Sequence strings;
  builtin_interfaces__msg__Time times[42];
} ros_babel_fish_test_msgs__msg__TestSubArray;

// Struct for a sequence of ros_babel_fish_test_msgs__msg__TestSubArray.
typedef struct ros_babel_fish_test_msgs__msg__TestSubArray__Sequence
{
  ros_babel_fish_test_msgs__msg__TestSubArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_babel_fish_test_msgs__msg__TestSubArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__STRUCT_H_
