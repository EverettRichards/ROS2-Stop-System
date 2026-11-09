// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/GearNum.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/gear_num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__GearNum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc0, 0xf2, 0xb4, 0x17, 0xc3, 0x10, 0x6a, 0x02,
      0xba, 0x70, 0xef, 0x41, 0x2e, 0x23, 0x62, 0x36,
      0x56, 0x02, 0x87, 0x47, 0x93, 0x2e, 0xd7, 0x1b,
      0xda, 0x6e, 0x10, 0x09, 0xaf, 0x26, 0x40, 0x6b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__GearNum__TYPE_NAME[] = "dbw_ford_msgs/msg/GearNum";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__GearNum__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__GearNum__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__GearNum__FIELD_NAME__num, 3, 3},
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
dbw_ford_msgs__msg__GearNum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__GearNum__TYPE_NAME, 25, 25},
      {dbw_ford_msgs__msg__GearNum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 num\n"
  "\n"
  "uint8 NONE=0\n"
  "uint8 DRIVE_D01=1\n"
  "uint8 DRIVE_D02=2\n"
  "uint8 DRIVE_D03=3\n"
  "uint8 DRIVE_D04=4\n"
  "uint8 DRIVE_D05=5\n"
  "uint8 DRIVE_D06=6\n"
  "uint8 DRIVE_D07=7\n"
  "uint8 DRIVE_D08=8\n"
  "uint8 DRIVE_D09=9\n"
  "uint8 DRIVE_D10=10\n"
  "uint8 NEUTRAL=16\n"
  "uint8 REVERSE_R01=17\n"
  "uint8 REVERSE_R02=18\n"
  "uint8 PARK=31";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__GearNum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__GearNum__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 277, 277},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__GearNum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__GearNum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
