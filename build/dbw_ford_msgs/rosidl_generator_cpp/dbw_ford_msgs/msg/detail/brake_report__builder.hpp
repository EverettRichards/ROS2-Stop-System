// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/BrakeReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/brake_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__BRAKE_REPORT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__BRAKE_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/brake_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_BrakeReport_fault_power
{
public:
  explicit Init_BrakeReport_fault_power(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::BrakeReport fault_power(::dbw_ford_msgs::msg::BrakeReport::_fault_power_type arg)
  {
    msg_.fault_power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_fault_ch2
{
public:
  explicit Init_BrakeReport_fault_ch2(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_fault_power fault_ch2(::dbw_ford_msgs::msg::BrakeReport::_fault_ch2_type arg)
  {
    msg_.fault_ch2 = std::move(arg);
    return Init_BrakeReport_fault_power(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_fault_ch1
{
public:
  explicit Init_BrakeReport_fault_ch1(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_fault_ch2 fault_ch1(::dbw_ford_msgs::msg::BrakeReport::_fault_ch1_type arg)
  {
    msg_.fault_ch1 = std::move(arg);
    return Init_BrakeReport_fault_ch2(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_fault_wdc
{
public:
  explicit Init_BrakeReport_fault_wdc(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_fault_ch1 fault_wdc(::dbw_ford_msgs::msg::BrakeReport::_fault_wdc_type arg)
  {
    msg_.fault_wdc = std::move(arg);
    return Init_BrakeReport_fault_ch1(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_watchdog_braking
{
public:
  explicit Init_BrakeReport_watchdog_braking(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_fault_wdc watchdog_braking(::dbw_ford_msgs::msg::BrakeReport::_watchdog_braking_type arg)
  {
    msg_.watchdog_braking = std::move(arg);
    return Init_BrakeReport_fault_wdc(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_watchdog_counter
{
public:
  explicit Init_BrakeReport_watchdog_counter(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_watchdog_braking watchdog_counter(::dbw_ford_msgs::msg::BrakeReport::_watchdog_counter_type arg)
  {
    msg_.watchdog_counter = std::move(arg);
    return Init_BrakeReport_watchdog_braking(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_timeout
{
public:
  explicit Init_BrakeReport_timeout(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_watchdog_counter timeout(::dbw_ford_msgs::msg::BrakeReport::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_BrakeReport_watchdog_counter(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_driver
{
public:
  explicit Init_BrakeReport_driver(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_timeout driver(::dbw_ford_msgs::msg::BrakeReport::_driver_type arg)
  {
    msg_.driver = std::move(arg);
    return Init_BrakeReport_timeout(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_override
{
public:
  explicit Init_BrakeReport_override(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_driver override(::dbw_ford_msgs::msg::BrakeReport::_override_type arg)
  {
    msg_.override = std::move(arg);
    return Init_BrakeReport_driver(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_enabled
{
public:
  explicit Init_BrakeReport_enabled(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_override enabled(::dbw_ford_msgs::msg::BrakeReport::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_BrakeReport_override(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_boo_cmd
{
public:
  explicit Init_BrakeReport_boo_cmd(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_enabled boo_cmd(::dbw_ford_msgs::msg::BrakeReport::_boo_cmd_type arg)
  {
    msg_.boo_cmd = std::move(arg);
    return Init_BrakeReport_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_decel_output
{
public:
  explicit Init_BrakeReport_decel_output(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_boo_cmd decel_output(::dbw_ford_msgs::msg::BrakeReport::_decel_output_type arg)
  {
    msg_.decel_output = std::move(arg);
    return Init_BrakeReport_boo_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_decel_cmd
{
public:
  explicit Init_BrakeReport_decel_cmd(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_decel_output decel_cmd(::dbw_ford_msgs::msg::BrakeReport::_decel_cmd_type arg)
  {
    msg_.decel_cmd = std::move(arg);
    return Init_BrakeReport_decel_output(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_torque_output
{
public:
  explicit Init_BrakeReport_torque_output(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_decel_cmd torque_output(::dbw_ford_msgs::msg::BrakeReport::_torque_output_type arg)
  {
    msg_.torque_output = std::move(arg);
    return Init_BrakeReport_decel_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_torque_cmd
{
public:
  explicit Init_BrakeReport_torque_cmd(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_torque_output torque_cmd(::dbw_ford_msgs::msg::BrakeReport::_torque_cmd_type arg)
  {
    msg_.torque_cmd = std::move(arg);
    return Init_BrakeReport_torque_output(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_torque_input
{
public:
  explicit Init_BrakeReport_torque_input(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_torque_cmd torque_input(::dbw_ford_msgs::msg::BrakeReport::_torque_input_type arg)
  {
    msg_.torque_input = std::move(arg);
    return Init_BrakeReport_torque_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_pedal_output
{
public:
  explicit Init_BrakeReport_pedal_output(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_torque_input pedal_output(::dbw_ford_msgs::msg::BrakeReport::_pedal_output_type arg)
  {
    msg_.pedal_output = std::move(arg);
    return Init_BrakeReport_torque_input(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_pedal_cmd
{
public:
  explicit Init_BrakeReport_pedal_cmd(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_pedal_output pedal_cmd(::dbw_ford_msgs::msg::BrakeReport::_pedal_cmd_type arg)
  {
    msg_.pedal_cmd = std::move(arg);
    return Init_BrakeReport_pedal_output(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_pedal_input
{
public:
  explicit Init_BrakeReport_pedal_input(::dbw_ford_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_pedal_cmd pedal_input(::dbw_ford_msgs::msg::BrakeReport::_pedal_input_type arg)
  {
    msg_.pedal_input = std::move(arg);
    return Init_BrakeReport_pedal_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_header
{
public:
  Init_BrakeReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrakeReport_pedal_input header(::dbw_ford_msgs::msg::BrakeReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BrakeReport_pedal_input(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::BrakeReport>()
{
  return dbw_ford_msgs::msg::builder::Init_BrakeReport_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__BRAKE_REPORT__BUILDER_HPP_
