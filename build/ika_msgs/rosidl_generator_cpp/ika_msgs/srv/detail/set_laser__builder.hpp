// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ika_msgs:srv/SetLaser.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__SRV__DETAIL__SET_LASER__BUILDER_HPP_
#define IKA_MSGS__SRV__DETAIL__SET_LASER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ika_msgs/srv/detail/set_laser__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ika_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLaser_Request_command_source
{
public:
  explicit Init_SetLaser_Request_command_source(::ika_msgs::srv::SetLaser_Request & msg)
  : msg_(msg)
  {}
  ::ika_msgs::srv::SetLaser_Request command_source(::ika_msgs::srv::SetLaser_Request::_command_source_type arg)
  {
    msg_.command_source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::srv::SetLaser_Request msg_;
};

class Init_SetLaser_Request_duration_sec
{
public:
  explicit Init_SetLaser_Request_duration_sec(::ika_msgs::srv::SetLaser_Request & msg)
  : msg_(msg)
  {}
  Init_SetLaser_Request_command_source duration_sec(::ika_msgs::srv::SetLaser_Request::_duration_sec_type arg)
  {
    msg_.duration_sec = std::move(arg);
    return Init_SetLaser_Request_command_source(msg_);
  }

private:
  ::ika_msgs::srv::SetLaser_Request msg_;
};

class Init_SetLaser_Request_enable
{
public:
  Init_SetLaser_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLaser_Request_duration_sec enable(::ika_msgs::srv::SetLaser_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_SetLaser_Request_duration_sec(msg_);
  }

private:
  ::ika_msgs::srv::SetLaser_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::srv::SetLaser_Request>()
{
  return ika_msgs::srv::builder::Init_SetLaser_Request_enable();
}

}  // namespace ika_msgs


namespace ika_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLaser_Response_message
{
public:
  explicit Init_SetLaser_Response_message(::ika_msgs::srv::SetLaser_Response & msg)
  : msg_(msg)
  {}
  ::ika_msgs::srv::SetLaser_Response message(::ika_msgs::srv::SetLaser_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::srv::SetLaser_Response msg_;
};

class Init_SetLaser_Response_success
{
public:
  Init_SetLaser_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLaser_Response_message success(::ika_msgs::srv::SetLaser_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetLaser_Response_message(msg_);
  }

private:
  ::ika_msgs::srv::SetLaser_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::srv::SetLaser_Response>()
{
  return ika_msgs::srv::builder::Init_SetLaser_Response_success();
}

}  // namespace ika_msgs

#endif  // IKA_MSGS__SRV__DETAIL__SET_LASER__BUILDER_HPP_
