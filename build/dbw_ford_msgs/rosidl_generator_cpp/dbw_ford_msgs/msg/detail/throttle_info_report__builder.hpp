// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/ThrottleInfoReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/throttle_info_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_INFO_REPORT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_INFO_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/throttle_info_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_ThrottleInfoReport_batt_curr
{
public:
  explicit Init_ThrottleInfoReport_batt_curr(::dbw_ford_msgs::msg::ThrottleInfoReport & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::ThrottleInfoReport batt_curr(::dbw_ford_msgs::msg::ThrottleInfoReport::_batt_curr_type arg)
  {
    msg_.batt_curr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleInfoReport msg_;
};

class Init_ThrottleInfoReport_ignition
{
public:
  explicit Init_ThrottleInfoReport_ignition(::dbw_ford_msgs::msg::ThrottleInfoReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleInfoReport_batt_curr ignition(::dbw_ford_msgs::msg::ThrottleInfoReport::_ignition_type arg)
  {
    msg_.ignition = std::move(arg);
    return Init_ThrottleInfoReport_batt_curr(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleInfoReport msg_;
};

class Init_ThrottleInfoReport_gear_num
{
public:
  explicit Init_ThrottleInfoReport_gear_num(::dbw_ford_msgs::msg::ThrottleInfoReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleInfoReport_ignition gear_num(::dbw_ford_msgs::msg::ThrottleInfoReport::_gear_num_type arg)
  {
    msg_.gear_num = std::move(arg);
    return Init_ThrottleInfoReport_ignition(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleInfoReport msg_;
};

class Init_ThrottleInfoReport_engine_rpm
{
public:
  explicit Init_ThrottleInfoReport_engine_rpm(::dbw_ford_msgs::msg::ThrottleInfoReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleInfoReport_gear_num engine_rpm(::dbw_ford_msgs::msg::ThrottleInfoReport::_engine_rpm_type arg)
  {
    msg_.engine_rpm = std::move(arg);
    return Init_ThrottleInfoReport_gear_num(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleInfoReport msg_;
};

class Init_ThrottleInfoReport_one_pedal
{
public:
  explicit Init_ThrottleInfoReport_one_pedal(::dbw_ford_msgs::msg::ThrottleInfoReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleInfoReport_engine_rpm one_pedal(::dbw_ford_msgs::msg::ThrottleInfoReport::_one_pedal_type arg)
  {
    msg_.one_pedal = std::move(arg);
    return Init_ThrottleInfoReport_engine_rpm(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleInfoReport msg_;
};

class Init_ThrottleInfoReport_throttle_pedal_qf
{
public:
  explicit Init_ThrottleInfoReport_throttle_pedal_qf(::dbw_ford_msgs::msg::ThrottleInfoReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleInfoReport_one_pedal throttle_pedal_qf(::dbw_ford_msgs::msg::ThrottleInfoReport::_throttle_pedal_qf_type arg)
  {
    msg_.throttle_pedal_qf = std::move(arg);
    return Init_ThrottleInfoReport_one_pedal(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleInfoReport msg_;
};

class Init_ThrottleInfoReport_throttle_rate
{
public:
  explicit Init_ThrottleInfoReport_throttle_rate(::dbw_ford_msgs::msg::ThrottleInfoReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleInfoReport_throttle_pedal_qf throttle_rate(::dbw_ford_msgs::msg::ThrottleInfoReport::_throttle_rate_type arg)
  {
    msg_.throttle_rate = std::move(arg);
    return Init_ThrottleInfoReport_throttle_pedal_qf(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleInfoReport msg_;
};

class Init_ThrottleInfoReport_throttle_pc
{
public:
  explicit Init_ThrottleInfoReport_throttle_pc(::dbw_ford_msgs::msg::ThrottleInfoReport & msg)
  : msg_(msg)
  {}
  Init_ThrottleInfoReport_throttle_rate throttle_pc(::dbw_ford_msgs::msg::ThrottleInfoReport::_throttle_pc_type arg)
  {
    msg_.throttle_pc = std::move(arg);
    return Init_ThrottleInfoReport_throttle_rate(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleInfoReport msg_;
};

class Init_ThrottleInfoReport_header
{
public:
  Init_ThrottleInfoReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThrottleInfoReport_throttle_pc header(::dbw_ford_msgs::msg::ThrottleInfoReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ThrottleInfoReport_throttle_pc(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleInfoReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::ThrottleInfoReport>()
{
  return dbw_ford_msgs::msg::builder::Init_ThrottleInfoReport_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_INFO_REPORT__BUILDER_HPP_
