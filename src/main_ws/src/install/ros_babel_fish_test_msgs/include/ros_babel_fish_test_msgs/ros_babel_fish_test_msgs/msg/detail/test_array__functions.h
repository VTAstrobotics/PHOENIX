// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_babel_fish_test_msgs:msg/TestArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__FUNCTIONS_H_
#define ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros_babel_fish_test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ros_babel_fish_test_msgs/msg/detail/test_array__struct.h"

/// Initialize msg/TestArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_babel_fish_test_msgs__msg__TestArray
 * )) before or use
 * ros_babel_fish_test_msgs__msg__TestArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__msg__TestArray__init(ros_babel_fish_test_msgs__msg__TestArray * msg);

/// Finalize msg/TestArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__msg__TestArray__fini(ros_babel_fish_test_msgs__msg__TestArray * msg);

/// Create msg/TestArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_babel_fish_test_msgs__msg__TestArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__msg__TestArray *
ros_babel_fish_test_msgs__msg__TestArray__create();

/// Destroy msg/TestArray message.
/**
 * It calls
 * ros_babel_fish_test_msgs__msg__TestArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__msg__TestArray__destroy(ros_babel_fish_test_msgs__msg__TestArray * msg);

/// Check for msg/TestArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__msg__TestArray__are_equal(const ros_babel_fish_test_msgs__msg__TestArray * lhs, const ros_babel_fish_test_msgs__msg__TestArray * rhs);

/// Copy a msg/TestArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__msg__TestArray__copy(
  const ros_babel_fish_test_msgs__msg__TestArray * input,
  ros_babel_fish_test_msgs__msg__TestArray * output);

/// Initialize array of msg/TestArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_babel_fish_test_msgs__msg__TestArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__msg__TestArray__Sequence__init(ros_babel_fish_test_msgs__msg__TestArray__Sequence * array, size_t size);

/// Finalize array of msg/TestArray messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__msg__TestArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__msg__TestArray__Sequence__fini(ros_babel_fish_test_msgs__msg__TestArray__Sequence * array);

/// Create array of msg/TestArray messages.
/**
 * It allocates the memory for the array and calls
 * ros_babel_fish_test_msgs__msg__TestArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__msg__TestArray__Sequence *
ros_babel_fish_test_msgs__msg__TestArray__Sequence__create(size_t size);

/// Destroy array of msg/TestArray messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__msg__TestArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__msg__TestArray__Sequence__destroy(ros_babel_fish_test_msgs__msg__TestArray__Sequence * array);

/// Check for msg/TestArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__msg__TestArray__Sequence__are_equal(const ros_babel_fish_test_msgs__msg__TestArray__Sequence * lhs, const ros_babel_fish_test_msgs__msg__TestArray__Sequence * rhs);

/// Copy an array of msg/TestArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__msg__TestArray__Sequence__copy(
  const ros_babel_fish_test_msgs__msg__TestArray__Sequence * input,
  ros_babel_fish_test_msgs__msg__TestArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS_BABEL_FISH_TEST_MSGS__MSG__DETAIL__TEST_ARRAY__FUNCTIONS_H_
