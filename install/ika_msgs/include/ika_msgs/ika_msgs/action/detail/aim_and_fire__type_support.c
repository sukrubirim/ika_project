// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ika_msgs:action/AimAndFire.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"
#include "ika_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ika_msgs/action/detail/aim_and_fire__functions.h"
#include "ika_msgs/action/detail/aim_and_fire__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ika_msgs__action__AimAndFire_Goal__rosidl_typesupport_introspection_c__AimAndFire_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ika_msgs__action__AimAndFire_Goal__init(message_memory);
}

void ika_msgs__action__AimAndFire_Goal__rosidl_typesupport_introspection_c__AimAndFire_Goal_fini_function(void * message_memory)
{
  ika_msgs__action__AimAndFire_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ika_msgs__action__AimAndFire_Goal__rosidl_typesupport_introspection_c__AimAndFire_Goal_message_member_array[6] = {
  {
    "target_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Goal, target_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Goal, target_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_distance_m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Goal, target_distance_m),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_attempts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Goal, max_attempts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aim_timeout_sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Goal, aim_timeout_sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fire_duration_sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Goal, fire_duration_sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ika_msgs__action__AimAndFire_Goal__rosidl_typesupport_introspection_c__AimAndFire_Goal_message_members = {
  "ika_msgs__action",  // message namespace
  "AimAndFire_Goal",  // message name
  6,  // number of fields
  sizeof(ika_msgs__action__AimAndFire_Goal),
  ika_msgs__action__AimAndFire_Goal__rosidl_typesupport_introspection_c__AimAndFire_Goal_message_member_array,  // message members
  ika_msgs__action__AimAndFire_Goal__rosidl_typesupport_introspection_c__AimAndFire_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ika_msgs__action__AimAndFire_Goal__rosidl_typesupport_introspection_c__AimAndFire_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ika_msgs__action__AimAndFire_Goal__rosidl_typesupport_introspection_c__AimAndFire_Goal_message_type_support_handle = {
  0,
  &ika_msgs__action__AimAndFire_Goal__rosidl_typesupport_introspection_c__AimAndFire_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ika_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_Goal)() {
  if (!ika_msgs__action__AimAndFire_Goal__rosidl_typesupport_introspection_c__AimAndFire_Goal_message_type_support_handle.typesupport_identifier) {
    ika_msgs__action__AimAndFire_Goal__rosidl_typesupport_introspection_c__AimAndFire_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ika_msgs__action__AimAndFire_Goal__rosidl_typesupport_introspection_c__AimAndFire_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ika_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__functions.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__struct.h"


// Include directives for member types
// Member `result_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ika_msgs__action__AimAndFire_Result__rosidl_typesupport_introspection_c__AimAndFire_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ika_msgs__action__AimAndFire_Result__init(message_memory);
}

void ika_msgs__action__AimAndFire_Result__rosidl_typesupport_introspection_c__AimAndFire_Result_fini_function(void * message_memory)
{
  ika_msgs__action__AimAndFire_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ika_msgs__action__AimAndFire_Result__rosidl_typesupport_introspection_c__AimAndFire_Result_message_member_array[5] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attempts_used",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Result, attempts_used),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_error_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Result, final_error_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_error_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Result, final_error_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Result, result_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ika_msgs__action__AimAndFire_Result__rosidl_typesupport_introspection_c__AimAndFire_Result_message_members = {
  "ika_msgs__action",  // message namespace
  "AimAndFire_Result",  // message name
  5,  // number of fields
  sizeof(ika_msgs__action__AimAndFire_Result),
  ika_msgs__action__AimAndFire_Result__rosidl_typesupport_introspection_c__AimAndFire_Result_message_member_array,  // message members
  ika_msgs__action__AimAndFire_Result__rosidl_typesupport_introspection_c__AimAndFire_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ika_msgs__action__AimAndFire_Result__rosidl_typesupport_introspection_c__AimAndFire_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ika_msgs__action__AimAndFire_Result__rosidl_typesupport_introspection_c__AimAndFire_Result_message_type_support_handle = {
  0,
  &ika_msgs__action__AimAndFire_Result__rosidl_typesupport_introspection_c__AimAndFire_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ika_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_Result)() {
  if (!ika_msgs__action__AimAndFire_Result__rosidl_typesupport_introspection_c__AimAndFire_Result_message_type_support_handle.typesupport_identifier) {
    ika_msgs__action__AimAndFire_Result__rosidl_typesupport_introspection_c__AimAndFire_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ika_msgs__action__AimAndFire_Result__rosidl_typesupport_introspection_c__AimAndFire_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ika_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__functions.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__struct.h"


// Include directives for member types
// Member `feedback_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ika_msgs__action__AimAndFire_Feedback__rosidl_typesupport_introspection_c__AimAndFire_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ika_msgs__action__AimAndFire_Feedback__init(message_memory);
}

void ika_msgs__action__AimAndFire_Feedback__rosidl_typesupport_introspection_c__AimAndFire_Feedback_fini_function(void * message_memory)
{
  ika_msgs__action__AimAndFire_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ika_msgs__action__AimAndFire_Feedback__rosidl_typesupport_introspection_c__AimAndFire_Feedback_message_member_array[5] = {
  {
    "current_error_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Feedback, current_error_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_error_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Feedback, current_error_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_locked",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Feedback, target_locked),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_attempt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Feedback, current_attempt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_Feedback, feedback_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ika_msgs__action__AimAndFire_Feedback__rosidl_typesupport_introspection_c__AimAndFire_Feedback_message_members = {
  "ika_msgs__action",  // message namespace
  "AimAndFire_Feedback",  // message name
  5,  // number of fields
  sizeof(ika_msgs__action__AimAndFire_Feedback),
  ika_msgs__action__AimAndFire_Feedback__rosidl_typesupport_introspection_c__AimAndFire_Feedback_message_member_array,  // message members
  ika_msgs__action__AimAndFire_Feedback__rosidl_typesupport_introspection_c__AimAndFire_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ika_msgs__action__AimAndFire_Feedback__rosidl_typesupport_introspection_c__AimAndFire_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ika_msgs__action__AimAndFire_Feedback__rosidl_typesupport_introspection_c__AimAndFire_Feedback_message_type_support_handle = {
  0,
  &ika_msgs__action__AimAndFire_Feedback__rosidl_typesupport_introspection_c__AimAndFire_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ika_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_Feedback)() {
  if (!ika_msgs__action__AimAndFire_Feedback__rosidl_typesupport_introspection_c__AimAndFire_Feedback_message_type_support_handle.typesupport_identifier) {
    ika_msgs__action__AimAndFire_Feedback__rosidl_typesupport_introspection_c__AimAndFire_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ika_msgs__action__AimAndFire_Feedback__rosidl_typesupport_introspection_c__AimAndFire_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ika_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__functions.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "ika_msgs/action/aim_and_fire.h"
// Member `goal`
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ika_msgs__action__AimAndFire_SendGoal_Request__init(message_memory);
}

void ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_fini_function(void * message_memory)
{
  ika_msgs__action__AimAndFire_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_message_members = {
  "ika_msgs__action",  // message namespace
  "AimAndFire_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ika_msgs__action__AimAndFire_SendGoal_Request),
  ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_message_member_array,  // message members
  ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_message_type_support_handle = {
  0,
  &ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ika_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_SendGoal_Request)() {
  ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_Goal)();
  if (!ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ika_msgs__action__AimAndFire_SendGoal_Request__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ika_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__functions.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ika_msgs__action__AimAndFire_SendGoal_Response__init(message_memory);
}

void ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_fini_function(void * message_memory)
{
  ika_msgs__action__AimAndFire_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_message_members = {
  "ika_msgs__action",  // message namespace
  "AimAndFire_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ika_msgs__action__AimAndFire_SendGoal_Response),
  ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_message_member_array,  // message members
  ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_message_type_support_handle = {
  0,
  &ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ika_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_SendGoal_Response)() {
  ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ika_msgs__action__AimAndFire_SendGoal_Response__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ika_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_service_members = {
  "ika_msgs__action",  // service namespace
  "AimAndFire_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_service_type_support_handle = {
  0,
  &ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ika_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_SendGoal)() {
  if (!ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_service_type_support_handle.typesupport_identifier) {
    ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_SendGoal_Response)()->data;
  }

  return &ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ika_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__functions.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ika_msgs__action__AimAndFire_GetResult_Request__init(message_memory);
}

void ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_fini_function(void * message_memory)
{
  ika_msgs__action__AimAndFire_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_message_members = {
  "ika_msgs__action",  // message namespace
  "AimAndFire_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ika_msgs__action__AimAndFire_GetResult_Request),
  ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_message_member_array,  // message members
  ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_message_type_support_handle = {
  0,
  &ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ika_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_GetResult_Request)() {
  ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ika_msgs__action__AimAndFire_GetResult_Request__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ika_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__functions.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "ika_msgs/action/aim_and_fire.h"
// Member `result`
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ika_msgs__action__AimAndFire_GetResult_Response__init(message_memory);
}

void ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_fini_function(void * message_memory)
{
  ika_msgs__action__AimAndFire_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_message_members = {
  "ika_msgs__action",  // message namespace
  "AimAndFire_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ika_msgs__action__AimAndFire_GetResult_Response),
  ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_message_member_array,  // message members
  ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_message_type_support_handle = {
  0,
  &ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ika_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_GetResult_Response)() {
  ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_Result)();
  if (!ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ika_msgs__action__AimAndFire_GetResult_Response__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ika_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_GetResult_service_members = {
  "ika_msgs__action",  // service namespace
  "AimAndFire_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_GetResult_service_type_support_handle = {
  0,
  &ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ika_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_GetResult)() {
  if (!ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_GetResult_service_type_support_handle.typesupport_identifier) {
    ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_GetResult_Response)()->data;
  }

  return &ika_msgs__action__detail__aim_and_fire__rosidl_typesupport_introspection_c__AimAndFire_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ika_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__functions.h"
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "ika_msgs/action/aim_and_fire.h"
// Member `feedback`
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ika_msgs__action__AimAndFire_FeedbackMessage__init(message_memory);
}

void ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_fini_function(void * message_memory)
{
  ika_msgs__action__AimAndFire_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ika_msgs__action__AimAndFire_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_message_members = {
  "ika_msgs__action",  // message namespace
  "AimAndFire_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ika_msgs__action__AimAndFire_FeedbackMessage),
  ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_message_member_array,  // message members
  ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_message_type_support_handle = {
  0,
  &ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ika_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_FeedbackMessage)() {
  ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ika_msgs, action, AimAndFire_Feedback)();
  if (!ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ika_msgs__action__AimAndFire_FeedbackMessage__rosidl_typesupport_introspection_c__AimAndFire_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
