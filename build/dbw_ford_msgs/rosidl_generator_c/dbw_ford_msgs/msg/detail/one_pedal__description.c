// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/OnePedal.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/one_pedal__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__OnePedal__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0x80, 0xc0, 0x07, 0xe0, 0x5b, 0x1b, 0x1c,
      0xf7, 0x7a, 0x87, 0x57, 0xf2, 0x56, 0x32, 0x41,
      0xc1, 0x68, 0xfd, 0x59, 0x5f, 0x01, 0x22, 0x2a,
      0x58, 0x21, 0x03, 0xab, 0xec, 0x51, 0x20, 0xec,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__OnePedal__TYPE_NAME[] = "dbw_ford_msgs/msg/OnePedal";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__OnePedal__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__OnePedal__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__OnePedal__FIELD_NAME__value, 5, 5},
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
dbw_ford_msgs__msg__OnePedal__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__OnePedal__TYPE_NAME, 26, 26},
      {dbw_ford_msgs__msg__OnePedal__FIELDS, 1, 1},
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
  "uint8 ON=2\n"
  "uint8 FAULT=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__OnePedal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__OnePedal__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 66, 66},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__OnePedal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__OnePedal__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
