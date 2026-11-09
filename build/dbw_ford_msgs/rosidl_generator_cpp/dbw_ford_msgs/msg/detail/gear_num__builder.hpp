// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/GearNum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear_num.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR_NUM__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR_NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/gear_num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_GearNum_num
{
public:
  Init_GearNum_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dbw_ford_msgs::msg::GearNum num(::dbw_ford_msgs::msg::GearNum::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::GearNum msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::GearNum>()
{
  return dbw_ford_msgs::msg::builder::Init_GearNum_num();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR_NUM__BUILDER_HPP_
