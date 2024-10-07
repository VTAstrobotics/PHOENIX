// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controls_msgs:msg/Dig.idl
// generated code does not contain a copyright notice
#include "controls_msgs/msg/detail/dig__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
controls_msgs__msg__Dig__init(controls_msgs__msg__Dig * msg)
{
  if (!msg) {
    return false;
  }
  // motors
  // lins
  return true;
}

void
controls_msgs__msg__Dig__fini(controls_msgs__msg__Dig * msg)
{
  if (!msg) {
    return;
  }
  // motors
  // lins
}

bool
controls_msgs__msg__Dig__are_equal(const controls_msgs__msg__Dig * lhs, const controls_msgs__msg__Dig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motors
  if (lhs->motors != rhs->motors) {
    return false;
  }
  // lins
  if (lhs->lins != rhs->lins) {
    return false;
  }
  return true;
}

bool
controls_msgs__msg__Dig__copy(
  const controls_msgs__msg__Dig * input,
  controls_msgs__msg__Dig * output)
{
  if (!input || !output) {
    return false;
  }
  // motors
  output->motors = input->motors;
  // lins
  output->lins = input->lins;
  return true;
}

controls_msgs__msg__Dig *
controls_msgs__msg__Dig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controls_msgs__msg__Dig * msg = (controls_msgs__msg__Dig *)allocator.allocate(sizeof(controls_msgs__msg__Dig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controls_msgs__msg__Dig));
  bool success = controls_msgs__msg__Dig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controls_msgs__msg__Dig__destroy(controls_msgs__msg__Dig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controls_msgs__msg__Dig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controls_msgs__msg__Dig__Sequence__init(controls_msgs__msg__Dig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controls_msgs__msg__Dig * data = NULL;

  if (size) {
    data = (controls_msgs__msg__Dig *)allocator.zero_allocate(size, sizeof(controls_msgs__msg__Dig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controls_msgs__msg__Dig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controls_msgs__msg__Dig__fini(&data[i - 1]);
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
controls_msgs__msg__Dig__Sequence__fini(controls_msgs__msg__Dig__Sequence * array)
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
      controls_msgs__msg__Dig__fini(&array->data[i]);
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

controls_msgs__msg__Dig__Sequence *
controls_msgs__msg__Dig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controls_msgs__msg__Dig__Sequence * array = (controls_msgs__msg__Dig__Sequence *)allocator.allocate(sizeof(controls_msgs__msg__Dig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controls_msgs__msg__Dig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controls_msgs__msg__Dig__Sequence__destroy(controls_msgs__msg__Dig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controls_msgs__msg__Dig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controls_msgs__msg__Dig__Sequence__are_equal(const controls_msgs__msg__Dig__Sequence * lhs, const controls_msgs__msg__Dig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controls_msgs__msg__Dig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controls_msgs__msg__Dig__Sequence__copy(
  const controls_msgs__msg__Dig__Sequence * input,
  controls_msgs__msg__Dig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controls_msgs__msg__Dig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controls_msgs__msg__Dig * data =
      (controls_msgs__msg__Dig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controls_msgs__msg__Dig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controls_msgs__msg__Dig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controls_msgs__msg__Dig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
