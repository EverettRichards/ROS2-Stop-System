// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/TirePressureReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/tire_pressure_report.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__TIRE_PRESSURE_REPORT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__TIRE_PRESSURE_REPORT__STRUCT_H_

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

/// Struct defined in msg/TirePressureReport in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__TirePressureReport
{
  std_msgs__msg__Header header;
  /// Tire pressures (kPa)
  float front_left;
  float front_right;
  float rear_left;
  float rear_right;
} dbw_ford_msgs__msg__TirePressureReport;

// Struct for a sequence of dbw_ford_msgs__msg__TirePressureReport.
typedef struct dbw_ford_msgs__msg__TirePressureReport__Sequence
{
  dbw_ford_msgs__msg__TirePressureReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__TirePressureReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__TIRE_PRESSURE_REPORT__STRUCT_H_
