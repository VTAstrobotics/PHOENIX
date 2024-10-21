// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:action/ParallelGripperCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__PARALLEL_GRIPPER_COMMAND__STRUCT_H_
#define CONTROL_MSGS__ACTION__DETAIL__PARALLEL_GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in action/ParallelGripperCommand in the package control_msgs.
typedef struct control_msgs__action__ParallelGripperCommand_Goal
{
  sensor_msgs__msg__JointState command;
} control_msgs__action__ParallelGripperCommand_Goal;

// Struct for a sequence of control_msgs__action__ParallelGripperCommand_Goal.
typedef struct control_msgs__action__ParallelGripperCommand_Goal__Sequence
{
  control_msgs__action__ParallelGripperCommand_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__ParallelGripperCommand_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in action/ParallelGripperCommand in the package control_msgs.
typedef struct control_msgs__action__ParallelGripperCommand_Result
{
  /// The current gripper state.
  sensor_msgs__msg__JointState state;
  /// position of each joint (radians or meters)
  /// optional: velocity of each joint (radians or meters / second)
  /// optional: effort of each joint (Newtons or Newton-meters)
  /// True if the gripper is exerting max effort and not moving
  bool stalled;
  /// True if the gripper position has reached the commanded setpoint
  bool reached_goal;
} control_msgs__action__ParallelGripperCommand_Result;

// Struct for a sequence of control_msgs__action__ParallelGripperCommand_Result.
typedef struct control_msgs__action__ParallelGripperCommand_Result__Sequence
{
  control_msgs__action__ParallelGripperCommand_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__ParallelGripperCommand_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in action/ParallelGripperCommand in the package control_msgs.
typedef struct control_msgs__action__ParallelGripperCommand_Feedback
{
  /// The current gripper state.
  sensor_msgs__msg__JointState state;
} control_msgs__action__ParallelGripperCommand_Feedback;

// Struct for a sequence of control_msgs__action__ParallelGripperCommand_Feedback.
typedef struct control_msgs__action__ParallelGripperCommand_Feedback__Sequence
{
  control_msgs__action__ParallelGripperCommand_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__ParallelGripperCommand_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "control_msgs/action/detail/parallel_gripper_command__struct.h"

/// Struct defined in action/ParallelGripperCommand in the package control_msgs.
typedef struct control_msgs__action__ParallelGripperCommand_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__ParallelGripperCommand_Goal goal;
} control_msgs__action__ParallelGripperCommand_SendGoal_Request;

// Struct for a sequence of control_msgs__action__ParallelGripperCommand_SendGoal_Request.
typedef struct control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence
{
  control_msgs__action__ParallelGripperCommand_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ParallelGripperCommand in the package control_msgs.
typedef struct control_msgs__action__ParallelGripperCommand_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} control_msgs__action__ParallelGripperCommand_SendGoal_Response;

// Struct for a sequence of control_msgs__action__ParallelGripperCommand_SendGoal_Response.
typedef struct control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence
{
  control_msgs__action__ParallelGripperCommand_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ParallelGripperCommand in the package control_msgs.
typedef struct control_msgs__action__ParallelGripperCommand_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} control_msgs__action__ParallelGripperCommand_GetResult_Request;

// Struct for a sequence of control_msgs__action__ParallelGripperCommand_GetResult_Request.
typedef struct control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence
{
  control_msgs__action__ParallelGripperCommand_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/parallel_gripper_command__struct.h"

/// Struct defined in action/ParallelGripperCommand in the package control_msgs.
typedef struct control_msgs__action__ParallelGripperCommand_GetResult_Response
{
  int8_t status;
  control_msgs__action__ParallelGripperCommand_Result result;
} control_msgs__action__ParallelGripperCommand_GetResult_Response;

// Struct for a sequence of control_msgs__action__ParallelGripperCommand_GetResult_Response.
typedef struct control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence
{
  control_msgs__action__ParallelGripperCommand_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/parallel_gripper_command__struct.h"

/// Struct defined in action/ParallelGripperCommand in the package control_msgs.
typedef struct control_msgs__action__ParallelGripperCommand_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__ParallelGripperCommand_Feedback feedback;
} control_msgs__action__ParallelGripperCommand_FeedbackMessage;

// Struct for a sequence of control_msgs__action__ParallelGripperCommand_FeedbackMessage.
typedef struct control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence
{
  control_msgs__action__ParallelGripperCommand_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__ACTION__DETAIL__PARALLEL_GRIPPER_COMMAND__STRUCT_H_
