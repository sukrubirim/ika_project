// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ika_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_
#define IKA_MSGS__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ika_msgs/msg/detail/mission_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ika_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionState_elapsed_time_sec
{
public:
  explicit Init_MissionState_elapsed_time_sec(::ika_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  ::ika_msgs::msg::MissionState elapsed_time_sec(::ika_msgs::msg::MissionState::_elapsed_time_sec_type arg)
  {
    msg_.elapsed_time_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::msg::MissionState msg_;
};

class Init_MissionState_emergency_stop_active
{
public:
  explicit Init_MissionState_emergency_stop_active(::ika_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_elapsed_time_sec emergency_stop_active(::ika_msgs::msg::MissionState::_emergency_stop_active_type arg)
  {
    msg_.emergency_stop_active = std::move(arg);
    return Init_MissionState_elapsed_time_sec(msg_);
  }

private:
  ::ika_msgs::msg::MissionState msg_;
};

class Init_MissionState_autonomous_enabled
{
public:
  explicit Init_MissionState_autonomous_enabled(::ika_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_emergency_stop_active autonomous_enabled(::ika_msgs::msg::MissionState::_autonomous_enabled_type arg)
  {
    msg_.autonomous_enabled = std::move(arg);
    return Init_MissionState_emergency_stop_active(msg_);
  }

private:
  ::ika_msgs::msg::MissionState msg_;
};

class Init_MissionState_status_text
{
public:
  explicit Init_MissionState_status_text(::ika_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_autonomous_enabled status_text(::ika_msgs::msg::MissionState::_status_text_type arg)
  {
    msg_.status_text = std::move(arg);
    return Init_MissionState_autonomous_enabled(msg_);
  }

private:
  ::ika_msgs::msg::MissionState msg_;
};

class Init_MissionState_stage_name
{
public:
  explicit Init_MissionState_stage_name(::ika_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_status_text stage_name(::ika_msgs::msg::MissionState::_stage_name_type arg)
  {
    msg_.stage_name = std::move(arg);
    return Init_MissionState_status_text(msg_);
  }

private:
  ::ika_msgs::msg::MissionState msg_;
};

class Init_MissionState_mission_status
{
public:
  explicit Init_MissionState_mission_status(::ika_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_stage_name mission_status(::ika_msgs::msg::MissionState::_mission_status_type arg)
  {
    msg_.mission_status = std::move(arg);
    return Init_MissionState_stage_name(msg_);
  }

private:
  ::ika_msgs::msg::MissionState msg_;
};

class Init_MissionState_current_stage
{
public:
  explicit Init_MissionState_current_stage(::ika_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_mission_status current_stage(::ika_msgs::msg::MissionState::_current_stage_type arg)
  {
    msg_.current_stage = std::move(arg);
    return Init_MissionState_mission_status(msg_);
  }

private:
  ::ika_msgs::msg::MissionState msg_;
};

class Init_MissionState_mission_mode
{
public:
  explicit Init_MissionState_mission_mode(::ika_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_current_stage mission_mode(::ika_msgs::msg::MissionState::_mission_mode_type arg)
  {
    msg_.mission_mode = std::move(arg);
    return Init_MissionState_current_stage(msg_);
  }

private:
  ::ika_msgs::msg::MissionState msg_;
};

class Init_MissionState_header
{
public:
  Init_MissionState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionState_mission_mode header(::ika_msgs::msg::MissionState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MissionState_mission_mode(msg_);
  }

private:
  ::ika_msgs::msg::MissionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::msg::MissionState>()
{
  return ika_msgs::msg::builder::Init_MissionState_header();
}

}  // namespace ika_msgs

#endif  // IKA_MSGS__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_
