// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/SteeringCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/steering_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__STEERING_CMD__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__STEERING_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/steering_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringCmd_count
{
public:
  explicit Init_SteeringCmd_count(::dbw_ford_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::SteeringCmd count(::dbw_ford_msgs::msg::SteeringCmd::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_alert
{
public:
  explicit Init_SteeringCmd_alert(::dbw_ford_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_count alert(::dbw_ford_msgs::msg::SteeringCmd::_alert_type arg)
  {
    msg_.alert = std::move(arg);
    return Init_SteeringCmd_count(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_quiet
{
public:
  explicit Init_SteeringCmd_quiet(::dbw_ford_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_alert quiet(::dbw_ford_msgs::msg::SteeringCmd::_quiet_type arg)
  {
    msg_.quiet = std::move(arg);
    return Init_SteeringCmd_alert(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_ignore
{
public:
  explicit Init_SteeringCmd_ignore(::dbw_ford_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_quiet ignore(::dbw_ford_msgs::msg::SteeringCmd::_ignore_type arg)
  {
    msg_.ignore = std::move(arg);
    return Init_SteeringCmd_quiet(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_clear
{
public:
  explicit Init_SteeringCmd_clear(::dbw_ford_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_ignore clear(::dbw_ford_msgs::msg::SteeringCmd::_clear_type arg)
  {
    msg_.clear = std::move(arg);
    return Init_SteeringCmd_ignore(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_enable
{
public:
  explicit Init_SteeringCmd_enable(::dbw_ford_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_clear enable(::dbw_ford_msgs::msg::SteeringCmd::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_SteeringCmd_clear(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_cmd_type
{
public:
  explicit Init_SteeringCmd_cmd_type(::dbw_ford_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_enable cmd_type(::dbw_ford_msgs::msg::SteeringCmd::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_SteeringCmd_enable(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_steering_wheel_torque_cmd
{
public:
  explicit Init_SteeringCmd_steering_wheel_torque_cmd(::dbw_ford_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_cmd_type steering_wheel_torque_cmd(::dbw_ford_msgs::msg::SteeringCmd::_steering_wheel_torque_cmd_type arg)
  {
    msg_.steering_wheel_torque_cmd = std::move(arg);
    return Init_SteeringCmd_cmd_type(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_steering_wheel_angle_velocity
{
public:
  explicit Init_SteeringCmd_steering_wheel_angle_velocity(::dbw_ford_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_steering_wheel_torque_cmd steering_wheel_angle_velocity(::dbw_ford_msgs::msg::SteeringCmd::_steering_wheel_angle_velocity_type arg)
  {
    msg_.steering_wheel_angle_velocity = std::move(arg);
    return Init_SteeringCmd_steering_wheel_torque_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_steering_wheel_angle_cmd
{
public:
  explicit Init_SteeringCmd_steering_wheel_angle_cmd(::dbw_ford_msgs::msg::SteeringCmd & msg)
  : msg_(msg)
  {}
  Init_SteeringCmd_steering_wheel_angle_velocity steering_wheel_angle_cmd(::dbw_ford_msgs::msg::SteeringCmd::_steering_wheel_angle_cmd_type arg)
  {
    msg_.steering_wheel_angle_cmd = std::move(arg);
    return Init_SteeringCmd_steering_wheel_angle_velocity(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringCmd msg_;
};

class Init_SteeringCmd_header
{
public:
  Init_SteeringCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringCmd_steering_wheel_angle_cmd header(::dbw_ford_msgs::msg::SteeringCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SteeringCmd_steering_wheel_angle_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::SteeringCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::SteeringCmd>()
{
  return dbw_ford_msgs::msg::builder::Init_SteeringCmd_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__STEERING_CMD__BUILDER_HPP_
