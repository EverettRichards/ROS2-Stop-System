// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/Wiper.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/wiper__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__Wiper__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0x59, 0x91, 0xe1, 0xaa, 0xf8, 0x69, 0x5a,
      0x9c, 0x7a, 0x5c, 0x88, 0x12, 0x8b, 0xe9, 0x02,
      0xbc, 0x60, 0x16, 0x76, 0x74, 0x2a, 0xb4, 0x93,
      0xf8, 0x0e, 0x52, 0x89, 0x6b, 0x14, 0xde, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__Wiper__TYPE_NAME[] = "dbw_ford_msgs/msg/Wiper";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__Wiper__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__Wiper__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__Wiper__FIELD_NAME__status, 6, 6},
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
dbw_ford_msgs__msg__Wiper__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__Wiper__TYPE_NAME, 23, 23},
      {dbw_ford_msgs__msg__Wiper__FIELDS, 1, 1},
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
  "uint8 OFF=0\n"
  "uint8 AUTO_OFF=1\n"
  "uint8 OFF_MOVING=2\n"
  "uint8 MANUAL_OFF=3\n"
  "uint8 MANUAL_ON=4\n"
  "uint8 MANUAL_LOW=5\n"
  "uint8 MANUAL_HIGH=6\n"
  "uint8 MIST_FLICK=7\n"
  "uint8 WASH=8\n"
  "uint8 AUTO_LOW=9\n"
  "uint8 AUTO_HIGH=10\n"
  "uint8 COURTESYWIPE=11\n"
  "uint8 AUTO_ADJUST=12\n"
  "uint8 RESERVED=13\n"
  "uint8 STALLED=14\n"
  "uint8 NO_DATA=15";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__Wiper__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__Wiper__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 301, 301},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__Wiper__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__Wiper__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
