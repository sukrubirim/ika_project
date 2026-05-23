// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ika_msgs:srv/SetLaser.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__SRV__DETAIL__SET_LASER__STRUCT_H_
#define IKA_MSGS__SRV__DETAIL__SET_LASER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command_source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLaser in the package ika_msgs.
typedef struct ika_msgs__srv__SetLaser_Request
{
  bool enable;
  float duration_sec;
  rosidl_runtime_c__String command_source;
} ika_msgs__srv__SetLaser_Request;

// Struct for a sequence of ika_msgs__srv__SetLaser_Request.
typedef struct ika_msgs__srv__SetLaser_Request__Sequence
{
  ika_msgs__srv__SetLaser_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__srv__SetLaser_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLaser in the package ika_msgs.
typedef struct ika_msgs__srv__SetLaser_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ika_msgs__srv__SetLaser_Response;

// Struct for a sequence of ika_msgs__srv__SetLaser_Response.
typedef struct ika_msgs__srv__SetLaser_Response__Sequence
{
  ika_msgs__srv__SetLaser_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__srv__SetLaser_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IKA_MSGS__SRV__DETAIL__SET_LASER__STRUCT_H_
