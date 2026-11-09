// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/ParkingBrakeCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/parking_brake_cmd.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE_CMD__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NONE'.
enum
{
  dbw_ford_msgs__msg__ParkingBrakeCmd__NONE = 0
};

/// Constant 'ON'.
enum
{
  dbw_ford_msgs__msg__ParkingBrakeCmd__ON = 1
};

/// Constant 'OFF'.
/**
  * Not implemented
 */
enum
{
  dbw_ford_msgs__msg__ParkingBrakeCmd__OFF = 2
};

/// Struct defined in msg/ParkingBrakeCmd in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__ParkingBrakeCmd
{
  uint8_t cmd;
} dbw_ford_msgs__msg__ParkingBrakeCmd;

// Struct for a sequence of dbw_ford_msgs__msg__ParkingBrakeCmd.
typedef struct dbw_ford_msgs__msg__ParkingBrakeCmd__Sequence
{
  dbw_ford_msgs__msg__ParkingBrakeCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__ParkingBrakeCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE_CMD__STRUCT_H_
