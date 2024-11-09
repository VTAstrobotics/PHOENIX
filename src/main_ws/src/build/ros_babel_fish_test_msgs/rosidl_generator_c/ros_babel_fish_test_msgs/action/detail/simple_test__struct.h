// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_babel_fish_test_msgs:action/SimpleTest.idl
// generated code does not contain a copyright notice

#ifndef ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__STRUCT_H_
#define ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/SimpleTest in the package ros_babel_fish_test_msgs.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_Goal
{
  int32_t target;
} ros_babel_fish_test_msgs__action__SimpleTest_Goal;

// Struct for a sequence of ros_babel_fish_test_msgs__action__SimpleTest_Goal.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence
{
  ros_babel_fish_test_msgs__action__SimpleTest_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_babel_fish_test_msgs__action__SimpleTest_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/SimpleTest in the package ros_babel_fish_test_msgs.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_Result
{
  int32_t final_value;
} ros_babel_fish_test_msgs__action__SimpleTest_Result;

// Struct for a sequence of ros_babel_fish_test_msgs__action__SimpleTest_Result.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence
{
  ros_babel_fish_test_msgs__action__SimpleTest_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_babel_fish_test_msgs__action__SimpleTest_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/SimpleTest in the package ros_babel_fish_test_msgs.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_Feedback
{
  int32_t current_value;
} ros_babel_fish_test_msgs__action__SimpleTest_Feedback;

// Struct for a sequence of ros_babel_fish_test_msgs__action__SimpleTest_Feedback.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence
{
  ros_babel_fish_test_msgs__action__SimpleTest_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_babel_fish_test_msgs__action__SimpleTest_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.h"

/// Struct defined in action/SimpleTest in the package ros_babel_fish_test_msgs.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros_babel_fish_test_msgs__action__SimpleTest_Goal goal;
} ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request;

// Struct for a sequence of ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence
{
  ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SimpleTest in the package ros_babel_fish_test_msgs.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response;

// Struct for a sequence of ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence
{
  ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_babel_fish_test_msgs__action__SimpleTest_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SimpleTest in the package ros_babel_fish_test_msgs.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request;

// Struct for a sequence of ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence
{
  ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.h"

/// Struct defined in action/SimpleTest in the package ros_babel_fish_test_msgs.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response
{
  int8_t status;
  ros_babel_fish_test_msgs__action__SimpleTest_Result result;
} ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response;

// Struct for a sequence of ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence
{
  ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_babel_fish_test_msgs__action__SimpleTest_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.h"

/// Struct defined in action/SimpleTest in the package ros_babel_fish_test_msgs.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros_babel_fish_test_msgs__action__SimpleTest_Feedback feedback;
} ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage;

// Struct for a sequence of ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage.
typedef struct ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence
{
  ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_babel_fish_test_msgs__action__SimpleTest_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BABEL_FISH_TEST_MSGS__ACTION__DETAIL__SIMPLE_TEST__STRUCT_H_
