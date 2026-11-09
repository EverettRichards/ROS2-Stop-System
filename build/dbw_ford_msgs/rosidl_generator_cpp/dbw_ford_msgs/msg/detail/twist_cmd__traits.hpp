// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/TwistCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/twist_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__TWIST_CMD__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__TWIST_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/twist_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TwistCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: accel_limit
  {
    out << "accel_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_limit, out);
    out << ", ";
  }

  // member: decel_limit
  {
    out << "decel_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.decel_limit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TwistCmd & msg,
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

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: accel_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_limit, out);
    out << "\n";
  }

  // member: decel_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decel_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.decel_limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TwistCmd & msg, bool use_flow_style = false)
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
  const dbw_ford_msgs::msg::TwistCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::TwistCmd & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::TwistCmd>()
{
  return "dbw_ford_msgs::msg::TwistCmd";
}

template<>
inline const char * name<dbw_ford_msgs::msg::TwistCmd>()
{
  return "dbw_ford_msgs/msg/TwistCmd";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::TwistCmd>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::TwistCmd>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dbw_ford_msgs::msg::TwistCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__TWIST_CMD__TRAITS_HPP_
