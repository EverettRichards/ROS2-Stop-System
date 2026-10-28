// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/FuelLevelReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/fuel_level_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__FUEL_LEVEL_REPORT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__FUEL_LEVEL_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/fuel_level_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_FuelLevelReport_odometer
{
public:
  explicit Init_FuelLevelReport_odometer(::dbw_ford_msgs::msg::FuelLevelReport & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::FuelLevelReport odometer(::dbw_ford_msgs::msg::FuelLevelReport::_odometer_type arg)
  {
    msg_.odometer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::FuelLevelReport msg_;
};

class Init_FuelLevelReport_battery_hev
{
public:
  explicit Init_FuelLevelReport_battery_hev(::dbw_ford_msgs::msg::FuelLevelReport & msg)
  : msg_(msg)
  {}
  Init_FuelLevelReport_odometer battery_hev(::dbw_ford_msgs::msg::FuelLevelReport::_battery_hev_type arg)
  {
    msg_.battery_hev = std::move(arg);
    return Init_FuelLevelReport_odometer(msg_);
  }

private:
  ::dbw_ford_msgs::msg::FuelLevelReport msg_;
};

class Init_FuelLevelReport_battery_12v
{
public:
  explicit Init_FuelLevelReport_battery_12v(::dbw_ford_msgs::msg::FuelLevelReport & msg)
  : msg_(msg)
  {}
  Init_FuelLevelReport_battery_hev battery_12v(::dbw_ford_msgs::msg::FuelLevelReport::_battery_12v_type arg)
  {
    msg_.battery_12v = std::move(arg);
    return Init_FuelLevelReport_battery_hev(msg_);
  }

private:
  ::dbw_ford_msgs::msg::FuelLevelReport msg_;
};

class Init_FuelLevelReport_fuel_level
{
public:
  explicit Init_FuelLevelReport_fuel_level(::dbw_ford_msgs::msg::FuelLevelReport & msg)
  : msg_(msg)
  {}
  Init_FuelLevelReport_battery_12v fuel_level(::dbw_ford_msgs::msg::FuelLevelReport::_fuel_level_type arg)
  {
    msg_.fuel_level = std::move(arg);
    return Init_FuelLevelReport_battery_12v(msg_);
  }

private:
  ::dbw_ford_msgs::msg::FuelLevelReport msg_;
};

class Init_FuelLevelReport_header
{
public:
  Init_FuelLevelReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FuelLevelReport_fuel_level header(::dbw_ford_msgs::msg::FuelLevelReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FuelLevelReport_fuel_level(msg_);
  }

private:
  ::dbw_ford_msgs::msg::FuelLevelReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::FuelLevelReport>()
{
  return dbw_ford_msgs::msg::builder::Init_FuelLevelReport_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__FUEL_LEVEL_REPORT__BUILDER_HPP_
