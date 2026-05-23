// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ika_msgs:srv/SetLaser.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__SRV__DETAIL__SET_LASER__TRAITS_HPP_
#define IKA_MSGS__SRV__DETAIL__SET_LASER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ika_msgs/srv/detail/set_laser__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ika_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLaser_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << ", ";
  }

  // member: duration_sec
  {
    out << "duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_sec, out);
    out << ", ";
  }

  // member: command_source
  {
    out << "command_source: ";
    rosidl_generator_traits::value_to_yaml(msg.command_source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLaser_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }

  // member: duration_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_sec, out);
    out << "\n";
  }

  // member: command_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_source: ";
    rosidl_generator_traits::value_to_yaml(msg.command_source, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLaser_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ika_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ika_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ika_msgs::srv::SetLaser_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ika_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ika_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ika_msgs::srv::SetLaser_Request & msg)
{
  return ika_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ika_msgs::srv::SetLaser_Request>()
{
  return "ika_msgs::srv::SetLaser_Request";
}

template<>
inline const char * name<ika_msgs::srv::SetLaser_Request>()
{
  return "ika_msgs/srv/SetLaser_Request";
}

template<>
struct has_fixed_size<ika_msgs::srv::SetLaser_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ika_msgs::srv::SetLaser_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ika_msgs::srv::SetLaser_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ika_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLaser_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLaser_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLaser_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ika_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ika_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ika_msgs::srv::SetLaser_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ika_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ika_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ika_msgs::srv::SetLaser_Response & msg)
{
  return ika_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ika_msgs::srv::SetLaser_Response>()
{
  return "ika_msgs::srv::SetLaser_Response";
}

template<>
inline const char * name<ika_msgs::srv::SetLaser_Response>()
{
  return "ika_msgs/srv/SetLaser_Response";
}

template<>
struct has_fixed_size<ika_msgs::srv::SetLaser_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ika_msgs::srv::SetLaser_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ika_msgs::srv::SetLaser_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ika_msgs::srv::SetLaser>()
{
  return "ika_msgs::srv::SetLaser";
}

template<>
inline const char * name<ika_msgs::srv::SetLaser>()
{
  return "ika_msgs/srv/SetLaser";
}

template<>
struct has_fixed_size<ika_msgs::srv::SetLaser>
  : std::integral_constant<
    bool,
    has_fixed_size<ika_msgs::srv::SetLaser_Request>::value &&
    has_fixed_size<ika_msgs::srv::SetLaser_Response>::value
  >
{
};

template<>
struct has_bounded_size<ika_msgs::srv::SetLaser>
  : std::integral_constant<
    bool,
    has_bounded_size<ika_msgs::srv::SetLaser_Request>::value &&
    has_bounded_size<ika_msgs::srv::SetLaser_Response>::value
  >
{
};

template<>
struct is_service<ika_msgs::srv::SetLaser>
  : std::true_type
{
};

template<>
struct is_service_request<ika_msgs::srv::SetLaser_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ika_msgs::srv::SetLaser_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IKA_MSGS__SRV__DETAIL__SET_LASER__TRAITS_HPP_
