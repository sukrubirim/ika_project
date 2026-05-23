// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ika_msgs:action/AimAndFire.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__ACTION__DETAIL__AIM_AND_FIRE__BUILDER_HPP_
#define IKA_MSGS__ACTION__DETAIL__AIM_AND_FIRE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ika_msgs/action/detail/aim_and_fire__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ika_msgs
{

namespace action
{

namespace builder
{

class Init_AimAndFire_Goal_fire_duration_sec
{
public:
  explicit Init_AimAndFire_Goal_fire_duration_sec(::ika_msgs::action::AimAndFire_Goal & msg)
  : msg_(msg)
  {}
  ::ika_msgs::action::AimAndFire_Goal fire_duration_sec(::ika_msgs::action::AimAndFire_Goal::_fire_duration_sec_type arg)
  {
    msg_.fire_duration_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Goal msg_;
};

class Init_AimAndFire_Goal_aim_timeout_sec
{
public:
  explicit Init_AimAndFire_Goal_aim_timeout_sec(::ika_msgs::action::AimAndFire_Goal & msg)
  : msg_(msg)
  {}
  Init_AimAndFire_Goal_fire_duration_sec aim_timeout_sec(::ika_msgs::action::AimAndFire_Goal::_aim_timeout_sec_type arg)
  {
    msg_.aim_timeout_sec = std::move(arg);
    return Init_AimAndFire_Goal_fire_duration_sec(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Goal msg_;
};

class Init_AimAndFire_Goal_max_attempts
{
public:
  explicit Init_AimAndFire_Goal_max_attempts(::ika_msgs::action::AimAndFire_Goal & msg)
  : msg_(msg)
  {}
  Init_AimAndFire_Goal_aim_timeout_sec max_attempts(::ika_msgs::action::AimAndFire_Goal::_max_attempts_type arg)
  {
    msg_.max_attempts = std::move(arg);
    return Init_AimAndFire_Goal_aim_timeout_sec(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Goal msg_;
};

class Init_AimAndFire_Goal_target_distance_m
{
public:
  explicit Init_AimAndFire_Goal_target_distance_m(::ika_msgs::action::AimAndFire_Goal & msg)
  : msg_(msg)
  {}
  Init_AimAndFire_Goal_max_attempts target_distance_m(::ika_msgs::action::AimAndFire_Goal::_target_distance_m_type arg)
  {
    msg_.target_distance_m = std::move(arg);
    return Init_AimAndFire_Goal_max_attempts(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Goal msg_;
};

class Init_AimAndFire_Goal_target_y
{
public:
  explicit Init_AimAndFire_Goal_target_y(::ika_msgs::action::AimAndFire_Goal & msg)
  : msg_(msg)
  {}
  Init_AimAndFire_Goal_target_distance_m target_y(::ika_msgs::action::AimAndFire_Goal::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_AimAndFire_Goal_target_distance_m(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Goal msg_;
};

class Init_AimAndFire_Goal_target_x
{
public:
  Init_AimAndFire_Goal_target_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AimAndFire_Goal_target_y target_x(::ika_msgs::action::AimAndFire_Goal::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_AimAndFire_Goal_target_y(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::action::AimAndFire_Goal>()
{
  return ika_msgs::action::builder::Init_AimAndFire_Goal_target_x();
}

}  // namespace ika_msgs


namespace ika_msgs
{

namespace action
{

namespace builder
{

class Init_AimAndFire_Result_result_message
{
public:
  explicit Init_AimAndFire_Result_result_message(::ika_msgs::action::AimAndFire_Result & msg)
  : msg_(msg)
  {}
  ::ika_msgs::action::AimAndFire_Result result_message(::ika_msgs::action::AimAndFire_Result::_result_message_type arg)
  {
    msg_.result_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Result msg_;
};

class Init_AimAndFire_Result_final_error_y
{
public:
  explicit Init_AimAndFire_Result_final_error_y(::ika_msgs::action::AimAndFire_Result & msg)
  : msg_(msg)
  {}
  Init_AimAndFire_Result_result_message final_error_y(::ika_msgs::action::AimAndFire_Result::_final_error_y_type arg)
  {
    msg_.final_error_y = std::move(arg);
    return Init_AimAndFire_Result_result_message(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Result msg_;
};

class Init_AimAndFire_Result_final_error_x
{
public:
  explicit Init_AimAndFire_Result_final_error_x(::ika_msgs::action::AimAndFire_Result & msg)
  : msg_(msg)
  {}
  Init_AimAndFire_Result_final_error_y final_error_x(::ika_msgs::action::AimAndFire_Result::_final_error_x_type arg)
  {
    msg_.final_error_x = std::move(arg);
    return Init_AimAndFire_Result_final_error_y(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Result msg_;
};

class Init_AimAndFire_Result_attempts_used
{
public:
  explicit Init_AimAndFire_Result_attempts_used(::ika_msgs::action::AimAndFire_Result & msg)
  : msg_(msg)
  {}
  Init_AimAndFire_Result_final_error_x attempts_used(::ika_msgs::action::AimAndFire_Result::_attempts_used_type arg)
  {
    msg_.attempts_used = std::move(arg);
    return Init_AimAndFire_Result_final_error_x(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Result msg_;
};

class Init_AimAndFire_Result_success
{
public:
  Init_AimAndFire_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AimAndFire_Result_attempts_used success(::ika_msgs::action::AimAndFire_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AimAndFire_Result_attempts_used(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::action::AimAndFire_Result>()
{
  return ika_msgs::action::builder::Init_AimAndFire_Result_success();
}

}  // namespace ika_msgs


namespace ika_msgs
{

namespace action
{

namespace builder
{

class Init_AimAndFire_Feedback_feedback_message
{
public:
  explicit Init_AimAndFire_Feedback_feedback_message(::ika_msgs::action::AimAndFire_Feedback & msg)
  : msg_(msg)
  {}
  ::ika_msgs::action::AimAndFire_Feedback feedback_message(::ika_msgs::action::AimAndFire_Feedback::_feedback_message_type arg)
  {
    msg_.feedback_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Feedback msg_;
};

class Init_AimAndFire_Feedback_current_attempt
{
public:
  explicit Init_AimAndFire_Feedback_current_attempt(::ika_msgs::action::AimAndFire_Feedback & msg)
  : msg_(msg)
  {}
  Init_AimAndFire_Feedback_feedback_message current_attempt(::ika_msgs::action::AimAndFire_Feedback::_current_attempt_type arg)
  {
    msg_.current_attempt = std::move(arg);
    return Init_AimAndFire_Feedback_feedback_message(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Feedback msg_;
};

class Init_AimAndFire_Feedback_target_locked
{
public:
  explicit Init_AimAndFire_Feedback_target_locked(::ika_msgs::action::AimAndFire_Feedback & msg)
  : msg_(msg)
  {}
  Init_AimAndFire_Feedback_current_attempt target_locked(::ika_msgs::action::AimAndFire_Feedback::_target_locked_type arg)
  {
    msg_.target_locked = std::move(arg);
    return Init_AimAndFire_Feedback_current_attempt(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Feedback msg_;
};

class Init_AimAndFire_Feedback_current_error_y
{
public:
  explicit Init_AimAndFire_Feedback_current_error_y(::ika_msgs::action::AimAndFire_Feedback & msg)
  : msg_(msg)
  {}
  Init_AimAndFire_Feedback_target_locked current_error_y(::ika_msgs::action::AimAndFire_Feedback::_current_error_y_type arg)
  {
    msg_.current_error_y = std::move(arg);
    return Init_AimAndFire_Feedback_target_locked(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Feedback msg_;
};

class Init_AimAndFire_Feedback_current_error_x
{
public:
  Init_AimAndFire_Feedback_current_error_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AimAndFire_Feedback_current_error_y current_error_x(::ika_msgs::action::AimAndFire_Feedback::_current_error_x_type arg)
  {
    msg_.current_error_x = std::move(arg);
    return Init_AimAndFire_Feedback_current_error_y(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::action::AimAndFire_Feedback>()
{
  return ika_msgs::action::builder::Init_AimAndFire_Feedback_current_error_x();
}

}  // namespace ika_msgs


namespace ika_msgs
{

namespace action
{

namespace builder
{

class Init_AimAndFire_SendGoal_Request_goal
{
public:
  explicit Init_AimAndFire_SendGoal_Request_goal(::ika_msgs::action::AimAndFire_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ika_msgs::action::AimAndFire_SendGoal_Request goal(::ika_msgs::action::AimAndFire_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_SendGoal_Request msg_;
};

class Init_AimAndFire_SendGoal_Request_goal_id
{
public:
  Init_AimAndFire_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AimAndFire_SendGoal_Request_goal goal_id(::ika_msgs::action::AimAndFire_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AimAndFire_SendGoal_Request_goal(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::action::AimAndFire_SendGoal_Request>()
{
  return ika_msgs::action::builder::Init_AimAndFire_SendGoal_Request_goal_id();
}

}  // namespace ika_msgs


namespace ika_msgs
{

namespace action
{

namespace builder
{

class Init_AimAndFire_SendGoal_Response_stamp
{
public:
  explicit Init_AimAndFire_SendGoal_Response_stamp(::ika_msgs::action::AimAndFire_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ika_msgs::action::AimAndFire_SendGoal_Response stamp(::ika_msgs::action::AimAndFire_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_SendGoal_Response msg_;
};

class Init_AimAndFire_SendGoal_Response_accepted
{
public:
  Init_AimAndFire_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AimAndFire_SendGoal_Response_stamp accepted(::ika_msgs::action::AimAndFire_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AimAndFire_SendGoal_Response_stamp(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::action::AimAndFire_SendGoal_Response>()
{
  return ika_msgs::action::builder::Init_AimAndFire_SendGoal_Response_accepted();
}

}  // namespace ika_msgs


namespace ika_msgs
{

namespace action
{

namespace builder
{

class Init_AimAndFire_GetResult_Request_goal_id
{
public:
  Init_AimAndFire_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ika_msgs::action::AimAndFire_GetResult_Request goal_id(::ika_msgs::action::AimAndFire_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::action::AimAndFire_GetResult_Request>()
{
  return ika_msgs::action::builder::Init_AimAndFire_GetResult_Request_goal_id();
}

}  // namespace ika_msgs


namespace ika_msgs
{

namespace action
{

namespace builder
{

class Init_AimAndFire_GetResult_Response_result
{
public:
  explicit Init_AimAndFire_GetResult_Response_result(::ika_msgs::action::AimAndFire_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ika_msgs::action::AimAndFire_GetResult_Response result(::ika_msgs::action::AimAndFire_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_GetResult_Response msg_;
};

class Init_AimAndFire_GetResult_Response_status
{
public:
  Init_AimAndFire_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AimAndFire_GetResult_Response_result status(::ika_msgs::action::AimAndFire_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AimAndFire_GetResult_Response_result(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::action::AimAndFire_GetResult_Response>()
{
  return ika_msgs::action::builder::Init_AimAndFire_GetResult_Response_status();
}

}  // namespace ika_msgs


namespace ika_msgs
{

namespace action
{

namespace builder
{

class Init_AimAndFire_FeedbackMessage_feedback
{
public:
  explicit Init_AimAndFire_FeedbackMessage_feedback(::ika_msgs::action::AimAndFire_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ika_msgs::action::AimAndFire_FeedbackMessage feedback(::ika_msgs::action::AimAndFire_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_FeedbackMessage msg_;
};

class Init_AimAndFire_FeedbackMessage_goal_id
{
public:
  Init_AimAndFire_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AimAndFire_FeedbackMessage_feedback goal_id(::ika_msgs::action::AimAndFire_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AimAndFire_FeedbackMessage_feedback(msg_);
  }

private:
  ::ika_msgs::action::AimAndFire_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::action::AimAndFire_FeedbackMessage>()
{
  return ika_msgs::action::builder::Init_AimAndFire_FeedbackMessage_goal_id();
}

}  // namespace ika_msgs

#endif  // IKA_MSGS__ACTION__DETAIL__AIM_AND_FIRE__BUILDER_HPP_
