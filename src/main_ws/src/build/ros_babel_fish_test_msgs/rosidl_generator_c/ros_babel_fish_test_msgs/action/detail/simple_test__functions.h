// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_babel_fish_test_msgs:action/SimpleTest.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__FUNCTIONS_H_
#define ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros_babel_fish_test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.h"

/// Initialize action/SimpleTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_babel_fish_test_msgs__action__SimpleTest_Goal
 * )) before or use
 * ros_babel_fish_test_msgs__action__SimpleTest_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_Goal__init(ros_babel_fish_test_msgs__action__SimpleTest_Goal * msg);

/// Finalize action/SimpleTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_Goal__fini(ros_babel_fish_test_msgs__action__SimpleTest_Goal * msg);

/// Create action/SimpleTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_Goal *
ros_babel_fish_test_msgs__action__SimpleTest_Goal__create();

/// Destroy action/SimpleTest message.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_Goal__destroy(ros_babel_fish_test_msgs__action__SimpleTest_Goal * msg);

/// Check for action/SimpleTest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_Goal__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_Goal * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_Goal * rhs);

/// Copy a action/SimpleTest message.
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
ros_babel_fish_test_msgs__action__SimpleTest_Goal__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_Goal * input,
  ros_babel_fish_test_msgs__action__SimpleTest_Goal * output);

/// Initialize array of action/SimpleTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence__init(ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence * array, size_t size);

/// Finalize array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence__fini(ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence * array);

