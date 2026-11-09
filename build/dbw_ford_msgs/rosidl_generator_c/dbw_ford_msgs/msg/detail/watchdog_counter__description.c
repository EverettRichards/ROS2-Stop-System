// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/WatchdogCounter.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/watchdog_counter__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__WatchdogCounter__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf3, 0xff, 0xb8, 0x72, 0x7e, 0xe3, 0xa7, 0x50,
      0xf8, 0x33, 0x0c, 0x9a, 0xd1, 0x30, 0xf8, 0xc4,
      0x97, 0x74, 0x36, 0xec, 0x4b, 0x03, 0x21, 0xea,
      0x4c, 0xfc, 0xc7, 0xb2, 0x2d, 0x83, 0x31, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__WatchdogCounter__TYPE_NAME[] = "dbw_ford_msgs/msg/WatchdogCounter";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__WatchdogCounter__FIELD_NAME__source[] = "source";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__WatchdogCounter__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__WatchdogCounter__FIELD_NAME__source, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dbw_ford_msgs__msg__WatchdogCounter__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__WatchdogCounter__TYPE_NAME, 33, 33},
      {dbw_ford_msgs__msg__WatchdogCounter__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 source\n"
  "\n"
  "uint8 NONE=0               # No source for watchdog counter fault\n"
  "uint8 OTHER_BRAKE=1        # Fault determined by brake controller\n"
  "uint8 OTHER_THROTTLE=2     # Fault determined by throttle controller\n"
  "uint8 OTHER_STEERING=3     # Fault determined by steering controller\n"
  "uint8 BRAKE_COUNTER=4      # Brake command counter failed to increment\n"
  "uint8 BRAKE_DISABLED=5     # Brake transition to disabled while in gear or moving\n"
  "uint8 BRAKE_COMMAND=6      # Brake command timeout after 100ms\n"
  "uint8 BRAKE_REPORT=7       # Brake report timeout after 100ms\n"
  "uint8 THROTTLE_COUNTER=8   # Throttle command counter failed to increment\n"
  "uint8 THROTTLE_DISABLED=9  # Throttle transition to disabled while in gear or moving\n"
  "uint8 THROTTLE_COMMAND=10  # Throttle command timeout after 100ms\n"
  "uint8 THROTTLE_REPORT=11   # Throttle report timeout after 100ms\n"
  "uint8 STEERING_COUNTER=12  # Steering command counter failed to increment\n"
  "uint8 STEERING_DISABLED=13 # Steering transition to disabled while in gear or moving\n"
  "uint8 STEERING_COMMAND=14  # Steering command timeout after 100ms\n"
  "uint8 STEERING_REPORT=15   # Steering report timeout after 100ms";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__WatchdogCounter__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__WatchdogCounter__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1142, 1142},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__WatchdogCounter__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__WatchdogCounter__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
