// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from controls_msgs:msg/Drivetrain.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__DRIVETRAIN__FUNCTIONS_H_
#define CONTROLS_MSGS__MSG__DETAIL__DRIVETRAIN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "controls_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "controls_msgs/msg/detail/drivetrain__struct.h"

/// Initialize msg/Drivetrain message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * controls_msgs__msg__Drivetrain
 * )) before or use
 * controls_msgs__msg__Drivetrain__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Drivetrain__init(controls_msgs__msg__Drivetrain * msg);

/// Finalize msg/Drivetrain message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
void
controls_msgs__msg__Drivetrain__fini(controls_msgs__msg__Drivetrain * msg);

/// Create msg/Drivetrain message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * controls_msgs__msg__Drivetrain__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
controls_msgs__msg__Drivetrain *
controls_msgs__msg__Drivetrain__create();

/// Destroy msg/Drivetrain message.
/**
 * It calls
 * controls_msgs__msg__Drivetrain__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
void
controls_msgs__msg__Drivetrain__destroy(controls_msgs__msg__Drivetrain * msg);

/// Check for msg/Drivetrain message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Drivetrain__are_equal(const controls_msgs__msg__Drivetrain * lhs, const controls_msgs__msg__Drivetrain * rhs);

/// Copy a msg/Drivetrain message.
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
controls_msgs__msg__Drivetrain__copy(
  const controls_msgs__msg__Drivetrain * input,
  controls_msgs__msg__Drivetrain * output);

/// Initialize array of msg/Drivetrain messages.
/**
 * It allocates the memory for the number of elements and calls
 * controls_msgs__msg__Drivetrain__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Drivetrain__Sequence__init(controls_msgs__msg__Drivetrain__Sequence * array, size_t size);

/// Finalize array of msg/Drivetrain messages.
/**
 * It calls
 * controls_msgs__msg__Drivetrain__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
void
controls_msgs__msg__Drivetrain__Sequence__fini(controls_msgs__msg__Drivetrain__Sequence * array);

/// Create array of msg/Drivetrain messages.
/**
 * It allocates the memory for the array and calls
 * controls_msgs__msg__Drivetrain__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
controls_msgs__msg__Drivetrain__Sequence *
controls_msgs__msg__Drivetrain__Sequence__create(size_t size);

/// Destroy array of msg/Drivetrain messages.
/**
 * It calls
 * controls_msgs__msg__Drivetrain__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
void
controls_msgs__msg__Drivetrain__Sequence__destroy(controls_msgs__msg__Drivetrain__Sequence * array);

/// Check for msg/Drivetrain message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_controls_msgs
bool
controls_msgs__msg__Drivetrain__Sequence__are_equal(const controls_msgs__msg__Drivetrain__Sequence * lhs, const controls_msgs__msg__Drivetrain__Sequence * rhs);

/// Copy an array of msg/Drivetrain messages.
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
controls_msgs__msg__Drivetrain__Sequence__copy(
  const controls_msgs__msg__Drivetrain__Sequence * input,
  controls_msgs__msg__Drivetrain__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CONTROLS_MSGS__MSG__DETAIL__DRIVETRAIN__FUNCTIONS_H_
