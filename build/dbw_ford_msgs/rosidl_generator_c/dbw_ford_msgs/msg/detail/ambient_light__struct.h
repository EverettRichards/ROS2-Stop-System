// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/AmbientLight.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/ambient_light.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__AMBIENT_LIGHT__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__AMBIENT_LIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'DARK'.
enum
{
  dbw_ford_msgs__msg__AmbientLight__DARK = 0
};

/// Constant 'LIGHT'.
enum
{
  dbw_ford_msgs__msg__AmbientLight__LIGHT = 1
};

/// Constant 'TWILIGHT'.
enum
{
  dbw_ford_msgs__msg__AmbientLight__TWILIGHT = 2
};

/// Constant 'TUNNEL_ON'.
enum
{
  dbw_ford_msgs__msg__AmbientLight__TUNNEL_ON = 3
};

/// Constant 'TUNNEL_OFF'.
enum
{
  dbw_ford_msgs__msg__AmbientLight__TUNNEL_OFF = 4
};

/// Constant 'NO_DATA'.
enum
{
  dbw_ford_msgs__msg__AmbientLight__NO_DATA = 7
};

/// Struct defined in msg/AmbientLight in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__AmbientLight
{
  uint8_t status;
} dbw_ford_msgs__msg__AmbientLight;

// Struct for a sequence of dbw_ford_msgs__msg__AmbientLight.
typedef struct dbw_ford_msgs__msg__AmbientLight__Sequence
{
  dbw_ford_msgs__msg__AmbientLight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__AmbientLight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__AMBIENT_LIGHT__STRUCT_H_
