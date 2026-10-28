// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/ThrottleInfoReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/throttle_info_report.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_INFO_REPORT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_INFO_REPORT__STRUCT_H_

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
// Member 'throttle_pedal_qf'
#include "dbw_ford_msgs/msg/detail/quality_factor__struct.h"
// Member 'one_pedal'
#include "dbw_ford_msgs/msg/detail/one_pedal__struct.h"
// Member 'gear_num'
#include "dbw_ford_msgs/msg/detail/gear_num__struct.h"
// Member 'ignition'
#include "dbw_ford_msgs/msg/detail/ignition__struct.h"

/// Struct defined in msg/ThrottleInfoReport in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__ThrottleInfoReport
{
  std_msgs__msg__Header header;
  /// Throttle Pedal
  /// Throttle pedal percent, range 0 to 1
  float throttle_pc;
  /// Throttle pedal change per second (1/s)
  float throttle_rate;
  /// Non-zero is limp-home
  dbw_ford_msgs__msg__QualityFactor throttle_pedal_qf;
  /// One-pedal-drive mode
  dbw_ford_msgs__msg__OnePedal one_pedal;
  /// Engine
  /// Engine Speed (rpm)
  float engine_rpm;
  /// Gear Num
  /// Gear Number
  dbw_ford_msgs__msg__GearNum gear_num;
  /// Ignition status
  /// Ignition status (enum)
  dbw_ford_msgs__msg__Ignition ignition;
  /// Battery Current
  /// Battery Current (Amps)
  float batt_curr;
} dbw_ford_msgs__msg__ThrottleInfoReport;

// Struct for a sequence of dbw_ford_msgs__msg__ThrottleInfoReport.
typedef struct dbw_ford_msgs__msg__ThrottleInfoReport__Sequence
{
  dbw_ford_msgs__msg__ThrottleInfoReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__ThrottleInfoReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_INFO_REPORT__STRUCT_H_
