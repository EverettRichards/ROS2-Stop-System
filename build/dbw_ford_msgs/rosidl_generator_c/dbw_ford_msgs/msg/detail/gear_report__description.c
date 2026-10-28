// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/gear_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__GearReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0xcc, 0x3e, 0xca, 0x7a, 0x8d, 0x80, 0xed,
      0x2d, 0x06, 0xf7, 0x4a, 0xf5, 0x02, 0x48, 0x0d,
      0x5b, 0xfd, 0x89, 0x32, 0xb1, 0x78, 0xa1, 0xe1,
      0xa2, 0x19, 0x2a, 0x5f, 0xda, 0x44, 0xf9, 0x41,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "dbw_ford_msgs/msg/detail/gear_reject__functions.h"
#include "dbw_ford_msgs/msg/detail/gear__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__Gear__EXPECTED_HASH = {1, {
    0x67, 0x40, 0x67, 0xd6, 0x97, 0xc9, 0xd5, 0x84,
    0xcb, 0xa1, 0xa6, 0xf2, 0x6a, 0xc9, 0x06, 0x11,
    0xbc, 0x8a, 0x14, 0x10, 0x73, 0xc3, 0x00, 0xdb,
    0xb6, 0xe1, 0xb7, 0x5a, 0xfd, 0x2d, 0xa5, 0x9a,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__GearReject__EXPECTED_HASH = {1, {
    0x03, 0x99, 0xd3, 0x9a, 0x6d, 0x6e, 0x2e, 0xe8,
    0x21, 0x73, 0x44, 0x8e, 0x2a, 0xff, 0x0b, 0xf7,
    0x22, 0x47, 0xef, 0x7a, 0x34, 0x45, 0xe5, 0x04,
    0x48, 0xdf, 0xff, 0xa3, 0xb1, 0x34, 0x12, 0xea,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char dbw_ford_msgs__msg__GearReport__TYPE_NAME[] = "dbw_ford_msgs/msg/GearReport";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dbw_ford_msgs__msg__Gear__TYPE_NAME[] = "dbw_ford_msgs/msg/Gear";
static char dbw_ford_msgs__msg__GearReject__TYPE_NAME[] = "dbw_ford_msgs/msg/GearReject";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__GearReport__FIELD_NAME__header[] = "header";
static char dbw_ford_msgs__msg__GearReport__FIELD_NAME__state[] = "state";
static char dbw_ford_msgs__msg__GearReport__FIELD_NAME__cmd[] = "cmd";
static char dbw_ford_msgs__msg__GearReport__FIELD_NAME__reject[] = "reject";
static char dbw_ford_msgs__msg__GearReport__FIELD_NAME__ready[] = "ready";
static char dbw_ford_msgs__msg__GearReport__FIELD_NAME__override[] = "override";
static char dbw_ford_msgs__msg__GearReport__FIELD_NAME__fault_bus[] = "fault_bus";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__GearReport__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__GearReport__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__GearReport__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__Gear__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__GearReport__FIELD_NAME__cmd, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__Gear__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__GearReport__FIELD_NAME__reject, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__GearReject__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__GearReport__FIELD_NAME__ready, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__GearReport__FIELD_NAME__override, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__GearReport__FIELD_NAME__fault_bus, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dbw_ford_msgs__msg__GearReport__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Gear__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__GearReject__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dbw_ford_msgs__msg__GearReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__GearReport__TYPE_NAME, 28, 28},
      {dbw_ford_msgs__msg__GearReport__FIELDS, 7, 7},
    },
    {dbw_ford_msgs__msg__GearReport__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__Gear__EXPECTED_HASH, dbw_ford_msgs__msg__Gear__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = dbw_ford_msgs__msg__Gear__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__GearReject__EXPECTED_HASH, dbw_ford_msgs__msg__GearReject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = dbw_ford_msgs__msg__GearReject__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "# Current gear enumeration\n"
  "Gear state\n"
  "\n"
  "# Gear command enumeration\n"
  "Gear cmd\n"
  "\n"
  "# Gear reject enumeration\n"
  "GearReject reject\n"
  "\n"
  "# Status\n"
  "bool ready\n"
  "bool override\n"
  "\n"
  "# Faults\n"
  "bool fault_bus";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__GearReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__GearReport__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 204, 204},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__GearReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__GearReport__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dbw_ford_msgs__msg__Gear__get_individual_type_description_source(NULL);
    sources[3] = *dbw_ford_msgs__msg__GearReject__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
