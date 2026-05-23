// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ika_msgs:msg/EnvironmentData.idl
// generated code does not contain a copyright notice
#include "ika_msgs/msg/detail/environment_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ika_msgs/msg/detail/environment_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace ika_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ika_msgs
cdr_serialize(
  const ika_msgs::msg::EnvironmentData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: temperature_celsius
  cdr << ros_message.temperature_celsius;
  // Member: relative_humidity_percent
  cdr << ros_message.relative_humidity_percent;
  // Member: pressure_pa
  cdr << ros_message.pressure_pa;
  // Member: altitude_m
  cdr << ros_message.altitude_m;
  // Member: rain_detected
  cdr << (ros_message.rain_detected ? true : false);
  // Member: water_detected
  cdr << (ros_message.water_detected ? true : false);
  // Member: sensor_status
  cdr << ros_message.sensor_status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ika_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ika_msgs::msg::EnvironmentData & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: temperature_celsius
  cdr >> ros_message.temperature_celsius;

  // Member: relative_humidity_percent
  cdr >> ros_message.relative_humidity_percent;

  // Member: pressure_pa
  cdr >> ros_message.pressure_pa;

  // Member: altitude_m
  cdr >> ros_message.altitude_m;

  // Member: rain_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rain_detected = tmp ? true : false;
  }

  // Member: water_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.water_detected = tmp ? true : false;
  }

  // Member: sensor_status
  cdr >> ros_message.sensor_status;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ika_msgs
get_serialized_size(
  const ika_msgs::msg::EnvironmentData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: temperature_celsius
  {
    size_t item_size = sizeof(ros_message.temperature_celsius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relative_humidity_percent
  {
    size_t item_size = sizeof(ros_message.relative_humidity_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pressure_pa
  {
    size_t item_size = sizeof(ros_message.pressure_pa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: altitude_m
  {
    size_t item_size = sizeof(ros_message.altitude_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rain_detected
  {
    size_t item_size = sizeof(ros_message.rain_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: water_detected
  {
    size_t item_size = sizeof(ros_message.water_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sensor_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sensor_status.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ika_msgs
max_serialized_size_EnvironmentData(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: temperature_celsius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: relative_humidity_percent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pressure_pa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: altitude_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rain_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: water_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sensor_status
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ika_msgs::msg::EnvironmentData;
    is_plain =
      (
      offsetof(DataType, sensor_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EnvironmentData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ika_msgs::msg::EnvironmentData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EnvironmentData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ika_msgs::msg::EnvironmentData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EnvironmentData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ika_msgs::msg::EnvironmentData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EnvironmentData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EnvironmentData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EnvironmentData__callbacks = {
  "ika_msgs::msg",
  "EnvironmentData",
  _EnvironmentData__cdr_serialize,
  _EnvironmentData__cdr_deserialize,
  _EnvironmentData__get_serialized_size,
  _EnvironmentData__max_serialized_size
};

static rosidl_message_type_support_t _EnvironmentData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EnvironmentData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ika_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ika_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ika_msgs::msg::EnvironmentData>()
{
  return &ika_msgs::msg::typesupport_fastrtps_cpp::_EnvironmentData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ika_msgs, msg, EnvironmentData)() {
  return &ika_msgs::msg::typesupport_fastrtps_cpp::_EnvironmentData__handle;
}

#ifdef __cplusplus
}
#endif
