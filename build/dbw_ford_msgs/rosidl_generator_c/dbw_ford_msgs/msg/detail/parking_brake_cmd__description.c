// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/ParkingBrakeCmd.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/parking_brake_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__ParkingBrakeCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0x67, 0x5b, 0xd5, 0xf8, 0xa5, 0x17, 0x0d,
      0x6b, 0xa7, 0xc2, 0xf5, 0xae, 0x4b, 0xd1, 0x17,
      0xfc, 0x0f, 0xb9, 0x57, 0xec, 0x87, 0x36, 0x39,
      0xde, 0x07, 0x69, 0x5d, 0xee, 0x4d, 0xf7, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dbw_ford_msgs__msg__ParkingBrakeCmd__TYPE_NAME[] = "dbw_ford_msgs/msg/ParkingBrakeCmd";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__ParkingBrakeCmd__FIELD_NAME__cmd[] = "cmd";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__ParkingBrakeCmd__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__ParkingBrakeCmd__FIELD_NAME__cmd, 3, 3},
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
dbw_ford_msgs__msg__ParkingBrakeCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__ParkingBrakeCmd__TYPE_NAME, 33, 33},
      {dbw_ford_msgs__msg__ParkingBrakeCmd__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 cmd\n"
  "\n"
  "uint8 NONE=0\n"
  "uint8 ON=1\n"
  "uint8 OFF=2 # Not implemented";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__ParkingBrakeCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__ParkingBrakeCmd__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 65, 65},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__ParkingBrakeCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__ParkingBrakeCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
