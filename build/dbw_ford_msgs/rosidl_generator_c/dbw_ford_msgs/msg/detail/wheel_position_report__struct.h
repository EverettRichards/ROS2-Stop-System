// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/WheelPositionReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/wheel_position_report.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__WHEEL_POSITION_REPORT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__WHEEL_POSITION_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'COUNTS_PER_REV'.
/**
  * Conversion factor
 */
static const float dbw_ford_msgs__msg__WheelPositionReport__COUNTS_PER_REV = 125.5f;

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/WheelPositionReport in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__WheelPositionReport
{
  std_msgs__msg__Header header;
  /// Wheel positions (counts)
  int16_t front_left;
  int16_t front_right;
  int16_t rear_left;
  int16_t rear_right;
} dbw_ford_msgs__msg__WheelPositionReport;

// Struct for a sequence of dbw_ford_msgs__msg__WheelPositionReport.
typedef struct dbw_ford_msgs__msg__WheelPositionReport__Sequence
{
  dbw_ford_msgs__msg__WheelPositionReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__WheelPositionReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__WHEEL_POSITION_REPORT__STRUCT_H_
