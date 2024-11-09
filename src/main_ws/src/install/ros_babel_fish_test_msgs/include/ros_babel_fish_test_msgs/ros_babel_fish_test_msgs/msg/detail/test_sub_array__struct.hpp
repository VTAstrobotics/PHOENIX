// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_babel_fish_test_msgs:msg/TestSubArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__STRUCT_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'times'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_babel_fish_test_msgs__msg__TestSubArray __attribute__((deprecated))
#else
# define DEPRECATED__ros_babel_fish_test_msgs__msg__TestSubArray __declspec(deprecated)
#endif

namespace ros_babel_fish_test_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestSubArray_
{
  using Type = TestSubArray_<ContainerAllocator>;

  explicit TestSubArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->times.fill(builtin_interfaces::msg::Time_<ContainerAllocator>{_init});
    }
  }

  explicit TestSubArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : times(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->times.fill(builtin_interfaces::msg::Time_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _ints_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _ints_type ints;
  using _strings_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 10, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _strings_type strings;
  using _times_type =
    std::array<builtin_interfaces::msg::Time_<ContainerAllocator>, 42>;
  _times_type times;

  // setters for named parameter idiom
  Type & set__ints(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->ints = _arg;
    return *this;
  }
  Type & set__strings(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 10, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->strings = _arg;
    return *this;
  }
  Type & set__times(
    const std::array<builtin_interfaces::msg::Time_<ContainerAllocator>, 42> & _arg)
  {
    this->times = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_babel_fish_test_msgs__msg__TestSubArray
    std::shared_ptr<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_babel_fish_test_msgs__msg__TestSubArray
    std::shared_ptr<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestSubArray_ & other) const
  {
    if (this->ints != other.ints) {
      return false;
    }
    if (this->strings != other.strings) {
      return false;
    }
    if (this->times != other.times) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestSubArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestSubArray_

// alias to use template instance with default allocator
using TestSubArray =
  ros_babel_fish_test_msgs::msg::TestSubArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_babel_fish_test_msgs

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_SUB_ARRAY__STRUCT_HPP_
