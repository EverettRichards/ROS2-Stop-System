// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/GearCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear_cmd.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR_CMD__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR_CMD__STRUCT_H_

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
// Member 'cmd'
#include "dbw_ford_msgs/msg/detail/gear__struct.h"

/// Struct defined in msg/GearCmd in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__GearCmd
{
  std_msgs__msg__Header header;
  /// Gear command enumeration
  dbw_ford_msgs__msg__Gear cmd;
  /// Clear driver overrides
  bool clear;
} dbw_ford_msgs__msg__GearCmd;

// Struct for a sequence of dbw_ford_msgs__msg__GearCmd.
typedef struct dbw_ford_msgs__msg__GearCmd__Sequence
{
  dbw_ford_msgs__msg__GearCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__GearCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR_CMD__STRUCT_H_
