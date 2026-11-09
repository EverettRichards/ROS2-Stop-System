// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/BrakeInfoReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/brake_info_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__BRAKE_INFO_REPORT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__BRAKE_INFO_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/brake_info_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_BrakeInfoReport_stationary
{
public:
  explicit Init_BrakeInfoReport_stationary(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::BrakeInfoReport stationary(::dbw_ford_msgs::msg::BrakeInfoReport::_stationary_type arg)
  {
    msg_.stationary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_parking_brake
{
public:
  explicit Init_BrakeInfoReport_parking_brake(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_stationary parking_brake(::dbw_ford_msgs::msg::BrakeInfoReport::_parking_brake_type arg)
  {
    msg_.parking_brake = std::move(arg);
    return Init_BrakeInfoReport_stationary(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_trac_enabled
{
public:
  explicit Init_BrakeInfoReport_trac_enabled(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_parking_brake trac_enabled(::dbw_ford_msgs::msg::BrakeInfoReport::_trac_enabled_type arg)
  {
    msg_.trac_enabled = std::move(arg);
    return Init_BrakeInfoReport_parking_brake(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_trac_active
{
public:
  explicit Init_BrakeInfoReport_trac_active(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_trac_enabled trac_active(::dbw_ford_msgs::msg::BrakeInfoReport::_trac_active_type arg)
  {
    msg_.trac_active = std::move(arg);
    return Init_BrakeInfoReport_trac_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_stab_enabled
{
public:
  explicit Init_BrakeInfoReport_stab_enabled(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_trac_active stab_enabled(::dbw_ford_msgs::msg::BrakeInfoReport::_stab_enabled_type arg)
  {
    msg_.stab_enabled = std::move(arg);
    return Init_BrakeInfoReport_trac_active(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_stab_active
{
public:
  explicit Init_BrakeInfoReport_stab_active(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_stab_enabled stab_active(::dbw_ford_msgs::msg::BrakeInfoReport::_stab_active_type arg)
  {
    msg_.stab_active = std::move(arg);
    return Init_BrakeInfoReport_stab_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_abs_enabled
{
public:
  explicit Init_BrakeInfoReport_abs_enabled(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_stab_active abs_enabled(::dbw_ford_msgs::msg::BrakeInfoReport::_abs_enabled_type arg)
  {
    msg_.abs_enabled = std::move(arg);
    return Init_BrakeInfoReport_stab_active(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_abs_active
{
public:
  explicit Init_BrakeInfoReport_abs_active(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_abs_enabled abs_active(::dbw_ford_msgs::msg::BrakeInfoReport::_abs_active_type arg)
  {
    msg_.abs_active = std::move(arg);
    return Init_BrakeInfoReport_abs_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_hsa
{
public:
  explicit Init_BrakeInfoReport_hsa(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_abs_active hsa(::dbw_ford_msgs::msg::BrakeInfoReport::_hsa_type arg)
  {
    msg_.hsa = std::move(arg);
    return Init_BrakeInfoReport_abs_active(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_brake_pedal_qf
{
public:
  explicit Init_BrakeInfoReport_brake_pedal_qf(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_hsa brake_pedal_qf(::dbw_ford_msgs::msg::BrakeInfoReport::_brake_pedal_qf_type arg)
  {
    msg_.brake_pedal_qf = std::move(arg);
    return Init_BrakeInfoReport_hsa(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_accel_over_ground
{
public:
  explicit Init_BrakeInfoReport_accel_over_ground(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_brake_pedal_qf accel_over_ground(::dbw_ford_msgs::msg::BrakeInfoReport::_accel_over_ground_type arg)
  {
    msg_.accel_over_ground = std::move(arg);
    return Init_BrakeInfoReport_brake_pedal_qf(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_wheel_torque_actual
{
public:
  explicit Init_BrakeInfoReport_wheel_torque_actual(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_accel_over_ground wheel_torque_actual(::dbw_ford_msgs::msg::BrakeInfoReport::_wheel_torque_actual_type arg)
  {
    msg_.wheel_torque_actual = std::move(arg);
    return Init_BrakeInfoReport_accel_over_ground(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_brake_torque_actual
{
public:
  explicit Init_BrakeInfoReport_brake_torque_actual(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_wheel_torque_actual brake_torque_actual(::dbw_ford_msgs::msg::BrakeInfoReport::_brake_torque_actual_type arg)
  {
    msg_.brake_torque_actual = std::move(arg);
    return Init_BrakeInfoReport_wheel_torque_actual(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_brake_torque_request
{
public:
  explicit Init_BrakeInfoReport_brake_torque_request(::dbw_ford_msgs::msg::BrakeInfoReport & msg)
  : msg_(msg)
  {}
  Init_BrakeInfoReport_brake_torque_actual brake_torque_request(::dbw_ford_msgs::msg::BrakeInfoReport::_brake_torque_request_type arg)
  {
    msg_.brake_torque_request = std::move(arg);
    return Init_BrakeInfoReport_brake_torque_actual(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

class Init_BrakeInfoReport_header
{
public:
  Init_BrakeInfoReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrakeInfoReport_brake_torque_request header(::dbw_ford_msgs::msg::BrakeInfoReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BrakeInfoReport_brake_torque_request(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeInfoReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::BrakeInfoReport>()
{
  return dbw_ford_msgs::msg::builder::Init_BrakeInfoReport_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__BRAKE_INFO_REPORT__BUILDER_HPP_
