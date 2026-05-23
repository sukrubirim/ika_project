// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ika_msgs:msg/EnvironmentData.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__MSG__DETAIL__ENVIRONMENT_DATA__TRAITS_HPP_
#define IKA_MSGS__MSG__DETAIL__ENVIRONMENT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ika_msgs/msg/detail/environment_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ika_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnvironmentData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: temperature_celsius
  {
    out << "temperature_celsius: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_celsius, out);
    out << ", ";
  }

  // member: relative_humidity_percent
  {
    out << "relative_humidity_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_humidity_percent, out);
    out << ", ";
  }

  // member: pressure_pa
  {
    out << "pressure_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_pa, out);
    out << ", ";
  }

  // member: altitude_m
  {
    out << "altitude_m: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_m, out);
    out << ", ";
  }

  // member: rain_detected
  {
    out << "rain_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.rain_detected, out);
    out << ", ";
  }

  // member: water_detected
  {
    out << "water_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.water_detected, out);
    out << ", ";
  }

  // member: sensor_status
  {
    out << "sensor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnvironmentData & msg,
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

  // member: temperature_celsius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_celsius: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_celsius, out);
    out << "\n";
  }

  // member: relative_humidity_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_humidity_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_humidity_percent, out);
    out << "\n";
  }

  // member: pressure_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_pa, out);
    out << "\n";
  }

  // member: altitude_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_m: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_m, out);
    out << "\n";
  }

  // member: rain_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rain_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.rain_detected, out);
    out << "\n";
  }

  // member: water_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "water_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.water_detected, out);
    out << "\n";
  }

  // member: sensor_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnvironmentData & msg, bool use_flow_style = false)
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
  const ika_msgs::msg::EnvironmentData & msg,
  std::ostream & out, size_t indentation = 0)
{
  ika_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ika_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ika_msgs::msg::EnvironmentData & msg)
{
  return ika_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ika_msgs::msg::EnvironmentData>()
{
  return "ika_msgs::msg::EnvironmentData";
}

template<>
inline const char * name<ika_msgs::msg::EnvironmentData>()
{
  return "ika_msgs/msg/EnvironmentData";
}

template<>
struct has_fixed_size<ika_msgs::msg::EnvironmentData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ika_msgs::msg::EnvironmentData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ika_msgs::msg::EnvironmentData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IKA_MSGS__MSG__DETAIL__ENVIRONMENT_DATA__TRAITS_HPP_
