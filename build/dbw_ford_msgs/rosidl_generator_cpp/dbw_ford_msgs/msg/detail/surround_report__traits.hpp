// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/surround_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__SURROUND_REPORT__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__SURROUND_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/surround_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SurroundReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cta_left_alert
  {
    out << "cta_left_alert: ";
    rosidl_generator_traits::value_to_yaml(msg.cta_left_alert, out);
    out << ", ";
  }

  // member: cta_right_alert
  {
    out << "cta_right_alert: ";
    rosidl_generator_traits::value_to_yaml(msg.cta_right_alert, out);
    out << ", ";
  }

  // member: cta_left_enabled
  {
    out << "cta_left_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.cta_left_enabled, out);
    out << ", ";
  }

  // member: cta_right_enabled
  {
    out << "cta_right_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.cta_right_enabled, out);
    out << ", ";
  }

  // member: blis_left_alert
  {
    out << "blis_left_alert: ";
    rosidl_generator_traits::value_to_yaml(msg.blis_left_alert, out);
    out << ", ";
  }

  // member: blis_right_alert
  {
    out << "blis_right_alert: ";
    rosidl_generator_traits::value_to_yaml(msg.blis_right_alert, out);
    out << ", ";
  }

  // member: blis_left_enabled
  {
    out << "blis_left_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.blis_left_enabled, out);
    out << ", ";
  }

  // member: blis_right_enabled
  {
    out << "blis_right_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.blis_right_enabled, out);
    out << ", ";
  }

  // member: sonar_enabled
  {
    out << "sonar_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.sonar_enabled, out);
    out << ", ";
  }

  // member: sonar_fault
  {
    out << "sonar_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.sonar_fault, out);
    out << ", ";
  }

  // member: sonar
  {
    if (msg.sonar.size() == 0) {
      out << "sonar: []";
    } else {
      out << "sonar: [";
      size_t pending_items = msg.sonar.size();
      for (auto item : msg.sonar) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SurroundReport & msg,
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

  // member: cta_left_alert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cta_left_alert: ";
    rosidl_generator_traits::value_to_yaml(msg.cta_left_alert, out);
    out << "\n";
  }

  // member: cta_right_alert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cta_right_alert: ";
    rosidl_generator_traits::value_to_yaml(msg.cta_right_alert, out);
    out << "\n";
  }

  // member: cta_left_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cta_left_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.cta_left_enabled, out);
    out << "\n";
  }

  // member: cta_right_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cta_right_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.cta_right_enabled, out);
    out << "\n";
  }

  // member: blis_left_alert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blis_left_alert: ";
    rosidl_generator_traits::value_to_yaml(msg.blis_left_alert, out);
    out << "\n";
  }

  // member: blis_right_alert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blis_right_alert: ";
    rosidl_generator_traits::value_to_yaml(msg.blis_right_alert, out);
    out << "\n";
  }

  // member: blis_left_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blis_left_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.blis_left_enabled, out);
    out << "\n";
  }

  // member: blis_right_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blis_right_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.blis_right_enabled, out);
    out << "\n";
  }

  // member: sonar_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sonar_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.sonar_enabled, out);
    out << "\n";
  }

  // member: sonar_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sonar_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.sonar_fault, out);
    out << "\n";
  }

  // member: sonar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sonar.size() == 0) {
      out << "sonar: []\n";
    } else {
      out << "sonar:\n";
      for (auto item : msg.sonar) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SurroundReport & msg, bool use_flow_style = false)
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
  const dbw_ford_msgs::msg::SurroundReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::SurroundReport & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::SurroundReport>()
{
  return "dbw_ford_msgs::msg::SurroundReport";
}

template<>
inline const char * name<dbw_ford_msgs::msg::SurroundReport>()
{
  return "dbw_ford_msgs/msg/SurroundReport";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::SurroundReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::SurroundReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dbw_ford_msgs::msg::SurroundReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__SURROUND_REPORT__TRAITS_HPP_
