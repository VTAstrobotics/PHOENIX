// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_babel_fish_test_msgs:msg/TestArray.idl
// generated code does not contain a copyright notice
#include "ros_babel_fish_test_msgs/msg/detail/test_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_babel_fish_test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_babel_fish_test_msgs/msg/detail/test_array__struct.h"
#include "ros_babel_fish_test_msgs/msg/detail/test_array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/duration__functions.h"  // durations
#include "builtin_interfaces/msg/detail/time__functions.h"  // times
#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__functions.h"  // subarrays, subarrays_fixed
#include "rosidl_runtime_c/primitives_sequence.h"  // bools, float32s, float64s, int16s, int32s, int8s, uint32s, uint64s, uint8s
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // bools, float32s, float64s, int16s, int32s, int8s, uint32s, uint64s, uint8s
#include "rosidl_runtime_c/string.h"  // strings
#include "rosidl_runtime_c/string_functions.h"  // strings

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_babel_fish_test_msgs
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_babel_fish_test_msgs
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_babel_fish_test_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_babel_fish_test_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_babel_fish_test_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_babel_fish_test_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_ros_babel_fish_test_msgs__msg__TestSubArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_babel_fish_test_msgs__msg__TestSubArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_babel_fish_test_msgs, msg, TestSubArray)();


using _TestArray__ros_msg_type = ros_babel_fish_test_msgs__msg__TestArray;

static bool _TestArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TestArray__ros_msg_type * ros_message = static_cast<const _TestArray__ros_msg_type *>(untyped_ros_message);
  // Field name: bools
  {
    size_t size = ros_message->bools.size;
    auto array_ptr = ros_message->bools.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint8s
  {
    size_t size = ros_message->uint8s.size;
    auto array_ptr = ros_message->uint8s.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint16s
  {
    size_t size = 32;
    auto array_ptr = ros_message->uint16s;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint32s
  {
    size_t size = ros_message->uint32s.size;
    auto array_ptr = ros_message->uint32s.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint64s
  {
    size_t size = ros_message->uint64s.size;
    auto array_ptr = ros_message->uint64s.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int8s
  {
    size_t size = ros_message->int8s.size;
    auto array_ptr = ros_message->int8s.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int16s
  {
    size_t size = ros_message->int16s.size;
    auto array_ptr = ros_message->int16s.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int32s
  {
    size_t size = ros_message->int32s.size;
    auto array_ptr = ros_message->int32s.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int64s
  {
    size_t size = 32;
    auto array_ptr = ros_message->int64s;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float32s
  {
    size_t size = ros_message->float32s.size;
    auto array_ptr = ros_message->float32s.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float64s
  {
    size_t size = ros_message->float64s.size;
    auto array_ptr = ros_message->float64s.data;
    if (size > 16) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: times
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    size_t size = ros_message->times.size;
    auto array_ptr = ros_message->times.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: durations
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    size_t size = 12;
    auto array_ptr = ros_message->durations;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: strings
  {
    size_t size = ros_message->strings.size;
    auto array_ptr = ros_message->strings.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: subarrays_fixed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros_babel_fish_test_msgs, msg, TestSubArray
      )()->data);
    size_t size = 10;
    auto array_ptr = ros_message->subarrays_fixed;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: subarrays
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros_babel_fish_test_msgs, msg, TestSubArray
      )()->data);
    size_t size = ros_message->subarrays.size;
    auto array_ptr = ros_message->subarrays.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _TestArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TestArray__ros_msg_type * ros_message = static_cast<_TestArray__ros_msg_type *>(untyped_ros_message);
  // Field name: bools
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bools.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->bools);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->bools, size)) {
      fprintf(stderr, "failed to create array for field 'bools'");
      return false;
    }
    auto array_ptr = ros_message->bools.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: uint8s
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uint8s.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->uint8s);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->uint8s, size)) {
      fprintf(stderr, "failed to create array for field 'uint8s'");
      return false;
    }
    auto array_ptr = ros_message->uint8s.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint16s
  {
    size_t size = 32;
    auto array_ptr = ros_message->uint16s;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint32s
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uint32s.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->uint32s);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->uint32s, size)) {
      fprintf(stderr, "failed to create array for field 'uint32s'");
      return false;
    }
    auto array_ptr = ros_message->uint32s.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint64s
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uint64s.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->uint64s);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->uint64s, size)) {
      fprintf(stderr, "failed to create array for field 'uint64s'");
      return false;
    }
    auto array_ptr = ros_message->uint64s.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int8s
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int8s.data) {
      rosidl_runtime_c__int8__Sequence__fini(&ros_message->int8s);
    }
    if (!rosidl_runtime_c__int8__Sequence__init(&ros_message->int8s, size)) {
      fprintf(stderr, "failed to create array for field 'int8s'");
      return false;
    }
    auto array_ptr = ros_message->int8s.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int16s
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int16s.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->int16s);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->int16s, size)) {
      fprintf(stderr, "failed to create array for field 'int16s'");
      return false;
    }
    auto array_ptr = ros_message->int16s.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int32s
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int32s.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->int32s);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->int32s, size)) {
      fprintf(stderr, "failed to create array for field 'int32s'");
      return false;
    }
    auto array_ptr = ros_message->int32s.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int64s
  {
    size_t size = 32;
    auto array_ptr = ros_message->int64s;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float32s
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->float32s.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->float32s);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->float32s, size)) {
      fprintf(stderr, "failed to create array for field 'float32s'");
      return false;
    }
    auto array_ptr = ros_message->float32s.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float64s
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->float64s.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->float64s);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->float64s, size)) {
      fprintf(stderr, "failed to create array for field 'float64s'");
      return false;
    }
    auto array_ptr = ros_message->float64s.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: times
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->times.data) {
      builtin_interfaces__msg__Time__Sequence__fini(&ros_message->times);
    }
    if (!builtin_interfaces__msg__Time__Sequence__init(&ros_message->times, size)) {
      fprintf(stderr, "failed to create array for field 'times'");
      return false;
    }
    auto array_ptr = ros_message->times.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: durations
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    size_t size = 12;
    auto array_ptr = ros_message->durations;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: strings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->strings.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->strings);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->strings, size)) {
      fprintf(stderr, "failed to create array for field 'strings'");
      return false;
    }
    auto array_ptr = ros_message->strings.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'strings'\n");
        return false;
      }
    }
  }

  // Field name: subarrays_fixed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros_babel_fish_test_msgs, msg, TestSubArray
      )()->data);
    size_t size = 10;
    auto array_ptr = ros_message->subarrays_fixed;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: subarrays
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros_babel_fish_test_msgs, msg, TestSubArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->subarrays.data) {
      ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__fini(&ros_message->subarrays);
    }
    if (!ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__init(&ros_message->subarrays, size)) {
      fprintf(stderr, "failed to create array for field 'subarrays'");
      return false;
    }
    auto array_ptr = ros_message->subarrays.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_babel_fish_test_msgs
