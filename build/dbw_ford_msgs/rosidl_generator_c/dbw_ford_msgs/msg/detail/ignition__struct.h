// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/Ignition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/ignition.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__IGNITION__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__IGNITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  dbw_ford_msgs__msg__Ignition__UNKNOWN = 0
};

/// Constant 'OFF'.
enum
{
  dbw_ford_msgs__msg__Ignition__OFF = 1
};

/// Constant 'ACCESSORY'.
enum
{
  dbw_ford_msgs__msg__Ignition__ACCESSORY = 2
};

/// Constant 'RUN'.
enum
{
  dbw_ford_msgs__msg__Ignition__RUN = 3
};

/// Struct defined in msg/Ignition in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__Ignition
{
  uint8_t value;
} dbw_ford_msgs__msg__Ignition;

// Struct for a sequence of dbw_ford_msgs__msg__Ignition.
typedef struct dbw_ford_msgs__msg__Ignition__Sequence
{
  dbw_ford_msgs__msg__Ignition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__Ignition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__IGNITION__STRUCT_H_
