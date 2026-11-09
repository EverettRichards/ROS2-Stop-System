// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/ParkingBrake.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/parking_brake.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'OFF'.
enum
{
  dbw_ford_msgs__msg__ParkingBrake__OFF = 0
};

/// Constant 'TRANS'.
enum
{
  dbw_ford_msgs__msg__ParkingBrake__TRANS = 1
};

/// Constant 'ON'.
enum
{
  dbw_ford_msgs__msg__ParkingBrake__ON = 2
};

/// Constant 'FAULT'.
enum
{
  dbw_ford_msgs__msg__ParkingBrake__FAULT = 3
};

/// Struct defined in msg/ParkingBrake in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__ParkingBrake
{
  uint8_t status;
} dbw_ford_msgs__msg__ParkingBrake;

// Struct for a sequence of dbw_ford_msgs__msg__ParkingBrake.
typedef struct dbw_ford_msgs__msg__ParkingBrake__Sequence
{
  dbw_ford_msgs__msg__ParkingBrake * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__ParkingBrake__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE__STRUCT_H_
