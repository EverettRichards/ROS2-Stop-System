// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/BrakeCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/brake_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__BRAKE_CMD__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__BRAKE_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/brake_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BrakeCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pedal_cmd
  {
    out << "pedal_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_cmd, out);
    out << ", ";
  }

  // member: pedal_cmd_type
  {
    out << "pedal_cmd_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_cmd_type, out);
    out << ", ";
  }

  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << ", ";
  }

  // member: clear
  {
    out << "clear: ";
    rosidl_generator_traits::value_to_yaml(msg.clear, out);
    out << ", ";
  }

  // member: ignore
  {
    out << "ignore: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BrakeCmd & msg,
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

  // member: pedal_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_cmd, out);
    out << "\n";
  }

  // member: pedal_cmd_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_cmd_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_cmd_type, out);
    out << "\n";
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }

  // member: clear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clear: ";
    rosidl_generator_traits::value_to_yaml(msg.clear, out);
    out << "\n";
  }

  // member: ignore
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BrakeCmd & msg, bool use_flow_style = false)
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
  const dbw_ford_msgs::msg::BrakeCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::BrakeCmd & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::BrakeCmd>()
{
  return "dbw_ford_msgs::msg::BrakeCmd";
}

template<>
inline const char * name<dbw_ford_msgs::msg::BrakeCmd>()
{
  return "dbw_ford_msgs/msg/BrakeCmd";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::BrakeCmd>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::BrakeCmd>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dbw_ford_msgs::msg::BrakeCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__BRAKE_CMD__TRAITS_HPP_
