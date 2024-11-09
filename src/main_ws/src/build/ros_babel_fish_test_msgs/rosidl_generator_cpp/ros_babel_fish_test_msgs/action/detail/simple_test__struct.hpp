// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_babel_fish_test_msgs:action/SimpleTest.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__STRUCT_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_Goal __attribute__((deprecated))
#else
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_Goal __declspec(deprecated)
#endif

namespace ros_babel_fish_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimpleTest_Goal_
{
  using Type = SimpleTest_Goal_<ContainerAllocator>;

  explicit SimpleTest_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target = 0l;
    }
  }

  explicit SimpleTest_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target = 0l;
    }
  }

  // field types and members
  using _target_type =
    int32_t;
  _target_type target;

  // setters for named parameter idiom
  Type & set__target(
    const int32_t & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_Goal
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_Goal
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleTest_Goal_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleTest_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleTest_Goal_

// alias to use template instance with default allocator
using SimpleTest_Goal =
  ros_babel_fish_test_msgs::action::SimpleTest_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_babel_fish_test_msgs


#ifndef _WIN32
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_Result __attribute__((deprecated))
#else
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_Result __declspec(deprecated)
#endif

namespace ros_babel_fish_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimpleTest_Result_
{
  using Type = SimpleTest_Result_<ContainerAllocator>;

  explicit SimpleTest_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_value = 0l;
    }
  }

  explicit SimpleTest_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_value = 0l;
    }
  }

  // field types and members
  using _final_value_type =
    int32_t;
  _final_value_type final_value;

  // setters for named parameter idiom
  Type & set__final_value(
    const int32_t & _arg)
  {
    this->final_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_Result
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_Result
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleTest_Result_ & other) const
  {
    if (this->final_value != other.final_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleTest_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleTest_Result_

// alias to use template instance with default allocator
using SimpleTest_Result =
  ros_babel_fish_test_msgs::action::SimpleTest_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_babel_fish_test_msgs


#ifndef _WIN32
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_Feedback __declspec(deprecated)
#endif

namespace ros_babel_fish_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimpleTest_Feedback_
{
  using Type = SimpleTest_Feedback_<ContainerAllocator>;

  explicit SimpleTest_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_value = 0l;
    }
  }

  explicit SimpleTest_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_value = 0l;
    }
  }

  // field types and members
  using _current_value_type =
    int32_t;
  _current_value_type current_value;

  // setters for named parameter idiom
  Type & set__current_value(
    const int32_t & _arg)
  {
    this->current_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_Feedback
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_Feedback
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleTest_Feedback_ & other) const
  {
    if (this->current_value != other.current_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleTest_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleTest_Feedback_

// alias to use template instance with default allocator
using SimpleTest_Feedback =
  ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_babel_fish_test_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request __declspec(deprecated)
#endif

namespace ros_babel_fish_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimpleTest_SendGoal_Request_
{
  using Type = SimpleTest_SendGoal_Request_<ContainerAllocator>;

  explicit SimpleTest_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit SimpleTest_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const ros_babel_fish_test_msgs::action::SimpleTest_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleTest_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleTest_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleTest_SendGoal_Request_

// alias to use template instance with default allocator
using SimpleTest_SendGoal_Request =
  ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_babel_fish_test_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response __declspec(deprecated)
#endif

namespace ros_babel_fish_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimpleTest_SendGoal_Response_
{
  using Type = SimpleTest_SendGoal_Response_<ContainerAllocator>;

  explicit SimpleTest_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit SimpleTest_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleTest_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleTest_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleTest_SendGoal_Response_

// alias to use template instance with default allocator
using SimpleTest_SendGoal_Response =
  ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace ros_babel_fish_test_msgs
{

namespace action
{

struct SimpleTest_SendGoal
{
  using Request = ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request;
  using Response = ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response;
};

}  // namespace action

}  // namespace ros_babel_fish_test_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request __declspec(deprecated)
#endif

namespace ros_babel_fish_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimpleTest_GetResult_Request_
{
  using Type = SimpleTest_GetResult_Request_<ContainerAllocator>;

  explicit SimpleTest_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit SimpleTest_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleTest_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleTest_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleTest_GetResult_Request_

// alias to use template instance with default allocator
using SimpleTest_GetResult_Request =
  ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_babel_fish_test_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response __declspec(deprecated)
#endif

namespace ros_babel_fish_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimpleTest_GetResult_Response_
{
  using Type = SimpleTest_GetResult_Response_<ContainerAllocator>;

  explicit SimpleTest_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit SimpleTest_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const ros_babel_fish_test_msgs::action::SimpleTest_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleTest_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleTest_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleTest_GetResult_Response_

// alias to use template instance with default allocator
using SimpleTest_GetResult_Response =
  ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace ros_babel_fish_test_msgs
{

namespace action
{

struct SimpleTest_GetResult
{
  using Request = ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request;
  using Response = ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response;
};

}  // namespace action

}  // namespace ros_babel_fish_test_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage __declspec(deprecated)
#endif

namespace ros_babel_fish_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimpleTest_FeedbackMessage_
{
  using Type = SimpleTest_FeedbackMessage_<ContainerAllocator>;

  explicit SimpleTest_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit SimpleTest_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const ros_babel_fish_test_msgs::action::SimpleTest_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage
    std::shared_ptr<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleTest_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleTest_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleTest_FeedbackMessage_

// alias to use template instance with default allocator
using SimpleTest_FeedbackMessage =
  ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace ros_babel_fish_test_msgs
{

namespace action
{

struct SimpleTest
{
  /// The goal message defined in the action definition.
  using Goal = ros_babel_fish_test_msgs::action::SimpleTest_Goal;
  /// The result message defined in the action definition.
  using Result = ros_babel_fish_test_msgs::action::SimpleTest_Result;
  /// The feedback message defined in the action definition.
  using Feedback = ros_babel_fish_test_msgs::action::SimpleTest_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = ros_babel_fish_test_msgs::action::SimpleTest_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = ros_babel_fish_test_msgs::action::SimpleTest_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct SimpleTest SimpleTest;

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

#endif  // ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__STRUCT_HPP_
