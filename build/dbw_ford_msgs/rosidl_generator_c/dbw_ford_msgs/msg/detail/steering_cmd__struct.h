// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/SteeringCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/steering_cmd.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CMD_ANGLE'.
/**
  * Command types
 */
enum
{
  dbw_ford_msgs__msg__SteeringCmd__CMD_ANGLE = 0
};

/// Constant 'CMD_TORQUE'.
enum
{
  dbw_ford_msgs__msg__SteeringCmd__CMD_TORQUE = 1
};

/// Constant 'ANGLE_MAX'.
/**
  * Maximum values
  * rad, maximum angle
 */
static const float dbw_ford_msgs__msg__SteeringCmd__ANGLE_MAX = 9.6f;

/// Constant 'VELOCITY_MAX'.
/**
  * rad/s, maximum velocity
 */
static const float dbw_ford_msgs__msg__SteeringCmd__VELOCITY_MAX = 17.5f;

/// Constant 'TORQUE_MAX'.
/**
  * Nm, maximum torque
 */
static const float dbw_ford_msgs__msg__SteeringCmd__TORQUE_MAX = 8.0f;

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/SteeringCmd in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__SteeringCmd
{
  std_msgs__msg__Header header;
  /// Steering Wheel
  /// rad, range -9.6 to 9.6
  float steering_wheel_angle_cmd;
  /// rad/s, range 0 to 17.5, 0 = default
  float steering_wheel_angle_velocity;
  /// Nm, range -8.0 to 8.0
  float steering_wheel_torque_cmd;
  uint8_t cmd_type;
  /// Enable
  bool enable;
  /// Clear driver overrides
  bool clear;
  /// Ignore driver overrides
  bool ignore;
  /// Disable or activate the driver override audible warning
  bool quiet;
  bool alert;
  /// Watchdog counter (optional)
  uint8_t count;
} dbw_ford_msgs__msg__SteeringCmd;

// Struct for a sequence of dbw_ford_msgs__msg__SteeringCmd.
typedef struct dbw_ford_msgs__msg__SteeringCmd__Sequence
{
  dbw_ford_msgs__msg__SteeringCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__SteeringCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_H_
