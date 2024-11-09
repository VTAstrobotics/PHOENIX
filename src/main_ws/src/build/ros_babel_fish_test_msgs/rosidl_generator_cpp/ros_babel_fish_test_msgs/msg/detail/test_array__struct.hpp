// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_babel_fish_test_msgs:msg/TestArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__STRUCT_HPP_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__STRUCT_HPP_

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
// Member 'durations'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'subarrays_fixed'
// Member 'subarrays'
#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_babel_fish_test_msgs__msg__TestArray __attribute__((deprecated))
#else
# define DEPRECATED__ros_babel_fish_test_msgs__msg__TestArray __declspec(deprecated)
#endif

namespace ros_babel_fish_test_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestArray_
{
  using Type = TestArray_<ContainerAllocator>;

  explicit TestArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint16_t, 32>::iterator, uint16_t>(this->uint16s.begin(), this->uint16s.end(), 0);
      std::fill<typename std::array<int64_t, 32>::iterator, int64_t>(this->int64s.begin(), this->int64s.end(), 0ll);
      this->durations.fill(builtin_interfaces::msg::Duration_<ContainerAllocator>{_init});
      this->subarrays_fixed.fill(ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>{_init});
    }
  }

  explicit TestArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uint16s(_alloc),
    int64s(_alloc),
    durations(_alloc),
    subarrays_fixed(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint16_t, 32>::iterator, uint16_t>(this->uint16s.begin(), this->uint16s.end(), 0);
      std::fill<typename std::array<int64_t, 32>::iterator, int64_t>(this->int64s.begin(), this->int64s.end(), 0ll);
      this->durations.fill(builtin_interfaces::msg::Duration_<ContainerAllocator>{_alloc, _init});
      this->subarrays_fixed.fill(ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _bools_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _bools_type bools;
  using _uint8s_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _uint8s_type uint8s;
  using _uint16s_type =
    std::array<uint16_t, 32>;
  _uint16s_type uint16s;
  using _uint32s_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _uint32s_type uint32s;
  using _uint64s_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _uint64s_type uint64s;
  using _int8s_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _int8s_type int8s;
  using _int16s_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _int16s_type int16s;
  using _int32s_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _int32s_type int32s;
  using _int64s_type =
    std::array<int64_t, 32>;
  _int64s_type int64s;
  using _float32s_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _float32s_type float32s;
  using _float64s_type =
    rosidl_runtime_cpp::BoundedVector<double, 16, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _float64s_type float64s;
  using _times_type =
    std::vector<builtin_interfaces::msg::Time_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<builtin_interfaces::msg::Time_<ContainerAllocator>>>;
  _times_type times;
  using _durations_type =
    std::array<builtin_interfaces::msg::Duration_<ContainerAllocator>, 12>;
  _durations_type durations;
  using _strings_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _strings_type strings;
  using _subarrays_fixed_type =
    std::array<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>, 10>;
  _subarrays_fixed_type subarrays_fixed;
  using _subarrays_type =
    std::vector<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>>>;
  _subarrays_type subarrays;

  // setters for named parameter idiom
  Type & set__bools(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->bools = _arg;
    return *this;
  }
  Type & set__uint8s(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->uint8s = _arg;
    return *this;
  }
  Type & set__uint16s(
    const std::array<uint16_t, 32> & _arg)
  {
    this->uint16s = _arg;
    return *this;
  }
  Type & set__uint32s(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->uint32s = _arg;
    return *this;
  }
  Type & set__uint64s(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->uint64s = _arg;
    return *this;
  }
  Type & set__int8s(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->int8s = _arg;
    return *this;
  }
  Type & set__int16s(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->int16s = _arg;
    return *this;
  }
  Type & set__int32s(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->int32s = _arg;
    return *this;
  }
  Type & set__int64s(
    const std::array<int64_t, 32> & _arg)
  {
    this->int64s = _arg;
    return *this;
  }
  Type & set__float32s(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->float32s = _arg;
    return *this;
  }
  Type & set__float64s(
    const rosidl_runtime_cpp::BoundedVector<double, 16, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->float64s = _arg;
    return *this;
  }
  Type & set__times(
    const std::vector<builtin_interfaces::msg::Time_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<builtin_interfaces::msg::Time_<ContainerAllocator>>> & _arg)
  {
    this->times = _arg;
    return *this;
  }
  Type & set__durations(
    const std::array<builtin_interfaces::msg::Duration_<ContainerAllocator>, 12> & _arg)
  {
    this->durations = _arg;
    return *this;
  }
  Type & set__strings(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->strings = _arg;
    return *this;
  }
  Type & set__subarrays_fixed(
    const std::array<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>, 10> & _arg)
  {
    this->subarrays_fixed = _arg;
    return *this;
  }
  Type & set__subarrays(
    const std::vector<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_babel_fish_test_msgs::msg::TestSubArray_<ContainerAllocator>>> & _arg)
  {
    this->subarrays = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_babel_fish_test_msgs::msg::TestArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_babel_fish_test_msgs::msg::TestArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::msg::TestArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_babel_fish_test_msgs::msg::TestArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::msg::TestArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::msg::TestArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_babel_fish_test_msgs::msg::TestArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_babel_fish_test_msgs::msg::TestArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::msg::TestArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_babel_fish_test_msgs::msg::TestArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_babel_fish_test_msgs__msg__TestArray
    std::shared_ptr<ros_babel_fish_test_msgs::msg::TestArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_babel_fish_test_msgs__msg__TestArray
    std::shared_ptr<ros_babel_fish_test_msgs::msg::TestArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestArray_ & other) const
  {
    if (this->bools != other.bools) {
      return false;
    }
    if (this->uint8s != other.uint8s) {
      return false;
    }
    if (this->uint16s != other.uint16s) {
      return false;
    }
    if (this->uint32s != other.uint32s) {
      return false;
    }
    if (this->uint64s != other.uint64s) {
      return false;
    }
    if (this->int8s != other.int8s) {
      return false;
    }
    if (this->int16s != other.int16s) {
      return false;
    }
    if (this->int32s != other.int32s) {
      return false;
    }
    if (this->int64s != other.int64s) {
      return false;
    }
    if (this->float32s != other.float32s) {
      return false;
    }
    if (this->float64s != other.float64s) {
      return false;
    }
    if (this->times != other.times) {
      return false;
    }
    if (this->durations != other.durations) {
      return false;
    }
    if (this->strings != other.strings) {
      return false;
    }
    if (this->subarrays_fixed != other.subarrays_fixed) {
      return false;
    }
    if (this->subarrays != other.subarrays) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestArray_

// alias to use template instance with default allocator
using TestArray =
  ros_babel_fish_test_msgs::msg::TestArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_babel_fish_test_msgs

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__STRUCT_HPP_
