// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ika_msgs:action/AimAndFire.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__ACTION__DETAIL__AIM_AND_FIRE__STRUCT_H_
#define IKA_MSGS__ACTION__DETAIL__AIM_AND_FIRE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/AimAndFire in the package ika_msgs.
typedef struct ika_msgs__action__AimAndFire_Goal
{
  float target_x;
  float target_y;
  float target_distance_m;
  uint8_t max_attempts;
  float aim_timeout_sec;
  float fire_duration_sec;
} ika_msgs__action__AimAndFire_Goal;

// Struct for a sequence of ika_msgs__action__AimAndFire_Goal.
typedef struct ika_msgs__action__AimAndFire_Goal__Sequence
{
  ika_msgs__action__AimAndFire_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__action__AimAndFire_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/AimAndFire in the package ika_msgs.
typedef struct ika_msgs__action__AimAndFire_Result
{
  bool success;
  uint8_t attempts_used;
  float final_error_x;
  float final_error_y;
  rosidl_runtime_c__String result_message;
} ika_msgs__action__AimAndFire_Result;

// Struct for a sequence of ika_msgs__action__AimAndFire_Result.
typedef struct ika_msgs__action__AimAndFire_Result__Sequence
{
  ika_msgs__action__AimAndFire_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__action__AimAndFire_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/AimAndFire in the package ika_msgs.
typedef struct ika_msgs__action__AimAndFire_Feedback
{
  float current_error_x;
  float current_error_y;
  bool target_locked;
  uint8_t current_attempt;
  rosidl_runtime_c__String feedback_message;
} ika_msgs__action__AimAndFire_Feedback;

// Struct for a sequence of ika_msgs__action__AimAndFire_Feedback.
typedef struct ika_msgs__action__AimAndFire_Feedback__Sequence
{
  ika_msgs__action__AimAndFire_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__action__AimAndFire_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ika_msgs/action/detail/aim_and_fire__struct.h"

/// Struct defined in action/AimAndFire in the package ika_msgs.
typedef struct ika_msgs__action__AimAndFire_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ika_msgs__action__AimAndFire_Goal goal;
} ika_msgs__action__AimAndFire_SendGoal_Request;

// Struct for a sequence of ika_msgs__action__AimAndFire_SendGoal_Request.
typedef struct ika_msgs__action__AimAndFire_SendGoal_Request__Sequence
{
  ika_msgs__action__AimAndFire_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__action__AimAndFire_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AimAndFire in the package ika_msgs.
typedef struct ika_msgs__action__AimAndFire_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ika_msgs__action__AimAndFire_SendGoal_Response;

// Struct for a sequence of ika_msgs__action__AimAndFire_SendGoal_Response.
typedef struct ika_msgs__action__AimAndFire_SendGoal_Response__Sequence
{
  ika_msgs__action__AimAndFire_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__action__AimAndFire_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AimAndFire in the package ika_msgs.
typedef struct ika_msgs__action__AimAndFire_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ika_msgs__action__AimAndFire_GetResult_Request;

// Struct for a sequence of ika_msgs__action__AimAndFire_GetResult_Request.
typedef struct ika_msgs__action__AimAndFire_GetResult_Request__Sequence
{
  ika_msgs__action__AimAndFire_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__action__AimAndFire_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__struct.h"

/// Struct defined in action/AimAndFire in the package ika_msgs.
typedef struct ika_msgs__action__AimAndFire_GetResult_Response
{
  int8_t status;
  ika_msgs__action__AimAndFire_Result result;
} ika_msgs__action__AimAndFire_GetResult_Response;

// Struct for a sequence of ika_msgs__action__AimAndFire_GetResult_Response.
typedef struct ika_msgs__action__AimAndFire_GetResult_Response__Sequence
{
  ika_msgs__action__AimAndFire_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__action__AimAndFire_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__struct.h"

/// Struct defined in action/AimAndFire in the package ika_msgs.
typedef struct ika_msgs__action__AimAndFire_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ika_msgs__action__AimAndFire_Feedback feedback;
} ika_msgs__action__AimAndFire_FeedbackMessage;

// Struct for a sequence of ika_msgs__action__AimAndFire_FeedbackMessage.
typedef struct ika_msgs__action__AimAndFire_FeedbackMessage__Sequence
{
  ika_msgs__action__AimAndFire_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__action__AimAndFire_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IKA_MSGS__ACTION__DETAIL__AIM_AND_FIRE__STRUCT_H_
