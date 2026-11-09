// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/ThrottleCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/throttle_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_CMD__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/throttle_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_ThrottleCmd_count
{
public:
  explicit Init_ThrottleCmd_count(::dbw_ford_msgs::msg::ThrottleCmd & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::ThrottleCmd count(::dbw_ford_msgs::msg::ThrottleCmd::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleCmd msg_;
};

class Init_ThrottleCmd_ignore
{
public:
  explicit Init_ThrottleCmd_ignore(::dbw_ford_msgs::msg::ThrottleCmd & msg)
  : msg_(msg)
  {}
  Init_ThrottleCmd_count ignore(::dbw_ford_msgs::msg::ThrottleCmd::_ignore_type arg)
  {
    msg_.ignore = std::move(arg);
    return Init_ThrottleCmd_count(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleCmd msg_;
};

class Init_ThrottleCmd_clear
{
public:
  explicit Init_ThrottleCmd_clear(::dbw_ford_msgs::msg::ThrottleCmd & msg)
  : msg_(msg)
  {}
  Init_ThrottleCmd_ignore clear(::dbw_ford_msgs::msg::ThrottleCmd::_clear_type arg)
  {
    msg_.clear = std::move(arg);
    return Init_ThrottleCmd_ignore(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleCmd msg_;
};

class Init_ThrottleCmd_enable
{
public:
  explicit Init_ThrottleCmd_enable(::dbw_ford_msgs::msg::ThrottleCmd & msg)
  : msg_(msg)
  {}
  Init_ThrottleCmd_clear enable(::dbw_ford_msgs::msg::ThrottleCmd::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_ThrottleCmd_clear(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleCmd msg_;
};

class Init_ThrottleCmd_pedal_cmd_type
{
public:
  explicit Init_ThrottleCmd_pedal_cmd_type(::dbw_ford_msgs::msg::ThrottleCmd & msg)
  : msg_(msg)
  {}
  Init_ThrottleCmd_enable pedal_cmd_type(::dbw_ford_msgs::msg::ThrottleCmd::_pedal_cmd_type_type arg)
  {
    msg_.pedal_cmd_type = std::move(arg);
    return Init_ThrottleCmd_enable(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleCmd msg_;
};

class Init_ThrottleCmd_pedal_cmd
{
public:
  explicit Init_ThrottleCmd_pedal_cmd(::dbw_ford_msgs::msg::ThrottleCmd & msg)
  : msg_(msg)
  {}
  Init_ThrottleCmd_pedal_cmd_type pedal_cmd(::dbw_ford_msgs::msg::ThrottleCmd::_pedal_cmd_type arg)
  {
    msg_.pedal_cmd = std::move(arg);
    return Init_ThrottleCmd_pedal_cmd_type(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleCmd msg_;
};

class Init_ThrottleCmd_header
{
public:
  Init_ThrottleCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThrottleCmd_pedal_cmd header(::dbw_ford_msgs::msg::ThrottleCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ThrottleCmd_pedal_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ThrottleCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::ThrottleCmd>()
{
  return dbw_ford_msgs::msg::builder::Init_ThrottleCmd_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_CMD__BUILDER_HPP_
