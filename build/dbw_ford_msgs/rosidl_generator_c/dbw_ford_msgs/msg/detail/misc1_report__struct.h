// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/Misc1Report.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/misc1_report.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__MISC1_REPORT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__MISC1_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'turn_signal'
#include "dbw_ford_msgs/msg/detail/turn_signal__struct.h"
// Member 'wiper'
#include "dbw_ford_msgs/msg/detail/wiper__struct.h"
// Member 'ambient_light'
#include "dbw_ford_msgs/msg/detail/ambient_light__struct.h"

/// Struct defined in msg/Misc1Report in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__Misc1Report
{
  std_msgs__msg__Header header;
  /// Turn Signal enumeration
  dbw_ford_msgs__msg__TurnSignal turn_signal;
  /// High beams
  bool high_beam_headlights;
  /// Front Windshield Wipers enumeration
  dbw_ford_msgs__msg__Wiper wiper;
  /// Ambient Light Sensor enumeration
  dbw_ford_msgs__msg__AmbientLight ambient_light;
  /// Outside air temperature
  /// Degrees Celsius
  float outside_temperature;
  /// Buttons
  /// Cruise Control On
  bool btn_cc_on;
  /// Cruise Control Off
  bool btn_cc_off;
  /// Cruise Control On/Off Toggle
  bool btn_cc_on_off;
  /// Cruise Control Resume
  bool btn_cc_res;
  /// Cruise Control Cancel
  bool btn_cc_cncl;
  /// Cruise Control Resume/Cancel
  bool btn_cc_res_cncl;
  /// Cruise Control Resume+
  bool btn_cc_res_inc;
  /// Cruise Control Resume-
  bool btn_cc_res_dec;
  /// Cruise Control Set+
  bool btn_cc_set_inc;
  /// Cruise Control Set-
  bool btn_cc_set_dec;
  /// Cruise Control Gap+
  bool btn_cc_gap_inc;
  /// Cruise Control Gap-
  bool btn_cc_gap_dec;
  /// Lane Assist On/Off Toggle
  bool btn_la_on_off;
  /// Left D-Pad OK
  bool btn_ld_ok;
  /// Left D-Pad Up
  bool btn_ld_up;
  /// Left D-Pad Down
  bool btn_ld_down;
  /// Left D-Pad Left
  bool btn_ld_left;
  /// Left D-Pad Right
  bool btn_ld_right;
  /// Right D-Pad OK
  bool btn_rd_ok;
  /// Right D-Pad Up
  bool btn_rd_up;
  /// Right D-Pad Down
  bool btn_rd_down;
  /// Right D-Pad Left
  bool btn_rd_left;
  /// Right D-Pad Right
  bool btn_rd_right;
  /// Volume increment
  bool btn_vol_inc;
  /// Volume decrement
  bool btn_vol_dec;
  /// Volume mute
  bool btn_mute;
  /// Media (source)
  bool btn_media;
  /// Media previous
  bool btn_prev;
  /// Media next
  bool btn_next;
  /// Speak
  bool btn_speak;
  /// Call start/answer
  bool btn_call_start;
  /// Call end/disconnect
  bool btn_call_end;
  /// Faults
  bool fault_bus;
  /// Doors
  bool door_driver;
  bool door_passenger;
  bool door_rear_left;
  bool door_rear_right;
  bool door_hood;
  bool door_trunk;
  /// Passenger seat
  bool passenger_detect;
  bool passenger_airbag;
  /// Seat Belts
  bool buckle_driver;
  bool buckle_passenger;
} dbw_ford_msgs__msg__Misc1Report;

// Struct for a sequence of dbw_ford_msgs__msg__Misc1Report.
typedef struct dbw_ford_msgs__msg__Misc1Report__Sequence
{
  dbw_ford_msgs__msg__Misc1Report * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__Misc1Report__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__MISC1_REPORT__STRUCT_H_
