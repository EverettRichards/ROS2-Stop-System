// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/DriverAssistReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/driver_assist_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/driver_assist_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_DriverAssistReport_acc_braking
{
public:
  explicit Init_DriverAssistReport_acc_braking(::dbw_ford_msgs::msg::DriverAssistReport & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::DriverAssistReport acc_braking(::dbw_ford_msgs::msg::DriverAssistReport::_acc_braking_type arg)
  {
    msg_.acc_braking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::DriverAssistReport msg_;
};

class Init_DriverAssistReport_acc_enabled
{
public:
  explicit Init_DriverAssistReport_acc_enabled(::dbw_ford_msgs::msg::DriverAssistReport & msg)
  : msg_(msg)
  {}
  Init_DriverAssistReport_acc_braking acc_enabled(::dbw_ford_msgs::msg::DriverAssistReport::_acc_enabled_type arg)
  {
    msg_.acc_enabled = std::move(arg);
    return Init_DriverAssistReport_acc_braking(msg_);
  }

private:
  ::dbw_ford_msgs::msg::DriverAssistReport msg_;
};

class Init_DriverAssistReport_aeb_braking
{
public:
  explicit Init_DriverAssistReport_aeb_braking(::dbw_ford_msgs::msg::DriverAssistReport & msg)
  : msg_(msg)
  {}
  Init_DriverAssistReport_acc_enabled aeb_braking(::dbw_ford_msgs::msg::DriverAssistReport::_aeb_braking_type arg)
  {
    msg_.aeb_braking = std::move(arg);
    return Init_DriverAssistReport_acc_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::DriverAssistReport msg_;
};

class Init_DriverAssistReport_aeb_precharge
{
public:
  explicit Init_DriverAssistReport_aeb_precharge(::dbw_ford_msgs::msg::DriverAssistReport & msg)
  : msg_(msg)
  {}
  Init_DriverAssistReport_aeb_braking aeb_precharge(::dbw_ford_msgs::msg::DriverAssistReport::_aeb_precharge_type arg)
  {
    msg_.aeb_precharge = std::move(arg);
    return Init_DriverAssistReport_aeb_braking(msg_);
  }

private:
  ::dbw_ford_msgs::msg::DriverAssistReport msg_;
};

class Init_DriverAssistReport_aeb_enabled
{
public:
  explicit Init_DriverAssistReport_aeb_enabled(::dbw_ford_msgs::msg::DriverAssistReport & msg)
  : msg_(msg)
  {}
  Init_DriverAssistReport_aeb_precharge aeb_enabled(::dbw_ford_msgs::msg::DriverAssistReport::_aeb_enabled_type arg)
  {
    msg_.aeb_enabled = std::move(arg);
    return Init_DriverAssistReport_aeb_precharge(msg_);
  }

private:
  ::dbw_ford_msgs::msg::DriverAssistReport msg_;
};

class Init_DriverAssistReport_fcw_active
{
public:
  explicit Init_DriverAssistReport_fcw_active(::dbw_ford_msgs::msg::DriverAssistReport & msg)
  : msg_(msg)
  {}
  Init_DriverAssistReport_aeb_enabled fcw_active(::dbw_ford_msgs::msg::DriverAssistReport::_fcw_active_type arg)
  {
    msg_.fcw_active = std::move(arg);
    return Init_DriverAssistReport_aeb_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::DriverAssistReport msg_;
};

class Init_DriverAssistReport_fcw_enabled
{
public:
  explicit Init_DriverAssistReport_fcw_enabled(::dbw_ford_msgs::msg::DriverAssistReport & msg)
  : msg_(msg)
  {}
  Init_DriverAssistReport_fcw_active fcw_enabled(::dbw_ford_msgs::msg::DriverAssistReport::_fcw_enabled_type arg)
  {
    msg_.fcw_enabled = std::move(arg);
    return Init_DriverAssistReport_fcw_active(msg_);
  }

private:
  ::dbw_ford_msgs::msg::DriverAssistReport msg_;
};

class Init_DriverAssistReport_decel_src
{
public:
  explicit Init_DriverAssistReport_decel_src(::dbw_ford_msgs::msg::DriverAssistReport & msg)
  : msg_(msg)
  {}
  Init_DriverAssistReport_fcw_enabled decel_src(::dbw_ford_msgs::msg::DriverAssistReport::_decel_src_type arg)
  {
    msg_.decel_src = std::move(arg);
    return Init_DriverAssistReport_fcw_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::DriverAssistReport msg_;
};

class Init_DriverAssistReport_decel
{
public:
  explicit Init_DriverAssistReport_decel(::dbw_ford_msgs::msg::DriverAssistReport & msg)
  : msg_(msg)
  {}
  Init_DriverAssistReport_decel_src decel(::dbw_ford_msgs::msg::DriverAssistReport::_decel_type arg)
  {
    msg_.decel = std::move(arg);
    return Init_DriverAssistReport_decel_src(msg_);
  }

private:
  ::dbw_ford_msgs::msg::DriverAssistReport msg_;
};

class Init_DriverAssistReport_header
{
public:
  Init_DriverAssistReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriverAssistReport_decel header(::dbw_ford_msgs::msg::DriverAssistReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DriverAssistReport_decel(msg_);
  }

private:
  ::dbw_ford_msgs::msg::DriverAssistReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::DriverAssistReport>()
{
  return dbw_ford_msgs::msg::builder::Init_DriverAssistReport_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__BUILDER_HPP_
