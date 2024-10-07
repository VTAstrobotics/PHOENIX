// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controls_msgs:msg/Drivetrain.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__DRIVETRAIN__STRUCT_HPP_
#define CONTROLS_MSGS__MSG__DETAIL__DRIVETRAIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controls_msgs__msg__Drivetrain __attribute__((deprecated))
#else
# define DEPRECATED__controls_msgs__msg__Drivetrain __declspec(deprecated)
#endif

namespace controls_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Drivetrain_
{
  using Type = Drivetrain_<ContainerAllocator>;

  explicit Drivetrain_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 2>::iterator, double>(this->motors.begin(), this->motors.end(), 0.0);
    }
  }

  explicit Drivetrain_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motors(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 2>::iterator, double>(this->motors.begin(), this->motors.end(), 0.0);
    }
  }

  // field types and members
  using _motors_type =
    std::array<double, 2>;
  _motors_type motors;

  // setters for named parameter idiom
  Type & set__motors(
    const std::array<double, 2> & _arg)
  {
    this->motors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controls_msgs::msg::Drivetrain_<ContainerAllocator> *;
  using ConstRawPtr =
    const controls_msgs::msg::Drivetrain_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controls_msgs::msg::Drivetrain_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controls_msgs::msg::Drivetrain_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controls_msgs::msg::Drivetrain_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controls_msgs::msg::Drivetrain_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controls_msgs::msg::Drivetrain_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controls_msgs::msg::Drivetrain_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controls_msgs::msg::Drivetrain_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controls_msgs::msg::Drivetrain_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controls_msgs__msg__Drivetrain
    std::shared_ptr<controls_msgs::msg::Drivetrain_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controls_msgs__msg__Drivetrain
    std::shared_ptr<controls_msgs::msg::Drivetrain_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Drivetrain_ & other) const
  {
    if (this->motors != other.motors) {
      return false;
    }
    return true;
  }
  bool operator!=(const Drivetrain_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Drivetrain_

// alias to use template instance with default allocator
using Drivetrain =
  controls_msgs::msg::Drivetrain_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controls_msgs

#endif  // CONTROLS_MSGS__MSG__DETAIL__DRIVETRAIN__STRUCT_HPP_
