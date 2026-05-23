// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ika_msgs:msg/EnvironmentData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ika_msgs/msg/detail/environment_data__rosidl_typesupport_introspection_c.h"
#include "ika_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ika_msgs/msg/detail/environment_data__functions.h"
#include "ika_msgs/msg/detail/environment_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sensor_status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ika_msgs__msg__EnvironmentData__init(message_memory);
}

void ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_fini_function(void * message_memory)
{
  ika_msgs__msg__EnvironmentData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__msg__EnvironmentData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature_celsius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__msg__EnvironmentData, temperature_celsius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_humidity_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__msg__EnvironmentData, relative_humidity_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pressure_pa",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__msg__EnvironmentData, pressure_pa),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude_m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__msg__EnvironmentData, altitude_m),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rain_detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__msg__EnvironmentData, rain_detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "water_detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__msg__EnvironmentData, water_detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__msg__EnvironmentData, sensor_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_message_members = {
  "ika_msgs__msg",  // message namespace
  "EnvironmentData",  // message name
  8,  // number of fields
  sizeof(ika_msgs__msg__EnvironmentData),
  ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_message_member_array,  // message members
  ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_init_function,  // function to initialize message memory (memory has to be allocated)
  ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_message_type_support_handle = {
  0,
  &ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ika_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, msg, EnvironmentData)() {
  ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_message_type_support_handle.typesupport_identifier) {
    ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ika_msgs__msg__EnvironmentData__rosidl_typesupport_introspection_c__EnvironmentData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
