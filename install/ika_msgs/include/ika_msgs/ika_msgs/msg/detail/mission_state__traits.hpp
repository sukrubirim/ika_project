// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ika_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__MSG__DETAIL__MISSION_STATE__TRAITS_HPP_
#define IKA_MSGS__MSG__DETAIL__MISSION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ika_msgs/msg/detail/mission_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ika_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: mission_mode
  {
    out << "mission_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_mode, out);
    out << ", ";
  }

  // member: current_stage
  {
    out << "current_stage: ";
    rosidl_generator_traits::value_to_yaml(msg.current_stage, out);
    out << ", ";
  }

  // member: mission_status
  {
    out << "mission_status: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_status, out);
    out << ", ";
  }

  // member: stage_name
  {
    out << "stage_name: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_name, out);
    out << ", ";
  }

  // member: status_text
  {
    out << "status_text: ";
    rosidl_generator_traits::value_to_yaml(msg.status_text, out);
    out << ", ";
  }

  // member: autonomous_enabled
  {
    out << "autonomous_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_enabled, out);
    out << ", ";
  }

  // member: emergency_stop_active
  {
    out << "emergency_stop_active: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_active, out);
    out << ", ";
  }

  // member: elapsed_time_sec
  {
    out << "elapsed_time_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_time_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: mission_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_mode, out);
    out << "\n";
  }

  // member: current_stage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_stage: ";
    rosidl_generator_traits::value_to_yaml(msg.current_stage, out);
    out << "\n";
  }

  // member: mission_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_status: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_status, out);
    out << "\n";
  }

  // member: stage_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage_name: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_name, out);
    out << "\n";
  }

  // member: status_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_text: ";
    rosidl_generator_traits::value_to_yaml(msg.status_text, out);
    out << "\n";
  }

  // member: autonomous_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_enabled, out);
    out << "\n";
  }

  // member: emergency_stop_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop_active: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_active, out);
    out << "\n";
  }

  // member: elapsed_time_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elapsed_time_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_time_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ika_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ika_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ika_msgs::msg::MissionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  ika_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ika_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ika_msgs::msg::MissionState & msg)
{
  return ika_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ika_msgs::msg::MissionState>()
{
  return "ika_msgs::msg::MissionState";
}

template<>
inline const char * name<ika_msgs::msg::MissionState>()
{
  return "ika_msgs/msg/MissionState";
}

template<>
struct has_fixed_size<ika_msgs::msg::MissionState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ika_msgs::msg::MissionState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ika_msgs::msg::MissionState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IKA_MSGS__MSG__DETAIL__MISSION_STATE__TRAITS_HPP_
