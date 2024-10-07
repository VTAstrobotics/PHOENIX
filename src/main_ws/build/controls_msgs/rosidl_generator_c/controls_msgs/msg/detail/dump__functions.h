// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from controls_msgs:msg/Dump.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__DUMP__FUNCTIONS_H_
#define CONTROLS_MSGS__MSG__DETAIL__DUMP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "controls_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "controls_msgs/msg/detail/dump__struct.h"

/// Initialize msg/Dump message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * controls_msgs__msg__Dump
 * )) before or use
 * controls_msgs__msg__Dump__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Dump__init(controls_msgs__msg__Dump * msg);

/// Finalize msg/Dump message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
void
controls_msgs__msg__Dump__fini(controls_msgs__msg__Dump * msg);

/// Create msg/Dump message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * controls_msgs__msg__Dump__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
controls_msgs__msg__Dump *
controls_msgs__msg__Dump__create();

/// Destroy msg/Dump message.
/**
 * It calls
 * controls_msgs__msg__Dump__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
void
controls_msgs__msg__Dump__destroy(controls_msgs__msg__Dump * msg);

/// Check for msg/Dump message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Dump__are_equal(const controls_msgs__msg__Dump * lhs, const controls_msgs__msg__Dump * rhs);

/// Copy a msg/Dump message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Dump__copy(
  const controls_msgs__msg__Dump * input,
  controls_msgs__msg__Dump * output);

/// Initialize array of msg/Dump messages.
/**
 * It allocates the memory for the number of elements and calls
 * controls_msgs__msg__Dump__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Dump__Sequence__init(controls_msgs__msg__Dump__Sequence * array, size_t size);

/// Finalize array of msg/Dump messages.
/**
 * It calls
 * controls_msgs__msg__Dump__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
void
controls_msgs__msg__Dump__Sequence__fini(controls_msgs__msg__Dump__Sequence * array);

/// Create array of msg/Dump messages.
/**
 * It allocates the memory for the array and calls
 * controls_msgs__msg__Dump__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
controls_msgs__msg__Dump__Sequence *
controls_msgs__msg__Dump__Sequence__create(size_t size);

/// Destroy array of msg/Dump messages.
/**
 * It calls
 * controls_msgs__msg__Dump__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
void
controls_msgs__msg__Dump__Sequence__destroy(controls_msgs__msg__Dump__Sequence * array);

/// Check for msg/Dump message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Dump__Sequence__are_equal(const controls_msgs__msg__Dump__Sequence * lhs, const controls_msgs__msg__Dump__Sequence * rhs);

/// Copy an array of msg/Dump messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Dump__Sequence__copy(
  const controls_msgs__msg__Dump__Sequence * input,
  controls_msgs__msg__Dump__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CONTROLS_MSGS__MSG__DETAIL__DUMP__FUNCTIONS_H_
