// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/SteeringReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/steering_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__STEERING_REPORT__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__STEERING_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/steering_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SteeringReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: steering_wheel_angle
  {
    out << "steering_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_angle, out);
    out << ", ";
  }

  // member: steering_wheel_cmd
  {
    out << "steering_wheel_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_cmd, out);
    out << ", ";
  }

  // member: steering_wheel_torque
  {
    out << "steering_wheel_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_torque, out);
    out << ", ";
  }

  // member: steering_wheel_cmd_type
  {
    out << "steering_wheel_cmd_type: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_cmd_type, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
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

  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << ", ";
  }

  // member: fault_wdc
  {
    out << "fault_wdc: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_wdc, out);
    out << ", ";
  }

  // member: fault_bus1
  {
    out << "fault_bus1: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_bus1, out);
    out << ", ";
  }

  // member: fault_bus2
  {
    out << "fault_bus2: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_bus2, out);
    out << ", ";
  }

  // member: fault_calibration
  {
    out << "fault_calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_calibration, out);
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
  const SteeringReport & msg,
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

  // member: steering_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_angle, out);
    out << "\n";
  }

  // member: steering_wheel_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_wheel_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_cmd, out);
    out << "\n";
  }

  // member: steering_wheel_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_wheel_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_torque, out);
    out << "\n";
  }

  // member: steering_wheel_cmd_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_wheel_cmd_type: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_cmd_type, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
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

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << "\n";
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

  // member: fault_bus1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_bus1: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_bus1, out);
    out << "\n";
  }

  // member: fault_bus2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_bus2: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_bus2, out);
    out << "\n";
  }

  // member: fault_calibration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_calibration, out);
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

inline std::string to_yaml(const SteeringReport & msg, bool use_flow_style = false)
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
  const dbw_ford_msgs::msg::SteeringReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::SteeringReport & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::SteeringReport>()
{
  return "dbw_ford_msgs::msg::SteeringReport";
}

template<>
inline const char * name<dbw_ford_msgs::msg::SteeringReport>()
{
  return "dbw_ford_msgs/msg/SteeringReport";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::SteeringReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::SteeringReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dbw_ford_msgs::msg::SteeringReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__STEERING_REPORT__TRAITS_HPP_
