// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controls_msgs:msg/Uart.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__UART__STRUCT_HPP_
#define CONTROLS_MSGS__MSG__DETAIL__UART__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controls_msgs__msg__Uart __attribute__((deprecated))
#else
# define DEPRECATED__controls_msgs__msg__Uart __declspec(deprecated)
#endif

namespace controls_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Uart_
{
  using Type = Uart_<ContainerAllocator>;

  explicit Uart_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->msg = ";";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->msg = "";
    }
  }

  explicit Uart_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->msg = ";";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->msg = "";
    }
  }

  // field types and members
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;

  // setters for named parameter idiom
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controls_msgs::msg::Uart_<ContainerAllocator> *;
  using ConstRawPtr =
    const controls_msgs::msg::Uart_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controls_msgs::msg::Uart_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controls_msgs::msg::Uart_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controls_msgs::msg::Uart_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controls_msgs::msg::Uart_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controls_msgs::msg::Uart_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controls_msgs::msg::Uart_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controls_msgs::msg::Uart_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controls_msgs::msg::Uart_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controls_msgs__msg__Uart
    std::shared_ptr<controls_msgs::msg::Uart_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controls_msgs__msg__Uart
    std::shared_ptr<controls_msgs::msg::Uart_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Uart_ & other) const
  {
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const Uart_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Uart_

// alias to use template instance with default allocator
using Uart =
  controls_msgs::msg::Uart_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controls_msgs

#endif  // CONTROLS_MSGS__MSG__DETAIL__UART__STRUCT_HPP_
