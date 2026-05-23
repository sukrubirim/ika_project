// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ika_msgs:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__SRV__DETAIL__EMERGENCY_STOP__STRUCT_H_
#define IKA_MSGS__SRV__DETAIL__EMERGENCY_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EmergencyStop in the package ika_msgs.
typedef struct ika_msgs__srv__EmergencyStop_Request
{
  bool stop;
  rosidl_runtime_c__String reason;
} ika_msgs__srv__EmergencyStop_Request;

// Struct for a sequence of ika_msgs__srv__EmergencyStop_Request.
typedef struct ika_msgs__srv__EmergencyStop_Request__Sequence
{
  ika_msgs__srv__EmergencyStop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__srv__EmergencyStop_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EmergencyStop in the package ika_msgs.
typedef struct ika_msgs__srv__EmergencyStop_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ika_msgs__srv__EmergencyStop_Response;

// Struct for a sequence of ika_msgs__srv__EmergencyStop_Response.
typedef struct ika_msgs__srv__EmergencyStop_Response__Sequence
{
  ika_msgs__srv__EmergencyStop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__srv__EmergencyStop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IKA_MSGS__SRV__DETAIL__EMERGENCY_STOP__STRUCT_H_
