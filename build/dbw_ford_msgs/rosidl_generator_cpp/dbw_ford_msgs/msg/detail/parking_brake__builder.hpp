// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/ParkingBrake.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/parking_brake.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/parking_brake__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_ParkingBrake_status
{
public:
  Init_ParkingBrake_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dbw_ford_msgs::msg::ParkingBrake status(::dbw_ford_msgs::msg::ParkingBrake::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ParkingBrake msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::ParkingBrake>()
{
  return dbw_ford_msgs::msg::builder::Init_ParkingBrake_status();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE__BUILDER_HPP_
