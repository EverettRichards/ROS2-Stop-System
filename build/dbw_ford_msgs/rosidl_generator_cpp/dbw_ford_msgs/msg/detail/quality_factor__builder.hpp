// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/QualityFactor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/quality_factor.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__QUALITY_FACTOR__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__QUALITY_FACTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/quality_factor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_QualityFactor_value
{
public:
  Init_QualityFactor_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dbw_ford_msgs::msg::QualityFactor value(::dbw_ford_msgs::msg::QualityFactor::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::QualityFactor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::QualityFactor>()
{
  return dbw_ford_msgs::msg::builder::Init_QualityFactor_value();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__QUALITY_FACTOR__BUILDER_HPP_