/// Create array of action/SimpleTest messages.
/**
 * It allocates the memory for the array and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence *
ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence__create(size_t size);

/// Destroy array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence__destroy(ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence * array);

/// Check for action/SimpleTest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence * rhs);

/// Copy an array of action/SimpleTest messages.
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
ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence * input,
  ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence * output);

/// Initialize action/SimpleTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_babel_fish_test_msgs__action__SimpleTest_Result
 * )) before or use
 * ros_babel_fish_test_msgs__action__SimpleTest_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_Result__init(ros_babel_fish_test_msgs__action__SimpleTest_Result * msg);

/// Finalize action/SimpleTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_Result__fini(ros_babel_fish_test_msgs__action__SimpleTest_Result * msg);

/// Create action/SimpleTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_Result *
ros_babel_fish_test_msgs__action__SimpleTest_Result__create();

/// Destroy action/SimpleTest message.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_Result__destroy(ros_babel_fish_test_msgs__action__SimpleTest_Result * msg);

/// Check for action/SimpleTest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_Result__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_Result * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_Result * rhs);

/// Copy a action/SimpleTest message.
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
ros_babel_fish_test_msgs__action__SimpleTest_Result__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_Result * input,
  ros_babel_fish_test_msgs__action__SimpleTest_Result * output);

/// Initialize array of action/SimpleTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence__init(ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence * array, size_t size);

/// Finalize array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence__fini(ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence * array);

/// Create array of action/SimpleTest messages.
/**
 * It allocates the memory for the array and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence *
ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence__create(size_t size);

/// Destroy array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence__destroy(ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence * array);

/// Check for action/SimpleTest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence * rhs);

/// Copy an array of action/SimpleTest messages.
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
ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence * input,
  ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence * output);

/// Initialize action/SimpleTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_babel_fish_test_msgs__action__SimpleTest_Feedback
 * )) before or use
 * ros_babel_fish_test_msgs__action__SimpleTest_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__init(ros_babel_fish_test_msgs__action__SimpleTest_Feedback * msg);

/// Finalize action/SimpleTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__fini(ros_babel_fish_test_msgs__action__SimpleTest_Feedback * msg);

/// Create action/SimpleTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_Feedback *
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__create();

/// Destroy action/SimpleTest message.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__destroy(ros_babel_fish_test_msgs__action__SimpleTest_Feedback * msg);

/// Check for action/SimpleTest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_Feedback * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_Feedback * rhs);

/// Copy a action/SimpleTest message.
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
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_Feedback * input,
  ros_babel_fish_test_msgs__action__SimpleTest_Feedback * output);

/// Initialize array of action/SimpleTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence__init(ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence * array, size_t size);

/// Finalize array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence__fini(ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence * array);

/// Create array of action/SimpleTest messages.
/**
 * It allocates the memory for the array and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence *
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence__create(size_t size);

/// Destroy array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence__destroy(ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence * array);

/// Check for action/SimpleTest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence * rhs);

/// Copy an array of action/SimpleTest messages.
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
ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence * input,
  ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence * output);

/// Initialize action/SimpleTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request
 * )) before or use
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__init(ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request * msg);

/// Finalize action/SimpleTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__fini(ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request * msg);

/// Create action/SimpleTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request *
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__create();

/// Destroy action/SimpleTest message.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__destroy(ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request * msg);

/// Check for action/SimpleTest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request * rhs);

/// Copy a action/SimpleTest message.
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
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request * input,
  ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request * output);

/// Initialize array of action/SimpleTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence__init(ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence__fini(ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence * array);

/// Create array of action/SimpleTest messages.
/**
 * It allocates the memory for the array and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence *
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence__destroy(ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence * array);

/// Check for action/SimpleTest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/SimpleTest messages.
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
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence * input,
  ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence * output);

/// Initialize action/SimpleTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response
 * )) before or use
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__init(ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response * msg);

/// Finalize action/SimpleTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__fini(ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response * msg);

/// Create action/SimpleTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response *
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__create();

/// Destroy action/SimpleTest message.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__destroy(ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response * msg);

/// Check for action/SimpleTest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response * rhs);

/// Copy a action/SimpleTest message.
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
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response * input,
  ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response * output);

/// Initialize array of action/SimpleTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence__init(ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence__fini(ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence * array);

/// Create array of action/SimpleTest messages.
/**
 * It allocates the memory for the array and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence *
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence__destroy(ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence * array);

/// Check for action/SimpleTest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/SimpleTest messages.
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
ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence * input,
  ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence * output);

/// Initialize action/SimpleTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request
 * )) before or use
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__init(ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request * msg);

/// Finalize action/SimpleTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__fini(ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request * msg);

/// Create action/SimpleTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request *
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__create();

/// Destroy action/SimpleTest message.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__destroy(ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request * msg);

/// Check for action/SimpleTest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request * rhs);

/// Copy a action/SimpleTest message.
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
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request * input,
  ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request * output);

/// Initialize array of action/SimpleTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence__init(ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence__fini(ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence * array);

/// Create array of action/SimpleTest messages.
/**
 * It allocates the memory for the array and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence *
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence__destroy(ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence * array);

/// Check for action/SimpleTest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence * rhs);

/// Copy an array of action/SimpleTest messages.
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
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence * input,
  ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence * output);

/// Initialize action/SimpleTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response
 * )) before or use
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__init(ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response * msg);

/// Finalize action/SimpleTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__fini(ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response * msg);

/// Create action/SimpleTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response *
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__create();

/// Destroy action/SimpleTest message.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__destroy(ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response * msg);

/// Check for action/SimpleTest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response * rhs);

/// Copy a action/SimpleTest message.
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
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response * input,
  ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response * output);

/// Initialize array of action/SimpleTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence__init(ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence__fini(ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence * array);

/// Create array of action/SimpleTest messages.
/**
 * It allocates the memory for the array and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence *
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence__destroy(ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence * array);

/// Check for action/SimpleTest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence * rhs);

/// Copy an array of action/SimpleTest messages.
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
ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence * input,
  ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence * output);

/// Initialize action/SimpleTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage
 * )) before or use
 * ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__init(ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage * msg);

/// Finalize action/SimpleTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__fini(ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage * msg);

/// Create action/SimpleTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage *
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__create();

/// Destroy action/SimpleTest message.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__destroy(ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage * msg);

/// Check for action/SimpleTest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage * rhs);

/// Copy a action/SimpleTest message.
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
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage * input,
  ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage * output);

/// Initialize array of action/SimpleTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence__init(ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence__fini(ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence * array);

/// Create array of action/SimpleTest messages.
/**
 * It allocates the memory for the array and calls
 * ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence *
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/SimpleTest messages.
/**
 * It calls
 * ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
void
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence__destroy(ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence * array);

/// Check for action/SimpleTest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_babel_fish_test_msgs
bool
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence__are_equal(const ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence * lhs, const ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/SimpleTest messages.
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
ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence__copy(
  const ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence * input,
  ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__FUNCTIONS_H_
