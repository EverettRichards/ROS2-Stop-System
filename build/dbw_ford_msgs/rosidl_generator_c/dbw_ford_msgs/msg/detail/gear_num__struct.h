// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/GearNum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear_num.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR_NUM__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR_NUM__STRUCT_H_

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
  dbw_ford_msgs__msg__GearNum__NONE = 0
};

/// Constant 'DRIVE_D01'.
enum
{
  dbw_ford_msgs__msg__GearNum__DRIVE_D01 = 1
};

/// Constant 'DRIVE_D02'.
enum
{
  dbw_ford_msgs__msg__GearNum__DRIVE_D02 = 2
};

/// Constant 'DRIVE_D03'.
enum
{
  dbw_ford_msgs__msg__GearNum__DRIVE_D03 = 3
};

/// Constant 'DRIVE_D04'.
enum
{
  dbw_ford_msgs__msg__GearNum__DRIVE_D04 = 4
};

/// Constant 'DRIVE_D05'.
enum
{
  dbw_ford_msgs__msg__GearNum__DRIVE_D05 = 5
};

/// Constant 'DRIVE_D06'.
enum
{
  dbw_ford_msgs__msg__GearNum__DRIVE_D06 = 6
};

/// Constant 'DRIVE_D07'.
enum
{
  dbw_ford_msgs__msg__GearNum__DRIVE_D07 = 7
};

/// Constant 'DRIVE_D08'.
enum
{
  dbw_ford_msgs__msg__GearNum__DRIVE_D08 = 8
};

/// Constant 'DRIVE_D09'.
enum
{
  dbw_ford_msgs__msg__GearNum__DRIVE_D09 = 9
};

/// Constant 'DRIVE_D10'.
enum
{
  dbw_ford_msgs__msg__GearNum__DRIVE_D10 = 10
};

/// Constant 'NEUTRAL'.
enum
{
  dbw_ford_msgs__msg__GearNum__NEUTRAL = 16
};

/// Constant 'REVERSE_R01'.
enum
{
  dbw_ford_msgs__msg__GearNum__REVERSE_R01 = 17
};

/// Constant 'REVERSE_R02'.
enum
{
  dbw_ford_msgs__msg__GearNum__REVERSE_R02 = 18
};

/// Constant 'PARK'.
enum
{
  dbw_ford_msgs__msg__GearNum__PARK = 31
};

/// Struct defined in msg/GearNum in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__GearNum
{
  uint8_t num;
} dbw_ford_msgs__msg__GearNum;

// Struct for a sequence of dbw_ford_msgs__msg__GearNum.
typedef struct dbw_ford_msgs__msg__GearNum__Sequence
{
  dbw_ford_msgs__msg__GearNum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__GearNum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR_NUM__STRUCT_H_
