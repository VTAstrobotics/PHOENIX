// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_babel_fish_test_msgs:msg/TestSubArray.idl
// generated code does not contain a copyright notice
#include "ros_babel_fish_test_msgs/msg/detail/test_sub_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `strings`
#include "rosidl_runtime_c/string_functions.h"
// Member `times`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ros_babel_fish_test_msgs__msg__TestSubArray__init(ros_babel_fish_test_msgs__msg__TestSubArray * msg)
{
  if (!msg) {
    return false;
  }
  // ints
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->ints, 0)) {
    ros_babel_fish_test_msgs__msg__TestSubArray__fini(msg);
    return false;
  }
  // strings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->strings, 0)) {
    ros_babel_fish_test_msgs__msg__TestSubArray__fini(msg);
    return false;
  }
  // times
  for (size_t i = 0; i < 42; ++i) {
    if (!builtin_interfaces__msg__Time__init(&msg->times[i])) {
      ros_babel_fish_test_msgs__msg__TestSubArray__fini(msg);
      return false;
    }
  }
  return true;
}

void
ros_babel_fish_test_msgs__msg__TestSubArray__fini(ros_babel_fish_test_msgs__msg__TestSubArray * msg)
{
  if (!msg) {
    return;
  }
  // ints
  rosidl_runtime_c__int32__Sequence__fini(&msg->ints);
  // strings
  rosidl_runtime_c__String__Sequence__fini(&msg->strings);
  // times
  for (size_t i = 0; i < 42; ++i) {
    builtin_interfaces__msg__Time__fini(&msg->times[i]);
  }
}

bool
ros_babel_fish_test_msgs__msg__TestSubArray__are_equal(const ros_babel_fish_test_msgs__msg__TestSubArray * lhs, const ros_babel_fish_test_msgs__msg__TestSubArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ints
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->ints), &(rhs->ints)))
  {
    return false;
  }
  // strings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->strings), &(rhs->strings)))
  {
    return false;
  }
  // times
  for (size_t i = 0; i < 42; ++i) {
    if (!builtin_interfaces__msg__Time__are_equal(
        &(lhs->times[i]), &(rhs->times[i])))
    {
      return false;
    }
  }
  return true;
}

bool
ros_babel_fish_test_msgs__msg__TestSubArray__copy(
  const ros_babel_fish_test_msgs__msg__TestSubArray * input,
  ros_babel_fish_test_msgs__msg__TestSubArray * output)
{
  if (!input || !output) {
    return false;
  }
  // ints
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->ints), &(output->ints)))
  {
    return false;
  }
  // strings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->strings), &(output->strings)))
  {
    return false;
  }
  // times
  for (size_t i = 0; i < 42; ++i) {
    if (!builtin_interfaces__msg__Time__copy(
        &(input->times[i]), &(output->times[i])))
    {
      return false;
    }
  }
  return true;
}

ros_babel_fish_test_msgs__msg__TestSubArray *
ros_babel_fish_test_msgs__msg__TestSubArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_babel_fish_test_msgs__msg__TestSubArray * msg = (ros_babel_fish_test_msgs__msg__TestSubArray *)allocator.allocate(sizeof(ros_babel_fish_test_msgs__msg__TestSubArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_babel_fish_test_msgs__msg__TestSubArray));
  bool success = ros_babel_fish_test_msgs__msg__TestSubArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_babel_fish_test_msgs__msg__TestSubArray__destroy(ros_babel_fish_test_msgs__msg__TestSubArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_babel_fish_test_msgs__msg__TestSubArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__init(ros_babel_fish_test_msgs__msg__TestSubArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_babel_fish_test_msgs__msg__TestSubArray * data = NULL;

  if (size) {
    data = (ros_babel_fish_test_msgs__msg__TestSubArray *)allocator.zero_allocate(size, sizeof(ros_babel_fish_test_msgs__msg__TestSubArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_babel_fish_test_msgs__msg__TestSubArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_babel_fish_test_msgs__msg__TestSubArray__fini(&data[i - 1]);
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
ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__fini(ros_babel_fish_test_msgs__msg__TestSubArray__Sequence * array)
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
      ros_babel_fish_test_msgs__msg__TestSubArray__fini(&array->data[i]);
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

ros_babel_fish_test_msgs__msg__TestSubArray__Sequence *
ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_babel_fish_test_msgs__msg__TestSubArray__Sequence * array = (ros_babel_fish_test_msgs__msg__TestSubArray__Sequence *)allocator.allocate(sizeof(ros_babel_fish_test_msgs__msg__TestSubArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__destroy(ros_babel_fish_test_msgs__msg__TestSubArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__are_equal(const ros_babel_fish_test_msgs__msg__TestSubArray__Sequence * lhs, const ros_babel_fish_test_msgs__msg__TestSubArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_babel_fish_test_msgs__msg__TestSubArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_babel_fish_test_msgs__msg__TestSubArray__Sequence__copy(
  const ros_babel_fish_test_msgs__msg__TestSubArray__Sequence * input,
  ros_babel_fish_test_msgs__msg__TestSubArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_babel_fish_test_msgs__msg__TestSubArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_babel_fish_test_msgs__msg__TestSubArray * data =
      (ros_babel_fish_test_msgs__msg__TestSubArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_babel_fish_test_msgs__msg__TestSubArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_babel_fish_test_msgs__msg__TestSubArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_babel_fish_test_msgs__msg__TestSubArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
