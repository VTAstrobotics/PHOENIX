// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controls_msgs:msg/Dig.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__DIG__STRUCT_HPP_
#define CONTROLS_MSGS__MSG__DETAIL__DIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controls_msgs__msg__Dig __attribute__((deprecated))
#else
# define DEPRECATED__controls_msgs__msg__Dig __declspec(deprecated)
#endif

namespace controls_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Dig_
{
  using Type = Dig_<ContainerAllocator>;

  explicit Dig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motors = 0.0;
      this->lins = 0.0;
    }
  }

  explicit Dig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motors = 0.0;
      this->lins = 0.0;
    }
  }

  // field types and members
  using _motors_type =
    double;
  _motors_type motors;
  using _lins_type =
    double;
  _lins_type lins;

  // setters for named parameter idiom
  Type & set__motors(
    const double & _arg)
  {
    this->motors = _arg;
    return *this;
  }
  Type & set__lins(
    const double & _arg)
  {
    this->lins = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controls_msgs::msg::Dig_<ContainerAllocator> *;
  using ConstRawPtr =
    const controls_msgs::msg::Dig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controls_msgs::msg::Dig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controls_msgs::msg::Dig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controls_msgs::msg::Dig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controls_msgs::msg::Dig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controls_msgs::msg::Dig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controls_msgs::msg::Dig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controls_msgs::msg::Dig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controls_msgs::msg::Dig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controls_msgs__msg__Dig
    std::shared_ptr<controls_msgs::msg::Dig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controls_msgs__msg__Dig
    std::shared_ptr<controls_msgs::msg::Dig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dig_ & other) const
  {
    if (this->motors != other.motors) {
      return false;
    }
    if (this->lins != other.lins) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dig_

// alias to use template instance with default allocator
using Dig =
  controls_msgs::msg::Dig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controls_msgs

#endif  // CONTROLS_MSGS__MSG__DETAIL__DIG__STRUCT_HPP_
