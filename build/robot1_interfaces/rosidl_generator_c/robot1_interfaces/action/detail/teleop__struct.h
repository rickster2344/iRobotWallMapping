// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot1_interfaces:action/Teleop.idl
// generated code does not contain a copyright notice

#ifndef ROBOT1_INTERFACES__ACTION__DETAIL__TELEOP__STRUCT_H_
#define ROBOT1_INTERFACES__ACTION__DETAIL__TELEOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Teleop in the package robot1_interfaces.
typedef struct robot1_interfaces__action__Teleop_Goal
{
  int32_t target_direction;
} robot1_interfaces__action__Teleop_Goal;

// Struct for a sequence of robot1_interfaces__action__Teleop_Goal.
typedef struct robot1_interfaces__action__Teleop_Goal__Sequence
{
  robot1_interfaces__action__Teleop_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot1_interfaces__action__Teleop_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Teleop in the package robot1_interfaces.
typedef struct robot1_interfaces__action__Teleop_Result
{
  int32_t reached_direction;
} robot1_interfaces__action__Teleop_Result;

// Struct for a sequence of robot1_interfaces__action__Teleop_Result.
typedef struct robot1_interfaces__action__Teleop_Result__Sequence
{
  robot1_interfaces__action__Teleop_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot1_interfaces__action__Teleop_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Teleop in the package robot1_interfaces.
typedef struct robot1_interfaces__action__Teleop_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} robot1_interfaces__action__Teleop_Feedback;

// Struct for a sequence of robot1_interfaces__action__Teleop_Feedback.
typedef struct robot1_interfaces__action__Teleop_Feedback__Sequence
{
  robot1_interfaces__action__Teleop_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot1_interfaces__action__Teleop_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot1_interfaces/action/detail/teleop__struct.h"

/// Struct defined in action/Teleop in the package robot1_interfaces.
typedef struct robot1_interfaces__action__Teleop_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot1_interfaces__action__Teleop_Goal goal;
} robot1_interfaces__action__Teleop_SendGoal_Request;

// Struct for a sequence of robot1_interfaces__action__Teleop_SendGoal_Request.
typedef struct robot1_interfaces__action__Teleop_SendGoal_Request__Sequence
{
  robot1_interfaces__action__Teleop_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot1_interfaces__action__Teleop_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Teleop in the package robot1_interfaces.
typedef struct robot1_interfaces__action__Teleop_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot1_interfaces__action__Teleop_SendGoal_Response;

// Struct for a sequence of robot1_interfaces__action__Teleop_SendGoal_Response.
typedef struct robot1_interfaces__action__Teleop_SendGoal_Response__Sequence
{
  robot1_interfaces__action__Teleop_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot1_interfaces__action__Teleop_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Teleop in the package robot1_interfaces.
typedef struct robot1_interfaces__action__Teleop_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot1_interfaces__action__Teleop_GetResult_Request;

// Struct for a sequence of robot1_interfaces__action__Teleop_GetResult_Request.
typedef struct robot1_interfaces__action__Teleop_GetResult_Request__Sequence
{
  robot1_interfaces__action__Teleop_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot1_interfaces__action__Teleop_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot1_interfaces/action/detail/teleop__struct.h"

/// Struct defined in action/Teleop in the package robot1_interfaces.
typedef struct robot1_interfaces__action__Teleop_GetResult_Response
{
  int8_t status;
  robot1_interfaces__action__Teleop_Result result;
} robot1_interfaces__action__Teleop_GetResult_Response;

// Struct for a sequence of robot1_interfaces__action__Teleop_GetResult_Response.
typedef struct robot1_interfaces__action__Teleop_GetResult_Response__Sequence
{
  robot1_interfaces__action__Teleop_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot1_interfaces__action__Teleop_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot1_interfaces/action/detail/teleop__struct.h"

/// Struct defined in action/Teleop in the package robot1_interfaces.
typedef struct robot1_interfaces__action__Teleop_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot1_interfaces__action__Teleop_Feedback feedback;
} robot1_interfaces__action__Teleop_FeedbackMessage;

// Struct for a sequence of robot1_interfaces__action__Teleop_FeedbackMessage.
typedef struct robot1_interfaces__action__Teleop_FeedbackMessage__Sequence
{
  robot1_interfaces__action__Teleop_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot1_interfaces__action__Teleop_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT1_INTERFACES__ACTION__DETAIL__TELEOP__STRUCT_H_
