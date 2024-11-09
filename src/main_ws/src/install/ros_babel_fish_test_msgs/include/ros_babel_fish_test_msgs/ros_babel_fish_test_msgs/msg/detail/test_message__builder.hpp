// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_babel_fish_test_msgs:msg/TestMessage.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_MESSAGE__BUILDER_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_babel_fish_test_msgs/msg/detail/test_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_babel_fish_test_msgs
{

namespace msg
{

namespace builder
{

class Init_TestMessage_point_arr
{
public:
  explicit Init_TestMessage_point_arr(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  ::ros_babel_fish_test_msgs::msg::TestMessage point_arr(::ros_babel_fish_test_msgs::msg::TestMessage::_point_arr_type arg)
  {
    msg_.point_arr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_d
{
public:
  explicit Init_TestMessage_d(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_point_arr d(::ros_babel_fish_test_msgs::msg::TestMessage::_d_type arg)
  {
    msg_.d = std::move(arg);
    return Init_TestMessage_point_arr(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_t
{
public:
  explicit Init_TestMessage_t(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_d t(::ros_babel_fish_test_msgs::msg::TestMessage::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_TestMessage_d(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_bounded_str
{
public:
  explicit Init_TestMessage_bounded_str(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_t bounded_str(::ros_babel_fish_test_msgs::msg::TestMessage::_bounded_str_type arg)
  {
    msg_.bounded_str = std::move(arg);
    return Init_TestMessage_t(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_str
{
public:
  explicit Init_TestMessage_str(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_bounded_str str(::ros_babel_fish_test_msgs::msg::TestMessage::_str_type arg)
  {
    msg_.str = std::move(arg);
    return Init_TestMessage_bounded_str(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_f64
{
public:
  explicit Init_TestMessage_f64(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_str f64(::ros_babel_fish_test_msgs::msg::TestMessage::_f64_type arg)
  {
    msg_.f64 = std::move(arg);
    return Init_TestMessage_str(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_f32
{
public:
  explicit Init_TestMessage_f32(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_f64 f32(::ros_babel_fish_test_msgs::msg::TestMessage::_f32_type arg)
  {
    msg_.f32 = std::move(arg);
    return Init_TestMessage_f64(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_i64
{
public:
  explicit Init_TestMessage_i64(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_f32 i64(::ros_babel_fish_test_msgs::msg::TestMessage::_i64_type arg)
  {
    msg_.i64 = std::move(arg);
    return Init_TestMessage_f32(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_i32
{
public:
  explicit Init_TestMessage_i32(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_i64 i32(::ros_babel_fish_test_msgs::msg::TestMessage::_i32_type arg)
  {
    msg_.i32 = std::move(arg);
    return Init_TestMessage_i64(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_i16
{
public:
  explicit Init_TestMessage_i16(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_i32 i16(::ros_babel_fish_test_msgs::msg::TestMessage::_i16_type arg)
  {
    msg_.i16 = std::move(arg);
    return Init_TestMessage_i32(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_i8
{
public:
  explicit Init_TestMessage_i8(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_i16 i8(::ros_babel_fish_test_msgs::msg::TestMessage::_i8_type arg)
  {
    msg_.i8 = std::move(arg);
    return Init_TestMessage_i16(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_ui64
{
public:
  explicit Init_TestMessage_ui64(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_i8 ui64(::ros_babel_fish_test_msgs::msg::TestMessage::_ui64_type arg)
  {
    msg_.ui64 = std::move(arg);
    return Init_TestMessage_i8(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_ui32
{
public:
  explicit Init_TestMessage_ui32(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_ui64 ui32(::ros_babel_fish_test_msgs::msg::TestMessage::_ui32_type arg)
  {
    msg_.ui32 = std::move(arg);
    return Init_TestMessage_ui64(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_ui16
{
public:
  explicit Init_TestMessage_ui16(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_ui32 ui16(::ros_babel_fish_test_msgs::msg::TestMessage::_ui16_type arg)
  {
    msg_.ui16 = std::move(arg);
    return Init_TestMessage_ui32(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_ui8
{
public:
  explicit Init_TestMessage_ui8(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_ui16 ui8(::ros_babel_fish_test_msgs::msg::TestMessage::_ui8_type arg)
  {
    msg_.ui8 = std::move(arg);
    return Init_TestMessage_ui16(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_b
{
public:
  explicit Init_TestMessage_b(::ros_babel_fish_test_msgs::msg::TestMessage & msg)
  : msg_(msg)
  {}
  Init_TestMessage_ui8 b(::ros_babel_fish_test_msgs::msg::TestMessage::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_TestMessage_ui8(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

class Init_TestMessage_header
{
public:
  Init_TestMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestMessage_b header(::ros_babel_fish_test_msgs::msg::TestMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TestMessage_b(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::msg::TestMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_babel_fish_test_msgs::msg::TestMessage>()
{
  return ros_babel_fish_test_msgs::msg::builder::Init_TestMessage_header();
}

}  // namespace ros_babel_fish_test_msgs

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_MESSAGE__BUILDER_HPP_
