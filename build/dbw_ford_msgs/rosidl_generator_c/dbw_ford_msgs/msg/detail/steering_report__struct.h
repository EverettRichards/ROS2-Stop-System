// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/SteeringReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/steering_report.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__STEERING_REPORT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__STEERING_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CMD_ANGLE'.
/**
  * Command types
 */
enum
{
  dbw_ford_msgs__msg__SteeringReport__CMD_ANGLE = 0
};

/// Constant 'CMD_TORQUE'.
enum
{
  dbw_ford_msgs__msg__SteeringReport__CMD_TORQUE = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/SteeringReport in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__SteeringReport
{
  std_msgs__msg__Header header;
  /// Steering Wheel
  /// rad
  float steering_wheel_angle;
  /// rad or Nm
  float steering_wheel_cmd;
  /// Nm
  float steering_wheel_torque;
  uint8_t steering_wheel_cmd_type;
  /// Vehicle Speed
  /// m/s
  float speed;
  /// Status
  /// Enabled
  bool enabled;
  /// Driver override
  bool override;
  /// Command timeout
  bool timeout;
  /// Watchdog Counter
  bool fault_wdc;
  /// Faults
  bool fault_bus1;
  bool fault_bus2;
  bool fault_calibration;
  bool fault_power;
} dbw_ford_msgs__msg__SteeringReport;

// Struct for a sequence of dbw_ford_msgs__msg__SteeringReport.
typedef struct dbw_ford_msgs__msg__SteeringReport__Sequence
{
  dbw_ford_msgs__msg__SteeringReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__SteeringReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__STEERING_REPORT__STRUCT_H_
