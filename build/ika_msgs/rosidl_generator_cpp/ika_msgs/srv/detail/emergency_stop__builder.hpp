// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ika_msgs:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__SRV__DETAIL__EMERGENCY_STOP__BUILDER_HPP_
#define IKA_MSGS__SRV__DETAIL__EMERGENCY_STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ika_msgs/srv/detail/emergency_stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ika_msgs
{

namespace srv
{

namespace builder
{

class Init_EmergencyStop_Request_reason
{
public:
  explicit Init_EmergencyStop_Request_reason(::ika_msgs::srv::EmergencyStop_Request & msg)
  : msg_(msg)
  {}
  ::ika_msgs::srv::EmergencyStop_Request reason(::ika_msgs::srv::EmergencyStop_Request::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::srv::EmergencyStop_Request msg_;
};

class Init_EmergencyStop_Request_stop
{
public:
  Init_EmergencyStop_Request_stop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyStop_Request_reason stop(::ika_msgs::srv::EmergencyStop_Request::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return Init_EmergencyStop_Request_reason(msg_);
  }

private:
  ::ika_msgs::srv::EmergencyStop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::srv::EmergencyStop_Request>()
{
  return ika_msgs::srv::builder::Init_EmergencyStop_Request_stop();
}

}  // namespace ika_msgs


namespace ika_msgs
{

namespace srv
{

namespace builder
{

class Init_EmergencyStop_Response_message
{
public:
  explicit Init_EmergencyStop_Response_message(::ika_msgs::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  ::ika_msgs::srv::EmergencyStop_Response message(::ika_msgs::srv::EmergencyStop_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_success
{
public:
  Init_EmergencyStop_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyStop_Response_message success(::ika_msgs::srv::EmergencyStop_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_EmergencyStop_Response_message(msg_);
  }

private:
  ::ika_msgs::srv::EmergencyStop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::srv::EmergencyStop_Response>()
{
  return ika_msgs::srv::builder::Init_EmergencyStop_Response_success();
}

}  // namespace ika_msgs

#endif  // IKA_MSGS__SRV__DETAIL__EMERGENCY_STOP__BUILDER_HPP_
