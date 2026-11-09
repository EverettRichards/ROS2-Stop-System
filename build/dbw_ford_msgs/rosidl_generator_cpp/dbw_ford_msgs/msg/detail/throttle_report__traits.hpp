// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/ThrottleReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/throttle_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_REPORT__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/throttle_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'watchdog_counter'
#include "dbw_ford_msgs/msg/detail/watchdog_counter__traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ThrottleReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pedal_input
  {
    out << "pedal_input: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_input, out);
    out << ", ";
  }

  // member: pedal_cmd
  {
    out << "pedal_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_cmd, out);
    out << ", ";
  }

  // member: pedal_output
  {
    out << "pedal_output: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_output, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: override
  {
    out << "override: ";
    rosidl_generator_traits::value_to_yaml(msg.override, out);
    out << ", ";
  }

  // member: driver
  {
    out << "driver: ";
    rosidl_generator_traits::value_to_yaml(msg.driver, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << ", ";
  }

  // member: watchdog_counter
  {
    out << "watchdog_counter: ";
    to_flow_style_yaml(msg.watchdog_counter, out);
    out << ", ";
  }

  // member: fault_wdc
  {
    out << "fault_wdc: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_wdc, out);
    out << ", ";
  }

  // member: fault_ch1
  {
    out << "fault_ch1: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_ch1, out);
    out << ", ";
  }

  // member: fault_ch2
  {
    out << "fault_ch2: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_ch2, out);
    out << ", ";
  }

  // member: fault_power
  {
    out << "fault_power: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ThrottleReport & msg,
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

  // member: pedal_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_input: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_input, out);
    out << "\n";
  }

  // member: pedal_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_cmd, out);
    out << "\n";
  }

  // member: pedal_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_output: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_output, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
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

  // member: driver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver: ";
    rosidl_generator_traits::value_to_yaml(msg.driver, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << "\n";
  }

  // member: watchdog_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "watchdog_counter:\n";
    to_block_style_yaml(msg.watchdog_counter, out, indentation + 2);
  }

  // member: fault_wdc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_wdc: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_wdc, out);
    out << "\n";
  }

  // member: fault_ch1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_ch1: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_ch1, out);
    out << "\n";
  }

  // member: fault_ch2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_ch2: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_ch2, out);
    out << "\n";
  }

  // member: fault_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_power: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ThrottleReport & msg, bool use_flow_style = false)
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
  const dbw_ford_msgs::msg::ThrottleReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::ThrottleReport & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::ThrottleReport>()
{
  return "dbw_ford_msgs::msg::ThrottleReport";
}

template<>
inline const char * name<dbw_ford_msgs::msg::ThrottleReport>()
{
  return "dbw_ford_msgs/msg/ThrottleReport";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::ThrottleReport>
  : std::integral_constant<bool, has_fixed_size<dbw_ford_msgs::msg::WatchdogCounter>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::ThrottleReport>
  : std::integral_constant<bool, has_bounded_size<dbw_ford_msgs::msg::WatchdogCounter>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dbw_ford_msgs::msg::ThrottleReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_REPORT__TRAITS_HPP_
