// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ika_msgs:msg/EnvironmentData.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__MSG__DETAIL__ENVIRONMENT_DATA__STRUCT_HPP_
#define IKA_MSGS__MSG__DETAIL__ENVIRONMENT_DATA__STRUCT_HPP_

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
# define DEPRECATED__ika_msgs__msg__EnvironmentData __attribute__((deprecated))
#else
# define DEPRECATED__ika_msgs__msg__EnvironmentData __declspec(deprecated)
#endif

namespace ika_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnvironmentData_
{
  using Type = EnvironmentData_<ContainerAllocator>;

  explicit EnvironmentData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature_celsius = 0.0f;
      this->relative_humidity_percent = 0.0f;
      this->pressure_pa = 0.0f;
      this->altitude_m = 0.0f;
      this->rain_detected = false;
      this->water_detected = false;
      this->sensor_status = "";
    }
  }

  explicit EnvironmentData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sensor_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature_celsius = 0.0f;
      this->relative_humidity_percent = 0.0f;
      this->pressure_pa = 0.0f;
      this->altitude_m = 0.0f;
      this->rain_detected = false;
      this->water_detected = false;
      this->sensor_status = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _temperature_celsius_type =
    float;
  _temperature_celsius_type temperature_celsius;
  using _relative_humidity_percent_type =
    float;
  _relative_humidity_percent_type relative_humidity_percent;
  using _pressure_pa_type =
    float;
  _pressure_pa_type pressure_pa;
  using _altitude_m_type =
    float;
  _altitude_m_type altitude_m;
  using _rain_detected_type =
    bool;
  _rain_detected_type rain_detected;
  using _water_detected_type =
    bool;
  _water_detected_type water_detected;
  using _sensor_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_status_type sensor_status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__temperature_celsius(
    const float & _arg)
  {
    this->temperature_celsius = _arg;
    return *this;
  }
  Type & set__relative_humidity_percent(
    const float & _arg)
  {
    this->relative_humidity_percent = _arg;
    return *this;
  }
  Type & set__pressure_pa(
    const float & _arg)
  {
    this->pressure_pa = _arg;
    return *this;
  }
  Type & set__altitude_m(
    const float & _arg)
  {
    this->altitude_m = _arg;
    return *this;
  }
  Type & set__rain_detected(
    const bool & _arg)
  {
    this->rain_detected = _arg;
    return *this;
  }
  Type & set__water_detected(
    const bool & _arg)
  {
    this->water_detected = _arg;
    return *this;
  }
  Type & set__sensor_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ika_msgs::msg::EnvironmentData_<ContainerAllocator> *;
  using ConstRawPtr =
    const ika_msgs::msg::EnvironmentData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ika_msgs::msg::EnvironmentData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ika_msgs::msg::EnvironmentData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ika_msgs::msg::EnvironmentData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ika_msgs::msg::EnvironmentData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ika_msgs::msg::EnvironmentData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ika_msgs::msg::EnvironmentData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ika_msgs::msg::EnvironmentData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ika_msgs::msg::EnvironmentData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ika_msgs__msg__EnvironmentData
    std::shared_ptr<ika_msgs::msg::EnvironmentData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ika_msgs__msg__EnvironmentData
    std::shared_ptr<ika_msgs::msg::EnvironmentData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnvironmentData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->temperature_celsius != other.temperature_celsius) {
      return false;
    }
    if (this->relative_humidity_percent != other.relative_humidity_percent) {
      return false;
    }
    if (this->pressure_pa != other.pressure_pa) {
      return false;
    }
    if (this->altitude_m != other.altitude_m) {
      return false;
    }
    if (this->rain_detected != other.rain_detected) {
      return false;
    }
    if (this->water_detected != other.water_detected) {
      return false;
    }
    if (this->sensor_status != other.sensor_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnvironmentData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnvironmentData_

// alias to use template instance with default allocator
using EnvironmentData =
  ika_msgs::msg::EnvironmentData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ika_msgs

#endif  // IKA_MSGS__MSG__DETAIL__ENVIRONMENT_DATA__STRUCT_HPP_
