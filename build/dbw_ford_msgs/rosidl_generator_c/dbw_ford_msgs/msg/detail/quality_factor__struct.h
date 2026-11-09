// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/QualityFactor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/quality_factor.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__QUALITY_FACTOR__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__QUALITY_FACTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'OK'.
enum
{
  dbw_ford_msgs__msg__QualityFactor__OK = 0
};

/// Constant 'EMPTY'.
enum
{
  dbw_ford_msgs__msg__QualityFactor__EMPTY = 1
};

/// Constant 'CORRUPT'.
enum
{
  dbw_ford_msgs__msg__QualityFactor__CORRUPT = 2
};

/// Constant 'FAULT'.
enum
{
  dbw_ford_msgs__msg__QualityFactor__FAULT = 3
};

/// Struct defined in msg/QualityFactor in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__QualityFactor
{
  uint8_t value;
} dbw_ford_msgs__msg__QualityFactor;

// Struct for a sequence of dbw_ford_msgs__msg__QualityFactor.
typedef struct dbw_ford_msgs__msg__QualityFactor__Sequence
{
  dbw_ford_msgs__msg__QualityFactor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__QualityFactor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__QUALITY_FACTOR__STRUCT_H_
