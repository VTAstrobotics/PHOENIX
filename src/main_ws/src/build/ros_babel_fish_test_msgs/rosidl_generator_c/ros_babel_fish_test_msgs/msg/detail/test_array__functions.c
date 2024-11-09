// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_babel_fish_test_msgs:msg/TestArray.idl
// generated code does not contain a copyright notice
#include "ros_babel_fish_test_msgs/msg/detail/test_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bools`
// Member `uint8s`
// Member `uint32s`
// Member `uint64s`
// Member `int8s`
// Member `int16s`
// Member `int32s`
// Member `float32s`
// Member `float64s`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `times`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `durations`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `strings`
#include "rosidl_runtime_c/string_functions.h"
// Member `subarrays_fixed`
// Member `subarrays`
#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__functions.h"

bool
ros_babel_fish_test_msgs__msg__TestArray__init(ros_babel_fish_test_msgs__msg__TestArray * msg)
{
  if (!msg) {
    return false;
  }
  // bools
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->bools, 0)) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
    return false;
  }
  // uint8s
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->uint8s, 0)) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
    return false;
  }
  // uint16s
  // uint32s
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->uint32s, 0)) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
    return false;
  }
  // uint64s
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->uint64s, 0)) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
    return false;
  }
  // int8s
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->int8s, 0)) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
    return false;
  }
  // int16s
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->int16s, 0)) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
    return false;
  }
  // int32s
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->int32s, 0)) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
    return false;
  }
  // int64s
  // float32s
  if (!rosidl_runtime_c__float__Sequence__init(&msg->float32s, 0)) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
    return false;
  }
  // float64s
  if (!rosidl_runtime_c__double__Sequence__init(&msg->float64s, 0)) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
    return false;
  }
  // times
  if (!builtin_interfaces__msg__Time__Sequence__init(&msg->times, 0)) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
    return false;
  }
  // durations
  for (size_t i = 0; i < 12; ++i) {
    if (!builtin_interfaces__msg__Duration__init(&msg->durations[i])) {
      ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
      return false;
    }
  }
  // strings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->strings, 0)) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
    return false;
  }
  // subarrays_fixed
  for (size_t i = 0; i < 10; ++i) {
    if (!ros_babel_fish_test_msgs__msg__TestSubArray__init(&msg->subarrays_fixed[i])) {
      ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
      return false;
    }
  }
  // subarrays
  if (!ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__init(&msg->subarrays, 0)) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
    return false;
  }
  return true;
}

void
ros_babel_fish_test_msgs__msg__TestArray__fini(ros_babel_fish_test_msgs__msg__TestArray * msg)
{
  if (!msg) {
    return;
  }
  // bools
  rosidl_runtime_c__boolean__Sequence__fini(&msg->bools);
  // uint8s
  rosidl_runtime_c__uint8__Sequence__fini(&msg->uint8s);
  // uint16s
  // uint32s
  rosidl_runtime_c__uint32__Sequence__fini(&msg->uint32s);
  // uint64s
  rosidl_runtime_c__uint64__Sequence__fini(&msg->uint64s);
  // int8s
  rosidl_runtime_c__int8__Sequence__fini(&msg->int8s);
  // int16s
  rosidl_runtime_c__int16__Sequence__fini(&msg->int16s);
  // int32s
  rosidl_runtime_c__int32__Sequence__fini(&msg->int32s);
  // int64s
  // float32s
  rosidl_runtime_c__float__Sequence__fini(&msg->float32s);
  // float64s
  rosidl_runtime_c__double__Sequence__fini(&msg->float64s);
  // times
  builtin_interfaces__msg__Time__Sequence__fini(&msg->times);
  // durations
  for (size_t i = 0; i < 12; ++i) {
    builtin_interfaces__msg__Duration__fini(&msg->durations[i]);
  }
  // strings
  rosidl_runtime_c__String__Sequence__fini(&msg->strings);
  // subarrays_fixed
  for (size_t i = 0; i < 10; ++i) {
    ros_babel_fish_test_msgs__msg__TestSubArray__fini(&msg->subarrays_fixed[i]);
  }
  // subarrays
  ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__fini(&msg->subarrays);
}

bool
ros_babel_fish_test_msgs__msg__TestArray__are_equal(const ros_babel_fish_test_msgs__msg__TestArray * lhs, const ros_babel_fish_test_msgs__msg__TestArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bools
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->bools), &(rhs->bools)))
  {
    return false;
  }
  // uint8s
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->uint8s), &(rhs->uint8s)))
  {
    return false;
  }
  // uint16s
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->uint16s[i] != rhs->uint16s[i]) {
      return false;
    }
  }
  // uint32s
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->uint32s), &(rhs->uint32s)))
  {
    return false;
  }
  // uint64s
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->uint64s), &(rhs->uint64s)))
  {
    return false;
  }
  // int8s
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->int8s), &(rhs->int8s)))
  {
    return false;
  }
  // int16s
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->int16s), &(rhs->int16s)))
  {
    return false;
  }
  // int32s
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->int32s), &(rhs->int32s)))
  {
    return false;
  }
  // int64s
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->int64s[i] != rhs->int64s[i]) {
      return false;
    }
  }
  // float32s
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->float32s), &(rhs->float32s)))
  {
    return false;
  }
  // float64s
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->float64s), &(rhs->float64s)))
  {
    return false;
  }
  // times
  if (!builtin_interfaces__msg__Time__Sequence__are_equal(
      &(lhs->times), &(rhs->times)))
  {
    return false;
  }
  // durations
  for (size_t i = 0; i < 12; ++i) {
    if (!builtin_interfaces__msg__Duration__are_equal(
        &(lhs->durations[i]), &(rhs->durations[i])))
    {
      return false;
    }
  }
  // strings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->strings), &(rhs->strings)))
  {
    return false;
  }
  // subarrays_fixed
  for (size_t i = 0; i < 10; ++i) {
    if (!ros_babel_fish_test_msgs__msg__TestSubArray__are_equal(
        &(lhs->subarrays_fixed[i]), &(rhs->subarrays_fixed[i])))
    {
      return false;
    }
  }
  // subarrays
  if (!ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__are_equal(
      &(lhs->subarrays), &(rhs->subarrays)))
  {
    return false;
  }
  return true;
}

