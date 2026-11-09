// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/misc_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__MISC_CMD__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__MISC_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/misc_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_MiscCmd_pbrk
{
public:
  explicit Init_MiscCmd_pbrk(::dbw_ford_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::MiscCmd pbrk(::dbw_ford_msgs::msg::MiscCmd::_pbrk_type arg)
  {
    msg_.pbrk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_cmd
{
public:
  explicit Init_MiscCmd_cmd(::dbw_ford_msgs::msg::MiscCmd & msg)
  : msg_(msg)
  {}
  Init_MiscCmd_pbrk cmd(::dbw_ford_msgs::msg::MiscCmd::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_MiscCmd_pbrk(msg_);
  }

private:
  ::dbw_ford_msgs::msg::MiscCmd msg_;
};

class Init_MiscCmd_header
{
public:
  Init_MiscCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MiscCmd_cmd header(::dbw_ford_msgs::msg::MiscCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MiscCmd_cmd(msg_);
  }

private:
  ::dbw_ford_msgs::msg::MiscCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::MiscCmd>()
{
  return dbw_ford_msgs::msg::builder::Init_MiscCmd_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__MISC_CMD__BUILDER_HPP_
