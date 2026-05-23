// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ika_msgs:msg/EnvironmentData.idl
// generated code does not contain a copyright notice

#ifndef IKA_MSGS__MSG__DETAIL__ENVIRONMENT_DATA__BUILDER_HPP_
#define IKA_MSGS__MSG__DETAIL__ENVIRONMENT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ika_msgs/msg/detail/environment_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ika_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvironmentData_sensor_status
{
public:
  explicit Init_EnvironmentData_sensor_status(::ika_msgs::msg::EnvironmentData & msg)
  : msg_(msg)
  {}
  ::ika_msgs::msg::EnvironmentData sensor_status(::ika_msgs::msg::EnvironmentData::_sensor_status_type arg)
  {
    msg_.sensor_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ika_msgs::msg::EnvironmentData msg_;
};

class Init_EnvironmentData_water_detected
{
public:
  explicit Init_EnvironmentData_water_detected(::ika_msgs::msg::EnvironmentData & msg)
  : msg_(msg)
  {}
  Init_EnvironmentData_sensor_status water_detected(::ika_msgs::msg::EnvironmentData::_water_detected_type arg)
  {
    msg_.water_detected = std::move(arg);
    return Init_EnvironmentData_sensor_status(msg_);
  }

private:
  ::ika_msgs::msg::EnvironmentData msg_;
};

class Init_EnvironmentData_rain_detected
{
public:
  explicit Init_EnvironmentData_rain_detected(::ika_msgs::msg::EnvironmentData & msg)
  : msg_(msg)
  {}
  Init_EnvironmentData_water_detected rain_detected(::ika_msgs::msg::EnvironmentData::_rain_detected_type arg)
  {
    msg_.rain_detected = std::move(arg);
    return Init_EnvironmentData_water_detected(msg_);
  }

private:
  ::ika_msgs::msg::EnvironmentData msg_;
};

class Init_EnvironmentData_altitude_m
{
public:
  explicit Init_EnvironmentData_altitude_m(::ika_msgs::msg::EnvironmentData & msg)
  : msg_(msg)
  {}
  Init_EnvironmentData_rain_detected altitude_m(::ika_msgs::msg::EnvironmentData::_altitude_m_type arg)
  {
    msg_.altitude_m = std::move(arg);
    return Init_EnvironmentData_rain_detected(msg_);
  }

private:
  ::ika_msgs::msg::EnvironmentData msg_;
};

class Init_EnvironmentData_pressure_pa
{
public:
  explicit Init_EnvironmentData_pressure_pa(::ika_msgs::msg::EnvironmentData & msg)
  : msg_(msg)
  {}
  Init_EnvironmentData_altitude_m pressure_pa(::ika_msgs::msg::EnvironmentData::_pressure_pa_type arg)
  {
    msg_.pressure_pa = std::move(arg);
    return Init_EnvironmentData_altitude_m(msg_);
  }

private:
  ::ika_msgs::msg::EnvironmentData msg_;
};

class Init_EnvironmentData_relative_humidity_percent
{
public:
  explicit Init_EnvironmentData_relative_humidity_percent(::ika_msgs::msg::EnvironmentData & msg)
  : msg_(msg)
  {}
  Init_EnvironmentData_pressure_pa relative_humidity_percent(::ika_msgs::msg::EnvironmentData::_relative_humidity_percent_type arg)
  {
    msg_.relative_humidity_percent = std::move(arg);
    return Init_EnvironmentData_pressure_pa(msg_);
  }

private:
  ::ika_msgs::msg::EnvironmentData msg_;
};

class Init_EnvironmentData_temperature_celsius
{
public:
  explicit Init_EnvironmentData_temperature_celsius(::ika_msgs::msg::EnvironmentData & msg)
  : msg_(msg)
  {}
  Init_EnvironmentData_relative_humidity_percent temperature_celsius(::ika_msgs::msg::EnvironmentData::_temperature_celsius_type arg)
  {
    msg_.temperature_celsius = std::move(arg);
    return Init_EnvironmentData_relative_humidity_percent(msg_);
  }

private:
  ::ika_msgs::msg::EnvironmentData msg_;
};

class Init_EnvironmentData_header
{
public:
  Init_EnvironmentData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvironmentData_temperature_celsius header(::ika_msgs::msg::EnvironmentData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EnvironmentData_temperature_celsius(msg_);
  }

private:
  ::ika_msgs::msg::EnvironmentData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ika_msgs::msg::EnvironmentData>()
{
  return ika_msgs::msg::builder::Init_EnvironmentData_header();
}

}  // namespace ika_msgs

#endif  // IKA_MSGS__MSG__DETAIL__ENVIRONMENT_DATA__BUILDER_HPP_
