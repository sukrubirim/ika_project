// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ika_msgs:msg/EnvironmentData.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__MSG__DETAIL__ENVIRONMENT_DATA__STRUCT_H_
#define IKA_MSGS__MSG__DETAIL__ENVIRONMENT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'sensor_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EnvironmentData in the package ika_msgs.
typedef struct ika_msgs__msg__EnvironmentData
{
  std_msgs__msg__Header header;
  float temperature_celsius;
  float relative_humidity_percent;
  float pressure_pa;
  float altitude_m;
  bool rain_detected;
  bool water_detected;
  rosidl_runtime_c__String sensor_status;
} ika_msgs__msg__EnvironmentData;

// Struct for a sequence of ika_msgs__msg__EnvironmentData.
typedef struct ika_msgs__msg__EnvironmentData__Sequence
{
  ika_msgs__msg__EnvironmentData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ika_msgs__msg__EnvironmentData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IKA_MSGS__MSG__DETAIL__ENVIRONMENT_DATA__STRUCT_H_
