// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/DriverAssistReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/driver_assist_report.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'DECEL_NONE'.
enum
{
  dbw_ford_msgs__msg__DriverAssistReport__DECEL_NONE = 0
};

/// Constant 'DECEL_AEB'.
enum
{
  dbw_ford_msgs__msg__DriverAssistReport__DECEL_AEB = 1
};

/// Constant 'DECEL_ACC'.
enum
{
  dbw_ford_msgs__msg__DriverAssistReport__DECEL_ACC = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/DriverAssistReport in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__DriverAssistReport
{
  std_msgs__msg__Header header;
  /// Vehicle Decceleration (m/s^2)
  float decel;
  /// Deceleration source
  uint8_t decel_src;
  /// FCW Status
  bool fcw_enabled;
  bool fcw_active;
  /// AEB Status
  bool aeb_enabled;
  bool aeb_precharge;
  bool aeb_braking;
  /// ACC Status
  bool acc_enabled;
  bool acc_braking;
} dbw_ford_msgs__msg__DriverAssistReport;

// Struct for a sequence of dbw_ford_msgs__msg__DriverAssistReport.
typedef struct dbw_ford_msgs__msg__DriverAssistReport__Sequence
{
  dbw_ford_msgs__msg__DriverAssistReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__DriverAssistReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__STRUCT_H_
