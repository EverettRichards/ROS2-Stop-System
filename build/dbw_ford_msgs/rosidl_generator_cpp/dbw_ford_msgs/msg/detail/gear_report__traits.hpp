// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR_REPORT__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/gear_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'state'
// Member 'cmd'
#include "dbw_ford_msgs/msg/detail/gear__traits.hpp"
// Member 'reject'
#include "dbw_ford_msgs/msg/detail/gear_reject__traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GearReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
    out << ", ";
  }

  // member: cmd
  {
    out << "cmd: ";
    to_flow_style_yaml(msg.cmd, out);
    out << ", ";
  }

  // member: reject
  {
    out << "reject: ";
    to_flow_style_yaml(msg.reject, out);
    out << ", ";
  }

  // member: ready
  {
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << ", ";
  }

  // member: override
  {
    out << "override: ";
    rosidl_generator_traits::value_to_yaml(msg.override, out);
    out << ", ";
  }

  // member: fault_bus
  {
    out << "fault_bus: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_bus, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GearReport & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }

  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd:\n";
    to_block_style_yaml(msg.cmd, out, indentation + 2);
  }

  // member: reject
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject:\n";
    to_block_style_yaml(msg.reject, out, indentation + 2);
  }

  // member: ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << "\n";
  }

  // member: override
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "override: ";
    rosidl_generator_traits::value_to_yaml(msg.override, out);
    out << "\n";
  }

  // member: fault_bus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_bus: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_bus, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GearReport & msg, bool use_flow_style = false)
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
  const dbw_ford_msgs::msg::GearReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::GearReport & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::GearReport>()
{
  return "dbw_ford_msgs::msg::GearReport";
}

template<>
inline const char * name<dbw_ford_msgs::msg::GearReport>()
{
  return "dbw_ford_msgs/msg/GearReport";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::GearReport>
  : std::integral_constant<bool, has_fixed_size<dbw_ford_msgs::msg::Gear>::value && has_fixed_size<dbw_ford_msgs::msg::GearReject>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::GearReport>
  : std::integral_constant<bool, has_bounded_size<dbw_ford_msgs::msg::Gear>::value && has_bounded_size<dbw_ford_msgs::msg::GearReject>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dbw_ford_msgs::msg::GearReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR_REPORT__TRAITS_HPP_
