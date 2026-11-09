// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/surround_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__SURROUND_REPORT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__SURROUND_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/surround_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_SurroundReport_sonar
{
public:
  explicit Init_SurroundReport_sonar(::dbw_ford_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::SurroundReport sonar(::dbw_ford_msgs::msg::SurroundReport::_sonar_type arg)
  {
    msg_.sonar = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_sonar_fault
{
public:
  explicit Init_SurroundReport_sonar_fault(::dbw_ford_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_sonar sonar_fault(::dbw_ford_msgs::msg::SurroundReport::_sonar_fault_type arg)
  {
    msg_.sonar_fault = std::move(arg);
    return Init_SurroundReport_sonar(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_sonar_enabled
{
public:
  explicit Init_SurroundReport_sonar_enabled(::dbw_ford_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_sonar_fault sonar_enabled(::dbw_ford_msgs::msg::SurroundReport::_sonar_enabled_type arg)
  {
    msg_.sonar_enabled = std::move(arg);
    return Init_SurroundReport_sonar_fault(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_blis_right_enabled
{
public:
  explicit Init_SurroundReport_blis_right_enabled(::dbw_ford_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_sonar_enabled blis_right_enabled(::dbw_ford_msgs::msg::SurroundReport::_blis_right_enabled_type arg)
  {
    msg_.blis_right_enabled = std::move(arg);
    return Init_SurroundReport_sonar_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_blis_left_enabled
{
public:
  explicit Init_SurroundReport_blis_left_enabled(::dbw_ford_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_blis_right_enabled blis_left_enabled(::dbw_ford_msgs::msg::SurroundReport::_blis_left_enabled_type arg)
  {
    msg_.blis_left_enabled = std::move(arg);
    return Init_SurroundReport_blis_right_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_blis_right_alert
{
public:
  explicit Init_SurroundReport_blis_right_alert(::dbw_ford_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_blis_left_enabled blis_right_alert(::dbw_ford_msgs::msg::SurroundReport::_blis_right_alert_type arg)
  {
    msg_.blis_right_alert = std::move(arg);
    return Init_SurroundReport_blis_left_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_blis_left_alert
{
public:
  explicit Init_SurroundReport_blis_left_alert(::dbw_ford_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_blis_right_alert blis_left_alert(::dbw_ford_msgs::msg::SurroundReport::_blis_left_alert_type arg)
  {
    msg_.blis_left_alert = std::move(arg);
    return Init_SurroundReport_blis_right_alert(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_cta_right_enabled
{
public:
  explicit Init_SurroundReport_cta_right_enabled(::dbw_ford_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_blis_left_alert cta_right_enabled(::dbw_ford_msgs::msg::SurroundReport::_cta_right_enabled_type arg)
  {
    msg_.cta_right_enabled = std::move(arg);
    return Init_SurroundReport_blis_left_alert(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_cta_left_enabled
{
public:
  explicit Init_SurroundReport_cta_left_enabled(::dbw_ford_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_cta_right_enabled cta_left_enabled(::dbw_ford_msgs::msg::SurroundReport::_cta_left_enabled_type arg)
  {
    msg_.cta_left_enabled = std::move(arg);
    return Init_SurroundReport_cta_right_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_cta_right_alert
{
public:
  explicit Init_SurroundReport_cta_right_alert(::dbw_ford_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_cta_left_enabled cta_right_alert(::dbw_ford_msgs::msg::SurroundReport::_cta_right_alert_type arg)
  {
    msg_.cta_right_alert = std::move(arg);
    return Init_SurroundReport_cta_left_enabled(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_cta_left_alert
{
public:
  explicit Init_SurroundReport_cta_left_alert(::dbw_ford_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_cta_right_alert cta_left_alert(::dbw_ford_msgs::msg::SurroundReport::_cta_left_alert_type arg)
  {
    msg_.cta_left_alert = std::move(arg);
    return Init_SurroundReport_cta_right_alert(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_header
{
public:
  Init_SurroundReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SurroundReport_cta_left_alert header(::dbw_ford_msgs::msg::SurroundReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SurroundReport_cta_left_alert(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SurroundReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::SurroundReport>()
{
  return dbw_ford_msgs::msg::builder::Init_SurroundReport_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__SURROUND_REPORT__BUILDER_HPP_
