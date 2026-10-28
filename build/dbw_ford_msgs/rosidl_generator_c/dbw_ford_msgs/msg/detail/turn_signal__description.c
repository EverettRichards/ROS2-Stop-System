// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/turn_signal__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__TurnSignal__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0xc5, 0x0a, 0xfe, 0x9f, 0x36, 0x04, 0xf2,
      0x0c, 0xdf, 0x48, 0x5b, 0x35, 0x3b, 0x24, 0xc5,
      0x10, 0x0d, 0x1c, 0xbb, 0x73, 0xe0, 0x8e, 0xa9,
      0x8a, 0x1a, 0xd8, 0xe3, 0x74, 0x11, 0x7b, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__TurnSignal__TYPE_NAME[] = "dbw_ford_msgs/msg/TurnSignal";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__TurnSignal__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__TurnSignal__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__TurnSignal__FIELD_NAME__value, 5, 5},
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
dbw_ford_msgs__msg__TurnSignal__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__TurnSignal__TYPE_NAME, 28, 28},
      {dbw_ford_msgs__msg__TurnSignal__FIELDS, 1, 1},
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
  "uint8 NONE=0\n"
  "uint8 LEFT=1\n"
  "uint8 RIGHT=2\n"
  "uint8 HAZARD=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__TurnSignal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__TurnSignal__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 68, 68},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__TurnSignal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__TurnSignal__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
