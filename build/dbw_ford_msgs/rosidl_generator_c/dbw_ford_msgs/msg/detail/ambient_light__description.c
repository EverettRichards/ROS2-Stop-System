// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/AmbientLight.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/ambient_light__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__AmbientLight__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xde, 0x8d, 0x05, 0xb9, 0xab, 0xb1, 0xc2, 0xfb,
      0x29, 0xf7, 0x48, 0x18, 0x43, 0x58, 0x9a, 0x49,
      0xfa, 0xa8, 0xbd, 0x46, 0xcd, 0x69, 0xec, 0x8d,
      0x87, 0x15, 0x30, 0x91, 0x2b, 0x69, 0x62, 0x7a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__AmbientLight__TYPE_NAME[] = "dbw_ford_msgs/msg/AmbientLight";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__AmbientLight__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__AmbientLight__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__AmbientLight__FIELD_NAME__status, 6, 6},
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
dbw_ford_msgs__msg__AmbientLight__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__AmbientLight__TYPE_NAME, 30, 30},
      {dbw_ford_msgs__msg__AmbientLight__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 status\n"
  "\n"
  "uint8 DARK=0\n"
  "uint8 LIGHT=1\n"
  "uint8 TWILIGHT=2\n"
  "uint8 TUNNEL_ON=3\n"
  "uint8 TUNNEL_OFF=4\n"
  "uint8 NO_DATA=7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__AmbientLight__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__AmbientLight__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 111, 111},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__AmbientLight__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__AmbientLight__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
