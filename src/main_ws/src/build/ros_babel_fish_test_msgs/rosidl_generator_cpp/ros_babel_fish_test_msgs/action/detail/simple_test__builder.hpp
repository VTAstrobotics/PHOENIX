// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_babel_fish_test_msgs:action/SimpleTest.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__BUILDER_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace builder
{

class Init_SimpleTest_Goal_target
{
public:
  Init_SimpleTest_Goal_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_babel_fish_test_msgs::action::SimpleTest_Goal target(::ros_babel_fish_test_msgs::action::SimpleTest_Goal::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::action::SimpleTest_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_babel_fish_test_msgs::action::SimpleTest_Goal>()
{
  return ros_babel_fish_test_msgs::action::builder::Init_SimpleTest_Goal_target();
}

}  // namespace ros_babel_fish_test_msgs


namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace builder
{

class Init_SimpleTest_Result_final_value
{
public:
  Init_SimpleTest_Result_final_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_babel_fish_test_msgs::action::SimpleTest_Result final_value(::ros_babel_fish_test_msgs::action::SimpleTest_Result::_final_value_type arg)
  {
    msg_.final_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::action::SimpleTest_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_babel_fish_test_msgs::action::SimpleTest_Result>()
{
  return ros_babel_fish_test_msgs::action::builder::Init_SimpleTest_Result_final_value();
}

}  // namespace ros_babel_fish_test_msgs


namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace builder
{

class Init_SimpleTest_Feedback_current_value
{
public:
  Init_SimpleTest_Feedback_current_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_babel_fish_test_msgs::action::SimpleTest_Feedback current_value(::ros_babel_fish_test_msgs::action::SimpleTest_Feedback::_current_value_type arg)
  {
    msg_.current_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::action::SimpleTest_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_babel_fish_test_msgs::action::SimpleTest_Feedback>()
{
  return ros_babel_fish_test_msgs::action::builder::Init_SimpleTest_Feedback_current_value();
}

}  // namespace ros_babel_fish_test_msgs


namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace builder
{

class Init_SimpleTest_SendGoal_Request_goal
{
public:
  explicit Init_SimpleTest_SendGoal_Request_goal(::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request goal(::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request msg_;
};

class Init_SimpleTest_SendGoal_Request_goal_id
{
public:
  Init_SimpleTest_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimpleTest_SendGoal_Request_goal goal_id(::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SimpleTest_SendGoal_Request_goal(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request>()
{
  return ros_babel_fish_test_msgs::action::builder::Init_SimpleTest_SendGoal_Request_goal_id();
}

}  // namespace ros_babel_fish_test_msgs


namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace builder
{

class Init_SimpleTest_SendGoal_Response_stamp
{
public:
  explicit Init_SimpleTest_SendGoal_Response_stamp(::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response stamp(::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response msg_;
};

class Init_SimpleTest_SendGoal_Response_accepted
{
public:
  Init_SimpleTest_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimpleTest_SendGoal_Response_stamp accepted(::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SimpleTest_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response>()
{
  return ros_babel_fish_test_msgs::action::builder::Init_SimpleTest_SendGoal_Response_accepted();
}

}  // namespace ros_babel_fish_test_msgs


namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace builder
{

class Init_SimpleTest_GetResult_Request_goal_id
{
public:
  Init_SimpleTest_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request goal_id(::ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request>()
{
  return ros_babel_fish_test_msgs::action::builder::Init_SimpleTest_GetResult_Request_goal_id();
}

}  // namespace ros_babel_fish_test_msgs


namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace builder
{

class Init_SimpleTest_GetResult_Response_result
{
public:
  explicit Init_SimpleTest_GetResult_Response_result(::ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response result(::ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response msg_;
};

class Init_SimpleTest_GetResult_Response_status
{
public:
  Init_SimpleTest_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimpleTest_GetResult_Response_result status(::ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SimpleTest_GetResult_Response_result(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response>()
{
  return ros_babel_fish_test_msgs::action::builder::Init_SimpleTest_GetResult_Response_status();
}

}  // namespace ros_babel_fish_test_msgs


namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace builder
{

class Init_SimpleTest_FeedbackMessage_feedback
{
public:
  explicit Init_SimpleTest_FeedbackMessage_feedback(::ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage feedback(::ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage msg_;
};

class Init_SimpleTest_FeedbackMessage_goal_id
{
public:
  Init_SimpleTest_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimpleTest_FeedbackMessage_feedback goal_id(::ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SimpleTest_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage>()
{
  return ros_babel_fish_test_msgs::action::builder::Init_SimpleTest_FeedbackMessage_goal_id();
}

}  // namespace ros_babel_fish_test_msgs

#endif  // ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__BUILDER_HPP_
