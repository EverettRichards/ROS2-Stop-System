// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/TirePressureReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/tire_pressure_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__TIRE_PRESSURE_REPORT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__TIRE_PRESSURE_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/tire_pressure_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_TirePressureReport_rear_right
{
public:
  explicit Init_TirePressureReport_rear_right(::dbw_ford_msgs::msg::TirePressureReport & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::TirePressureReport rear_right(::dbw_ford_msgs::msg::TirePressureReport::_rear_right_type arg)
  {
    msg_.rear_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::TirePressureReport msg_;
};

class Init_TirePressureReport_rear_left
{
public:
  explicit Init_TirePressureReport_rear_left(::dbw_ford_msgs::msg::TirePressureReport & msg)
  : msg_(msg)
  {}
  Init_TirePressureReport_rear_right rear_left(::dbw_ford_msgs::msg::TirePressureReport::_rear_left_type arg)
  {
    msg_.rear_left = std::move(arg);
    return Init_TirePressureReport_rear_right(msg_);
  }

private:
  ::dbw_ford_msgs::msg::TirePressureReport msg_;
};

class Init_TirePressureReport_front_right
{
public:
  explicit Init_TirePressureReport_front_right(::dbw_ford_msgs::msg::TirePressureReport & msg)
  : msg_(msg)
  {}
  Init_TirePressureReport_rear_left front_right(::dbw_ford_msgs::msg::TirePressureReport::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_TirePressureReport_rear_left(msg_);
  }

private:
  ::dbw_ford_msgs::msg::TirePressureReport msg_;
};

class Init_TirePressureReport_front_left
{
public:
  explicit Init_TirePressureReport_front_left(::dbw_ford_msgs::msg::TirePressureReport & msg)
  : msg_(msg)
  {}
  Init_TirePressureReport_front_right front_left(::dbw_ford_msgs::msg::TirePressureReport::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_TirePressureReport_front_right(msg_);
  }

private:
  ::dbw_ford_msgs::msg::TirePressureReport msg_;
};

class Init_TirePressureReport_header
{
public:
  Init_TirePressureReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TirePressureReport_front_left header(::dbw_ford_msgs::msg::TirePressureReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TirePressureReport_front_left(msg_);
  }

private:
  ::dbw_ford_msgs::msg::TirePressureReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::TirePressureReport>()
{
  return dbw_ford_msgs::msg::builder::Init_TirePressureReport_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__TIRE_PRESSURE_REPORT__BUILDER_HPP_