size_t get_serialized_size_ros_babel_fish_test_msgs__msg__TestArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TestArray__ros_msg_type * ros_message = static_cast<const _TestArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bools
  {
    size_t array_size = ros_message->bools.size;
    auto array_ptr = ros_message->bools.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8s
  {
    size_t array_size = ros_message->uint8s.size;
    auto array_ptr = ros_message->uint8s.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint16s
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->uint16s;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint32s
  {
    size_t array_size = ros_message->uint32s.size;
    auto array_ptr = ros_message->uint32s.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint64s
  {
    size_t array_size = ros_message->uint64s.size;
    auto array_ptr = ros_message->uint64s.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8s
  {
    size_t array_size = ros_message->int8s.size;
    auto array_ptr = ros_message->int8s.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16s
  {
    size_t array_size = ros_message->int16s.size;
    auto array_ptr = ros_message->int16s.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int32s
  {
    size_t array_size = ros_message->int32s.size;
    auto array_ptr = ros_message->int32s.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int64s
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->int64s;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float32s
  {
    size_t array_size = ros_message->float32s.size;
    auto array_ptr = ros_message->float32s.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float64s
  {
    size_t array_size = ros_message->float64s.size;
    auto array_ptr = ros_message->float64s.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name times
  {
    size_t array_size = ros_message->times.size;
    auto array_ptr = ros_message->times.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name durations
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->durations;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name strings
  {
    size_t array_size = ros_message->strings.size;
    auto array_ptr = ros_message->strings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name subarrays_fixed
  {
    size_t array_size = 10;
    auto array_ptr = ros_message->subarrays_fixed;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros_babel_fish_test_msgs__msg__TestSubArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name subarrays
  {
    size_t array_size = ros_message->subarrays.size;
    auto array_ptr = ros_message->subarrays.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros_babel_fish_test_msgs__msg__TestSubArray(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TestArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_babel_fish_test_msgs__msg__TestArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_babel_fish_test_msgs
size_t max_serialized_size_ros_babel_fish_test_msgs__msg__TestArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: bools
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8s
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint16s
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: uint32s
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uint64s
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: int8s
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int16s
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: int32s
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int64s
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: float32s
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float64s
  {
    size_t array_size = 16;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: times
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: durations
  {
    size_t array_size = 12;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: strings
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: subarrays_fixed
  {
    size_t array_size = 10;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_babel_fish_test_msgs__msg__TestSubArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: subarrays
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_babel_fish_test_msgs__msg__TestSubArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_babel_fish_test_msgs__msg__TestArray;
    is_plain =
      (
      offsetof(DataType, subarrays) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TestArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_babel_fish_test_msgs__msg__TestArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TestArray = {
  "ros_babel_fish_test_msgs::msg",
  "TestArray",
  _TestArray__cdr_serialize,
  _TestArray__cdr_deserialize,
  _TestArray__get_serialized_size,
  _TestArray__max_serialized_size
};

static rosidl_message_type_support_t _TestArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TestArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_babel_fish_test_msgs, msg, TestArray)() {
  return &_TestArray__type_support;
}

#if defined(__cplusplus)
}
#endif
