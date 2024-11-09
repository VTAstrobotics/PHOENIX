// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_babel_fish_test_msgs:msg/TestArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_babel_fish_test_msgs/msg/detail/test_array__rosidl_typesupport_introspection_c.h"
#include "ros_babel_fish_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_babel_fish_test_msgs/msg/detail/test_array__functions.h"
#include "ros_babel_fish_test_msgs/msg/detail/test_array__struct.h"


// Include directives for member types
// Member `bools`
// Member `uint8s`
// Member `uint32s`
// Member `uint64s`
// Member `int8s`
// Member `int16s`
// Member `int32s`
// Member `float32s`
// Member `float64s`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `times`
#include "builtin_interfaces/msg/time.h"
// Member `times`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `durations`
#include "builtin_interfaces/msg/duration.h"
// Member `durations`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `strings`
#include "rosidl_runtime_c/string_functions.h"
// Member `subarrays_fixed`
// Member `subarrays`
#include "ros_babel_fish_test_msgs/msg/test_sub_array.h"
// Member `subarrays_fixed`
// Member `subarrays`
#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_babel_fish_test_msgs__msg__TestArray__init(message_memory);
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_fini_function(void * message_memory)
{
  ros_babel_fish_test_msgs__msg__TestArray__fini(message_memory);
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__bools(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__bools(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__bools(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__bools(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__bools(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__bools(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__bools(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__bools(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__uint8s(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__uint8s(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__uint8s(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__uint8s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__uint8s(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__uint8s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__uint8s(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__uint8s(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__uint16s(
  const void * untyped_member)
{
  (void)untyped_member;
  return 32;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__uint16s(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__uint16s(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__uint16s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__uint16s(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__uint16s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__uint16s(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__uint32s(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__uint32s(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__uint32s(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__uint32s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__uint32s(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__uint32s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__uint32s(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__uint32s(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__uint64s(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__uint64s(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__uint64s(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__uint64s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__uint64s(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__uint64s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__uint64s(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__uint64s(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__int8s(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__int8s(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__int8s(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__int8s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__int8s(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__int8s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__int8s(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__int8s(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__int16s(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__int16s(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__int16s(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__int16s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__int16s(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__int16s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__int16s(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__int16s(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__int32s(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__int32s(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__int32s(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__int32s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__int32s(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__int32s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__int32s(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__int32s(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__int64s(
  const void * untyped_member)
{
  (void)untyped_member;
  return 32;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__int64s(
  const void * untyped_member, size_t index)
{
  const int64_t * member =
    (const int64_t *)(untyped_member);
  return &member[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__int64s(
  void * untyped_member, size_t index)
{
  int64_t * member =
    (int64_t *)(untyped_member);
  return &member[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__int64s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__int64s(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__int64s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__int64s(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__float32s(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__float32s(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__float32s(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__float32s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__float32s(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__float32s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__float32s(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__float32s(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__float64s(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__float64s(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__float64s(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__float64s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__float64s(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__float64s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__float64s(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__float64s(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__times(
  const void * untyped_member)
{
  const builtin_interfaces__msg__Time__Sequence * member =
    (const builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__times(
  const void * untyped_member, size_t index)
{
  const builtin_interfaces__msg__Time__Sequence * member =
    (const builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__times(
  void * untyped_member, size_t index)
{
  builtin_interfaces__msg__Time__Sequence * member =
    (builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const builtin_interfaces__msg__Time * item =
    ((const builtin_interfaces__msg__Time *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__times(untyped_member, index));
  builtin_interfaces__msg__Time * value =
    (builtin_interfaces__msg__Time *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  builtin_interfaces__msg__Time * item =
    ((builtin_interfaces__msg__Time *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__times(untyped_member, index));
  const builtin_interfaces__msg__Time * value =
    (const builtin_interfaces__msg__Time *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__times(
  void * untyped_member, size_t size)
{
  builtin_interfaces__msg__Time__Sequence * member =
    (builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  builtin_interfaces__msg__Time__Sequence__fini(member);
  return builtin_interfaces__msg__Time__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__durations(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__durations(
  const void * untyped_member, size_t index)
{
  const builtin_interfaces__msg__Duration * member =
    (const builtin_interfaces__msg__Duration *)(untyped_member);
  return &member[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__durations(
  void * untyped_member, size_t index)
{
  builtin_interfaces__msg__Duration * member =
    (builtin_interfaces__msg__Duration *)(untyped_member);
  return &member[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__durations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const builtin_interfaces__msg__Duration * item =
    ((const builtin_interfaces__msg__Duration *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__durations(untyped_member, index));
  builtin_interfaces__msg__Duration * value =
    (builtin_interfaces__msg__Duration *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__durations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  builtin_interfaces__msg__Duration * item =
    ((builtin_interfaces__msg__Duration *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__durations(untyped_member, index));
  const builtin_interfaces__msg__Duration * value =
    (const builtin_interfaces__msg__Duration *)(untyped_value);
  *item = *value;
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__strings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__strings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__strings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__strings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__strings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__strings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__strings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__strings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__subarrays_fixed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 10;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__subarrays_fixed(
  const void * untyped_member, size_t index)
{
  const ros_babel_fish_test_msgs__msg__TestSubArray * member =
    (const ros_babel_fish_test_msgs__msg__TestSubArray *)(untyped_member);
  return &member[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__subarrays_fixed(
  void * untyped_member, size_t index)
{
  ros_babel_fish_test_msgs__msg__TestSubArray * member =
    (ros_babel_fish_test_msgs__msg__TestSubArray *)(untyped_member);
  return &member[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__subarrays_fixed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_babel_fish_test_msgs__msg__TestSubArray * item =
    ((const ros_babel_fish_test_msgs__msg__TestSubArray *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__subarrays_fixed(untyped_member, index));
  ros_babel_fish_test_msgs__msg__TestSubArray * value =
    (ros_babel_fish_test_msgs__msg__TestSubArray *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__subarrays_fixed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_babel_fish_test_msgs__msg__TestSubArray * item =
    ((ros_babel_fish_test_msgs__msg__TestSubArray *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__subarrays_fixed(untyped_member, index));
  const ros_babel_fish_test_msgs__msg__TestSubArray * value =
    (const ros_babel_fish_test_msgs__msg__TestSubArray *)(untyped_value);
  *item = *value;
}

size_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__subarrays(
  const void * untyped_member)
{
  const ros_babel_fish_test_msgs__msg__TestSubArray__Sequence * member =
    (const ros_babel_fish_test_msgs__msg__TestSubArray__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__subarrays(
  const void * untyped_member, size_t index)
{
  const ros_babel_fish_test_msgs__msg__TestSubArray__Sequence * member =
    (const ros_babel_fish_test_msgs__msg__TestSubArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__subarrays(
  void * untyped_member, size_t index)
{
  ros_babel_fish_test_msgs__msg__TestSubArray__Sequence * member =
    (ros_babel_fish_test_msgs__msg__TestSubArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__subarrays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_babel_fish_test_msgs__msg__TestSubArray * item =
    ((const ros_babel_fish_test_msgs__msg__TestSubArray *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__subarrays(untyped_member, index));
  ros_babel_fish_test_msgs__msg__TestSubArray * value =
    (ros_babel_fish_test_msgs__msg__TestSubArray *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__subarrays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_babel_fish_test_msgs__msg__TestSubArray * item =
    ((ros_babel_fish_test_msgs__msg__TestSubArray *)
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__subarrays(untyped_member, index));
  const ros_babel_fish_test_msgs__msg__TestSubArray * value =
    (const ros_babel_fish_test_msgs__msg__TestSubArray *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__subarrays(
  void * untyped_member, size_t size)
{
  ros_babel_fish_test_msgs__msg__TestSubArray__Sequence * member =
    (ros_babel_fish_test_msgs__msg__TestSubArray__Sequence *)(untyped_member);
  ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__fini(member);
  return ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_message_member_array[16] = {
  {
    "bools",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, bools),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__bools,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__bools,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__bools,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__bools,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__bools,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__bools  // resize(index) function pointer
  },
  {
    "uint8s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, uint8s),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__uint8s,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__uint8s,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__uint8s,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__uint8s,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__uint8s,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__uint8s  // resize(index) function pointer
  },
  {
    "uint16s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, uint16s),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__uint16s,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__uint16s,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__uint16s,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__uint16s,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__uint16s,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint32s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, uint32s),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__uint32s,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__uint32s,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__uint32s,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__uint32s,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__uint32s,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__uint32s  // resize(index) function pointer
  },
  {
    "uint64s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, uint64s),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__uint64s,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__uint64s,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__uint64s,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__uint64s,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__uint64s,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__uint64s  // resize(index) function pointer
  },
  {
    "int8s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, int8s),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__int8s,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__int8s,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__int8s,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__int8s,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__int8s,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__int8s  // resize(index) function pointer
  },
  {
    "int16s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, int16s),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__int16s,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__int16s,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__int16s,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__int16s,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__int16s,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__int16s  // resize(index) function pointer
  },
  {
    "int32s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, int32s),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__int32s,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__int32s,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__int32s,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__int32s,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__int32s,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__int32s  // resize(index) function pointer
  },
  {
    "int64s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, int64s),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__int64s,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__int64s,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__int64s,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__int64s,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__int64s,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float32s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, float32s),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__float32s,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__float32s,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__float32s,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__float32s,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__float32s,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__float32s  // resize(index) function pointer
  },
  {
    "float64s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    true,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, float64s),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__float64s,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__float64s,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__float64s,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__float64s,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__float64s,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__float64s  // resize(index) function pointer
  },
  {
    "times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, times),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__times,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__times,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__times,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__times,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__times,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__times  // resize(index) function pointer
  },
  {
    "durations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, durations),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__durations,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__durations,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__durations,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__durations,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__durations,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "strings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, strings),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__strings,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__strings,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__strings,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__strings,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__strings,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__strings  // resize(index) function pointer
  },
  {
    "subarrays_fixed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    10,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, subarrays_fixed),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__subarrays_fixed,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__subarrays_fixed,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__subarrays_fixed,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__subarrays_fixed,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__subarrays_fixed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subarrays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestArray, subarrays),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__size_function__TestArray__subarrays,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_const_function__TestArray__subarrays,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__get_function__TestArray__subarrays,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__fetch_function__TestArray__subarrays,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__assign_function__TestArray__subarrays,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__resize_function__TestArray__subarrays  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_message_members = {
  "ros_babel_fish_test_msgs__msg",  // message namespace
  "TestArray",  // message name
  16,  // number of fields
  sizeof(ros_babel_fish_test_msgs__msg__TestArray),
  ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_message_member_array,  // message members
  ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_message_type_support_handle = {
  0,
  &ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_babel_fish_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_babel_fish_test_msgs, msg, TestArray)() {
  ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_babel_fish_test_msgs, msg, TestSubArray)();
  ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_babel_fish_test_msgs, msg, TestSubArray)();
  if (!ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_message_type_support_handle.typesupport_identifier) {
    ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_babel_fish_test_msgs__msg__TestArray__rosidl_typesupport_introspection_c__TestArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
