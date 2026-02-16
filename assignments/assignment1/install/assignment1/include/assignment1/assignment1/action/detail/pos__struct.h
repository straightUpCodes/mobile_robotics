// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assignment1:action/Pos.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT1__ACTION__DETAIL__POS__STRUCT_H_
#define ASSIGNMENT1__ACTION__DETAIL__POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Pos in the package assignment1.
typedef struct assignment1__action__Pos_Goal
{
  double x;
  double y;
  double theta;
} assignment1__action__Pos_Goal;

// Struct for a sequence of assignment1__action__Pos_Goal.
typedef struct assignment1__action__Pos_Goal__Sequence
{
  assignment1__action__Pos_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment1__action__Pos_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Pos in the package assignment1.
typedef struct assignment1__action__Pos_Result
{
  rosidl_runtime_c__String result_message;
} assignment1__action__Pos_Result;

// Struct for a sequence of assignment1__action__Pos_Result.
typedef struct assignment1__action__Pos_Result__Sequence
{
  assignment1__action__Pos_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment1__action__Pos_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Pos in the package assignment1.
typedef struct assignment1__action__Pos_Feedback
{
  rosidl_runtime_c__String feedback_message;
} assignment1__action__Pos_Feedback;

// Struct for a sequence of assignment1__action__Pos_Feedback.
typedef struct assignment1__action__Pos_Feedback__Sequence
{
  assignment1__action__Pos_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment1__action__Pos_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "assignment1/action/detail/pos__struct.h"

/// Struct defined in action/Pos in the package assignment1.
typedef struct assignment1__action__Pos_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  assignment1__action__Pos_Goal goal;
} assignment1__action__Pos_SendGoal_Request;

// Struct for a sequence of assignment1__action__Pos_SendGoal_Request.
typedef struct assignment1__action__Pos_SendGoal_Request__Sequence
{
  assignment1__action__Pos_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment1__action__Pos_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Pos in the package assignment1.
typedef struct assignment1__action__Pos_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} assignment1__action__Pos_SendGoal_Response;

// Struct for a sequence of assignment1__action__Pos_SendGoal_Response.
typedef struct assignment1__action__Pos_SendGoal_Response__Sequence
{
  assignment1__action__Pos_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment1__action__Pos_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Pos in the package assignment1.
typedef struct assignment1__action__Pos_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} assignment1__action__Pos_GetResult_Request;

// Struct for a sequence of assignment1__action__Pos_GetResult_Request.
typedef struct assignment1__action__Pos_GetResult_Request__Sequence
{
  assignment1__action__Pos_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment1__action__Pos_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "assignment1/action/detail/pos__struct.h"

/// Struct defined in action/Pos in the package assignment1.
typedef struct assignment1__action__Pos_GetResult_Response
{
  int8_t status;
  assignment1__action__Pos_Result result;
} assignment1__action__Pos_GetResult_Response;

// Struct for a sequence of assignment1__action__Pos_GetResult_Response.
typedef struct assignment1__action__Pos_GetResult_Response__Sequence
{
  assignment1__action__Pos_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment1__action__Pos_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "assignment1/action/detail/pos__struct.h"

/// Struct defined in action/Pos in the package assignment1.
typedef struct assignment1__action__Pos_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  assignment1__action__Pos_Feedback feedback;
} assignment1__action__Pos_FeedbackMessage;

// Struct for a sequence of assignment1__action__Pos_FeedbackMessage.
typedef struct assignment1__action__Pos_FeedbackMessage__Sequence
{
  assignment1__action__Pos_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment1__action__Pos_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT1__ACTION__DETAIL__POS__STRUCT_H_
