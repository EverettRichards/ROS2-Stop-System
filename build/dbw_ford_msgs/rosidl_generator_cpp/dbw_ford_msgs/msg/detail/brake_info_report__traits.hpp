// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/BrakeInfoReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/brake_info_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__BRAKE_INFO_REPORT__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__BRAKE_INFO_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/brake_info_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'brake_pedal_qf'
#include "dbw_ford_msgs/msg/detail/quality_factor__traits.hpp"
// Member 'hsa'
#include "dbw_ford_msgs/msg/detail/hill_start_assist__traits.hpp"
// Member 'parking_brake'
#include "dbw_ford_msgs/msg/detail/parking_brake__traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BrakeInfoReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: brake_torque_request
  {
    out << "brake_torque_request: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_torque_request, out);
    out << ", ";
  }

  // member: brake_torque_actual
  {
    out << "brake_torque_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_torque_actual, out);
    out << ", ";
  }

  // member: wheel_torque_actual
  {
    out << "wheel_torque_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_torque_actual, out);
    out << ", ";
  }

  // member: accel_over_ground
  {
    out << "accel_over_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_over_ground, out);
    out << ", ";
  }

  // member: brake_pedal_qf
  {
    out << "brake_pedal_qf: ";
    to_flow_style_yaml(msg.brake_pedal_qf, out);
    out << ", ";
  }

  // member: hsa
  {
    out << "hsa: ";
    to_flow_style_yaml(msg.hsa, out);
    out << ", ";
  }

  // member: abs_active
  {
    out << "abs_active: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_active, out);
    out << ", ";
  }

  // member: abs_enabled
  {
    out << "abs_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_enabled, out);
    out << ", ";
  }

  // member: stab_active
  {
    out << "stab_active: ";
    rosidl_generator_traits::value_to_yaml(msg.stab_active, out);
    out << ", ";
  }

  // member: stab_enabled
  {
    out << "stab_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.stab_enabled, out);
    out << ", ";
  }

  // member: trac_active
  {
    out << "trac_active: ";
    rosidl_generator_traits::value_to_yaml(msg.trac_active, out);
    out << ", ";
  }

  // member: trac_enabled
  {
    out << "trac_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.trac_enabled, out);
    out << ", ";
  }

  // member: parking_brake
  {
    out << "parking_brake: ";
    to_flow_style_yaml(msg.parking_brake, out);
    out << ", ";
  }

  // member: stationary
  {
    out << "stationary: ";
    rosidl_generator_traits::value_to_yaml(msg.stationary, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BrakeInfoReport & msg,
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

  // member: brake_torque_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_torque_request: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_torque_request, out);
    out << "\n";
  }

  // member: brake_torque_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_torque_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_torque_actual, out);
    out << "\n";
  }

  // member: wheel_torque_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_torque_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_torque_actual, out);
    out << "\n";
  }

  // member: accel_over_ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_over_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_over_ground, out);
    out << "\n";
  }

  // member: brake_pedal_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_pedal_qf:\n";
    to_block_style_yaml(msg.brake_pedal_qf, out, indentation + 2);
  }

  // member: hsa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hsa:\n";
    to_block_style_yaml(msg.hsa, out, indentation + 2);
  }

  // member: abs_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_active: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_active, out);
    out << "\n";
  }

  // member: abs_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_enabled, out);
    out << "\n";
  }

  // member: stab_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stab_active: ";
    rosidl_generator_traits::value_to_yaml(msg.stab_active, out);
    out << "\n";
  }

  // member: stab_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stab_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.stab_enabled, out);
    out << "\n";
  }

  // member: trac_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trac_active: ";
    rosidl_generator_traits::value_to_yaml(msg.trac_active, out);
    out << "\n";
  }

  // member: trac_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trac_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.trac_enabled, out);
    out << "\n";
  }

  // member: parking_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_brake:\n";
    to_block_style_yaml(msg.parking_brake, out, indentation + 2);
  }

  // member: stationary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stationary: ";
    rosidl_generator_traits::value_to_yaml(msg.stationary, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BrakeInfoReport & msg, bool use_flow_style = false)
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
  const dbw_ford_msgs::msg::BrakeInfoReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::BrakeInfoReport & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::BrakeInfoReport>()
{
  return "dbw_ford_msgs::msg::BrakeInfoReport";
}

template<>
inline const char * name<dbw_ford_msgs::msg::BrakeInfoReport>()
{
  return "dbw_ford_msgs/msg/BrakeInfoReport";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::BrakeInfoReport>
  : std::integral_constant<bool, has_fixed_size<dbw_ford_msgs::msg::HillStartAssist>::value && has_fixed_size<dbw_ford_msgs::msg::ParkingBrake>::value && has_fixed_size<dbw_ford_msgs::msg::QualityFactor>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::BrakeInfoReport>
  : std::integral_constant<bool, has_bounded_size<dbw_ford_msgs::msg::HillStartAssist>::value && has_bounded_size<dbw_ford_msgs::msg::ParkingBrake>::value && has_bounded_size<dbw_ford_msgs::msg::QualityFactor>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dbw_ford_msgs::msg::BrakeInfoReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__BRAKE_INFO_REPORT__TRAITS_HPP_
