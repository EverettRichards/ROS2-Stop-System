// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/QualityFactor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/quality_factor.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__QUALITY_FACTOR__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__QUALITY_FACTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/quality_factor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const QualityFactor & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QualityFactor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QualityFactor & msg, bool use_flow_style = false)
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
  const dbw_ford_msgs::msg::QualityFactor & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::QualityFactor & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::QualityFactor>()
{
  return "dbw_ford_msgs::msg::QualityFactor";
}

template<>
inline const char * name<dbw_ford_msgs::msg::QualityFactor>()
{
  return "dbw_ford_msgs/msg/QualityFactor";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::QualityFactor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::QualityFactor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dbw_ford_msgs::msg::QualityFactor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__QUALITY_FACTOR__TRAITS_HPP_
