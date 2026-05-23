// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ika_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_
#define IKA_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ika_msgs__msg__MissionState __attribute__((deprecated))
#else
# define DEPRECATED__ika_msgs__msg__MissionState __declspec(deprecated)
#endif

namespace ika_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionState_
{
  using Type = MissionState_<ContainerAllocator>;

  explicit MissionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_mode = 0;
      this->current_stage = 0;
      this->mission_status = 0;
      this->stage_name = "";
      this->status_text = "";
      this->autonomous_enabled = false;
      this->emergency_stop_active = false;
      this->elapsed_time_sec = 0.0f;
    }
  }

  explicit MissionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    stage_name(_alloc),
    status_text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_mode = 0;
      this->current_stage = 0;
      this->mission_status = 0;
      this->stage_name = "";
      this->status_text = "";
      this->autonomous_enabled = false;
      this->emergency_stop_active = false;
      this->elapsed_time_sec = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mission_mode_type =
    uint8_t;
  _mission_mode_type mission_mode;
  using _current_stage_type =
    uint8_t;
  _current_stage_type current_stage;
  using _mission_status_type =
    uint8_t;
  _mission_status_type mission_status;
  using _stage_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stage_name_type stage_name;
  using _status_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_text_type status_text;
  using _autonomous_enabled_type =
    bool;
  _autonomous_enabled_type autonomous_enabled;
  using _emergency_stop_active_type =
    bool;
  _emergency_stop_active_type emergency_stop_active;
  using _elapsed_time_sec_type =
    float;
  _elapsed_time_sec_type elapsed_time_sec;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mission_mode(
    const uint8_t & _arg)
  {
    this->mission_mode = _arg;
    return *this;
  }
  Type & set__current_stage(
    const uint8_t & _arg)
  {
    this->current_stage = _arg;
    return *this;
  }
  Type & set__mission_status(
    const uint8_t & _arg)
  {
    this->mission_status = _arg;
    return *this;
  }
  Type & set__stage_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stage_name = _arg;
    return *this;
  }
  Type & set__status_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_text = _arg;
    return *this;
  }
  Type & set__autonomous_enabled(
    const bool & _arg)
  {
    this->autonomous_enabled = _arg;
    return *this;
  }
  Type & set__emergency_stop_active(
    const bool & _arg)
  {
    this->emergency_stop_active = _arg;
    return *this;
  }
  Type & set__elapsed_time_sec(
    const float & _arg)
  {
    this->elapsed_time_sec = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MODE_MANUAL =
    0u;
  static constexpr uint8_t MODE_AUTONOMOUS =
    1u;
  static constexpr uint8_t MODE_TEST =
    2u;
  static constexpr uint8_t STATUS_IDLE =
    0u;
  static constexpr uint8_t STATUS_RUNNING =
    1u;
  static constexpr uint8_t STATUS_PAUSED =
    2u;
  static constexpr uint8_t STATUS_COMPLETED =
    3u;
  static constexpr uint8_t STATUS_ERROR =
    4u;

  // pointer types
  using RawPtr =
    ika_msgs::msg::MissionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ika_msgs::msg::MissionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ika_msgs::msg::MissionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ika_msgs::msg::MissionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ika_msgs::msg::MissionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ika_msgs::msg::MissionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ika_msgs::msg::MissionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ika_msgs::msg::MissionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ika_msgs::msg::MissionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ika_msgs::msg::MissionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ika_msgs__msg__MissionState
    std::shared_ptr<ika_msgs::msg::MissionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ika_msgs__msg__MissionState
    std::shared_ptr<ika_msgs::msg::MissionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mission_mode != other.mission_mode) {
      return false;
    }
    if (this->current_stage != other.current_stage) {
      return false;
    }
    if (this->mission_status != other.mission_status) {
      return false;
    }
    if (this->stage_name != other.stage_name) {
      return false;
    }
    if (this->status_text != other.status_text) {
      return false;
    }
    if (this->autonomous_enabled != other.autonomous_enabled) {
      return false;
    }
    if (this->emergency_stop_active != other.emergency_stop_active) {
      return false;
    }
    if (this->elapsed_time_sec != other.elapsed_time_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionState_

// alias to use template instance with default allocator
using MissionState =
  ika_msgs::msg::MissionState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::MODE_MANUAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::MODE_AUTONOMOUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::MODE_TEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::STATUS_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::STATUS_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::STATUS_PAUSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::STATUS_COMPLETED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::STATUS_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ika_msgs

#endif  // IKA_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_
