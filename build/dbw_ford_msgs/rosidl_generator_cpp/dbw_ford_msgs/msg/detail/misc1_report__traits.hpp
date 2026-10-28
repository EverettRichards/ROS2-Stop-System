// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dbw_ford_msgs:msg/Misc1Report.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/misc1_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__MISC1_REPORT__TRAITS_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__MISC1_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dbw_ford_msgs/msg/detail/misc1_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'turn_signal'
#include "dbw_ford_msgs/msg/detail/turn_signal__traits.hpp"
// Member 'wiper'
#include "dbw_ford_msgs/msg/detail/wiper__traits.hpp"
// Member 'ambient_light'
#include "dbw_ford_msgs/msg/detail/ambient_light__traits.hpp"

namespace dbw_ford_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Misc1Report & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: turn_signal
  {
    out << "turn_signal: ";
    to_flow_style_yaml(msg.turn_signal, out);
    out << ", ";
  }

  // member: high_beam_headlights
  {
    out << "high_beam_headlights: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beam_headlights, out);
    out << ", ";
  }

  // member: wiper
  {
    out << "wiper: ";
    to_flow_style_yaml(msg.wiper, out);
    out << ", ";
  }

  // member: ambient_light
  {
    out << "ambient_light: ";
    to_flow_style_yaml(msg.ambient_light, out);
    out << ", ";
  }

  // member: outside_temperature
  {
    out << "outside_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.outside_temperature, out);
    out << ", ";
  }

  // member: btn_cc_on
  {
    out << "btn_cc_on: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_on, out);
    out << ", ";
  }

  // member: btn_cc_off
  {
    out << "btn_cc_off: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_off, out);
    out << ", ";
  }

  // member: btn_cc_on_off
  {
    out << "btn_cc_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_on_off, out);
    out << ", ";
  }

  // member: btn_cc_res
  {
    out << "btn_cc_res: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_res, out);
    out << ", ";
  }

  // member: btn_cc_cncl
  {
    out << "btn_cc_cncl: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_cncl, out);
    out << ", ";
  }

  // member: btn_cc_res_cncl
  {
    out << "btn_cc_res_cncl: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_res_cncl, out);
    out << ", ";
  }

  // member: btn_cc_res_inc
  {
    out << "btn_cc_res_inc: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_res_inc, out);
    out << ", ";
  }

  // member: btn_cc_res_dec
  {
    out << "btn_cc_res_dec: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_res_dec, out);
    out << ", ";
  }

  // member: btn_cc_set_inc
  {
    out << "btn_cc_set_inc: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_set_inc, out);
    out << ", ";
  }

  // member: btn_cc_set_dec
  {
    out << "btn_cc_set_dec: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_set_dec, out);
    out << ", ";
  }

  // member: btn_cc_gap_inc
  {
    out << "btn_cc_gap_inc: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_gap_inc, out);
    out << ", ";
  }

  // member: btn_cc_gap_dec
  {
    out << "btn_cc_gap_dec: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_gap_dec, out);
    out << ", ";
  }

  // member: btn_la_on_off
  {
    out << "btn_la_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_la_on_off, out);
    out << ", ";
  }

  // member: btn_ld_ok
  {
    out << "btn_ld_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_ld_ok, out);
    out << ", ";
  }

  // member: btn_ld_up
  {
    out << "btn_ld_up: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_ld_up, out);
    out << ", ";
  }

  // member: btn_ld_down
  {
    out << "btn_ld_down: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_ld_down, out);
    out << ", ";
  }

  // member: btn_ld_left
  {
    out << "btn_ld_left: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_ld_left, out);
    out << ", ";
  }

  // member: btn_ld_right
  {
    out << "btn_ld_right: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_ld_right, out);
    out << ", ";
  }

  // member: btn_rd_ok
  {
    out << "btn_rd_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_rd_ok, out);
    out << ", ";
  }

  // member: btn_rd_up
  {
    out << "btn_rd_up: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_rd_up, out);
    out << ", ";
  }

  // member: btn_rd_down
  {
    out << "btn_rd_down: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_rd_down, out);
    out << ", ";
  }

  // member: btn_rd_left
  {
    out << "btn_rd_left: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_rd_left, out);
    out << ", ";
  }

  // member: btn_rd_right
  {
    out << "btn_rd_right: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_rd_right, out);
    out << ", ";
  }

  // member: btn_vol_inc
  {
    out << "btn_vol_inc: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_vol_inc, out);
    out << ", ";
  }

  // member: btn_vol_dec
  {
    out << "btn_vol_dec: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_vol_dec, out);
    out << ", ";
  }

  // member: btn_mute
  {
    out << "btn_mute: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_mute, out);
    out << ", ";
  }

  // member: btn_media
  {
    out << "btn_media: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_media, out);
    out << ", ";
  }

  // member: btn_prev
  {
    out << "btn_prev: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_prev, out);
    out << ", ";
  }

  // member: btn_next
  {
    out << "btn_next: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_next, out);
    out << ", ";
  }

  // member: btn_speak
  {
    out << "btn_speak: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_speak, out);
    out << ", ";
  }

  // member: btn_call_start
  {
    out << "btn_call_start: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_call_start, out);
    out << ", ";
  }

  // member: btn_call_end
  {
    out << "btn_call_end: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_call_end, out);
    out << ", ";
  }

  // member: fault_bus
  {
    out << "fault_bus: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_bus, out);
    out << ", ";
  }

  // member: door_driver
  {
    out << "door_driver: ";
    rosidl_generator_traits::value_to_yaml(msg.door_driver, out);
    out << ", ";
  }

  // member: door_passenger
  {
    out << "door_passenger: ";
    rosidl_generator_traits::value_to_yaml(msg.door_passenger, out);
    out << ", ";
  }

  // member: door_rear_left
  {
    out << "door_rear_left: ";
    rosidl_generator_traits::value_to_yaml(msg.door_rear_left, out);
    out << ", ";
  }

  // member: door_rear_right
  {
    out << "door_rear_right: ";
    rosidl_generator_traits::value_to_yaml(msg.door_rear_right, out);
    out << ", ";
  }

  // member: door_hood
  {
    out << "door_hood: ";
    rosidl_generator_traits::value_to_yaml(msg.door_hood, out);
    out << ", ";
  }

  // member: door_trunk
  {
    out << "door_trunk: ";
    rosidl_generator_traits::value_to_yaml(msg.door_trunk, out);
    out << ", ";
  }

  // member: passenger_detect
  {
    out << "passenger_detect: ";
    rosidl_generator_traits::value_to_yaml(msg.passenger_detect, out);
    out << ", ";
  }

  // member: passenger_airbag
  {
    out << "passenger_airbag: ";
    rosidl_generator_traits::value_to_yaml(msg.passenger_airbag, out);
    out << ", ";
  }

  // member: buckle_driver
  {
    out << "buckle_driver: ";
    rosidl_generator_traits::value_to_yaml(msg.buckle_driver, out);
    out << ", ";
  }

  // member: buckle_passenger
  {
    out << "buckle_passenger: ";
    rosidl_generator_traits::value_to_yaml(msg.buckle_passenger, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Misc1Report & msg,
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

  // member: turn_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_signal:\n";
    to_block_style_yaml(msg.turn_signal, out, indentation + 2);
  }

  // member: high_beam_headlights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_beam_headlights: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beam_headlights, out);
    out << "\n";
  }

  // member: wiper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wiper:\n";
    to_block_style_yaml(msg.wiper, out, indentation + 2);
  }

  // member: ambient_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ambient_light:\n";
    to_block_style_yaml(msg.ambient_light, out, indentation + 2);
  }

  // member: outside_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outside_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.outside_temperature, out);
    out << "\n";
  }

  // member: btn_cc_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_cc_on: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_on, out);
    out << "\n";
  }

  // member: btn_cc_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_cc_off: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_off, out);
    out << "\n";
  }

  // member: btn_cc_on_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_cc_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_on_off, out);
    out << "\n";
  }

  // member: btn_cc_res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_cc_res: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_res, out);
    out << "\n";
  }

  // member: btn_cc_cncl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_cc_cncl: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_cncl, out);
    out << "\n";
  }

  // member: btn_cc_res_cncl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_cc_res_cncl: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_res_cncl, out);
    out << "\n";
  }

  // member: btn_cc_res_inc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_cc_res_inc: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_res_inc, out);
    out << "\n";
  }

  // member: btn_cc_res_dec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_cc_res_dec: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_res_dec, out);
    out << "\n";
  }

  // member: btn_cc_set_inc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_cc_set_inc: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_set_inc, out);
    out << "\n";
  }

  // member: btn_cc_set_dec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_cc_set_dec: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_set_dec, out);
    out << "\n";
  }

  // member: btn_cc_gap_inc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_cc_gap_inc: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_gap_inc, out);
    out << "\n";
  }

  // member: btn_cc_gap_dec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_cc_gap_dec: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_cc_gap_dec, out);
    out << "\n";
  }

  // member: btn_la_on_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_la_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_la_on_off, out);
    out << "\n";
  }

  // member: btn_ld_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_ld_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_ld_ok, out);
    out << "\n";
  }

  // member: btn_ld_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_ld_up: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_ld_up, out);
    out << "\n";
  }

  // member: btn_ld_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_ld_down: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_ld_down, out);
    out << "\n";
  }

  // member: btn_ld_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_ld_left: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_ld_left, out);
    out << "\n";
  }

  // member: btn_ld_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_ld_right: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_ld_right, out);
    out << "\n";
  }

  // member: btn_rd_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_rd_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_rd_ok, out);
    out << "\n";
  }

  // member: btn_rd_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_rd_up: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_rd_up, out);
    out << "\n";
  }

  // member: btn_rd_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_rd_down: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_rd_down, out);
    out << "\n";
  }

  // member: btn_rd_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_rd_left: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_rd_left, out);
    out << "\n";
  }

  // member: btn_rd_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_rd_right: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_rd_right, out);
    out << "\n";
  }

  // member: btn_vol_inc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_vol_inc: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_vol_inc, out);
    out << "\n";
  }

  // member: btn_vol_dec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_vol_dec: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_vol_dec, out);
    out << "\n";
  }

  // member: btn_mute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_mute: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_mute, out);
    out << "\n";
  }

  // member: btn_media
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_media: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_media, out);
    out << "\n";
  }

  // member: btn_prev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_prev: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_prev, out);
    out << "\n";
  }

  // member: btn_next
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_next: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_next, out);
    out << "\n";
  }

  // member: btn_speak
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_speak: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_speak, out);
    out << "\n";
  }

  // member: btn_call_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_call_start: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_call_start, out);
    out << "\n";
  }

  // member: btn_call_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_call_end: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_call_end, out);
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

  // member: door_driver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_driver: ";
    rosidl_generator_traits::value_to_yaml(msg.door_driver, out);
    out << "\n";
  }

  // member: door_passenger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_passenger: ";
    rosidl_generator_traits::value_to_yaml(msg.door_passenger, out);
    out << "\n";
  }

  // member: door_rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_rear_left: ";
    rosidl_generator_traits::value_to_yaml(msg.door_rear_left, out);
    out << "\n";
  }

  // member: door_rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_rear_right: ";
    rosidl_generator_traits::value_to_yaml(msg.door_rear_right, out);
    out << "\n";
  }

  // member: door_hood
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_hood: ";
    rosidl_generator_traits::value_to_yaml(msg.door_hood, out);
    out << "\n";
  }

  // member: door_trunk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_trunk: ";
    rosidl_generator_traits::value_to_yaml(msg.door_trunk, out);
    out << "\n";
  }

  // member: passenger_detect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "passenger_detect: ";
    rosidl_generator_traits::value_to_yaml(msg.passenger_detect, out);
    out << "\n";
  }

  // member: passenger_airbag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "passenger_airbag: ";
    rosidl_generator_traits::value_to_yaml(msg.passenger_airbag, out);
    out << "\n";
  }

  // member: buckle_driver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buckle_driver: ";
    rosidl_generator_traits::value_to_yaml(msg.buckle_driver, out);
    out << "\n";
  }

  // member: buckle_passenger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buckle_passenger: ";
    rosidl_generator_traits::value_to_yaml(msg.buckle_passenger, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Misc1Report & msg, bool use_flow_style = false)
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
  const dbw_ford_msgs::msg::Misc1Report & msg,
  std::ostream & out, size_t indentation = 0)
{
  dbw_ford_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dbw_ford_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dbw_ford_msgs::msg::Misc1Report & msg)
{
  return dbw_ford_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dbw_ford_msgs::msg::Misc1Report>()
{
  return "dbw_ford_msgs::msg::Misc1Report";
}

template<>
inline const char * name<dbw_ford_msgs::msg::Misc1Report>()
{
  return "dbw_ford_msgs/msg/Misc1Report";
}

template<>
struct has_fixed_size<dbw_ford_msgs::msg::Misc1Report>
  : std::integral_constant<bool, has_fixed_size<dbw_ford_msgs::msg::AmbientLight>::value && has_fixed_size<dbw_ford_msgs::msg::TurnSignal>::value && has_fixed_size<dbw_ford_msgs::msg::Wiper>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<dbw_ford_msgs::msg::Misc1Report>
  : std::integral_constant<bool, has_bounded_size<dbw_ford_msgs::msg::AmbientLight>::value && has_bounded_size<dbw_ford_msgs::msg::TurnSignal>::value && has_bounded_size<dbw_ford_msgs::msg::Wiper>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<dbw_ford_msgs::msg::Misc1Report>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DBW_FORD_MSGS__MSG__DETAIL__MISC1_REPORT__TRAITS_HPP_
