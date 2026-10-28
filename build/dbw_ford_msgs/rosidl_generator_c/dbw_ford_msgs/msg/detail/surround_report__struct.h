// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/surround_report.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__SURROUND_REPORT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__SURROUND_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'FRONT_LEFT_SIDE'.
/**
  * Sonar index enumeration
 */
enum
{
  dbw_ford_msgs__msg__SurroundReport__FRONT_LEFT_SIDE = 0
};

/// Constant 'FRONT_LEFT_CORNER'.
enum
{
  dbw_ford_msgs__msg__SurroundReport__FRONT_LEFT_CORNER = 1
};

/// Constant 'FRONT_LEFT_CENTER'.
enum
{
  dbw_ford_msgs__msg__SurroundReport__FRONT_LEFT_CENTER = 2
};

/// Constant 'FRONT_RIGHT_CENTER'.
enum
{
  dbw_ford_msgs__msg__SurroundReport__FRONT_RIGHT_CENTER = 3
};

/// Constant 'FRONT_RIGHT_CORNER'.
enum
{
  dbw_ford_msgs__msg__SurroundReport__FRONT_RIGHT_CORNER = 4
};

/// Constant 'FRONT_RIGHT_SIDE'.
enum
{
  dbw_ford_msgs__msg__SurroundReport__FRONT_RIGHT_SIDE = 5
};

/// Constant 'REAR_LEFT_SIDE'.
enum
{
  dbw_ford_msgs__msg__SurroundReport__REAR_LEFT_SIDE = 6
};

/// Constant 'REAR_LEFT_CORNER'.
enum
{
  dbw_ford_msgs__msg__SurroundReport__REAR_LEFT_CORNER = 7
};

/// Constant 'REAR_LEFT_CENTER'.
enum
{
  dbw_ford_msgs__msg__SurroundReport__REAR_LEFT_CENTER = 8
};

/// Constant 'REAR_RIGHT_CENTER'.
enum
{
  dbw_ford_msgs__msg__SurroundReport__REAR_RIGHT_CENTER = 9
};

/// Constant 'REAR_RIGHT_CORNER'.
enum
{
  dbw_ford_msgs__msg__SurroundReport__REAR_RIGHT_CORNER = 10
};

/// Constant 'REAR_RIGHT_SIDE'.
enum
{
  dbw_ford_msgs__msg__SurroundReport__REAR_RIGHT_SIDE = 11
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/SurroundReport in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__SurroundReport
{
  std_msgs__msg__Header header;
  /// Cross Traffic Alert (CTA)
  bool cta_left_alert;
  bool cta_right_alert;
  bool cta_left_enabled;
  bool cta_right_enabled;
  /// Blind Spot Information System (BLIS)
  bool blis_left_alert;
  bool blis_right_alert;
  bool blis_left_enabled;
  bool blis_right_enabled;
  /// Sonar Sensors
  bool sonar_enabled;
  bool sonar_fault;
  /// Sonar ranges in meters, zero is no-detection
  float sonar[12];
} dbw_ford_msgs__msg__SurroundReport;

// Struct for a sequence of dbw_ford_msgs__msg__SurroundReport.
typedef struct dbw_ford_msgs__msg__SurroundReport__Sequence
{
  dbw_ford_msgs__msg__SurroundReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__SurroundReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__SURROUND_REPORT__STRUCT_H_
