// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/WatchdogCounter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/watchdog_counter.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__WATCHDOG_COUNTER__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__WATCHDOG_COUNTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/watchdog_counter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_WatchdogCounter_source
{
public:
  Init_WatchdogCounter_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dbw_ford_msgs::msg::WatchdogCounter source(::dbw_ford_msgs::msg::WatchdogCounter::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::WatchdogCounter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::WatchdogCounter>()
{
  return dbw_ford_msgs::msg::builder::Init_WatchdogCounter_source();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__WATCHDOG_COUNTER__BUILDER_HPP_
