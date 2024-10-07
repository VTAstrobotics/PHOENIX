// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from controls_msgs:msg/Dig.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "controls_msgs/msg/detail/dig__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace controls_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Dig_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) controls_msgs::msg::Dig(_init);
}

void Dig_fini_function(void * message_memory)
{
  auto typed_message = static_cast<controls_msgs::msg::Dig *>(message_memory);
  typed_message->~Dig();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Dig_message_member_array[2] = {
  {
    "motors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controls_msgs::msg::Dig, motors),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lins",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controls_msgs::msg::Dig, lins),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Dig_message_members = {
  "controls_msgs::msg",  // message namespace
  "Dig",  // message name
  2,  // number of fields
  sizeof(controls_msgs::msg::Dig),
  Dig_message_member_array,  // message members
  Dig_init_function,  // function to initialize message memory (memory has to be allocated)
  Dig_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Dig_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Dig_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace controls_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controls_msgs::msg::Dig>()
{
  return &::controls_msgs::msg::rosidl_typesupport_introspection_cpp::Dig_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controls_msgs, msg, Dig)() {
  return &::controls_msgs::msg::rosidl_typesupport_introspection_cpp::Dig_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
