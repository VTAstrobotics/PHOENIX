// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controls_msgs:msg/Dump.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__DUMP__STRUCT_HPP_
#define CONTROLS_MSGS__MSG__DETAIL__DUMP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controls_msgs__msg__Dump __attribute__((deprecated))
#else
# define DEPRECATED__controls_msgs__msg__Dump __declspec(deprecated)
#endif

namespace controls_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Dump_
{
  using Type = Dump_<ContainerAllocator>;

  explicit Dump_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lins = 0.0;
    }
  }

  explicit Dump_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lins = 0.0;
    }
  }

  // field types and members
  using _lins_type =
    double;
  _lins_type lins;

  // setters for named parameter idiom
  Type & set__lins(
    const double & _arg)
  {
    this->lins = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controls_msgs::msg::Dump_<ContainerAllocator> *;
  using ConstRawPtr =
    const controls_msgs::msg::Dump_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controls_msgs::msg::Dump_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controls_msgs::msg::Dump_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controls_msgs::msg::Dump_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controls_msgs::msg::Dump_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controls_msgs::msg::Dump_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controls_msgs::msg::Dump_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controls_msgs::msg::Dump_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controls_msgs::msg::Dump_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controls_msgs__msg__Dump
    std::shared_ptr<controls_msgs::msg::Dump_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controls_msgs__msg__Dump
    std::shared_ptr<controls_msgs::msg::Dump_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dump_ & other) const
  {
    if (this->lins != other.lins) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dump_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dump_

// alias to use template instance with default allocator
using Dump =
  controls_msgs::msg::Dump_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controls_msgs

#endif  // CONTROLS_MSGS__MSG__DETAIL__DUMP__STRUCT_HPP_
