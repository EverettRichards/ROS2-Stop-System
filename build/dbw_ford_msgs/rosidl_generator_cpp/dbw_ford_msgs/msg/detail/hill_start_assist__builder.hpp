// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/HillStartAssist.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/hill_start_assist.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__HILL_START_ASSIST__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__HILL_START_ASSIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/hill_start_assist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_HillStartAssist_mode
{
public:
  explicit Init_HillStartAssist_mode(::dbw_ford_msgs::msg::HillStartAssist & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::HillStartAssist mode(::dbw_ford_msgs::msg::HillStartAssist::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::HillStartAssist msg_;
};

class Init_HillStartAssist_status
{
public:
  Init_HillStartAssist_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HillStartAssist_mode status(::dbw_ford_msgs::msg::HillStartAssist::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_HillStartAssist_mode(msg_);
  }

private:
  ::dbw_ford_msgs::msg::HillStartAssist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::HillStartAssist>()
{
  return dbw_ford_msgs::msg::builder::Init_HillStartAssist_status();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__HILL_START_ASSIST__BUILDER_HPP_
