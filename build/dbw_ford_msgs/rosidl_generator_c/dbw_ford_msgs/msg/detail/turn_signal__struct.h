// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/turn_signal.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_

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
  dbw_ford_msgs__msg__TurnSignal__NONE = 0
};

/// Constant 'LEFT'.
enum
{
  dbw_ford_msgs__msg__TurnSignal__LEFT = 1
};

/// Constant 'RIGHT'.
enum
{
  dbw_ford_msgs__msg__TurnSignal__RIGHT = 2
};

/// Constant 'HAZARD'.
enum
{
  dbw_ford_msgs__msg__TurnSignal__HAZARD = 3
};

/// Struct defined in msg/TurnSignal in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__TurnSignal
{
  uint8_t value;
} dbw_ford_msgs__msg__TurnSignal;

// Struct for a sequence of dbw_ford_msgs__msg__TurnSignal.
typedef struct dbw_ford_msgs__msg__TurnSignal__Sequence
{
  dbw_ford_msgs__msg__TurnSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__TurnSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_
