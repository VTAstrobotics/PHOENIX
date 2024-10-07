// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controls_msgs:msg/Drivetrain.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controls_msgs/msg/detail/drivetrain__rosidl_typesupport_introspection_c.h"
#include "controls_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controls_msgs/msg/detail/drivetrain__functions.h"
#include "controls_msgs/msg/detail/drivetrain__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__Drivetrain_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controls_msgs__msg__Drivetrain__init(message_memory);
}

void controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__Drivetrain_fini_function(void * message_memory)
{
  controls_msgs__msg__Drivetrain__fini(message_memory);
}

size_t controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__size_function__Drivetrain__motors(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__get_const_function__Drivetrain__motors(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__get_function__Drivetrain__motors(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__fetch_function__Drivetrain__motors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__get_const_function__Drivetrain__motors(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__assign_function__Drivetrain__motors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__get_function__Drivetrain__motors(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__Drivetrain_message_member_array[1] = {
  {
    "motors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(controls_msgs__msg__Drivetrain, motors),  // bytes offset in struct
    NULL,  // default value
    controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__size_function__Drivetrain__motors,  // size() function pointer
    controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__get_const_function__Drivetrain__motors,  // get_const(index) function pointer
    controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__get_function__Drivetrain__motors,  // get(index) function pointer
    controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__fetch_function__Drivetrain__motors,  // fetch(index, &value) function pointer
    controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__assign_function__Drivetrain__motors,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__Drivetrain_message_members = {
  "controls_msgs__msg",  // message namespace
  "Drivetrain",  // message name
  1,  // number of fields
  sizeof(controls_msgs__msg__Drivetrain),
  controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__Drivetrain_message_member_array,  // message members
  controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__Drivetrain_init_function,  // function to initialize message memory (memory has to be allocated)
  controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__Drivetrain_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__Drivetrain_message_type_support_handle = {
  0,
  &controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__Drivetrain_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controls_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controls_msgs, msg, Drivetrain)() {
  if (!controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__Drivetrain_message_type_support_handle.typesupport_identifier) {
    controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__Drivetrain_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controls_msgs__msg__Drivetrain__rosidl_typesupport_introspection_c__Drivetrain_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
