// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/ParkingBrake.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/parking_brake__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__ParkingBrake__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0xa8, 0xae, 0x4b, 0x51, 0xde, 0xfc, 0xb8,
      0xc2, 0x4a, 0xad, 0x8f, 0xdb, 0x32, 0xdb, 0x9f,
      0xe7, 0x79, 0x36, 0xa5, 0x9b, 0x67, 0x9a, 0xcb,
      0x81, 0x62, 0xd2, 0xfc, 0x51, 0x73, 0xd1, 0x1b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__ParkingBrake__TYPE_NAME[] = "dbw_ford_msgs/msg/ParkingBrake";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__ParkingBrake__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__ParkingBrake__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__ParkingBrake__FIELD_NAME__status, 6, 6},
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
dbw_ford_msgs__msg__ParkingBrake__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__ParkingBrake__TYPE_NAME, 30, 30},
      {dbw_ford_msgs__msg__ParkingBrake__FIELDS, 1, 1},
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
  "uint8 TRANS=1\n"
  "uint8 ON=2\n"
  "uint8 FAULT=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__ParkingBrake__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__ParkingBrake__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 65, 65},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__ParkingBrake__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__ParkingBrake__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
