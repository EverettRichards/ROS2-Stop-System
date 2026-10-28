// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/turn_signal.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/turn_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_TurnSignal_value
{
public:
  Init_TurnSignal_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dbw_ford_msgs::msg::TurnSignal value(::dbw_ford_msgs::msg::TurnSignal::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::TurnSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::TurnSignal>()
{
  return dbw_ford_msgs::msg::builder::Init_TurnSignal_value();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_
