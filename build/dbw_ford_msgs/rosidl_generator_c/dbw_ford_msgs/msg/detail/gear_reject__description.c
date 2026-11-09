// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/GearReject.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/gear_reject__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__GearReject__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0x99, 0xd3, 0x9a, 0x6d, 0x6e, 0x2e, 0xe8,
      0x21, 0x73, 0x44, 0x8e, 0x2a, 0xff, 0x0b, 0xf7,
      0x22, 0x47, 0xef, 0x7a, 0x34, 0x45, 0xe5, 0x04,
      0x48, 0xdf, 0xff, 0xa3, 0xb1, 0x34, 0x12, 0xea,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__GearReject__TYPE_NAME[] = "dbw_ford_msgs/msg/GearReject";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__GearReject__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__GearReject__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__GearReject__FIELD_NAME__value, 5, 5},
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
dbw_ford_msgs__msg__GearReject__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__GearReject__TYPE_NAME, 28, 28},
      {dbw_ford_msgs__msg__GearReject__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 value\n"
  "\n"
  "uint8 NONE=0              # Not rejected\n"
  "uint8 SHIFT_IN_PROGRESS=1 # Shift in progress\n"
  "uint8 OVERRIDE=2          # Override on brake, throttle, or steering\n"
  "uint8 ROTARY_LOW=3        # Rotary shifter can't shift to Low\n"
  "uint8 ROTARY_PARK=4       # Rotary shifter can't shift out of Park\n"
  "uint8 VEHICLE=5           # Rejected by vehicle (try pressing the brakes)\n"
  "uint8 UNSUPPORTED=6       # Unsupported gear command\n"
  "uint8 FAULT=7             # System in fault state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__GearReject__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__GearReject__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 475, 475},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__GearReject__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__GearReject__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
