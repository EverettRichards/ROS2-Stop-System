// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/Gear.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/gear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_Gear_gear
{
public:
  Init_Gear_gear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dbw_ford_msgs::msg::Gear gear(::dbw_ford_msgs::msg::Gear::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Gear msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::Gear>()
{
  return dbw_ford_msgs::msg::builder::Init_Gear_gear();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR__BUILDER_HPP_
