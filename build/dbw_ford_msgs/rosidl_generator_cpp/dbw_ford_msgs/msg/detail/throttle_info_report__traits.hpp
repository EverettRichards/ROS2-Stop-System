// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/ThrottleInfoReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/throttle_info_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_INFO_REPORT__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_INFO_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/throttle_info_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'throttle_pedal_qf'
#include "dbw_ford_msgs/msg/detail/quality_factor__traits.hpp"
// Member 'one_pedal'
#include "dbw_ford_msgs/msg/detail/one_pedal__traits.hpp"
// Member 'gear_num'
#include "dbw_ford_msgs/msg/detail/gear_num__traits.hpp"
// Member 'ignition'
#include "dbw_ford_msgs/msg/detail/ignition__traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ThrottleInfoReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: throttle_pc
  {
    out << "throttle_pc: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_pc, out);
    out << ", ";
  }

  // member: throttle_rate
  {
    out << "throttle_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_rate, out);
    out << ", ";
  }

  // member: throttle_pedal_qf
  {
    out << "throttle_pedal_qf: ";
    to_flow_style_yaml(msg.throttle_pedal_qf, out);
    out << ", ";
  }

  // member: one_pedal
  {
    out << "one_pedal: ";
    to_flow_style_yaml(msg.one_pedal, out);
    out << ", ";
  }

  // member: engine_rpm
  {
    out << "engine_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_rpm, out);
    out << ", ";
  }

  // member: gear_num
  {
    out << "gear_num: ";
    to_flow_style_yaml(msg.gear_num, out);
    out << ", ";
  }

  // member: ignition
  {
    out << "ignition: ";
    to_flow_style_yaml(msg.ignition, out);
    out << ", ";
  }

  // member: batt_curr
  {
    out << "batt_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.batt_curr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ThrottleInfoReport & msg,
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

  // member: throttle_pc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_pc: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_pc, out);
    out << "\n";
  }

  // member: throttle_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_rate, out);
    out << "\n";
  }

  // member: throttle_pedal_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_pedal_qf:\n";
    to_block_style_yaml(msg.throttle_pedal_qf, out, indentation + 2);
  }

  // member: one_pedal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "one_pedal:\n";
    to_block_style_yaml(msg.one_pedal, out, indentation + 2);
  }

  // member: engine_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_rpm, out);
    out << "\n";
  }

  // member: gear_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_num:\n";
    to_block_style_yaml(msg.gear_num, out, indentation + 2);
  }

  // member: ignition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignition:\n";
    to_block_style_yaml(msg.ignition, out, indentation + 2);
  }

  // member: batt_curr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batt_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.batt_curr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ThrottleInfoReport & msg, bool use_flow_style = false)
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
  const dbw_ford_msgs::msg::ThrottleInfoReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::ThrottleInfoReport & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::ThrottleInfoReport>()
{
  return "dbw_ford_msgs::msg::ThrottleInfoReport";
}

template<>
inline const char * name<dbw_ford_msgs::msg::ThrottleInfoReport>()
{
  return "dbw_ford_msgs/msg/ThrottleInfoReport";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::ThrottleInfoReport>
  : std::integral_constant<bool, has_fixed_size<dbw_ford_msgs::msg::GearNum>::value && has_fixed_size<dbw_ford_msgs::msg::Ignition>::value && has_fixed_size<dbw_ford_msgs::msg::OnePedal>::value && has_fixed_size<dbw_ford_msgs::msg::QualityFactor>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::ThrottleInfoReport>
  : std::integral_constant<bool, has_bounded_size<dbw_ford_msgs::msg::GearNum>::value && has_bounded_size<dbw_ford_msgs::msg::Ignition>::value && has_bounded_size<dbw_ford_msgs::msg::OnePedal>::value && has_bounded_size<dbw_ford_msgs::msg::QualityFactor>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dbw_ford_msgs::msg::ThrottleInfoReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_INFO_REPORT__TRAITS_HPP_
