// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_babel_fish_test_msgs:msg/TestMessage.idl
// generated code does not contain a copyright notice
#include "ros_babel_fish_test_msgs/msg/detail/test_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `str`
// Member `bounded_str`
#include "rosidl_runtime_c/string_functions.h"
// Member `t`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `d`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `point_arr`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
ros_babel_fish_test_msgs__msg__TestMessage__init(ros_babel_fish_test_msgs__msg__TestMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_babel_fish_test_msgs__msg__TestMessage__fini(msg);
    return false;
  }
  // b
  // ui8
  // ui16
  // ui32
  // ui64
  // i8
  // i16
  msg->i16 = 256;
  // i32
  // i64
  // f32
  // f64
  // str
  if (!rosidl_runtime_c__String__init(&msg->str)) {
    ros_babel_fish_test_msgs__msg__TestMessage__fini(msg);
    return false;
  }
  // bounded_str
  if (!rosidl_runtime_c__String__init(&msg->bounded_str)) {
    ros_babel_fish_test_msgs__msg__TestMessage__fini(msg);
    return false;
  }
  // t
  if (!builtin_interfaces__msg__Time__init(&msg->t)) {
    ros_babel_fish_test_msgs__msg__TestMessage__fini(msg);
    return false;
  }
  // d
  if (!builtin_interfaces__msg__Duration__init(&msg->d)) {
    ros_babel_fish_test_msgs__msg__TestMessage__fini(msg);
    return false;
  }
  // point_arr
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->point_arr, 0)) {
    ros_babel_fish_test_msgs__msg__TestMessage__fini(msg);
    return false;
  }
  return true;
}

void
ros_babel_fish_test_msgs__msg__TestMessage__fini(ros_babel_fish_test_msgs__msg__TestMessage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // b
  // ui8
  // ui16
  // ui32
  // ui64
  // i8
  // i16
  // i32
  // i64
  // f32
  // f64
  // str
  rosidl_runtime_c__String__fini(&msg->str);
  // bounded_str
  rosidl_runtime_c__String__fini(&msg->bounded_str);
  // t
  builtin_interfaces__msg__Time__fini(&msg->t);
  // d
  builtin_interfaces__msg__Duration__fini(&msg->d);
  // point_arr
  geometry_msgs__msg__Point__Sequence__fini(&msg->point_arr);
}

bool
ros_babel_fish_test_msgs__msg__TestMessage__are_equal(const ros_babel_fish_test_msgs__msg__TestMessage * lhs, const ros_babel_fish_test_msgs__msg__TestMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // ui8
  if (lhs->ui8 != rhs->ui8) {
    return false;
  }
  // ui16
  if (lhs->ui16 != rhs->ui16) {
    return false;
  }
  // ui32
  if (lhs->ui32 != rhs->ui32) {
    return false;
  }
  // ui64
  if (lhs->ui64 != rhs->ui64) {
    return false;
  }
  // i8
  if (lhs->i8 != rhs->i8) {
    return false;
  }
  // i16
  if (lhs->i16 != rhs->i16) {
    return false;
  }
  // i32
  if (lhs->i32 != rhs->i32) {
    return false;
  }
  // i64
  if (lhs->i64 != rhs->i64) {
    return false;
  }
  // f32
  if (lhs->f32 != rhs->f32) {
    return false;
  }
  // f64
  if (lhs->f64 != rhs->f64) {
    return false;
  }
  // str
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->str), &(rhs->str)))
  {
    return false;
  }
  // bounded_str
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bounded_str), &(rhs->bounded_str)))
  {
    return false;
  }
  // t
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->t), &(rhs->t)))
  {
    return false;
  }
  // d
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->d), &(rhs->d)))
  {
    return false;
  }
  // point_arr
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->point_arr), &(rhs->point_arr)))
  {
    return false;
  }
  return true;
}

