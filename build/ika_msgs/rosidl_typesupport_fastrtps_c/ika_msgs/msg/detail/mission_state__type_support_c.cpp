// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ika_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice
#include "ika_msgs/msg/detail/mission_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ika_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ika_msgs/msg/detail/mission_state__struct.h"
#include "ika_msgs/msg/detail/mission_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // stage_name, status_text
#include "rosidl_runtime_c/string_functions.h"  // stage_name, status_text
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ika_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ika_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ika_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _MissionState__ros_msg_type = ika_msgs__msg__MissionState;

static bool _MissionState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MissionState__ros_msg_type * ros_message = static_cast<const _MissionState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: mission_mode
  {
    cdr << ros_message->mission_mode;
  }

  // Field name: current_stage
  {
    cdr << ros_message->current_stage;
  }

  // Field name: mission_status
  {
    cdr << ros_message->mission_status;
  }

  // Field name: stage_name
  {
    const rosidl_runtime_c__String * str = &ros_message->stage_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: status_text
  {
    const rosidl_runtime_c__String * str = &ros_message->status_text;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: autonomous_enabled
  {
    cdr << (ros_message->autonomous_enabled ? true : false);
  }

  // Field name: emergency_stop_active
  {
    cdr << (ros_message->emergency_stop_active ? true : false);
  }

  // Field name: elapsed_time_sec
  {
    cdr << ros_message->elapsed_time_sec;
  }

  return true;
}

static bool _MissionState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MissionState__ros_msg_type * ros_message = static_cast<_MissionState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: mission_mode
  {
    cdr >> ros_message->mission_mode;
  }

  // Field name: current_stage
  {
    cdr >> ros_message->current_stage;
  }

  // Field name: mission_status
  {
    cdr >> ros_message->mission_status;
  }

  // Field name: stage_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->stage_name.data) {
      rosidl_runtime_c__String__init(&ros_message->stage_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->stage_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'stage_name'\n");
      return false;
    }
  }

  // Field name: status_text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status_text.data) {
      rosidl_runtime_c__String__init(&ros_message->status_text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status_text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status_text'\n");
      return false;
    }
  }

  // Field name: autonomous_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->autonomous_enabled = tmp ? true : false;
  }

  // Field name: emergency_stop_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_stop_active = tmp ? true : false;
  }

  // Field name: elapsed_time_sec
  {
    cdr >> ros_message->elapsed_time_sec;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ika_msgs
size_t get_serialized_size_ika_msgs__msg__MissionState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MissionState__ros_msg_type * ros_message = static_cast<const _MissionState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name mission_mode
  {
    size_t item_size = sizeof(ros_message->mission_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_stage
  {
    size_t item_size = sizeof(ros_message->current_stage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mission_status
  {
    size_t item_size = sizeof(ros_message->mission_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stage_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->stage_name.size + 1);
  // field.name status_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status_text.size + 1);
  // field.name autonomous_enabled
  {
    size_t item_size = sizeof(ros_message->autonomous_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emergency_stop_active
  {
    size_t item_size = sizeof(ros_message->emergency_stop_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elapsed_time_sec
  {
    size_t item_size = sizeof(ros_message->elapsed_time_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MissionState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ika_msgs__msg__MissionState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ika_msgs
size_t max_serialized_size_ika_msgs__msg__MissionState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: mission_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: current_stage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mission_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stage_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: status_text
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: autonomous_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emergency_stop_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: elapsed_time_sec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ika_msgs__msg__MissionState;
    is_plain =
      (
      offsetof(DataType, elapsed_time_sec) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MissionState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ika_msgs__msg__MissionState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MissionState = {
  "ika_msgs::msg",
  "MissionState",
  _MissionState__cdr_serialize,
  _MissionState__cdr_deserialize,
  _MissionState__get_serialized_size,
  _MissionState__max_serialized_size
};

static rosidl_message_type_support_t _MissionState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MissionState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ika_msgs, msg, MissionState)() {
  return &_MissionState__type_support;
}

#if defined(__cplusplus)
}
#endif
