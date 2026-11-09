// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/DriverAssistReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/driver_assist_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/driver_assist_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DriverAssistReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: decel
  {
    out << "decel: ";
    rosidl_generator_traits::value_to_yaml(msg.decel, out);
    out << ", ";
  }

  // member: decel_src
  {
    out << "decel_src: ";
    rosidl_generator_traits::value_to_yaml(msg.decel_src, out);
    out << ", ";
  }

  // member: fcw_enabled
  {
    out << "fcw_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.fcw_enabled, out);
    out << ", ";
  }

  // member: fcw_active
  {
    out << "fcw_active: ";
    rosidl_generator_traits::value_to_yaml(msg.fcw_active, out);
    out << ", ";
  }

  // member: aeb_enabled
  {
    out << "aeb_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.aeb_enabled, out);
    out << ", ";
  }

  // member: aeb_precharge
  {
    out << "aeb_precharge: ";
    rosidl_generator_traits::value_to_yaml(msg.aeb_precharge, out);
    out << ", ";
  }

  // member: aeb_braking
  {
    out << "aeb_braking: ";
    rosidl_generator_traits::value_to_yaml(msg.aeb_braking, out);
    out << ", ";
  }

  // member: acc_enabled
  {
    out << "acc_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_enabled, out);
    out << ", ";
  }

  // member: acc_braking
  {
    out << "acc_braking: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_braking, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriverAssistReport & msg,
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

  // member: decel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decel: ";
    rosidl_generator_traits::value_to_yaml(msg.decel, out);
    out << "\n";
  }

  // member: decel_src
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decel_src: ";
    rosidl_generator_traits::value_to_yaml(msg.decel_src, out);
    out << "\n";
  }

  // member: fcw_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fcw_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.fcw_enabled, out);
    out << "\n";
  }

  // member: fcw_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fcw_active: ";
    rosidl_generator_traits::value_to_yaml(msg.fcw_active, out);
    out << "\n";
  }

  // member: aeb_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aeb_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.aeb_enabled, out);
    out << "\n";
  }

  // member: aeb_precharge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aeb_precharge: ";
    rosidl_generator_traits::value_to_yaml(msg.aeb_precharge, out);
    out << "\n";
  }

  // member: aeb_braking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aeb_braking: ";
    rosidl_generator_traits::value_to_yaml(msg.aeb_braking, out);
    out << "\n";
  }

  // member: acc_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_enabled, out);
    out << "\n";
  }

  // member: acc_braking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_braking: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_braking, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriverAssistReport & msg, bool use_flow_style = false)
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
  const dbw_ford_msgs::msg::DriverAssistReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::DriverAssistReport & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::DriverAssistReport>()
{
  return "dbw_ford_msgs::msg::DriverAssistReport";
}

template<>
inline const char * name<dbw_ford_msgs::msg::DriverAssistReport>()
{
  return "dbw_ford_msgs/msg/DriverAssistReport";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::DriverAssistReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::DriverAssistReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dbw_ford_msgs::msg::DriverAssistReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__TRAITS_HPP_
