// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/QualityFactor.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/quality_factor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__QualityFactor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6f, 0x71, 0x06, 0xa9, 0x3a, 0x88, 0x60, 0x1e,
      0xc3, 0xf5, 0xaa, 0x51, 0xa0, 0x5c, 0x9c, 0xe2,
      0x9d, 0x12, 0x43, 0x63, 0x99, 0x02, 0xd1, 0xe1,
      0x1f, 0xe8, 0x67, 0x25, 0xca, 0x73, 0xa7, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__QualityFactor__TYPE_NAME[] = "dbw_ford_msgs/msg/QualityFactor";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__QualityFactor__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__QualityFactor__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__QualityFactor__FIELD_NAME__value, 5, 5},
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
dbw_ford_msgs__msg__QualityFactor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__QualityFactor__TYPE_NAME, 31, 31},
      {dbw_ford_msgs__msg__QualityFactor__FIELDS, 1, 1},
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
  "uint8 OK=0\n"
  "uint8 EMPTY=1\n"
  "uint8 CORRUPT=2\n"
  "uint8 FAULT=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__QualityFactor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__QualityFactor__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 68, 68},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__QualityFactor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__QualityFactor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
