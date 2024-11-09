// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_babel_fish_test_msgs:msg/TestArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__STRUCT_H_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bools'
// Member 'uint8s'
// Member 'uint32s'
// Member 'uint64s'
// Member 'int8s'
// Member 'int16s'
// Member 'int32s'
// Member 'float32s'
// Member 'float64s'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'times'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'durations'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'strings'
#include "rosidl_runtime_c/string.h"
// Member 'subarrays_fixed'
// Member 'subarrays'
#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__struct.h"

// constants for array fields with an upper bound
// float64s
enum
{
  ros_babel_fish_test_msgs__msg__TestArray__float64s__MAX_SIZE = 16
};

/// Struct defined in msg/TestArray in the package ros_babel_fish_test_msgs.
typedef struct ros_babel_fish_test_msgs__msg__TestArray
{
  rosidl_runtime_c__boolean__Sequence bools;
  rosidl_runtime_c__uint8__Sequence uint8s;
  uint16_t uint16s[32];
  rosidl_runtime_c__uint32__Sequence uint32s;
  rosidl_runtime_c__uint64__Sequence uint64s;
  rosidl_runtime_c__int8__Sequence int8s;
  rosidl_runtime_c__int16__Sequence int16s;
  rosidl_runtime_c__int32__Sequence int32s;
  /// Comment
  int64_t int64s[32];
  rosidl_runtime_c__float__Sequence float32s;
  /// Bounded array
  rosidl_runtime_c__double__Sequence float64s;
  builtin_interfaces__msg__Time__Sequence times;
  builtin_interfaces__msg__Duration durations[12];
  rosidl_runtime_c__String__Sequence strings;
  ros_babel_fish_test_msgs__msg__TestSubArray subarrays_fixed[10];
  ros_babel_fish_test_msgs__msg__TestSubArray__Sequence subarrays;
} ros_babel_fish_test_msgs__msg__TestArray;

// Struct for a sequence of ros_babel_fish_test_msgs__msg__TestArray.
typedef struct ros_babel_fish_test_msgs__msg__TestArray__Sequence
{
  ros_babel_fish_test_msgs__msg__TestArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_babel_fish_test_msgs__msg__TestArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__STRUCT_H_
