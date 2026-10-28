// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/ThrottleReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/throttle_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_REPORT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/throttle_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_ThrottleReport_fault_power
{
public:
  explicit Init_ThrottleReport_fault_power(::dbw_ford_msgs::msg::ThrottleReport & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::ThrottleReport fault_power(::dbw_ford_msgs::msg::ThrottleReport::_fault_power_type arg)
  {
    msg_.fault_power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

class Init_ThrottleReport_fault_ch2
{
public:
  explicit Init_ThrottleReport_fault_ch2(::dbw_ford_msgs::msg::ThrottleReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleReport_fault_power fault_ch2(::dbw_ford_msgs::msg::ThrottleReport::_fault_ch2_type arg)
  {
    msg_.fault_ch2 = std::move(arg);
    return Init_ThrottleReport_fault_power(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

class Init_ThrottleReport_fault_ch1
{
public:
  explicit Init_ThrottleReport_fault_ch1(::dbw_ford_msgs::msg::ThrottleReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleReport_fault_ch2 fault_ch1(::dbw_ford_msgs::msg::ThrottleReport::_fault_ch1_type arg)
  {
    msg_.fault_ch1 = std::move(arg);
    return Init_ThrottleReport_fault_ch2(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

class Init_ThrottleReport_fault_wdc
{
public:
  explicit Init_ThrottleReport_fault_wdc(::dbw_ford_msgs::msg::ThrottleReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleReport_fault_ch1 fault_wdc(::dbw_ford_msgs::msg::ThrottleReport::_fault_wdc_type arg)
  {
    msg_.fault_wdc = std::move(arg);
    return Init_ThrottleReport_fault_ch1(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

class Init_ThrottleReport_watchdog_counter
{
public:
  explicit Init_ThrottleReport_watchdog_counter(::dbw_ford_msgs::msg::ThrottleReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleReport_fault_wdc watchdog_counter(::dbw_ford_msgs::msg::ThrottleReport::_watchdog_counter_type arg)
  {
    msg_.watchdog_counter = std::move(arg);
    return Init_ThrottleReport_fault_wdc(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

class Init_ThrottleReport_timeout
{
public:
  explicit Init_ThrottleReport_timeout(::dbw_ford_msgs::msg::ThrottleReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleReport_watchdog_counter timeout(::dbw_ford_msgs::msg::ThrottleReport::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_ThrottleReport_watchdog_counter(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

class Init_ThrottleReport_driver
{
public:
  explicit Init_ThrottleReport_driver(::dbw_ford_msgs::msg::ThrottleReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleReport_timeout driver(::dbw_ford_msgs::msg::ThrottleReport::_driver_type arg)
  {
    msg_.driver = std::move(arg);
    return Init_ThrottleReport_timeout(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

class Init_ThrottleReport_override
{
public:
  explicit Init_ThrottleReport_override(::dbw_ford_msgs::msg::ThrottleReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleReport_driver override(::dbw_ford_msgs::msg::ThrottleReport::_override_type arg)
  {
    msg_.override = std::move(arg);
    return Init_ThrottleReport_driver(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

class Init_ThrottleReport_enabled
{
public:
  explicit Init_ThrottleReport_enabled(::dbw_ford_msgs::msg::ThrottleReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleReport_override enabled(::dbw_ford_msgs::msg::ThrottleReport::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_ThrottleReport_override(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

class Init_ThrottleReport_pedal_output
{
public:
  explicit Init_ThrottleReport_pedal_output(::dbw_ford_msgs::msg::ThrottleReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleReport_enabled pedal_output(::dbw_ford_msgs::msg::ThrottleReport::_pedal_output_type arg)
  {
    msg_.pedal_output = std::move(arg);
    return Init_ThrottleReport_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

class Init_ThrottleReport_pedal_cmd
{
public:
  explicit Init_ThrottleReport_pedal_cmd(::dbw_ford_msgs::msg::ThrottleReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleReport_pedal_output pedal_cmd(::dbw_ford_msgs::msg::ThrottleReport::_pedal_cmd_type arg)
  {
    msg_.pedal_cmd = std::move(arg);
    return Init_ThrottleReport_pedal_output(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

class Init_ThrottleReport_pedal_input
{
public:
  explicit Init_ThrottleReport_pedal_input(::dbw_ford_msgs::msg::ThrottleReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleReport_pedal_cmd pedal_input(::dbw_ford_msgs::msg::ThrottleReport::_pedal_input_type arg)
  {
    msg_.pedal_input = std::move(arg);
    return Init_ThrottleReport_pedal_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

class Init_ThrottleReport_header
{
public:
  Init_ThrottleReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThrottleReport_pedal_input header(::dbw_ford_msgs::msg::ThrottleReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ThrottleReport_pedal_input(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::ThrottleReport>()
{
  return dbw_ford_msgs::msg::builder::Init_ThrottleReport_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_REPORT__BUILDER_HPP_
