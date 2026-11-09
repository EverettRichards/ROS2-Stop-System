// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/GearCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR_CMD__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/gear_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_GearCmd_clear
{
public:
  explicit Init_GearCmd_clear(::dbw_ford_msgs::msg::GearCmd & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::GearCmd clear(::dbw_ford_msgs::msg::GearCmd::_clear_type arg)
  {
    msg_.clear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::GearCmd msg_;
};

class Init_GearCmd_cmd
{
public:
  explicit Init_GearCmd_cmd(::dbw_ford_msgs::msg::GearCmd & msg)
  : msg_(msg)
  {}
  Init_GearCmd_clear cmd(::dbw_ford_msgs::msg::GearCmd::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_GearCmd_clear(msg_);
  }

private:
  ::dbw_ford_msgs::msg::GearCmd msg_;
};

class Init_GearCmd_header
{
public:
  Init_GearCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GearCmd_cmd header(::dbw_ford_msgs::msg::GearCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GearCmd_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::GearCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::GearCmd>()
{
  return dbw_ford_msgs::msg::builder::Init_GearCmd_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR_CMD__BUILDER_HPP_
