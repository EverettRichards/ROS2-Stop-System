// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/Gear.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/gear__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__Gear__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0x40, 0x67, 0xd6, 0x97, 0xc9, 0xd5, 0x84,
      0xcb, 0xa1, 0xa6, 0xf2, 0x6a, 0xc9, 0x06, 0x11,
      0xbc, 0x8a, 0x14, 0x10, 0x73, 0xc3, 0x00, 0xdb,
      0xb6, 0xe1, 0xb7, 0x5a, 0xfd, 0x2d, 0xa5, 0x9a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__Gear__TYPE_NAME[] = "dbw_ford_msgs/msg/Gear";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__Gear__FIELD_NAME__gear[] = "gear";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__Gear__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__Gear__FIELD_NAME__gear, 4, 4},
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
dbw_ford_msgs__msg__Gear__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__Gear__TYPE_NAME, 22, 22},
      {dbw_ford_msgs__msg__Gear__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 gear\n"
  "\n"
  "uint8 NONE=0\n"
  "uint8 PARK=1\n"
  "uint8 REVERSE=2\n"
  "uint8 NEUTRAL=3\n"
  "uint8 DRIVE=4\n"
  "uint8 LOW=5";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__Gear__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__Gear__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 96, 96},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__Gear__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__Gear__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
