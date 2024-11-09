// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_babel_fish_test_msgs:msg/TestSubArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_babel_fish_test_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TestSubArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_babel_fish_test_msgs::msg::TestSubArray(_init);
}

void TestSubArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_babel_fish_test_msgs::msg::TestSubArray *>(message_memory);
  typed_message->~TestSubArray();
}

size_t size_function__TestSubArray__ints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestSubArray__ints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TestSubArray__ints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestSubArray__ints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__TestSubArray__ints(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__TestSubArray__ints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__TestSubArray__ints(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__TestSubArray__ints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestSubArray__strings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestSubArray__strings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TestSubArray__strings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestSubArray__strings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TestSubArray__strings(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TestSubArray__strings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TestSubArray__strings(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TestSubArray__strings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestSubArray__times(const void * untyped_member)
{
  (void)untyped_member;
  return 42;
}

const void * get_const_function__TestSubArray__times(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<builtin_interfaces::msg::Time, 42> *>(untyped_member);
  return &member[index];
}

void * get_function__TestSubArray__times(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<builtin_interfaces::msg::Time, 42> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestSubArray__times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const builtin_interfaces::msg::Time *>(
    get_const_function__TestSubArray__times(untyped_member, index));
  auto & value = *reinterpret_cast<builtin_interfaces::msg::Time *>(untyped_value);
  value = item;
}

void assign_function__TestSubArray__times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<builtin_interfaces::msg::Time *>(
    get_function__TestSubArray__times(untyped_member, index));
  const auto & value = *reinterpret_cast<const builtin_interfaces::msg::Time *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestSubArray_message_member_array[3] = {
  {
    "ints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestSubArray, ints),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestSubArray__ints,  // size() function pointer
    get_const_function__TestSubArray__ints,  // get_const(index) function pointer
    get_function__TestSubArray__ints,  // get(index) function pointer
    fetch_function__TestSubArray__ints,  // fetch(index, &value) function pointer
    assign_function__TestSubArray__ints,  // assign(index, value) function pointer
    resize_function__TestSubArray__ints  // resize(index) function pointer
  },
  {
    "strings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    10,  // array size
    true,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestSubArray, strings),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestSubArray__strings,  // size() function pointer
    get_const_function__TestSubArray__strings,  // get_const(index) function pointer
    get_function__TestSubArray__strings,  // get(index) function pointer
    fetch_function__TestSubArray__strings,  // fetch(index, &value) function pointer
    assign_function__TestSubArray__strings,  // assign(index, value) function pointer
    resize_function__TestSubArray__strings  // resize(index) function pointer
  },
  {
    "times",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    true,  // is array
    42,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestSubArray, times),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestSubArray__times,  // size() function pointer
    get_const_function__TestSubArray__times,  // get_const(index) function pointer
    get_function__TestSubArray__times,  // get(index) function pointer
    fetch_function__TestSubArray__times,  // fetch(index, &value) function pointer
    assign_function__TestSubArray__times,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestSubArray_message_members = {
  "ros_babel_fish_test_msgs::msg",  // message namespace
  "TestSubArray",  // message name
  3,  // number of fields
  sizeof(ros_babel_fish_test_msgs::msg::TestSubArray),
  TestSubArray_message_member_array,  // message members
  TestSubArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TestSubArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestSubArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestSubArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_babel_fish_test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_babel_fish_test_msgs::msg::TestSubArray>()
{
  return &::ros_babel_fish_test_msgs::msg::rosidl_typesupport_introspection_cpp::TestSubArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_babel_fish_test_msgs, msg, TestSubArray)() {
  return &::ros_babel_fish_test_msgs::msg::rosidl_typesupport_introspection_cpp::TestSubArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
