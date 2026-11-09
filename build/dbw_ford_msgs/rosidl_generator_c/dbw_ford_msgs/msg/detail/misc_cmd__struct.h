// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/misc_cmd.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__MISC_CMD__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__MISC_CMD__STRUCT_H_

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
#include "dbw_ford_msgs/msg/detail/turn_signal__struct.h"
// Member 'pbrk'
#include "dbw_ford_msgs/msg/detail/parking_brake_cmd__struct.h"

/// Struct defined in msg/MiscCmd in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__MiscCmd
{
  std_msgs__msg__Header header;
  /// Turn signal command enumeration
  dbw_ford_msgs__msg__TurnSignal cmd;
  /// Parking brake command enumeration
  dbw_ford_msgs__msg__ParkingBrakeCmd pbrk;
} dbw_ford_msgs__msg__MiscCmd;

// Struct for a sequence of dbw_ford_msgs__msg__MiscCmd.
typedef struct dbw_ford_msgs__msg__MiscCmd__Sequence
{
  dbw_ford_msgs__msg__MiscCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__MiscCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__MISC_CMD__STRUCT_H_
