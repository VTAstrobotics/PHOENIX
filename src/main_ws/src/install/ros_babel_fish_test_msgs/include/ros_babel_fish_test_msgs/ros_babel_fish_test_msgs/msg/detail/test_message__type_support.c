// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_babel_fish_test_msgs:msg/TestMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_babel_fish_test_msgs/msg/detail/test_message__rosidl_typesupport_introspection_c.h"
#include "ros_babel_fish_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_babel_fish_test_msgs/msg/detail/test_message__functions.h"
#include "ros_babel_fish_test_msgs/msg/detail/test_message__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `str`
// Member `bounded_str`
#include "rosidl_runtime_c/string_functions.h"
// Member `t`
#include "builtin_interfaces/msg/time.h"
// Member `t`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `d`
#include "builtin_interfaces/msg/duration.h"
// Member `d`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `point_arr`
#include "geometry_msgs/msg/point.h"
// Member `point_arr`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_babel_fish_test_msgs__msg__TestMessage__init(message_memory);
}

void ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_fini_function(void * message_memory)
{
  ros_babel_fish_test_msgs__msg__TestMessage__fini(message_memory);
}

size_t ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__size_function__TestMessage__point_arr(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__get_const_function__TestMessage__point_arr(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__get_function__TestMessage__point_arr(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__fetch_function__TestMessage__point_arr(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__get_const_function__TestMessage__point_arr(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__assign_function__TestMessage__point_arr(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__get_function__TestMessage__point_arr(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__resize_function__TestMessage__point_arr(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_message_member_array[17] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ui8",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, ui8),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ui16",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, ui16),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ui32",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, ui32),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ui64",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, ui64),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i8",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, i8),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i16",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, i16),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i32",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, i32),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i64",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, i64),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f32",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, f32),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f64",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, f64),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "str",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, str),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_str",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    12,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, bounded_str),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs__msg__TestMessage, point_arr),  // bytes offset in struct
    NULL,  // default value
    ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__size_function__TestMessage__point_arr,  // size() function pointer
    ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__get_const_function__TestMessage__point_arr,  // get_const(index) function pointer
    ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__get_function__TestMessage__point_arr,  // get(index) function pointer
    ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__fetch_function__TestMessage__point_arr,  // fetch(index, &value) function pointer
    ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__assign_function__TestMessage__point_arr,  // assign(index, value) function pointer
    ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__resize_function__TestMessage__point_arr  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_message_members = {
  "ros_babel_fish_test_msgs__msg",  // message namespace
  "TestMessage",  // message name
  17,  // number of fields
  sizeof(ros_babel_fish_test_msgs__msg__TestMessage),
  ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_message_member_array,  // message members
  ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_message_type_support_handle = {
  0,
  &ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_babel_fish_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_babel_fish_test_msgs, msg, TestMessage)() {
  ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_message_type_support_handle.typesupport_identifier) {
    ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_babel_fish_test_msgs__msg__TestMessage__rosidl_typesupport_introspection_c__TestMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
