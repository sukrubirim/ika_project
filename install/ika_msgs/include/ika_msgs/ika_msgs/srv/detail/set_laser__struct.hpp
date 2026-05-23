// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ika_msgs:srv/SetLaser.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__SRV__DETAIL__SET_LASER__STRUCT_HPP_
#define IKA_MSGS__SRV__DETAIL__SET_LASER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ika_msgs__srv__SetLaser_Request __attribute__((deprecated))
#else
# define DEPRECATED__ika_msgs__srv__SetLaser_Request __declspec(deprecated)
#endif

namespace ika_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLaser_Request_
{
  using Type = SetLaser_Request_<ContainerAllocator>;

  explicit SetLaser_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
      this->duration_sec = 0.0f;
      this->command_source = "";
    }
  }

  explicit SetLaser_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command_source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
      this->duration_sec = 0.0f;
      this->command_source = "";
    }
  }

  // field types and members
  using _enable_type =
    bool;
  _enable_type enable;
  using _duration_sec_type =
    float;
  _duration_sec_type duration_sec;
  using _command_source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_source_type command_source;

  // setters for named parameter idiom
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__duration_sec(
    const float & _arg)
  {
    this->duration_sec = _arg;
    return *this;
  }
  Type & set__command_source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command_source = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ika_msgs::srv::SetLaser_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ika_msgs::srv::SetLaser_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ika_msgs::srv::SetLaser_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ika_msgs::srv::SetLaser_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ika_msgs::srv::SetLaser_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ika_msgs::srv::SetLaser_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ika_msgs::srv::SetLaser_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ika_msgs::srv::SetLaser_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ika_msgs::srv::SetLaser_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ika_msgs::srv::SetLaser_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ika_msgs__srv__SetLaser_Request
    std::shared_ptr<ika_msgs::srv::SetLaser_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ika_msgs__srv__SetLaser_Request
    std::shared_ptr<ika_msgs::srv::SetLaser_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLaser_Request_ & other) const
  {
    if (this->enable != other.enable) {
      return false;
    }
    if (this->duration_sec != other.duration_sec) {
      return false;
    }
    if (this->command_source != other.command_source) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLaser_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLaser_Request_

// alias to use template instance with default allocator
using SetLaser_Request =
  ika_msgs::srv::SetLaser_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ika_msgs


#ifndef _WIN32
# define DEPRECATED__ika_msgs__srv__SetLaser_Response __attribute__((deprecated))
#else
# define DEPRECATED__ika_msgs__srv__SetLaser_Response __declspec(deprecated)
#endif

namespace ika_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLaser_Response_
{
  using Type = SetLaser_Response_<ContainerAllocator>;

  explicit SetLaser_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetLaser_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ika_msgs::srv::SetLaser_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ika_msgs::srv::SetLaser_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ika_msgs::srv::SetLaser_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ika_msgs::srv::SetLaser_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ika_msgs::srv::SetLaser_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ika_msgs::srv::SetLaser_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ika_msgs::srv::SetLaser_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ika_msgs::srv::SetLaser_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ika_msgs::srv::SetLaser_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ika_msgs::srv::SetLaser_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ika_msgs__srv__SetLaser_Response
    std::shared_ptr<ika_msgs::srv::SetLaser_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ika_msgs__srv__SetLaser_Response
    std::shared_ptr<ika_msgs::srv::SetLaser_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLaser_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLaser_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLaser_Response_

// alias to use template instance with default allocator
using SetLaser_Response =
  ika_msgs::srv::SetLaser_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ika_msgs

namespace ika_msgs
{

namespace srv
{

struct SetLaser
{
  using Request = ika_msgs::srv::SetLaser_Request;
  using Response = ika_msgs::srv::SetLaser_Response;
};

}  // namespace srv

}  // namespace ika_msgs

#endif  // IKA_MSGS__SRV__DETAIL__SET_LASER__STRUCT_HPP_
