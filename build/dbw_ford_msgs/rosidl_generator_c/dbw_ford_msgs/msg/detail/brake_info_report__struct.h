// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/BrakeInfoReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/brake_info_report.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__BRAKE_INFO_REPORT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__BRAKE_INFO_REPORT__STRUCT_H_

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
// Member 'brake_pedal_qf'
#include "dbw_ford_msgs/msg/detail/quality_factor__struct.h"
// Member 'hsa'
#include "dbw_ford_msgs/msg/detail/hill_start_assist__struct.h"
// Member 'parking_brake'
#include "dbw_ford_msgs/msg/detail/parking_brake__struct.h"

/// Struct defined in msg/BrakeInfoReport in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__BrakeInfoReport
{
  std_msgs__msg__Header header;
  /// Wheel torques (Nm)
  float brake_torque_request;
  float brake_torque_actual;
  float wheel_torque_actual;
  /// Vehicle Acceleration (m/s^2)
  float accel_over_ground;
  /// Brake Pedal
  dbw_ford_msgs__msg__QualityFactor brake_pedal_qf;
  /// Hill Start Assist
  dbw_ford_msgs__msg__HillStartAssist hsa;
  /// Anti-lock Brakes
  bool abs_active;
  bool abs_enabled;
  /// Stability Control
  bool stab_active;
  bool stab_enabled;
  /// Traction Control
  bool trac_active;
  bool trac_enabled;
  /// Parking Brake
  dbw_ford_msgs__msg__ParkingBrake parking_brake;
  /// Misc
  bool stationary;
} dbw_ford_msgs__msg__BrakeInfoReport;

// Struct for a sequence of dbw_ford_msgs__msg__BrakeInfoReport.
typedef struct dbw_ford_msgs__msg__BrakeInfoReport__Sequence
{
  dbw_ford_msgs__msg__BrakeInfoReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__BrakeInfoReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__BRAKE_INFO_REPORT__STRUCT_H_
