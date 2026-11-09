// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/WheelSpeedReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/wheel_speed_report.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__WHEEL_SPEED_REPORT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__WHEEL_SPEED_REPORT__STRUCT_H_

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

/// Struct defined in msg/WheelSpeedReport in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__WheelSpeedReport
{
  std_msgs__msg__Header header;
  /// Wheel speeds (rad/s)
  float front_left;
  float front_right;
  float rear_left;
  float rear_right;
} dbw_ford_msgs__msg__WheelSpeedReport;

// Struct for a sequence of dbw_ford_msgs__msg__WheelSpeedReport.
typedef struct dbw_ford_msgs__msg__WheelSpeedReport__Sequence
{
  dbw_ford_msgs__msg__WheelSpeedReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__WheelSpeedReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__WHEEL_SPEED_REPORT__STRUCT_H_