bool
ros_babel_fish_test_msgs__msg__TestMessage__copy(
  const ros_babel_fish_test_msgs__msg__TestMessage * input,
  ros_babel_fish_test_msgs__msg__TestMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // b
  output->b = input->b;
  // ui8
  output->ui8 = input->ui8;
  // ui16
  output->ui16 = input->ui16;
  // ui32
  output->ui32 = input->ui32;
  // ui64
  output->ui64 = input->ui64;
  // i8
  output->i8 = input->i8;
  // i16
  output->i16 = input->i16;
  // i32
  output->i32 = input->i32;
  // i64
  output->i64 = input->i64;
  // f32
  output->f32 = input->f32;
  // f64
  output->f64 = input->f64;
  // str
  if (!rosidl_runtime_c__String__copy(
      &(input->str), &(output->str)))
  {
    return false;
  }
  // bounded_str
  if (!rosidl_runtime_c__String__copy(
      &(input->bounded_str), &(output->bounded_str)))
  {
    return false;
  }
  // t
  if (!builtin_interfaces__msg__Time__copy(
      &(input->t), &(output->t)))
  {
    return false;
  }
  // d
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->d), &(output->d)))
  {
    return false;
  }
  // point_arr
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->point_arr), &(output->point_arr)))
  {
    return false;
  }
  return true;
}

ros_babel_fish_test_msgs__msg__TestMessage *
ros_babel_fish_test_msgs__msg__TestMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_babel_fish_test_msgs__msg__TestMessage * msg = (ros_babel_fish_test_msgs__msg__TestMessage *)allocator.allocate(sizeof(ros_babel_fish_test_msgs__msg__TestMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_babel_fish_test_msgs__msg__TestMessage));
  bool success = ros_babel_fish_test_msgs__msg__TestMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_babel_fish_test_msgs__msg__TestMessage__destroy(ros_babel_fish_test_msgs__msg__TestMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_babel_fish_test_msgs__msg__TestMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_babel_fish_test_msgs__msg__TestMessage__Sequence__init(ros_babel_fish_test_msgs__msg__TestMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_babel_fish_test_msgs__msg__TestMessage * data = NULL;

  if (size) {
    data = (ros_babel_fish_test_msgs__msg__TestMessage *)allocator.zero_allocate(size, sizeof(ros_babel_fish_test_msgs__msg__TestMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_babel_fish_test_msgs__msg__TestMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_babel_fish_test_msgs__msg__TestMessage__fini(&data[i - 1]);
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
ros_babel_fish_test_msgs__msg__TestMessage__Sequence__fini(ros_babel_fish_test_msgs__msg__TestMessage__Sequence * array)
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
      ros_babel_fish_test_msgs__msg__TestMessage__fini(&array->data[i]);
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

ros_babel_fish_test_msgs__msg__TestMessage__Sequence *
ros_babel_fish_test_msgs__msg__TestMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_babel_fish_test_msgs__msg__TestMessage__Sequence * array = (ros_babel_fish_test_msgs__msg__TestMessage__Sequence *)allocator.allocate(sizeof(ros_babel_fish_test_msgs__msg__TestMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_babel_fish_test_msgs__msg__TestMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_babel_fish_test_msgs__msg__TestMessage__Sequence__destroy(ros_babel_fish_test_msgs__msg__TestMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_babel_fish_test_msgs__msg__TestMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_babel_fish_test_msgs__msg__TestMessage__Sequence__are_equal(const ros_babel_fish_test_msgs__msg__TestMessage__Sequence * lhs, const ros_babel_fish_test_msgs__msg__TestMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_babel_fish_test_msgs__msg__TestMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_babel_fish_test_msgs__msg__TestMessage__Sequence__copy(
  const ros_babel_fish_test_msgs__msg__TestMessage__Sequence * input,
  ros_babel_fish_test_msgs__msg__TestMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_babel_fish_test_msgs__msg__TestMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_babel_fish_test_msgs__msg__TestMessage * data =
      (ros_babel_fish_test_msgs__msg__TestMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_babel_fish_test_msgs__msg__TestMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_babel_fish_test_msgs__msg__TestMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_babel_fish_test_msgs__msg__TestMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
