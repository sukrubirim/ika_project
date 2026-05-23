// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ika_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_H_
#define IKA_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_MANUAL'.
enum
{
  ika_msgs__msg__MissionState__MODE_MANUAL = 0
};

/// Constant 'MODE_AUTONOMOUS'.
enum
{
  ika_msgs__msg__MissionState__MODE_AUTONOMOUS = 1
};

/// Constant 'MODE_TEST'.
enum
{
  ika_msgs__msg__MissionState__MODE_TEST = 2
};

/// Constant 'STATUS_IDLE'.
enum
{
  ika_msgs__msg__MissionState__STATUS_IDLE = 0
};

/// Constant 'STATUS_RUNNING'.
enum
{
  ika_msgs__msg__MissionState__STATUS_RUNNING = 1
};

/// Constant 'STATUS_PAUSED'.
enum
{
  ika_msgs__msg__MissionState__STATUS_PAUSED = 2
};

/// Constant 'STATUS_COMPLETED'.
enum
{
  ika_msgs__msg__MissionState__STATUS_COMPLETED = 3
};

/// Constant 'STATUS_ERROR'.
enum
{
  ika_msgs__msg__MissionState__STATUS_ERROR = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'stage_name'
// Member 'status_text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionState in the package ika_msgs.
typedef struct ika_msgs__msg__MissionState
{
  std_msgs__msg__Header header;
  uint8_t mission_mode;
  uint8_t current_stage;
  uint8_t mission_status;
  rosidl_runtime_c__String stage_name;
  rosidl_runtime_c__String status_text;
  bool autonomous_enabled;
  bool emergency_stop_active;
  float elapsed_time_sec;
} ika_msgs__msg__MissionState;

// Struct for a sequence of ika_msgs__msg__MissionState.
typedef struct ika_msgs__msg__MissionState__Sequence
{
  ika_msgs__msg__MissionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__msg__MissionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IKA_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_H_
