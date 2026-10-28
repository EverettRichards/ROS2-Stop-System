// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/GearReject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear_reject.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR_REJECT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR_REJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/gear_reject__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_GearReject_value
{
public:
  Init_GearReject_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dbw_ford_msgs::msg::GearReject value(::dbw_ford_msgs::msg::GearReject::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::GearReject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::GearReject>()
{
  return dbw_ford_msgs::msg::builder::Init_GearReject_value();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR_REJECT__BUILDER_HPP_
