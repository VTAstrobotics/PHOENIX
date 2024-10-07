// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controls_msgs:msg/Dig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controls_msgs/msg/detail/dig__rosidl_typesupport_introspection_c.h"
#include "controls_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controls_msgs/msg/detail/dig__functions.h"
#include "controls_msgs/msg/detail/dig__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void controls_msgs__msg__Dig__rosidl_typesupport_introspection_c__Dig_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controls_msgs__msg__Dig__init(message_memory);
}

void controls_msgs__msg__Dig__rosidl_typesupport_introspection_c__Dig_fini_function(void * message_memory)
{
  controls_msgs__msg__Dig__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember controls_msgs__msg__Dig__rosidl_typesupport_introspection_c__Dig_message_member_array[2] = {
  {
    "motors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controls_msgs__msg__Dig, motors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lins",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controls_msgs__msg__Dig, lins),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controls_msgs__msg__Dig__rosidl_typesupport_introspection_c__Dig_message_members = {
  "controls_msgs__msg",  // message namespace
  "Dig",  // message name
  2,  // number of fields
  sizeof(controls_msgs__msg__Dig),
  controls_msgs__msg__Dig__rosidl_typesupport_introspection_c__Dig_message_member_array,  // message members
  controls_msgs__msg__Dig__rosidl_typesupport_introspection_c__Dig_init_function,  // function to initialize message memory (memory has to be allocated)
  controls_msgs__msg__Dig__rosidl_typesupport_introspection_c__Dig_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controls_msgs__msg__Dig__rosidl_typesupport_introspection_c__Dig_message_type_support_handle = {
  0,
  &controls_msgs__msg__Dig__rosidl_typesupport_introspection_c__Dig_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controls_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controls_msgs, msg, Dig)() {
  if (!controls_msgs__msg__Dig__rosidl_typesupport_introspection_c__Dig_message_type_support_handle.typesupport_identifier) {
    controls_msgs__msg__Dig__rosidl_typesupport_introspection_c__Dig_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controls_msgs__msg__Dig__rosidl_typesupport_introspection_c__Dig_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
