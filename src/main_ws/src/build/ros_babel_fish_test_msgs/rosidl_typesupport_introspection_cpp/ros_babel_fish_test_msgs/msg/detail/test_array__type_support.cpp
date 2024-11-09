// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_babel_fish_test_msgs:msg/TestArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_babel_fish_test_msgs/msg/detail/test_array__struct.hpp"
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

void TestArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_babel_fish_test_msgs::msg::TestArray(_init);
}

void TestArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_babel_fish_test_msgs::msg::TestArray *>(message_memory);
  typed_message->~TestArray();
}

size_t size_function__TestArray__bools(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__TestArray__bools(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__TestArray__bools(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__TestArray__bools(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestArray__uint8s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestArray__uint8s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__uint8s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__uint8s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__TestArray__uint8s(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__TestArray__uint8s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__TestArray__uint8s(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__TestArray__uint8s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestArray__uint16s(const void * untyped_member)
{
  (void)untyped_member;
  return 32;
}

const void * get_const_function__TestArray__uint16s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 32> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__uint16s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 32> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__uint16s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__TestArray__uint16s(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__TestArray__uint16s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__TestArray__uint16s(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

size_t size_function__TestArray__uint32s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestArray__uint32s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__uint32s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__uint32s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__TestArray__uint32s(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__TestArray__uint32s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__TestArray__uint32s(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__TestArray__uint32s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestArray__uint64s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestArray__uint64s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__uint64s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__uint64s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__TestArray__uint64s(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__TestArray__uint64s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__TestArray__uint64s(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__TestArray__uint64s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestArray__int8s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestArray__int8s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__int8s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__int8s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__TestArray__int8s(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__TestArray__int8s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__TestArray__int8s(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__TestArray__int8s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestArray__int16s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestArray__int16s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__int16s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__int16s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__TestArray__int16s(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__TestArray__int16s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__TestArray__int16s(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__TestArray__int16s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestArray__int32s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestArray__int32s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__int32s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__int32s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__TestArray__int32s(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__TestArray__int32s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__TestArray__int32s(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__TestArray__int32s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestArray__int64s(const void * untyped_member)
{
  (void)untyped_member;
  return 32;
}

const void * get_const_function__TestArray__int64s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 32> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__int64s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 32> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__int64s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__TestArray__int64s(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__TestArray__int64s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__TestArray__int64s(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

size_t size_function__TestArray__float32s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestArray__float32s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__float32s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__float32s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TestArray__float32s(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TestArray__float32s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TestArray__float32s(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__TestArray__float32s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestArray__float64s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestArray__float64s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__float64s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__float64s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TestArray__float64s(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TestArray__float64s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TestArray__float64s(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TestArray__float64s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestArray__times(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestArray__times(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__times(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const builtin_interfaces::msg::Time *>(
    get_const_function__TestArray__times(untyped_member, index));
  auto & value = *reinterpret_cast<builtin_interfaces::msg::Time *>(untyped_value);
  value = item;
}

void assign_function__TestArray__times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<builtin_interfaces::msg::Time *>(
    get_function__TestArray__times(untyped_member, index));
  const auto & value = *reinterpret_cast<const builtin_interfaces::msg::Time *>(untyped_value);
  item = value;
}

void resize_function__TestArray__times(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestArray__durations(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__TestArray__durations(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<builtin_interfaces::msg::Duration, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__durations(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<builtin_interfaces::msg::Duration, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__durations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const builtin_interfaces::msg::Duration *>(
    get_const_function__TestArray__durations(untyped_member, index));
  auto & value = *reinterpret_cast<builtin_interfaces::msg::Duration *>(untyped_value);
  value = item;
}

void assign_function__TestArray__durations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<builtin_interfaces::msg::Duration *>(
    get_function__TestArray__durations(untyped_member, index));
  const auto & value = *reinterpret_cast<const builtin_interfaces::msg::Duration *>(untyped_value);
  item = value;
}

size_t size_function__TestArray__strings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestArray__strings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__strings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__strings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TestArray__strings(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TestArray__strings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TestArray__strings(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TestArray__strings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TestArray__subarrays_fixed(const void * untyped_member)
{
  (void)untyped_member;
  return 10;
}

const void * get_const_function__TestArray__subarrays_fixed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<ros_babel_fish_test_msgs::msg::TestSubArray, 10> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__subarrays_fixed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<ros_babel_fish_test_msgs::msg::TestSubArray, 10> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__subarrays_fixed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_babel_fish_test_msgs::msg::TestSubArray *>(
    get_const_function__TestArray__subarrays_fixed(untyped_member, index));
  auto & value = *reinterpret_cast<ros_babel_fish_test_msgs::msg::TestSubArray *>(untyped_value);
  value = item;
}

void assign_function__TestArray__subarrays_fixed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_babel_fish_test_msgs::msg::TestSubArray *>(
    get_function__TestArray__subarrays_fixed(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_babel_fish_test_msgs::msg::TestSubArray *>(untyped_value);
  item = value;
}

size_t size_function__TestArray__subarrays(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_babel_fish_test_msgs::msg::TestSubArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestArray__subarrays(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_babel_fish_test_msgs::msg::TestSubArray> *>(untyped_member);
  return &member[index];
}

void * get_function__TestArray__subarrays(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_babel_fish_test_msgs::msg::TestSubArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestArray__subarrays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_babel_fish_test_msgs::msg::TestSubArray *>(
    get_const_function__TestArray__subarrays(untyped_member, index));
  auto & value = *reinterpret_cast<ros_babel_fish_test_msgs::msg::TestSubArray *>(untyped_value);
  value = item;
}

void assign_function__TestArray__subarrays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_babel_fish_test_msgs::msg::TestSubArray *>(
    get_function__TestArray__subarrays(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_babel_fish_test_msgs::msg::TestSubArray *>(untyped_value);
  item = value;
}

void resize_function__TestArray__subarrays(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_babel_fish_test_msgs::msg::TestSubArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestArray_message_member_array[16] = {
  {
    "bools",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, bools),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__bools,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__TestArray__bools,  // fetch(index, &value) function pointer
    assign_function__TestArray__bools,  // assign(index, value) function pointer
    resize_function__TestArray__bools  // resize(index) function pointer
  },
  {
    "uint8s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, uint8s),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__uint8s,  // size() function pointer
    get_const_function__TestArray__uint8s,  // get_const(index) function pointer
    get_function__TestArray__uint8s,  // get(index) function pointer
    fetch_function__TestArray__uint8s,  // fetch(index, &value) function pointer
    assign_function__TestArray__uint8s,  // assign(index, value) function pointer
    resize_function__TestArray__uint8s  // resize(index) function pointer
  },
  {
    "uint16s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, uint16s),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__uint16s,  // size() function pointer
    get_const_function__TestArray__uint16s,  // get_const(index) function pointer
    get_function__TestArray__uint16s,  // get(index) function pointer
    fetch_function__TestArray__uint16s,  // fetch(index, &value) function pointer
    assign_function__TestArray__uint16s,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint32s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, uint32s),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__uint32s,  // size() function pointer
    get_const_function__TestArray__uint32s,  // get_const(index) function pointer
    get_function__TestArray__uint32s,  // get(index) function pointer
    fetch_function__TestArray__uint32s,  // fetch(index, &value) function pointer
    assign_function__TestArray__uint32s,  // assign(index, value) function pointer
    resize_function__TestArray__uint32s  // resize(index) function pointer
  },
  {
    "uint64s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, uint64s),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__uint64s,  // size() function pointer
    get_const_function__TestArray__uint64s,  // get_const(index) function pointer
    get_function__TestArray__uint64s,  // get(index) function pointer
    fetch_function__TestArray__uint64s,  // fetch(index, &value) function pointer
    assign_function__TestArray__uint64s,  // assign(index, value) function pointer
    resize_function__TestArray__uint64s  // resize(index) function pointer
  },
  {
    "int8s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, int8s),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__int8s,  // size() function pointer
    get_const_function__TestArray__int8s,  // get_const(index) function pointer
    get_function__TestArray__int8s,  // get(index) function pointer
    fetch_function__TestArray__int8s,  // fetch(index, &value) function pointer
    assign_function__TestArray__int8s,  // assign(index, value) function pointer
    resize_function__TestArray__int8s  // resize(index) function pointer
  },
  {
    "int16s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, int16s),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__int16s,  // size() function pointer
    get_const_function__TestArray__int16s,  // get_const(index) function pointer
    get_function__TestArray__int16s,  // get(index) function pointer
    fetch_function__TestArray__int16s,  // fetch(index, &value) function pointer
    assign_function__TestArray__int16s,  // assign(index, value) function pointer
    resize_function__TestArray__int16s  // resize(index) function pointer
  },
  {
    "int32s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, int32s),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__int32s,  // size() function pointer
    get_const_function__TestArray__int32s,  // get_const(index) function pointer
    get_function__TestArray__int32s,  // get(index) function pointer
    fetch_function__TestArray__int32s,  // fetch(index, &value) function pointer
    assign_function__TestArray__int32s,  // assign(index, value) function pointer
    resize_function__TestArray__int32s  // resize(index) function pointer
  },
  {
    "int64s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, int64s),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__int64s,  // size() function pointer
    get_const_function__TestArray__int64s,  // get_const(index) function pointer
    get_function__TestArray__int64s,  // get(index) function pointer
    fetch_function__TestArray__int64s,  // fetch(index, &value) function pointer
    assign_function__TestArray__int64s,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float32s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, float32s),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__float32s,  // size() function pointer
    get_const_function__TestArray__float32s,  // get_const(index) function pointer
    get_function__TestArray__float32s,  // get(index) function pointer
    fetch_function__TestArray__float32s,  // fetch(index, &value) function pointer
    assign_function__TestArray__float32s,  // assign(index, value) function pointer
    resize_function__TestArray__float32s  // resize(index) function pointer
  },
  {
    "float64s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    true,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, float64s),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__float64s,  // size() function pointer
    get_const_function__TestArray__float64s,  // get_const(index) function pointer
    get_function__TestArray__float64s,  // get(index) function pointer
    fetch_function__TestArray__float64s,  // fetch(index, &value) function pointer
    assign_function__TestArray__float64s,  // assign(index, value) function pointer
    resize_function__TestArray__float64s  // resize(index) function pointer
  },
  {
    "times",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, times),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__times,  // size() function pointer
    get_const_function__TestArray__times,  // get_const(index) function pointer
    get_function__TestArray__times,  // get(index) function pointer
    fetch_function__TestArray__times,  // fetch(index, &value) function pointer
    assign_function__TestArray__times,  // assign(index, value) function pointer
    resize_function__TestArray__times  // resize(index) function pointer
  },
  {
    "durations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, durations),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__durations,  // size() function pointer
    get_const_function__TestArray__durations,  // get_const(index) function pointer
    get_function__TestArray__durations,  // get(index) function pointer
    fetch_function__TestArray__durations,  // fetch(index, &value) function pointer
    assign_function__TestArray__durations,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "strings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, strings),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__strings,  // size() function pointer
    get_const_function__TestArray__strings,  // get_const(index) function pointer
    get_function__TestArray__strings,  // get(index) function pointer
    fetch_function__TestArray__strings,  // fetch(index, &value) function pointer
    assign_function__TestArray__strings,  // assign(index, value) function pointer
    resize_function__TestArray__strings  // resize(index) function pointer
  },
  {
    "subarrays_fixed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_babel_fish_test_msgs::msg::TestSubArray>(),  // members of sub message
    true,  // is array
    10,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, subarrays_fixed),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__subarrays_fixed,  // size() function pointer
    get_const_function__TestArray__subarrays_fixed,  // get_const(index) function pointer
    get_function__TestArray__subarrays_fixed,  // get(index) function pointer
    fetch_function__TestArray__subarrays_fixed,  // fetch(index, &value) function pointer
    assign_function__TestArray__subarrays_fixed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "subarrays",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_babel_fish_test_msgs::msg::TestSubArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_babel_fish_test_msgs::msg::TestArray, subarrays),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestArray__subarrays,  // size() function pointer
    get_const_function__TestArray__subarrays,  // get_const(index) function pointer
    get_function__TestArray__subarrays,  // get(index) function pointer
    fetch_function__TestArray__subarrays,  // fetch(index, &value) function pointer
    assign_function__TestArray__subarrays,  // assign(index, value) function pointer
    resize_function__TestArray__subarrays  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestArray_message_members = {
  "ros_babel_fish_test_msgs::msg",  // message namespace
  "TestArray",  // message name
  16,  // number of fields
  sizeof(ros_babel_fish_test_msgs::msg::TestArray),
  TestArray_message_member_array,  // message members
  TestArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TestArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestArray_message_members,
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
get_message_type_support_handle<ros_babel_fish_test_msgs::msg::TestArray>()
{
  return &::ros_babel_fish_test_msgs::msg::rosidl_typesupport_introspection_cpp::TestArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_babel_fish_test_msgs, msg, TestArray)() {
  return &::ros_babel_fish_test_msgs::msg::rosidl_typesupport_introspection_cpp::TestArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
