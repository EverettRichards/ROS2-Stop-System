// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/AmbientLight.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/ambient_light.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__AMBIENT_LIGHT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__AMBIENT_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/ambient_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_AmbientLight_status
{
public:
  Init_AmbientLight_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dbw_ford_msgs::msg::AmbientLight status(::dbw_ford_msgs::msg::AmbientLight::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::AmbientLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::AmbientLight>()
{
  return dbw_ford_msgs::msg::builder::Init_AmbientLight_status();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__AMBIENT_LIGHT__BUILDER_HPP_
