// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from controls_msgs:msg/Uart.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__UART__FUNCTIONS_H_
#define CONTROLS_MSGS__MSG__DETAIL__UART__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "controls_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "controls_msgs/msg/detail/uart__struct.h"

/// Initialize msg/Uart message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * controls_msgs__msg__Uart
 * )) before or use
 * controls_msgs__msg__Uart__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Uart__init(controls_msgs__msg__Uart * msg);

/// Finalize msg/Uart message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
void
controls_msgs__msg__Uart__fini(controls_msgs__msg__Uart * msg);

/// Create msg/Uart message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * controls_msgs__msg__Uart__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
controls_msgs__msg__Uart *
controls_msgs__msg__Uart__create();

/// Destroy msg/Uart message.
/**
 * It calls
 * controls_msgs__msg__Uart__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
void
controls_msgs__msg__Uart__destroy(controls_msgs__msg__Uart * msg);

/// Check for msg/Uart message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Uart__are_equal(const controls_msgs__msg__Uart * lhs, const controls_msgs__msg__Uart * rhs);

/// Copy a msg/Uart message.
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
controls_msgs__msg__Uart__copy(
  const controls_msgs__msg__Uart * input,
  controls_msgs__msg__Uart * output);

/// Initialize array of msg/Uart messages.
/**
 * It allocates the memory for the number of elements and calls
 * controls_msgs__msg__Uart__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Uart__Sequence__init(controls_msgs__msg__Uart__Sequence * array, size_t size);

/// Finalize array of msg/Uart messages.
/**
 * It calls
 * controls_msgs__msg__Uart__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
void
controls_msgs__msg__Uart__Sequence__fini(controls_msgs__msg__Uart__Sequence * array);

/// Create array of msg/Uart messages.
/**
 * It allocates the memory for the array and calls
 * controls_msgs__msg__Uart__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
controls_msgs__msg__Uart__Sequence *
controls_msgs__msg__Uart__Sequence__create(size_t size);

/// Destroy array of msg/Uart messages.
/**
 * It calls
 * controls_msgs__msg__Uart__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
void
controls_msgs__msg__Uart__Sequence__destroy(controls_msgs__msg__Uart__Sequence * array);

/// Check for msg/Uart message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Uart__Sequence__are_equal(const controls_msgs__msg__Uart__Sequence * lhs, const controls_msgs__msg__Uart__Sequence * rhs);

/// Copy an array of msg/Uart messages.
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
controls_msgs__msg__Uart__Sequence__copy(
  const controls_msgs__msg__Uart__Sequence * input,
  controls_msgs__msg__Uart__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CONTROLS_MSGS__MSG__DETAIL__UART__FUNCTIONS_H_
