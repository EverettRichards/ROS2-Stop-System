// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/BrakeCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/brake_cmd.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__BRAKE_CMD__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__BRAKE_CMD__STRUCT_H_

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
  dbw_ford_msgs__msg__BrakeCmd__CMD_NONE = 0
};

/// Constant 'CMD_PEDAL'.
/**
  * Unitless, range 0.15 to 0.50
 */
enum
{
  dbw_ford_msgs__msg__BrakeCmd__CMD_PEDAL = 1
};

/// Constant 'CMD_PERCENT'.
/**
  * Percent of maximum torque, range 0 to 1
 */
enum
{
  dbw_ford_msgs__msg__BrakeCmd__CMD_PERCENT = 2
};

/// Constant 'CMD_TORQUE'.
/**
  * Nm, range 0 to 3412, open-loop
 */
enum
{
  dbw_ford_msgs__msg__BrakeCmd__CMD_TORQUE = 3
};

/// Constant 'CMD_TORQUE_RQ'.
/**
  * Nm, range 0 to 3412, closed-loop
 */
enum
{
  dbw_ford_msgs__msg__BrakeCmd__CMD_TORQUE_RQ = 4
};

/// Constant 'CMD_DECEL'.
/**
  * m/s^2, range 0 to 10
 */
enum
{
  dbw_ford_msgs__msg__BrakeCmd__CMD_DECEL = 6
};

/// Constant 'TORQUE_BOO'.
/**
  * Nm, brake lights threshold
 */
static const float dbw_ford_msgs__msg__BrakeCmd__TORQUE_BOO = 520.0f;

/// Constant 'TORQUE_MAX'.
/**
  * Nm, maximum torque
 */
static const float dbw_ford_msgs__msg__BrakeCmd__TORQUE_MAX = 3412.0f;

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/BrakeCmd in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__BrakeCmd
{
  std_msgs__msg__Header header;
  /// Brake pedal
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
} dbw_ford_msgs__msg__BrakeCmd;

// Struct for a sequence of dbw_ford_msgs__msg__BrakeCmd.
typedef struct dbw_ford_msgs__msg__BrakeCmd__Sequence
{
  dbw_ford_msgs__msg__BrakeCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__BrakeCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__BRAKE_CMD__STRUCT_H_
