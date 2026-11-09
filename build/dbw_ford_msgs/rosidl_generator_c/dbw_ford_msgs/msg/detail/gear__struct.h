// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/Gear.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR__STRUCT_H_

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
  dbw_ford_msgs__msg__Gear__NONE = 0
};

/// Constant 'PARK'.
enum
{
  dbw_ford_msgs__msg__Gear__PARK = 1
};

/// Constant 'REVERSE'.
enum
{
  dbw_ford_msgs__msg__Gear__REVERSE = 2
};

/// Constant 'NEUTRAL'.
enum
{
  dbw_ford_msgs__msg__Gear__NEUTRAL = 3
};

/// Constant 'DRIVE'.
enum
{
  dbw_ford_msgs__msg__Gear__DRIVE = 4
};

/// Constant 'LOW'.
enum
{
  dbw_ford_msgs__msg__Gear__LOW = 5
};

/// Struct defined in msg/Gear in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__Gear
{
  uint8_t gear;
} dbw_ford_msgs__msg__Gear;

// Struct for a sequence of dbw_ford_msgs__msg__Gear.
typedef struct dbw_ford_msgs__msg__Gear__Sequence
{
  dbw_ford_msgs__msg__Gear * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__Gear__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR__STRUCT_H_
