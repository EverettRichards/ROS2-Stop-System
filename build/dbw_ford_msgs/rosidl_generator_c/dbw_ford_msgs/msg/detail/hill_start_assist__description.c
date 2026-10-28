// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/HillStartAssist.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/hill_start_assist__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__HillStartAssist__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0x92, 0x00, 0xb8, 0x80, 0x8e, 0xd6, 0x79,
      0xdf, 0x6f, 0x81, 0x23, 0x13, 0xcf, 0xe4, 0xb0,
      0x9e, 0x28, 0x02, 0xfa, 0x3d, 0x7f, 0xf4, 0x52,
      0xbc, 0x31, 0xf5, 0xb1, 0xc5, 0xbd, 0x7e, 0x7f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__HillStartAssist__TYPE_NAME[] = "dbw_ford_msgs/msg/HillStartAssist";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__HillStartAssist__FIELD_NAME__status[] = "status";
static char dbw_ford_msgs__msg__HillStartAssist__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__HillStartAssist__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__HillStartAssist__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__HillStartAssist__FIELD_NAME__mode, 4, 4},
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
dbw_ford_msgs__msg__HillStartAssist__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__HillStartAssist__TYPE_NAME, 33, 33},
      {dbw_ford_msgs__msg__HillStartAssist__FIELDS, 2, 2},
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
  "uint8 mode\n"
  "\n"
  "uint8 STAT_INACTIVE=0\n"
  "uint8 STAT_FINDING_GRADIENT=1\n"
  "uint8 STAT_ACTIVE_PRESSED=2\n"
  "uint8 STAT_ACTIVE_RELEASED=3\n"
  "uint8 STAT_FAST_RELEASE=4\n"
  "uint8 STAT_SLOW_RELEASE=5\n"
  "uint8 STAT_FAILED=6\n"
  "uint8 STAT_UNDEFINED=7\n"
  "\n"
  "uint8 MODE_OFF=0\n"
  "uint8 MODE_AUTO=1\n"
  "uint8 MODE_MANUAL=2\n"
  "uint8 MODE_UNDEFINED=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__HillStartAssist__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__HillStartAssist__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 308, 308},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__HillStartAssist__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__HillStartAssist__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
