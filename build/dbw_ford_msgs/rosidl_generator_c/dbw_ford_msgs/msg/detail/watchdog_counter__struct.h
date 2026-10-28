// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dbw_ford_msgs:msg/WatchdogCounter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/watchdog_counter.h"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__WATCHDOG_COUNTER__STRUCT_H_
#define DBW_FORD_MSGS__MSG__DETAIL__WATCHDOG_COUNTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NONE'.
/**
  * No source for watchdog counter fault
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__NONE = 0
};

/// Constant 'OTHER_BRAKE'.
/**
  * Fault determined by brake controller
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__OTHER_BRAKE = 1
};

/// Constant 'OTHER_THROTTLE'.
/**
  * Fault determined by throttle controller
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__OTHER_THROTTLE = 2
};

/// Constant 'OTHER_STEERING'.
/**
  * Fault determined by steering controller
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__OTHER_STEERING = 3
};

/// Constant 'BRAKE_COUNTER'.
/**
  * Brake command counter failed to increment
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__BRAKE_COUNTER = 4
};

/// Constant 'BRAKE_DISABLED'.
/**
  * Brake transition to disabled while in gear or moving
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__BRAKE_DISABLED = 5
};

/// Constant 'BRAKE_COMMAND'.
/**
  * Brake command timeout after 100ms
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__BRAKE_COMMAND = 6
};

/// Constant 'BRAKE_REPORT'.
/**
  * Brake report timeout after 100ms
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__BRAKE_REPORT = 7
};

/// Constant 'THROTTLE_COUNTER'.
/**
  * Throttle command counter failed to increment
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__THROTTLE_COUNTER = 8
};

/// Constant 'THROTTLE_DISABLED'.
/**
  * Throttle transition to disabled while in gear or moving
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__THROTTLE_DISABLED = 9
};

/// Constant 'THROTTLE_COMMAND'.
/**
  * Throttle command timeout after 100ms
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__THROTTLE_COMMAND = 10
};

/// Constant 'THROTTLE_REPORT'.
/**
  * Throttle report timeout after 100ms
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__THROTTLE_REPORT = 11
};

/// Constant 'STEERING_COUNTER'.
/**
  * Steering command counter failed to increment
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__STEERING_COUNTER = 12
};

/// Constant 'STEERING_DISABLED'.
/**
  * Steering transition to disabled while in gear or moving
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__STEERING_DISABLED = 13
};

/// Constant 'STEERING_COMMAND'.
/**
  * Steering command timeout after 100ms
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__STEERING_COMMAND = 14
};

/// Constant 'STEERING_REPORT'.
/**
  * Steering report timeout after 100ms
 */
enum
{
  dbw_ford_msgs__msg__WatchdogCounter__STEERING_REPORT = 15
};

/// Struct defined in msg/WatchdogCounter in the package dbw_ford_msgs.
typedef struct dbw_ford_msgs__msg__WatchdogCounter
{
  uint8_t source;
} dbw_ford_msgs__msg__WatchdogCounter;

// Struct for a sequence of dbw_ford_msgs__msg__WatchdogCounter.
typedef struct dbw_ford_msgs__msg__WatchdogCounter__Sequence
{
  dbw_ford_msgs__msg__WatchdogCounter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dbw_ford_msgs__msg__WatchdogCounter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__WATCHDOG_COUNTER__STRUCT_H_
