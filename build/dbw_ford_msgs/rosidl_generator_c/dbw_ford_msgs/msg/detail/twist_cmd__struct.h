// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/TwistCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/twist_cmd.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__TWIST_CMD__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__TWIST_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/TwistCmd in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__TwistCmd
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Twist twist;
  /// m/s^2, zero = no limit
  float accel_limit;
  /// m/s^2, zero = no limit
  float decel_limit;
} dbw_ford_msgs__msg__TwistCmd;

// Struct for a sequence of dbw_ford_msgs__msg__TwistCmd.
typedef struct dbw_ford_msgs__msg__TwistCmd__Sequence
{
  dbw_ford_msgs__msg__TwistCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__TwistCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__TWIST_CMD__STRUCT_H_