bool
ros_babel_fish_test_msgs__msg__TestArray__copy(
  const ros_babel_fish_test_msgs__msg__TestArray * input,
  ros_babel_fish_test_msgs__msg__TestArray * output)
{
  if (!input || !output) {
    return false;
  }
  // bools
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->bools), &(output->bools)))
  {
    return false;
  }
  // uint8s
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->uint8s), &(output->uint8s)))
  {
    return false;
  }
  // uint16s
  for (size_t i = 0; i < 32; ++i) {
    output->uint16s[i] = input->uint16s[i];
  }
  // uint32s
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->uint32s), &(output->uint32s)))
  {
    return false;
  }
  // uint64s
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->uint64s), &(output->uint64s)))
  {
    return false;
  }
  // int8s
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->int8s), &(output->int8s)))
  {
    return false;
  }
  // int16s
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->int16s), &(output->int16s)))
  {
    return false;
  }
  // int32s
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->int32s), &(output->int32s)))
  {
    return false;
  }
  // int64s
  for (size_t i = 0; i < 32; ++i) {
    output->int64s[i] = input->int64s[i];
  }
  // float32s
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->float32s), &(output->float32s)))
  {
    return false;
  }
  // float64s
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->float64s), &(output->float64s)))
  {
    return false;
  }
  // times
  if (!builtin_interfaces__msg__Time__Sequence__copy(
      &(input->times), &(output->times)))
  {
    return false;
  }
  // durations
  for (size_t i = 0; i < 12; ++i) {
    if (!builtin_interfaces__msg__Duration__copy(
        &(input->durations[i]), &(output->durations[i])))
    {
      return false;
    }
  }
  // strings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->strings), &(output->strings)))
  {
    return false;
  }
  // subarrays_fixed
  for (size_t i = 0; i < 10; ++i) {
    if (!ros_babel_fish_test_msgs__msg__TestSubArray__copy(
        &(input->subarrays_fixed[i]), &(output->subarrays_fixed[i])))
    {
      return false;
    }
  }
  // subarrays
  if (!ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__copy(
      &(input->subarrays), &(output->subarrays)))
  {
    return false;
  }
  return true;
}

ros_babel_fish_test_msgs__msg__TestArray *
ros_babel_fish_test_msgs__msg__TestArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_babel_fish_test_msgs__msg__TestArray * msg = (ros_babel_fish_test_msgs__msg__TestArray *)allocator.allocate(sizeof(ros_babel_fish_test_msgs__msg__TestArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_babel_fish_test_msgs__msg__TestArray));
  bool success = ros_babel_fish_test_msgs__msg__TestArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_babel_fish_test_msgs__msg__TestArray__destroy(ros_babel_fish_test_msgs__msg__TestArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_babel_fish_test_msgs__msg__TestArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_babel_fish_test_msgs__msg__TestArray__Sequence__init(ros_babel_fish_test_msgs__msg__TestArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_babel_fish_test_msgs__msg__TestArray * data = NULL;

  if (size) {
    data = (ros_babel_fish_test_msgs__msg__TestArray *)allocator.zero_allocate(size, sizeof(ros_babel_fish_test_msgs__msg__TestArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_babel_fish_test_msgs__msg__TestArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_babel_fish_test_msgs__msg__TestArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_babel_fish_test_msgs__msg__TestArray__Sequence__fini(ros_babel_fish_test_msgs__msg__TestArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_babel_fish_test_msgs__msg__TestArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_babel_fish_test_msgs__msg__TestArray__Sequence *
ros_babel_fish_test_msgs__msg__TestArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_babel_fish_test_msgs__msg__TestArray__Sequence * array = (ros_babel_fish_test_msgs__msg__TestArray__Sequence *)allocator.allocate(sizeof(ros_babel_fish_test_msgs__msg__TestArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_babel_fish_test_msgs__msg__TestArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_babel_fish_test_msgs__msg__TestArray__Sequence__destroy(ros_babel_fish_test_msgs__msg__TestArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_babel_fish_test_msgs__msg__TestArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_babel_fish_test_msgs__msg__TestArray__Sequence__are_equal(const ros_babel_fish_test_msgs__msg__TestArray__Sequence * lhs, const ros_babel_fish_test_msgs__msg__TestArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_babel_fish_test_msgs__msg__TestArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_babel_fish_test_msgs__msg__TestArray__Sequence__copy(
  const ros_babel_fish_test_msgs__msg__TestArray__Sequence * input,
  ros_babel_fish_test_msgs__msg__TestArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_babel_fish_test_msgs__msg__TestArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_babel_fish_test_msgs__msg__TestArray * data =
      (ros_babel_fish_test_msgs__msg__TestArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_babel_fish_test_msgs__msg__TestArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_babel_fish_test_msgs__msg__TestArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_babel_fish_test_msgs__msg__TestArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
