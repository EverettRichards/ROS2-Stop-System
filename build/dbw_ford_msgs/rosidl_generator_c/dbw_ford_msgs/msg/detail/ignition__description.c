// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/Ignition.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/ignition__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__Ignition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0xef, 0x32, 0x88, 0x3b, 0x2f, 0x2c, 0x00,
      0xd6, 0x93, 0x95, 0xc3, 0xb9, 0x7e, 0x64, 0xc9,
      0xca, 0x4d, 0x75, 0xd9, 0x04, 0x09, 0x36, 0x82,
      0x46, 0x79, 0xb9, 0x8c, 0x4f, 0xb2, 0xf6, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__Ignition__TYPE_NAME[] = "dbw_ford_msgs/msg/Ignition";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__Ignition__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__Ignition__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__Ignition__FIELD_NAME__value, 5, 5},
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
dbw_ford_msgs__msg__Ignition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__Ignition__TYPE_NAME, 26, 26},
      {dbw_ford_msgs__msg__Ignition__FIELDS, 1, 1},
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
  "uint8 UNKNOWN=0\n"
  "uint8 OFF=1\n"
  "uint8 ACCESSORY=2\n"
  "uint8 RUN=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__Ignition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__Ignition__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 71, 71},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__Ignition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__Ignition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
