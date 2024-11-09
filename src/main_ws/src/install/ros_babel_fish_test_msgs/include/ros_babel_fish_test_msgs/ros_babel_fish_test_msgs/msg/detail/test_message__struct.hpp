// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_babel_fish_test_msgs:msg/TestMessage.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_MESSAGE__STRUCT_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 't'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'd'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'point_arr'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_babel_fish_test_msgs__msg__TestMessage __attribute__((deprecated))
#else
# define DEPRECATED__ros_babel_fish_test_msgs__msg__TestMessage __declspec(deprecated)
#endif

namespace ros_babel_fish_test_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestMessage_
{
  using Type = TestMessage_<ContainerAllocator>;

  explicit TestMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    t(_init),
    d(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->i16 = 256;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->b = false;
      this->ui8 = 0;
      this->ui16 = 0;
      this->ui32 = 0ul;
      this->ui64 = 0ull;
      this->i8 = 0;
      this->i16 = 0;
      this->i32 = 0l;
      this->i64 = 0ll;
      this->f32 = 0.0f;
      this->f64 = 0.0;
      this->str = "";
      this->bounded_str = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->b = false;
      this->ui8 = 0;
      this->ui16 = 0;
      this->ui32 = 0ul;
      this->ui64 = 0ull;
      this->i8 = 0;
      this->i32 = 0l;
      this->i64 = 0ll;
      this->f32 = 0.0f;
      this->f64 = 0.0;
      this->str = "";
      this->bounded_str = "";
    }
  }

  explicit TestMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    str(_alloc),
    bounded_str(_alloc),
    t(_alloc, _init),
    d(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->i16 = 256;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->b = false;
      this->ui8 = 0;
      this->ui16 = 0;
      this->ui32 = 0ul;
      this->ui64 = 0ull;
      this->i8 = 0;
      this->i16 = 0;
      this->i32 = 0l;
      this->i64 = 0ll;
      this->f32 = 0.0f;
      this->f64 = 0.0;
      this->str = "";
      this->bounded_str = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->b = false;
      this->ui8 = 0;
      this->ui16 = 0;
      this->ui32 = 0ul;
      this->ui64 = 0ull;
      this->i8 = 0;
      this->i32 = 0l;
      this->i64 = 0ll;
      this->f32 = 0.0f;
      this->f64 = 0.0;
      this->str = "";
      this->bounded_str = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _b_type =
    bool;
  _b_type b;
  using _ui8_type =
    uint8_t;
  _ui8_type ui8;
  using _ui16_type =
    uint16_t;
  _ui16_type ui16;
  using _ui32_type =
    uint32_t;
  _ui32_type ui32;
  using _ui64_type =
    uint64_t;
  _ui64_type ui64;
  using _i8_type =
    int8_t;
  _i8_type i8;
  using _i16_type =
    int16_t;
  _i16_type i16;
  using _i32_type =
    int32_t;
  _i32_type i32;
  using _i64_type =
    int64_t;
  _i64_type i64;
  using _f32_type =
    float;
  _f32_type f32;
  using _f64_type =
    double;
  _f64_type f64;
  using _str_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _str_type str;
  using _bounded_str_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bounded_str_type bounded_str;
  using _t_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _t_type t;
  using _d_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _d_type d;
  using _point_arr_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _point_arr_type point_arr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__b(
    const bool & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__ui8(
    const uint8_t & _arg)
  {
    this->ui8 = _arg;
    return *this;
  }
  Type & set__ui16(
    const uint16_t & _arg)
  {
    this->ui16 = _arg;
    return *this;
  }
  Type & set__ui32(
    const uint32_t & _arg)
  {
    this->ui32 = _arg;
    return *this;
  }
  Type & set__ui64(
    const uint64_t & _arg)
  {
    this->ui64 = _arg;
    return *this;
  }
  Type & set__i8(
    const int8_t & _arg)
  {
    this->i8 = _arg;
    return *this;
  }
  Type & set__i16(
    const int16_t & _arg)
  {
    this->i16 = _arg;
    return *this;
  }
  Type & set__i32(
    const int32_t & _arg)
  {
    this->i32 = _arg;
    return *this;
  }
  Type & set__i64(
    const int64_t & _arg)
  {
    this->i64 = _arg;
    return *this;
  }
  Type & set__f32(
    const float & _arg)
  {
    this->f32 = _arg;
    return *this;
  }
  Type & set__f64(
    const double & _arg)
  {
    this->f64 = _arg;
    return *this;
  }
  Type & set__str(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->str = _arg;
    return *this;
  }
  Type & set__bounded_str(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bounded_str = _arg;
    return *this;
  }
  Type & set__t(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->t = _arg;
    return *this;
  }
  Type & set__d(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->d = _arg;
    return *this;
  }
  Type & set__point_arr(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->point_arr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_babel_fish_test_msgs::msg::TestMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_babel_fish_test_msgs::msg::TestMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::msg::TestMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::msg::TestMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::msg::TestMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::msg::TestMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::msg::TestMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::msg::TestMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::msg::TestMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::msg::TestMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_babel_fish_test_msgs__msg__TestMessage
    std::shared_ptr<ros_babel_fish_test_msgs::msg::TestMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_babel_fish_test_msgs__msg__TestMessage
    std::shared_ptr<ros_babel_fish_test_msgs::msg::TestMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->ui8 != other.ui8) {
      return false;
    }
    if (this->ui16 != other.ui16) {
      return false;
    }
    if (this->ui32 != other.ui32) {
      return false;
    }
    if (this->ui64 != other.ui64) {
      return false;
    }
    if (this->i8 != other.i8) {
      return false;
    }
    if (this->i16 != other.i16) {
      return false;
    }
    if (this->i32 != other.i32) {
      return false;
    }
    if (this->i64 != other.i64) {
      return false;
    }
    if (this->f32 != other.f32) {
      return false;
    }
    if (this->f64 != other.f64) {
      return false;
    }
    if (this->str != other.str) {
      return false;
    }
    if (this->bounded_str != other.bounded_str) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    if (this->point_arr != other.point_arr) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestMessage_

// alias to use template instance with default allocator
using TestMessage =
  ros_babel_fish_test_msgs::msg::TestMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_babel_fish_test_msgs

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_MESSAGE__STRUCT_HPP_
