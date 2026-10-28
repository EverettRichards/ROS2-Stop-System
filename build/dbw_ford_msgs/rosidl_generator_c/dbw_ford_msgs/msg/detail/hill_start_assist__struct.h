// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/HillStartAssist.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/hill_start_assist.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__HILL_START_ASSIST__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__HILL_START_ASSIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STAT_INACTIVE'.
enum
{
  dbw_ford_msgs__msg__HillStartAssist__STAT_INACTIVE = 0
};

/// Constant 'STAT_FINDING_GRADIENT'.
enum
{
  dbw_ford_msgs__msg__HillStartAssist__STAT_FINDING_GRADIENT = 1
};

/// Constant 'STAT_ACTIVE_PRESSED'.
enum
{
  dbw_ford_msgs__msg__HillStartAssist__STAT_ACTIVE_PRESSED = 2
};

/// Constant 'STAT_ACTIVE_RELEASED'.
enum
{
  dbw_ford_msgs__msg__HillStartAssist__STAT_ACTIVE_RELEASED = 3
};

/// Constant 'STAT_FAST_RELEASE'.
enum
{
  dbw_ford_msgs__msg__HillStartAssist__STAT_FAST_RELEASE = 4
};

/// Constant 'STAT_SLOW_RELEASE'.
enum
{
  dbw_ford_msgs__msg__HillStartAssist__STAT_SLOW_RELEASE = 5
};

/// Constant 'STAT_FAILED'.
enum
{
  dbw_ford_msgs__msg__HillStartAssist__STAT_FAILED = 6
};

/// Constant 'STAT_UNDEFINED'.
enum
{
  dbw_ford_msgs__msg__HillStartAssist__STAT_UNDEFINED = 7
};

/// Constant 'MODE_OFF'.
enum
{
  dbw_ford_msgs__msg__HillStartAssist__MODE_OFF = 0
};

/// Constant 'MODE_AUTO'.
enum
{
  dbw_ford_msgs__msg__HillStartAssist__MODE_AUTO = 1
};

/// Constant 'MODE_MANUAL'.
enum
{
  dbw_ford_msgs__msg__HillStartAssist__MODE_MANUAL = 2
};

/// Constant 'MODE_UNDEFINED'.
enum
{
  dbw_ford_msgs__msg__HillStartAssist__MODE_UNDEFINED = 3
};

/// Struct defined in msg/HillStartAssist in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__HillStartAssist
{
  uint8_t status;
  uint8_t mode;
} dbw_ford_msgs__msg__HillStartAssist;

// Struct for a sequence of dbw_ford_msgs__msg__HillStartAssist.
typedef struct dbw_ford_msgs__msg__HillStartAssist__Sequence
{
  dbw_ford_msgs__msg__HillStartAssist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__HillStartAssist__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__HILL_START_ASSIST__STRUCT_H_
