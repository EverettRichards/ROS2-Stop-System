// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/SteeringReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/steering_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__STEERING_REPORT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__STEERING_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/steering_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringReport_fault_power
{
public:
  explicit Init_SteeringReport_fault_power(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::SteeringReport fault_power(::dbw_ford_msgs::msg::SteeringReport::_fault_power_type arg)
  {
    msg_.fault_power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_fault_calibration
{
public:
  explicit Init_SteeringReport_fault_calibration(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_fault_power fault_calibration(::dbw_ford_msgs::msg::SteeringReport::_fault_calibration_type arg)
  {
    msg_.fault_calibration = std::move(arg);
    return Init_SteeringReport_fault_power(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_fault_bus2
{
public:
  explicit Init_SteeringReport_fault_bus2(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_fault_calibration fault_bus2(::dbw_ford_msgs::msg::SteeringReport::_fault_bus2_type arg)
  {
    msg_.fault_bus2 = std::move(arg);
    return Init_SteeringReport_fault_calibration(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_fault_bus1
{
public:
  explicit Init_SteeringReport_fault_bus1(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_fault_bus2 fault_bus1(::dbw_ford_msgs::msg::SteeringReport::_fault_bus1_type arg)
  {
    msg_.fault_bus1 = std::move(arg);
    return Init_SteeringReport_fault_bus2(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_fault_wdc
{
public:
  explicit Init_SteeringReport_fault_wdc(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_fault_bus1 fault_wdc(::dbw_ford_msgs::msg::SteeringReport::_fault_wdc_type arg)
  {
    msg_.fault_wdc = std::move(arg);
    return Init_SteeringReport_fault_bus1(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_timeout
{
public:
  explicit Init_SteeringReport_timeout(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_fault_wdc timeout(::dbw_ford_msgs::msg::SteeringReport::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_SteeringReport_fault_wdc(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_override
{
public:
  explicit Init_SteeringReport_override(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_timeout override(::dbw_ford_msgs::msg::SteeringReport::_override_type arg)
  {
    msg_.override = std::move(arg);
    return Init_SteeringReport_timeout(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_enabled
{
public:
  explicit Init_SteeringReport_enabled(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_override enabled(::dbw_ford_msgs::msg::SteeringReport::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_SteeringReport_override(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_speed
{
public:
  explicit Init_SteeringReport_speed(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_enabled speed(::dbw_ford_msgs::msg::SteeringReport::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_SteeringReport_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_steering_wheel_cmd_type
{
public:
  explicit Init_SteeringReport_steering_wheel_cmd_type(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_speed steering_wheel_cmd_type(::dbw_ford_msgs::msg::SteeringReport::_steering_wheel_cmd_type_type arg)
  {
    msg_.steering_wheel_cmd_type = std::move(arg);
    return Init_SteeringReport_speed(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_steering_wheel_torque
{
public:
  explicit Init_SteeringReport_steering_wheel_torque(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_steering_wheel_cmd_type steering_wheel_torque(::dbw_ford_msgs::msg::SteeringReport::_steering_wheel_torque_type arg)
  {
    msg_.steering_wheel_torque = std::move(arg);
    return Init_SteeringReport_steering_wheel_cmd_type(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_steering_wheel_cmd
{
public:
  explicit Init_SteeringReport_steering_wheel_cmd(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_steering_wheel_torque steering_wheel_cmd(::dbw_ford_msgs::msg::SteeringReport::_steering_wheel_cmd_type arg)
  {
    msg_.steering_wheel_cmd = std::move(arg);
    return Init_SteeringReport_steering_wheel_torque(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_steering_wheel_angle
{
public:
  explicit Init_SteeringReport_steering_wheel_angle(::dbw_ford_msgs::msg::SteeringReport & msg)
  : msg_(msg)
  {}
  Init_SteeringReport_steering_wheel_cmd steering_wheel_angle(::dbw_ford_msgs::msg::SteeringReport::_steering_wheel_angle_type arg)
  {
    msg_.steering_wheel_angle = std::move(arg);
    return Init_SteeringReport_steering_wheel_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

class Init_SteeringReport_header
{
public:
  Init_SteeringReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringReport_steering_wheel_angle header(::dbw_ford_msgs::msg::SteeringReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SteeringReport_steering_wheel_angle(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::SteeringReport>()
{
  return dbw_ford_msgs::msg::builder::Init_SteeringReport_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__STEERING_REPORT__BUILDER_HPP_
