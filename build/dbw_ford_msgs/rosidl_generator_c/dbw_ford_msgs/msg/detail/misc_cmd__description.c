// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/misc_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__MiscCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0x2a, 0x51, 0xcd, 0x79, 0x9c, 0x1a, 0x5e,
      0x09, 0x88, 0x89, 0xf2, 0x11, 0xf3, 0xad, 0xd8,
      0x53, 0x0f, 0x61, 0x62, 0x90, 0x7a, 0x8f, 0x9a,
      0xa0, 0xb1, 0x9f, 0xc5, 0x43, 0x90, 0x5b, 0xb9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "dbw_ford_msgs/msg/detail/turn_signal__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "dbw_ford_msgs/msg/detail/parking_brake_cmd__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__ParkingBrakeCmd__EXPECTED_HASH = {1, {
    0x20, 0x67, 0x5b, 0xd5, 0xf8, 0xa5, 0x17, 0x0d,
    0x6b, 0xa7, 0xc2, 0xf5, 0xae, 0x4b, 0xd1, 0x17,
    0xfc, 0x0f, 0xb9, 0x57, 0xec, 0x87, 0x36, 0x39,
    0xde, 0x07, 0x69, 0x5d, 0xee, 0x4d, 0xf7, 0x0b,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__TurnSignal__EXPECTED_HASH = {1, {
    0xcb, 0xc5, 0x0a, 0xfe, 0x9f, 0x36, 0x04, 0xf2,
    0x0c, 0xdf, 0x48, 0x5b, 0x35, 0x3b, 0x24, 0xc5,
    0x10, 0x0d, 0x1c, 0xbb, 0x73, 0xe0, 0x8e, 0xa9,
    0x8a, 0x1a, 0xd8, 0xe3, 0x74, 0x11, 0x7b, 0x1c,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char dbw_ford_msgs__msg__MiscCmd__TYPE_NAME[] = "dbw_ford_msgs/msg/MiscCmd";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dbw_ford_msgs__msg__ParkingBrakeCmd__TYPE_NAME[] = "dbw_ford_msgs/msg/ParkingBrakeCmd";
static char dbw_ford_msgs__msg__TurnSignal__TYPE_NAME[] = "dbw_ford_msgs/msg/TurnSignal";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__MiscCmd__FIELD_NAME__header[] = "header";
static char dbw_ford_msgs__msg__MiscCmd__FIELD_NAME__cmd[] = "cmd";
static char dbw_ford_msgs__msg__MiscCmd__FIELD_NAME__pbrk[] = "pbrk";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__MiscCmd__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__MiscCmd__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__MiscCmd__FIELD_NAME__cmd, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__TurnSignal__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__MiscCmd__FIELD_NAME__pbrk, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__ParkingBrakeCmd__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dbw_ford_msgs__msg__MiscCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__ParkingBrakeCmd__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__TurnSignal__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dbw_ford_msgs__msg__MiscCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__MiscCmd__TYPE_NAME, 25, 25},
      {dbw_ford_msgs__msg__MiscCmd__FIELDS, 3, 3},
    },
    {dbw_ford_msgs__msg__MiscCmd__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__ParkingBrakeCmd__EXPECTED_HASH, dbw_ford_msgs__msg__ParkingBrakeCmd__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = dbw_ford_msgs__msg__ParkingBrakeCmd__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__TurnSignal__EXPECTED_HASH, dbw_ford_msgs__msg__TurnSignal__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = dbw_ford_msgs__msg__TurnSignal__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "# Turn signal command enumeration\n"
  "TurnSignal cmd\n"
  "\n"
  "# Parking brake command enumeration\n"
  "ParkingBrakeCmd pbrk";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__MiscCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__MiscCmd__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 131, 131},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__MiscCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__MiscCmd__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dbw_ford_msgs__msg__ParkingBrakeCmd__get_individual_type_description_source(NULL);
    sources[3] = *dbw_ford_msgs__msg__TurnSignal__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
