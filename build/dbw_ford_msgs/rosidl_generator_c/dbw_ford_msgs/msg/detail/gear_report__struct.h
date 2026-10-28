// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear_report.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR_REPORT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR_REPORT__STRUCT_H_

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
// Member 'state'
// Member 'cmd'
#include "dbw_ford_msgs/msg/detail/gear__struct.h"
// Member 'reject'
#include "dbw_ford_msgs/msg/detail/gear_reject__struct.h"

/// Struct defined in msg/GearReport in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__GearReport
{
  std_msgs__msg__Header header;
  /// Current gear enumeration
  dbw_ford_msgs__msg__Gear state;
  /// Gear command enumeration
  dbw_ford_msgs__msg__Gear cmd;
  /// Gear reject enumeration
  dbw_ford_msgs__msg__GearReject reject;
  /// Status
  bool ready;
  bool override;
  /// Faults
  bool fault_bus;
} dbw_ford_msgs__msg__GearReport;

// Struct for a sequence of dbw_ford_msgs__msg__GearReport.
typedef struct dbw_ford_msgs__msg__GearReport__Sequence
{
  dbw_ford_msgs__msg__GearReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__GearReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR_REPORT__STRUCT_H_
