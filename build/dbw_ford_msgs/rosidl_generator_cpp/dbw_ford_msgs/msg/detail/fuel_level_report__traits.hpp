// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/FuelLevelReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/fuel_level_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__FUEL_LEVEL_REPORT__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__FUEL_LEVEL_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/fuel_level_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FuelLevelReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fuel_level
  {
    out << "fuel_level: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_level, out);
    out << ", ";
  }

  // member: battery_12v
  {
    out << "battery_12v: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_12v, out);
    out << ", ";
  }

  // member: battery_hev
  {
    out << "battery_hev: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_hev, out);
    out << ", ";
  }

  // member: odometer
  {
    out << "odometer: ";
    rosidl_generator_traits::value_to_yaml(msg.odometer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FuelLevelReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: fuel_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_level: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_level, out);
    out << "\n";
  }

  // member: battery_12v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_12v: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_12v, out);
    out << "\n";
  }

  // member: battery_hev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_hev: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_hev, out);
    out << "\n";
  }

  // member: odometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odometer: ";
    rosidl_generator_traits::value_to_yaml(msg.odometer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FuelLevelReport & msg, bool use_flow_style = false)
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
  const dbw_ford_msgs::msg::FuelLevelReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::FuelLevelReport & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::FuelLevelReport>()
{
  return "dbw_ford_msgs::msg::FuelLevelReport";
}

template<>
inline const char * name<dbw_ford_msgs::msg::FuelLevelReport>()
{
  return "dbw_ford_msgs/msg/FuelLevelReport";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::FuelLevelReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::FuelLevelReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dbw_ford_msgs::msg::FuelLevelReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__FUEL_LEVEL_REPORT__TRAITS_HPP_
