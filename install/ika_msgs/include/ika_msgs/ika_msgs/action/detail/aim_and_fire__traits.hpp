// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ika_msgs:action/AimAndFire.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__ACTION__DETAIL__AIM_AND_FIRE__TRAITS_HPP_
#define IKA_MSGS__ACTION__DETAIL__AIM_AND_FIRE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ika_msgs/action/detail/aim_and_fire__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ika_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AimAndFire_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_x
  {
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << ", ";
  }

  // member: target_y
  {
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << ", ";
  }

  // member: target_distance_m
  {
    out << "target_distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.target_distance_m, out);
    out << ", ";
  }

  // member: max_attempts
  {
    out << "max_attempts: ";
    rosidl_generator_traits::value_to_yaml(msg.max_attempts, out);
    out << ", ";
  }

  // member: aim_timeout_sec
  {
    out << "aim_timeout_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.aim_timeout_sec, out);
    out << ", ";
  }

  // member: fire_duration_sec
  {
    out << "fire_duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.fire_duration_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AimAndFire_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << "\n";
  }

  // member: target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << "\n";
  }

  // member: target_distance_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.target_distance_m, out);
    out << "\n";
  }

  // member: max_attempts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_attempts: ";
    rosidl_generator_traits::value_to_yaml(msg.max_attempts, out);
    out << "\n";
  }

  // member: aim_timeout_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aim_timeout_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.aim_timeout_sec, out);
    out << "\n";
  }

  // member: fire_duration_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fire_duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.fire_duration_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AimAndFire_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ika_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ika_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ika_msgs::action::AimAndFire_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ika_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ika_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ika_msgs::action::AimAndFire_Goal & msg)
{
  return ika_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ika_msgs::action::AimAndFire_Goal>()
{
  return "ika_msgs::action::AimAndFire_Goal";
}

template<>
inline const char * name<ika_msgs::action::AimAndFire_Goal>()
{
  return "ika_msgs/action/AimAndFire_Goal";
}

template<>
struct has_fixed_size<ika_msgs::action::AimAndFire_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ika_msgs::action::AimAndFire_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ika_msgs::action::AimAndFire_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ika_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AimAndFire_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: attempts_used
  {
    out << "attempts_used: ";
    rosidl_generator_traits::value_to_yaml(msg.attempts_used, out);
    out << ", ";
  }

  // member: final_error_x
  {
    out << "final_error_x: ";
    rosidl_generator_traits::value_to_yaml(msg.final_error_x, out);
    out << ", ";
  }

  // member: final_error_y
  {
    out << "final_error_y: ";
    rosidl_generator_traits::value_to_yaml(msg.final_error_y, out);
    out << ", ";
  }

  // member: result_message
  {
    out << "result_message: ";
    rosidl_generator_traits::value_to_yaml(msg.result_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AimAndFire_Result & msg,
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

  // member: attempts_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attempts_used: ";
    rosidl_generator_traits::value_to_yaml(msg.attempts_used, out);
    out << "\n";
  }

  // member: final_error_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_error_x: ";
    rosidl_generator_traits::value_to_yaml(msg.final_error_x, out);
    out << "\n";
  }

  // member: final_error_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_error_y: ";
    rosidl_generator_traits::value_to_yaml(msg.final_error_y, out);
    out << "\n";
  }

  // member: result_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_message: ";
    rosidl_generator_traits::value_to_yaml(msg.result_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AimAndFire_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ika_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ika_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ika_msgs::action::AimAndFire_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ika_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ika_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ika_msgs::action::AimAndFire_Result & msg)
{
  return ika_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ika_msgs::action::AimAndFire_Result>()
{
  return "ika_msgs::action::AimAndFire_Result";
}

template<>
inline const char * name<ika_msgs::action::AimAndFire_Result>()
{
  return "ika_msgs/action/AimAndFire_Result";
}

template<>
struct has_fixed_size<ika_msgs::action::AimAndFire_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ika_msgs::action::AimAndFire_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ika_msgs::action::AimAndFire_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ika_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AimAndFire_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_error_x
  {
    out << "current_error_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_error_x, out);
    out << ", ";
  }

  // member: current_error_y
  {
    out << "current_error_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_error_y, out);
    out << ", ";
  }

  // member: target_locked
  {
    out << "target_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.target_locked, out);
    out << ", ";
  }

  // member: current_attempt
  {
    out << "current_attempt: ";
    rosidl_generator_traits::value_to_yaml(msg.current_attempt, out);
    out << ", ";
  }

  // member: feedback_message
  {
    out << "feedback_message: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AimAndFire_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_error_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_error_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_error_x, out);
    out << "\n";
  }

  // member: current_error_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_error_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_error_y, out);
    out << "\n";
  }

  // member: target_locked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.target_locked, out);
    out << "\n";
  }

  // member: current_attempt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_attempt: ";
    rosidl_generator_traits::value_to_yaml(msg.current_attempt, out);
    out << "\n";
  }

  // member: feedback_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_message: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AimAndFire_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ika_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ika_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ika_msgs::action::AimAndFire_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ika_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ika_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ika_msgs::action::AimAndFire_Feedback & msg)
{
  return ika_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ika_msgs::action::AimAndFire_Feedback>()
{
  return "ika_msgs::action::AimAndFire_Feedback";
}

template<>
inline const char * name<ika_msgs::action::AimAndFire_Feedback>()
{
  return "ika_msgs/action/AimAndFire_Feedback";
}

template<>
struct has_fixed_size<ika_msgs::action::AimAndFire_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ika_msgs::action::AimAndFire_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ika_msgs::action::AimAndFire_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ika_msgs/action/detail/aim_and_fire__traits.hpp"

namespace ika_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AimAndFire_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AimAndFire_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AimAndFire_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ika_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ika_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ika_msgs::action::AimAndFire_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ika_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ika_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ika_msgs::action::AimAndFire_SendGoal_Request & msg)
{
  return ika_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ika_msgs::action::AimAndFire_SendGoal_Request>()
{
  return "ika_msgs::action::AimAndFire_SendGoal_Request";
}

template<>
inline const char * name<ika_msgs::action::AimAndFire_SendGoal_Request>()
{
  return "ika_msgs/action/AimAndFire_SendGoal_Request";
}

template<>
struct has_fixed_size<ika_msgs::action::AimAndFire_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ika_msgs::action::AimAndFire_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ika_msgs::action::AimAndFire_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ika_msgs::action::AimAndFire_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ika_msgs::action::AimAndFire_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ika_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AimAndFire_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AimAndFire_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AimAndFire_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ika_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ika_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ika_msgs::action::AimAndFire_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ika_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ika_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ika_msgs::action::AimAndFire_SendGoal_Response & msg)
{
  return ika_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ika_msgs::action::AimAndFire_SendGoal_Response>()
{
  return "ika_msgs::action::AimAndFire_SendGoal_Response";
}

template<>
inline const char * name<ika_msgs::action::AimAndFire_SendGoal_Response>()
{
  return "ika_msgs/action/AimAndFire_SendGoal_Response";
}

template<>
struct has_fixed_size<ika_msgs::action::AimAndFire_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ika_msgs::action::AimAndFire_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ika_msgs::action::AimAndFire_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ika_msgs::action::AimAndFire_SendGoal>()
{
  return "ika_msgs::action::AimAndFire_SendGoal";
}

template<>
inline const char * name<ika_msgs::action::AimAndFire_SendGoal>()
{
  return "ika_msgs/action/AimAndFire_SendGoal";
}

template<>
struct has_fixed_size<ika_msgs::action::AimAndFire_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ika_msgs::action::AimAndFire_SendGoal_Request>::value &&
    has_fixed_size<ika_msgs::action::AimAndFire_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ika_msgs::action::AimAndFire_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ika_msgs::action::AimAndFire_SendGoal_Request>::value &&
    has_bounded_size<ika_msgs::action::AimAndFire_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ika_msgs::action::AimAndFire_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ika_msgs::action::AimAndFire_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ika_msgs::action::AimAndFire_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ika_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AimAndFire_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AimAndFire_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AimAndFire_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ika_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ika_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ika_msgs::action::AimAndFire_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ika_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ika_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ika_msgs::action::AimAndFire_GetResult_Request & msg)
{
  return ika_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ika_msgs::action::AimAndFire_GetResult_Request>()
{
  return "ika_msgs::action::AimAndFire_GetResult_Request";
}

template<>
inline const char * name<ika_msgs::action::AimAndFire_GetResult_Request>()
{
  return "ika_msgs/action/AimAndFire_GetResult_Request";
}

template<>
struct has_fixed_size<ika_msgs::action::AimAndFire_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ika_msgs::action::AimAndFire_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ika_msgs::action::AimAndFire_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__traits.hpp"

namespace ika_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AimAndFire_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AimAndFire_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AimAndFire_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ika_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ika_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ika_msgs::action::AimAndFire_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ika_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ika_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ika_msgs::action::AimAndFire_GetResult_Response & msg)
{
  return ika_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ika_msgs::action::AimAndFire_GetResult_Response>()
{
  return "ika_msgs::action::AimAndFire_GetResult_Response";
}

template<>
inline const char * name<ika_msgs::action::AimAndFire_GetResult_Response>()
{
  return "ika_msgs/action/AimAndFire_GetResult_Response";
}

template<>
struct has_fixed_size<ika_msgs::action::AimAndFire_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ika_msgs::action::AimAndFire_Result>::value> {};

template<>
struct has_bounded_size<ika_msgs::action::AimAndFire_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ika_msgs::action::AimAndFire_Result>::value> {};

template<>
struct is_message<ika_msgs::action::AimAndFire_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ika_msgs::action::AimAndFire_GetResult>()
{
  return "ika_msgs::action::AimAndFire_GetResult";
}

template<>
inline const char * name<ika_msgs::action::AimAndFire_GetResult>()
{
  return "ika_msgs/action/AimAndFire_GetResult";
}

template<>
struct has_fixed_size<ika_msgs::action::AimAndFire_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ika_msgs::action::AimAndFire_GetResult_Request>::value &&
    has_fixed_size<ika_msgs::action::AimAndFire_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ika_msgs::action::AimAndFire_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ika_msgs::action::AimAndFire_GetResult_Request>::value &&
    has_bounded_size<ika_msgs::action::AimAndFire_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ika_msgs::action::AimAndFire_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ika_msgs::action::AimAndFire_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ika_msgs::action::AimAndFire_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__traits.hpp"

namespace ika_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const AimAndFire_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AimAndFire_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AimAndFire_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ika_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ika_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ika_msgs::action::AimAndFire_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ika_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ika_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ika_msgs::action::AimAndFire_FeedbackMessage & msg)
{
  return ika_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ika_msgs::action::AimAndFire_FeedbackMessage>()
{
  return "ika_msgs::action::AimAndFire_FeedbackMessage";
}

template<>
inline const char * name<ika_msgs::action::AimAndFire_FeedbackMessage>()
{
  return "ika_msgs/action/AimAndFire_FeedbackMessage";
}

template<>
struct has_fixed_size<ika_msgs::action::AimAndFire_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ika_msgs::action::AimAndFire_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ika_msgs::action::AimAndFire_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ika_msgs::action::AimAndFire_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ika_msgs::action::AimAndFire_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ika_msgs::action::AimAndFire>
  : std::true_type
{
};

template<>
struct is_action_goal<ika_msgs::action::AimAndFire_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ika_msgs::action::AimAndFire_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ika_msgs::action::AimAndFire_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // IKA_MSGS__ACTION__DETAIL__AIM_AND_FIRE__TRAITS_HPP_
