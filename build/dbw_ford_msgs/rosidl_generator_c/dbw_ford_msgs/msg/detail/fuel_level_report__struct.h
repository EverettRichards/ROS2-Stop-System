// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/FuelLevelReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/fuel_level_report.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__FUEL_LEVEL_REPORT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__FUEL_LEVEL_REPORT__STRUCT_H_

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

/// Struct defined in msg/FuelLevelReport in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__FuelLevelReport
{
  std_msgs__msg__Header header;
  /// Fuel level (%, 0 to 100)
  float fuel_level;
  /// 12V battery voltage
  float battery_12v;
  /// Hybrid battery voltage
  float battery_hev;
  /// Odometer (km, 0.1km resolution)
  float odometer;
} dbw_ford_msgs__msg__FuelLevelReport;

// Struct for a sequence of dbw_ford_msgs__msg__FuelLevelReport.
typedef struct dbw_ford_msgs__msg__FuelLevelReport__Sequence
{
  dbw_ford_msgs__msg__FuelLevelReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__FuelLevelReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__FUEL_LEVEL_REPORT__STRUCT_H_
