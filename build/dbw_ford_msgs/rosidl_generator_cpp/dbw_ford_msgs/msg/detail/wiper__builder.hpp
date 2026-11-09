// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/Wiper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/wiper.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__WIPER__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__WIPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/wiper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_Wiper_status
{
public:
  Init_Wiper_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dbw_ford_msgs::msg::Wiper status(::dbw_ford_msgs::msg::Wiper::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Wiper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::Wiper>()
{
  return dbw_ford_msgs::msg::builder::Init_Wiper_status();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__WIPER__BUILDER_HPP_
