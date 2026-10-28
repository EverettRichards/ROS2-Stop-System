// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/ThrottleCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/throttle_cmd.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_CMD__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CMD_NONE'.
enum
{
  dbw_ford_msgs__msg__ThrottleCmd__CMD_NONE = 0
};

/// Constant 'CMD_PEDAL'.
/**
  * Unitless, range 0.15 to 0.80
 */
enum
{
  dbw_ford_msgs__msg__ThrottleCmd__CMD_PEDAL = 1
};

/// Constant 'CMD_PERCENT'.
/**
  * Percent of maximum throttle, range 0 to 1
 */
enum
{
  dbw_ford_msgs__msg__ThrottleCmd__CMD_PERCENT = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ThrottleCmd in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__ThrottleCmd
{
  std_msgs__msg__Header header;
  /// Throttle pedal
  /// Options defined below
  float pedal_cmd;
  uint8_t pedal_cmd_type;
  /// Enable
  bool enable;
  /// Clear driver overrides
  bool clear;
  /// Ignore driver overrides
  bool ignore;
  /// Watchdog counter (optional)
  uint8_t count;
} dbw_ford_msgs__msg__ThrottleCmd;

// Struct for a sequence of dbw_ford_msgs__msg__ThrottleCmd.
typedef struct dbw_ford_msgs__msg__ThrottleCmd__Sequence
{
  dbw_ford_msgs__msg__ThrottleCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__ThrottleCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_CMD__STRUCT_H_
