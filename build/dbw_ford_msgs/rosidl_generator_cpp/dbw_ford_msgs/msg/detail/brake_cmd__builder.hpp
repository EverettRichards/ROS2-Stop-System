// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/BrakeCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/brake_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__BRAKE_CMD__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__BRAKE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/brake_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_BrakeCmd_count
{
public:
  explicit Init_BrakeCmd_count(::dbw_ford_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::BrakeCmd count(::dbw_ford_msgs::msg::BrakeCmd::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_ignore
{
public:
  explicit Init_BrakeCmd_ignore(::dbw_ford_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  Init_BrakeCmd_count ignore(::dbw_ford_msgs::msg::BrakeCmd::_ignore_type arg)
  {
    msg_.ignore = std::move(arg);
    return Init_BrakeCmd_count(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_clear
{
public:
  explicit Init_BrakeCmd_clear(::dbw_ford_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  Init_BrakeCmd_ignore clear(::dbw_ford_msgs::msg::BrakeCmd::_clear_type arg)
  {
    msg_.clear = std::move(arg);
    return Init_BrakeCmd_ignore(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_enable
{
public:
  explicit Init_BrakeCmd_enable(::dbw_ford_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  Init_BrakeCmd_clear enable(::dbw_ford_msgs::msg::BrakeCmd::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_BrakeCmd_clear(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_pedal_cmd_type
{
public:
  explicit Init_BrakeCmd_pedal_cmd_type(::dbw_ford_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  Init_BrakeCmd_enable pedal_cmd_type(::dbw_ford_msgs::msg::BrakeCmd::_pedal_cmd_type_type arg)
  {
    msg_.pedal_cmd_type = std::move(arg);
    return Init_BrakeCmd_enable(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_pedal_cmd
{
public:
  explicit Init_BrakeCmd_pedal_cmd(::dbw_ford_msgs::msg::BrakeCmd & msg)
  : msg_(msg)
  {}
  Init_BrakeCmd_pedal_cmd_type pedal_cmd(::dbw_ford_msgs::msg::BrakeCmd::_pedal_cmd_type arg)
  {
    msg_.pedal_cmd = std::move(arg);
    return Init_BrakeCmd_pedal_cmd_type(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeCmd msg_;
};

class Init_BrakeCmd_header
{
public:
  Init_BrakeCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrakeCmd_pedal_cmd header(::dbw_ford_msgs::msg::BrakeCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BrakeCmd_pedal_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::BrakeCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::BrakeCmd>()
{
  return dbw_ford_msgs::msg::builder::Init_BrakeCmd_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__BRAKE_CMD__BUILDER_HPP_
