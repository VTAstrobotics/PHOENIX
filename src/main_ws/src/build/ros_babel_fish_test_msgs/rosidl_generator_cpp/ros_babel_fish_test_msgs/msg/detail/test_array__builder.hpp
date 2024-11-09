// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_babel_fish_test_msgs:msg/TestArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__BUILDER_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_babel_fish_test_msgs/msg/detail/test_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_babel_fish_test_msgs
{

namespace msg
{

namespace builder
{

class Init_TestArray_subarrays
{
public:
  explicit Init_TestArray_subarrays(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  ::ros_babel_fish_test_msgs::msg::TestArray subarrays(::ros_babel_fish_test_msgs::msg::TestArray::_subarrays_type arg)
  {
    msg_.subarrays = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_subarrays_fixed
{
public:
  explicit Init_TestArray_subarrays_fixed(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_subarrays subarrays_fixed(::ros_babel_fish_test_msgs::msg::TestArray::_subarrays_fixed_type arg)
  {
    msg_.subarrays_fixed = std::move(arg);
    return Init_TestArray_subarrays(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_strings
{
public:
  explicit Init_TestArray_strings(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_subarrays_fixed strings(::ros_babel_fish_test_msgs::msg::TestArray::_strings_type arg)
  {
    msg_.strings = std::move(arg);
    return Init_TestArray_subarrays_fixed(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_durations
{
public:
  explicit Init_TestArray_durations(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_strings durations(::ros_babel_fish_test_msgs::msg::TestArray::_durations_type arg)
  {
    msg_.durations = std::move(arg);
    return Init_TestArray_strings(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_times
{
public:
  explicit Init_TestArray_times(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_durations times(::ros_babel_fish_test_msgs::msg::TestArray::_times_type arg)
  {
    msg_.times = std::move(arg);
    return Init_TestArray_durations(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_float64s
{
public:
  explicit Init_TestArray_float64s(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_times float64s(::ros_babel_fish_test_msgs::msg::TestArray::_float64s_type arg)
  {
    msg_.float64s = std::move(arg);
    return Init_TestArray_times(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_float32s
{
public:
  explicit Init_TestArray_float32s(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_float64s float32s(::ros_babel_fish_test_msgs::msg::TestArray::_float32s_type arg)
  {
    msg_.float32s = std::move(arg);
    return Init_TestArray_float64s(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_int64s
{
public:
  explicit Init_TestArray_int64s(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_float32s int64s(::ros_babel_fish_test_msgs::msg::TestArray::_int64s_type arg)
  {
    msg_.int64s = std::move(arg);
    return Init_TestArray_float32s(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_int32s
{
public:
  explicit Init_TestArray_int32s(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_int64s int32s(::ros_babel_fish_test_msgs::msg::TestArray::_int32s_type arg)
  {
    msg_.int32s = std::move(arg);
    return Init_TestArray_int64s(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_int16s
{
public:
  explicit Init_TestArray_int16s(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_int32s int16s(::ros_babel_fish_test_msgs::msg::TestArray::_int16s_type arg)
  {
    msg_.int16s = std::move(arg);
    return Init_TestArray_int32s(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_int8s
{
public:
  explicit Init_TestArray_int8s(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_int16s int8s(::ros_babel_fish_test_msgs::msg::TestArray::_int8s_type arg)
  {
    msg_.int8s = std::move(arg);
    return Init_TestArray_int16s(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_uint64s
{
public:
  explicit Init_TestArray_uint64s(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_int8s uint64s(::ros_babel_fish_test_msgs::msg::TestArray::_uint64s_type arg)
  {
    msg_.uint64s = std::move(arg);
    return Init_TestArray_int8s(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_uint32s
{
public:
  explicit Init_TestArray_uint32s(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_uint64s uint32s(::ros_babel_fish_test_msgs::msg::TestArray::_uint32s_type arg)
  {
    msg_.uint32s = std::move(arg);
    return Init_TestArray_uint64s(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_uint16s
{
public:
  explicit Init_TestArray_uint16s(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_uint32s uint16s(::ros_babel_fish_test_msgs::msg::TestArray::_uint16s_type arg)
  {
    msg_.uint16s = std::move(arg);
    return Init_TestArray_uint32s(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_uint8s
{
public:
  explicit Init_TestArray_uint8s(::ros_babel_fish_test_msgs::msg::TestArray & msg)
  : msg_(msg)
  {}
  Init_TestArray_uint16s uint8s(::ros_babel_fish_test_msgs::msg::TestArray::_uint8s_type arg)
  {
    msg_.uint8s = std::move(arg);
    return Init_TestArray_uint16s(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

class Init_TestArray_bools
{
public:
  Init_TestArray_bools()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestArray_uint8s bools(::ros_babel_fish_test_msgs::msg::TestArray::_bools_type arg)
  {
    msg_.bools = std::move(arg);
    return Init_TestArray_uint8s(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_babel_fish_test_msgs::msg::TestArray>()
{
  return ros_babel_fish_test_msgs::msg::builder::Init_TestArray_bools();
}

}  // namespace ros_babel_fish_test_msgs

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__BUILDER_HPP_
