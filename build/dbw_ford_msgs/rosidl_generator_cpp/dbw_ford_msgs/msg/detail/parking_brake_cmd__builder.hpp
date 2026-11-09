// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/ParkingBrakeCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/parking_brake_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE_CMD__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/parking_brake_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_ParkingBrakeCmd_cmd
{
public:
  Init_ParkingBrakeCmd_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dbw_ford_msgs::msg::ParkingBrakeCmd cmd(::dbw_ford_msgs::msg::ParkingBrakeCmd::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::ParkingBrakeCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::ParkingBrakeCmd>()
{
  return dbw_ford_msgs::msg::builder::Init_ParkingBrakeCmd_cmd();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE_CMD__BUILDER_HPP_
