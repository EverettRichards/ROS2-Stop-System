// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/GearReject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear_reject.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR_REJECT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR_REJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NONE'.
/**
  * Not rejected
 */
enum
{
  dbw_ford_msgs__msg__GearReject__NONE = 0
};

/// Constant 'SHIFT_IN_PROGRESS'.
/**
  * Shift in progress
 */
enum
{
  dbw_ford_msgs__msg__GearReject__SHIFT_IN_PROGRESS = 1
};

/// Constant 'OVERRIDE'.
/**
  * Override on brake, throttle, or steering
 */
enum
{
  dbw_ford_msgs__msg__GearReject__OVERRIDE = 2
};

/// Constant 'ROTARY_LOW'.
/**
  * Rotary shifter can't shift to Low
 */
enum
{
  dbw_ford_msgs__msg__GearReject__ROTARY_LOW = 3
};

/// Constant 'ROTARY_PARK'.
/**
  * Rotary shifter can't shift out of Park
 */
enum
{
  dbw_ford_msgs__msg__GearReject__ROTARY_PARK = 4
};

/// Constant 'VEHICLE'.
/**
  * Rejected by vehicle (try pressing the brakes)
 */
enum
{
  dbw_ford_msgs__msg__GearReject__VEHICLE = 5
};

/// Constant 'UNSUPPORTED'.
/**
  * Unsupported gear command
 */
enum
{
  dbw_ford_msgs__msg__GearReject__UNSUPPORTED = 6
};

/// Constant 'FAULT'.
/**
  * System in fault state
 */
enum
{
  dbw_ford_msgs__msg__GearReject__FAULT = 7
};

/// Struct defined in msg/GearReject in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__GearReject
{
  uint8_t value;
} dbw_ford_msgs__msg__GearReject;

// Struct for a sequence of dbw_ford_msgs__msg__GearReject.
typedef struct dbw_ford_msgs__msg__GearReject__Sequence
{
  dbw_ford_msgs__msg__GearReject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__GearReject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR_REJECT__STRUCT_H_
