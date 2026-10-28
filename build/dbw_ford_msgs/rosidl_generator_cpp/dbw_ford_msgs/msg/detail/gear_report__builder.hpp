// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR_REPORT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/gear_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_GearReport_fault_bus
{
public:
  explicit Init_GearReport_fault_bus(::dbw_ford_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::GearReport fault_bus(::dbw_ford_msgs::msg::GearReport::_fault_bus_type arg)
  {
    msg_.fault_bus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::GearReport msg_;
};

class Init_GearReport_override
{
public:
  explicit Init_GearReport_override(::dbw_ford_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  Init_GearReport_fault_bus override(::dbw_ford_msgs::msg::GearReport::_override_type arg)
  {
    msg_.override = std::move(arg);
    return Init_GearReport_fault_bus(msg_);
  }

private:
  ::dbw_ford_msgs::msg::GearReport msg_;
};

class Init_GearReport_ready
{
public:
  explicit Init_GearReport_ready(::dbw_ford_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  Init_GearReport_override ready(::dbw_ford_msgs::msg::GearReport::_ready_type arg)
  {
    msg_.ready = std::move(arg);
    return Init_GearReport_override(msg_);
  }

private:
  ::dbw_ford_msgs::msg::GearReport msg_;
};

class Init_GearReport_reject
{
public:
  explicit Init_GearReport_reject(::dbw_ford_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  Init_GearReport_ready reject(::dbw_ford_msgs::msg::GearReport::_reject_type arg)
  {
    msg_.reject = std::move(arg);
    return Init_GearReport_ready(msg_);
  }

private:
  ::dbw_ford_msgs::msg::GearReport msg_;
};

class Init_GearReport_cmd
{
public:
  explicit Init_GearReport_cmd(::dbw_ford_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  Init_GearReport_reject cmd(::dbw_ford_msgs::msg::GearReport::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_GearReport_reject(msg_);
  }

private:
  ::dbw_ford_msgs::msg::GearReport msg_;
};

class Init_GearReport_state
{
public:
  explicit Init_GearReport_state(::dbw_ford_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  Init_GearReport_cmd state(::dbw_ford_msgs::msg::GearReport::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_GearReport_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::GearReport msg_;
};

class Init_GearReport_header
{
public:
  Init_GearReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GearReport_state header(::dbw_ford_msgs::msg::GearReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GearReport_state(msg_);
  }

private:
  ::dbw_ford_msgs::msg::GearReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::GearReport>()
{
  return dbw_ford_msgs::msg::builder::Init_GearReport_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR_REPORT__BUILDER_HPP_
