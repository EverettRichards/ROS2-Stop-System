// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/TwistCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/twist_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__TWIST_CMD__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__TWIST_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/twist_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_TwistCmd_decel_limit
{
public:
  explicit Init_TwistCmd_decel_limit(::dbw_ford_msgs::msg::TwistCmd & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::TwistCmd decel_limit(::dbw_ford_msgs::msg::TwistCmd::_decel_limit_type arg)
  {
    msg_.decel_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::TwistCmd msg_;
};

class Init_TwistCmd_accel_limit
{
public:
  explicit Init_TwistCmd_accel_limit(::dbw_ford_msgs::msg::TwistCmd & msg)
  : msg_(msg)
  {}
  Init_TwistCmd_decel_limit accel_limit(::dbw_ford_msgs::msg::TwistCmd::_accel_limit_type arg)
  {
    msg_.accel_limit = std::move(arg);
    return Init_TwistCmd_decel_limit(msg_);
  }

private:
  ::dbw_ford_msgs::msg::TwistCmd msg_;
};

class Init_TwistCmd_twist
{
public:
  explicit Init_TwistCmd_twist(::dbw_ford_msgs::msg::TwistCmd & msg)
  : msg_(msg)
  {}
  Init_TwistCmd_accel_limit twist(::dbw_ford_msgs::msg::TwistCmd::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_TwistCmd_accel_limit(msg_);
  }

private:
  ::dbw_ford_msgs::msg::TwistCmd msg_;
};

class Init_TwistCmd_header
{
public:
  Init_TwistCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwistCmd_twist header(::dbw_ford_msgs::msg::TwistCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TwistCmd_twist(msg_);
  }

private:
  ::dbw_ford_msgs::msg::TwistCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::TwistCmd>()
{
  return dbw_ford_msgs::msg::builder::Init_TwistCmd_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__TWIST_CMD__BUILDER_HPP_
