// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/OnePedal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/one_pedal.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__ONE_PEDAL__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__ONE_PEDAL__STRUCT_H_

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
  dbw_ford_msgs__msg__OnePedal__UNKNOWN = 0
};

/// Constant 'OFF'.
enum
{
  dbw_ford_msgs__msg__OnePedal__OFF = 1
};

/// Constant 'ON'.
enum
{
  dbw_ford_msgs__msg__OnePedal__ON = 2
};

/// Constant 'FAULT'.
enum
{
  dbw_ford_msgs__msg__OnePedal__FAULT = 3
};

/// Struct defined in msg/OnePedal in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__OnePedal
{
  uint8_t value;
} dbw_ford_msgs__msg__OnePedal;

// Struct for a sequence of dbw_ford_msgs__msg__OnePedal.
typedef struct dbw_ford_msgs__msg__OnePedal__Sequence
{
  dbw_ford_msgs__msg__OnePedal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__OnePedal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__ONE_PEDAL__STRUCT_H_
