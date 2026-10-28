// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/BrakeReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/brake_report.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__BRAKE_REPORT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__BRAKE_REPORT__STRUCT_H_

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
// Member 'watchdog_counter'
#include "dbw_ford_msgs/msg/detail/watchdog_counter__struct.h"

/// Struct defined in msg/BrakeReport in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__BrakeReport
{
  std_msgs__msg__Header header;
  /// Brake pedal
  /// Unitless, range 0.15 to 0.50
  float pedal_input;
  float pedal_cmd;
  float pedal_output;
  /// Braking torque (Nm)
  float torque_input;
  float torque_cmd;
  float torque_output;
  /// Braking decel (m/s^2)
  float decel_cmd;
  float decel_output;
  /// Brake On Off (BOO)
  bool boo_cmd;
  /// Status
  /// Enabled
  bool enabled;
  /// Driver override
  bool override;
  /// Driver activity
  bool driver;
  /// Command timeout
  bool timeout;
  /// Watchdog Counter
  dbw_ford_msgs__msg__WatchdogCounter watchdog_counter;
  bool watchdog_braking;
  bool fault_wdc;
  /// Faults
  bool fault_ch1;
  bool fault_ch2;
  bool fault_power;
} dbw_ford_msgs__msg__BrakeReport;

// Struct for a sequence of dbw_ford_msgs__msg__BrakeReport.
typedef struct dbw_ford_msgs__msg__BrakeReport__Sequence
{
  dbw_ford_msgs__msg__BrakeReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__BrakeReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__BRAKE_REPORT__STRUCT_H_
