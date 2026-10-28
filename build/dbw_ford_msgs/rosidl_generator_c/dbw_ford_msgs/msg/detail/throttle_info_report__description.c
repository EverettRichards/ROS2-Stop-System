// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/ThrottleInfoReport.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/throttle_info_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__ThrottleInfoReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0xaa, 0xc1, 0x4c, 0xa8, 0x04, 0xd3, 0x70,
      0x43, 0x0c, 0xb7, 0x2a, 0x72, 0x8c, 0xb2, 0x80,
      0xcb, 0x3b, 0xb2, 0x8c, 0x02, 0x54, 0xf4, 0x0e,
      0x4a, 0x23, 0x31, 0x5a, 0x6c, 0x9e, 0xb5, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "dbw_ford_msgs/msg/detail/ignition__functions.h"
#include "dbw_ford_msgs/msg/detail/quality_factor__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "dbw_ford_msgs/msg/detail/one_pedal__functions.h"
#include "dbw_ford_msgs/msg/detail/gear_num__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__GearNum__EXPECTED_HASH = {1, {
    0xc0, 0xf2, 0xb4, 0x17, 0xc3, 0x10, 0x6a, 0x02,
    0xba, 0x70, 0xef, 0x41, 0x2e, 0x23, 0x62, 0x36,
    0x56, 0x02, 0x87, 0x47, 0x93, 0x2e, 0xd7, 0x1b,
    0xda, 0x6e, 0x10, 0x09, 0xaf, 0x26, 0x40, 0x6b,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__Ignition__EXPECTED_HASH = {1, {
    0xe5, 0xef, 0x32, 0x88, 0x3b, 0x2f, 0x2c, 0x00,
    0xd6, 0x93, 0x95, 0xc3, 0xb9, 0x7e, 0x64, 0xc9,
    0xca, 0x4d, 0x75, 0xd9, 0x04, 0x09, 0x36, 0x82,
    0x46, 0x79, 0xb9, 0x8c, 0x4f, 0xb2, 0xf6, 0x8d,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__OnePedal__EXPECTED_HASH = {1, {
    0xd5, 0x80, 0xc0, 0x07, 0xe0, 0x5b, 0x1b, 0x1c,
    0xf7, 0x7a, 0x87, 0x57, 0xf2, 0x56, 0x32, 0x41,
    0xc1, 0x68, 0xfd, 0x59, 0x5f, 0x01, 0x22, 0x2a,
    0x58, 0x21, 0x03, 0xab, 0xec, 0x51, 0x20, 0xec,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__QualityFactor__EXPECTED_HASH = {1, {
    0x6f, 0x71, 0x06, 0xa9, 0x3a, 0x88, 0x60, 0x1e,
    0xc3, 0xf5, 0xaa, 0x51, 0xa0, 0x5c, 0x9c, 0xe2,
    0x9d, 0x12, 0x43, 0x63, 0x99, 0x02, 0xd1, 0xe1,
    0x1f, 0xe8, 0x67, 0x25, 0xca, 0x73, 0xa7, 0x76,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char dbw_ford_msgs__msg__ThrottleInfoReport__TYPE_NAME[] = "dbw_ford_msgs/msg/ThrottleInfoReport";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dbw_ford_msgs__msg__GearNum__TYPE_NAME[] = "dbw_ford_msgs/msg/GearNum";
static char dbw_ford_msgs__msg__Ignition__TYPE_NAME[] = "dbw_ford_msgs/msg/Ignition";
static char dbw_ford_msgs__msg__OnePedal__TYPE_NAME[] = "dbw_ford_msgs/msg/OnePedal";
static char dbw_ford_msgs__msg__QualityFactor__TYPE_NAME[] = "dbw_ford_msgs/msg/QualityFactor";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__header[] = "header";
static char dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__throttle_pc[] = "throttle_pc";
static char dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__throttle_rate[] = "throttle_rate";
static char dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__throttle_pedal_qf[] = "throttle_pedal_qf";
static char dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__one_pedal[] = "one_pedal";
static char dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__engine_rpm[] = "engine_rpm";
static char dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__gear_num[] = "gear_num";
static char dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__ignition[] = "ignition";
static char dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__batt_curr[] = "batt_curr";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__ThrottleInfoReport__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__throttle_pc, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__throttle_rate, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__throttle_pedal_qf, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__QualityFactor__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__one_pedal, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__OnePedal__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__engine_rpm, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__gear_num, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__GearNum__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__ignition, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__Ignition__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__ThrottleInfoReport__FIELD_NAME__batt_curr, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dbw_ford_msgs__msg__ThrottleInfoReport__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__GearNum__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Ignition__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__OnePedal__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__QualityFactor__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dbw_ford_msgs__msg__ThrottleInfoReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__ThrottleInfoReport__TYPE_NAME, 36, 36},
      {dbw_ford_msgs__msg__ThrottleInfoReport__FIELDS, 9, 9},
    },
    {dbw_ford_msgs__msg__ThrottleInfoReport__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__GearNum__EXPECTED_HASH, dbw_ford_msgs__msg__GearNum__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = dbw_ford_msgs__msg__GearNum__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__Ignition__EXPECTED_HASH, dbw_ford_msgs__msg__Ignition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = dbw_ford_msgs__msg__Ignition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__OnePedal__EXPECTED_HASH, dbw_ford_msgs__msg__OnePedal__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = dbw_ford_msgs__msg__OnePedal__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__QualityFactor__EXPECTED_HASH, dbw_ford_msgs__msg__QualityFactor__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = dbw_ford_msgs__msg__QualityFactor__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "# Throttle Pedal\n"
  "float32 throttle_pc   # Throttle pedal percent, range 0 to 1\n"
  "float32 throttle_rate # Throttle pedal change per second (1/s)\n"
  "QualityFactor throttle_pedal_qf # Non-zero is limp-home\n"
  "OnePedal one_pedal    # One-pedal-drive mode\n"
  "\n"
  "# Engine\n"
  "float32 engine_rpm    # Engine Speed (rpm)\n"
  "\n"
  "# Gear Num\n"
  "GearNum gear_num      # Gear Number\n"
  "\n"
  "# Ignition status\n"
  "Ignition ignition     # Ignition status (enum)\n"
  "\n"
  "# Battery Current\n"
  "float32 batt_curr     # Battery Current (Amps)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__ThrottleInfoReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__ThrottleInfoReport__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 499, 499},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__ThrottleInfoReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__ThrottleInfoReport__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dbw_ford_msgs__msg__GearNum__get_individual_type_description_source(NULL);
    sources[3] = *dbw_ford_msgs__msg__Ignition__get_individual_type_description_source(NULL);
    sources[4] = *dbw_ford_msgs__msg__OnePedal__get_individual_type_description_source(NULL);
    sources[5] = *dbw_ford_msgs__msg__QualityFactor__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
