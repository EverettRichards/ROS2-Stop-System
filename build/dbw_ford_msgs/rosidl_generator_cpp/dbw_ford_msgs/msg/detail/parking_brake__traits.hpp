// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/ParkingBrake.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/parking_brake.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/parking_brake__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParkingBrake & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParkingBrake & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParkingBrake & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dbw_ford_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dbw_ford_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dbw_ford_msgs::msg::ParkingBrake & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::ParkingBrake & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::ParkingBrake>()
{
  return "dbw_ford_msgs::msg::ParkingBrake";
}

template<>
inline const char * name<dbw_ford_msgs::msg::ParkingBrake>()
{
  return "dbw_ford_msgs/msg/ParkingBrake";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::ParkingBrake>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::ParkingBrake>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dbw_ford_msgs::msg::ParkingBrake>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE__TRAITS_HPP_
