// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/Wiper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/wiper.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__WIPER__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__WIPER__STRUCT_H_

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
  dbw_ford_msgs__msg__Wiper__OFF = 0
};

/// Constant 'AUTO_OFF'.
enum
{
  dbw_ford_msgs__msg__Wiper__AUTO_OFF = 1
};

/// Constant 'OFF_MOVING'.
enum
{
  dbw_ford_msgs__msg__Wiper__OFF_MOVING = 2
};

/// Constant 'MANUAL_OFF'.
enum
{
  dbw_ford_msgs__msg__Wiper__MANUAL_OFF = 3
};

/// Constant 'MANUAL_ON'.
enum
{
  dbw_ford_msgs__msg__Wiper__MANUAL_ON = 4
};

/// Constant 'MANUAL_LOW'.
enum
{
  dbw_ford_msgs__msg__Wiper__MANUAL_LOW = 5
};

/// Constant 'MANUAL_HIGH'.
enum
{
  dbw_ford_msgs__msg__Wiper__MANUAL_HIGH = 6
};

/// Constant 'MIST_FLICK'.
enum
{
  dbw_ford_msgs__msg__Wiper__MIST_FLICK = 7
};

/// Constant 'WASH'.
enum
{
  dbw_ford_msgs__msg__Wiper__WASH = 8
};

/// Constant 'AUTO_LOW'.
enum
{
  dbw_ford_msgs__msg__Wiper__AUTO_LOW = 9
};

/// Constant 'AUTO_HIGH'.
enum
{
  dbw_ford_msgs__msg__Wiper__AUTO_HIGH = 10
};

/// Constant 'COURTESYWIPE'.
enum
{
  dbw_ford_msgs__msg__Wiper__COURTESYWIPE = 11
};

/// Constant 'AUTO_ADJUST'.
enum
{
  dbw_ford_msgs__msg__Wiper__AUTO_ADJUST = 12
};

/// Constant 'RESERVED'.
enum
{
  dbw_ford_msgs__msg__Wiper__RESERVED = 13
};

/// Constant 'STALLED'.
enum
{
  dbw_ford_msgs__msg__Wiper__STALLED = 14
};

/// Constant 'NO_DATA'.
enum
{
  dbw_ford_msgs__msg__Wiper__NO_DATA = 15
};

/// Struct defined in msg/Wiper in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__Wiper
{
  uint8_t status;
} dbw_ford_msgs__msg__Wiper;

// Struct for a sequence of dbw_ford_msgs__msg__Wiper.
typedef struct dbw_ford_msgs__msg__Wiper__Sequence
{
  dbw_ford_msgs__msg__Wiper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__Wiper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__WIPER__STRUCT_H_
