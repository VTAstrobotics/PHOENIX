// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_babel_fish_test_msgs:msg/TestSubArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__BUILDER_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_babel_fish_test_msgs
{

namespace msg
{

namespace builder
{

class Init_TestSubArray_times
{
public:
  explicit Init_TestSubArray_times(::ros_babel_fish_test_msgs::msg::TestSubArray & msg)
  : msg_(msg)
  {}
  ::ros_babel_fish_test_msgs::msg::TestSubArray times(::ros_babel_fish_test_msgs::msg::TestSubArray::_times_type arg)
  {
    msg_.times = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestSubArray msg_;
};

class Init_TestSubArray_strings
{
public:
  explicit Init_TestSubArray_strings(::ros_babel_fish_test_msgs::msg::TestSubArray & msg)
  : msg_(msg)
  {}
  Init_TestSubArray_times strings(::ros_babel_fish_test_msgs::msg::TestSubArray::_strings_type arg)
  {
    msg_.strings = std::move(arg);
    return Init_TestSubArray_times(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestSubArray msg_;
};

class Init_TestSubArray_ints
{
public:
  Init_TestSubArray_ints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestSubArray_strings ints(::ros_babel_fish_test_msgs::msg::TestSubArray::_ints_type arg)
  {
    msg_.ints = std::move(arg);
    return Init_TestSubArray_strings(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestSubArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_babel_fish_test_msgs::msg::TestSubArray>()
{
  return ros_babel_fish_test_msgs::msg::builder::Init_TestSubArray_ints();
}

}  // namespace ros_babel_fish_test_msgs

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__BUILDER_HPP_
