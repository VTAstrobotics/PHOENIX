// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_babel_fish_test_msgs:msg/TestSubArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__rosidl_typesupport_introspection_c.h"
#include "ros_babel_fish_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__functions.h"
#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__struct.h"


// Include directives for member types
// Member `ints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `strings`
#include "rosidl_runtime_c/string_functions.h"
// Member `times`
#include "builtin_interfaces/msg/time.h"
// Member `times`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_babel_fish_test_msgs__msg__TestSubArray__init(message_memory);
}

void ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_fini_function(void * message_memory)
{
  ros_babel_fish_test_msgs__msg__TestSubArray__fini(message_memory);
}

size_t ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__size_function__TestSubArray__ints(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_const_function__TestSubArray__ints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_function__TestSubArray__ints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__fetch_function__TestSubArray__ints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_const_function__TestSubArray__ints(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__assign_function__TestSubArray__ints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_function__TestSubArray__ints(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__resize_function__TestSubArray__ints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__size_function__TestSubArray__strings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_const_function__TestSubArray__strings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_function__TestSubArray__strings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__fetch_function__TestSubArray__strings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_const_function__TestSubArray__strings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__assign_function__TestSubArray__strings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_function__TestSubArray__strings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__resize_function__TestSubArray__strings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__size_function__TestSubArray__times(
  const void * untyped_member)
{
  (void)untyped_member;
  return 42;
}

const void * ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_const_function__TestSubArray__times(
  const void * untyped_member, size_t index)
{
  const builtin_interfaces__msg__Time * member =
    (const builtin_interfaces__msg__Time *)(untyped_member);
  return &member[index];
}

void * ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_function__TestSubArray__times(
  void * untyped_member, size_t index)
{
  builtin_interfaces__msg__Time * member =
    (builtin_interfaces__msg__Time *)(untyped_member);
  return &member[index];
}

void ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__fetch_function__TestSubArray__times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const builtin_interfaces__msg__Time * item =
    ((const builtin_interfaces__msg__Time *)
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_const_function__TestSubArray__times(untyped_member, index));
  builtin_interfaces__msg__Time * value =
    (builtin_interfaces__msg__Time *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__assign_function__TestSubArray__times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  builtin_interfaces__msg__Time * item =
    ((builtin_interfaces__msg__Time *)
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_function__TestSubArray__times(untyped_member, index));
  const builtin_interfaces__msg__Time * value =
    (const builtin_interfaces__msg__Time *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_message_member_array[3] = {
  {
    "ints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestSubArray, ints),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__size_function__TestSubArray__ints,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_const_function__TestSubArray__ints,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_function__TestSubArray__ints,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__fetch_function__TestSubArray__ints,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__assign_function__TestSubArray__ints,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__resize_function__TestSubArray__ints  // resize(index) function pointer
  },
  {
    "strings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    10,  // array size
    true,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestSubArray, strings),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__size_function__TestSubArray__strings,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_const_function__TestSubArray__strings,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_function__TestSubArray__strings,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__fetch_function__TestSubArray__strings,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__assign_function__TestSubArray__strings,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__resize_function__TestSubArray__strings  // resize(index) function pointer
  },
  {
    "times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    42,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestSubArray, times),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__size_function__TestSubArray__times,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_const_function__TestSubArray__times,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__get_function__TestSubArray__times,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__fetch_function__TestSubArray__times,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__assign_function__TestSubArray__times,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_message_members = {
  "ros_babel_fish_test_msgs__msg",  // message namespace
  "TestSubArray",  // message name
  3,  // number of fields
  sizeof(ros_babel_fish_test_msgs__msg__TestSubArray),
  ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_message_member_array,  // message members
  ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_message_type_support_handle = {
  0,
  &ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_babel_fish_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_babel_fish_test_msgs, msg, TestSubArray)() {
  ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_message_type_support_handle.typesupport_identifier) {
    ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_babel_fish_test_msgs__msg__TestSubArray__rosidl_typesupport_introspection_c__TestSubArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
