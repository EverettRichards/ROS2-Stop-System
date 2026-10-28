// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/surround_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__SurroundReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0x56, 0xed, 0x77, 0x68, 0x7c, 0x83, 0xf9,
      0xff, 0x29, 0x81, 0x22, 0x1c, 0xb4, 0x95, 0x6b,
      0x5c, 0xbc, 0x0c, 0x57, 0x6d, 0xd4, 0xa6, 0x5e,
      0x16, 0xec, 0x0c, 0xf9, 0x43, 0x20, 0xbf, 0xda,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char dbw_ford_msgs__msg__SurroundReport__TYPE_NAME[] = "dbw_ford_msgs/msg/SurroundReport";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__header[] = "header";
static char dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__cta_left_alert[] = "cta_left_alert";
static char dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__cta_right_alert[] = "cta_right_alert";
static char dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__cta_left_enabled[] = "cta_left_enabled";
static char dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__cta_right_enabled[] = "cta_right_enabled";
static char dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__blis_left_alert[] = "blis_left_alert";
static char dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__blis_right_alert[] = "blis_right_alert";
static char dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__blis_left_enabled[] = "blis_left_enabled";
static char dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__blis_right_enabled[] = "blis_right_enabled";
static char dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__sonar_enabled[] = "sonar_enabled";
static char dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__sonar_fault[] = "sonar_fault";
static char dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__sonar[] = "sonar";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__SurroundReport__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__cta_left_alert, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__cta_right_alert, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__cta_left_enabled, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__cta_right_enabled, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__blis_left_alert, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__blis_right_alert, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__blis_left_enabled, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__blis_right_enabled, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__sonar_enabled, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__sonar_fault, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SurroundReport__FIELD_NAME__sonar, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      12,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dbw_ford_msgs__msg__SurroundReport__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dbw_ford_msgs__msg__SurroundReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__SurroundReport__TYPE_NAME, 32, 32},
      {dbw_ford_msgs__msg__SurroundReport__FIELDS, 12, 12},
    },
    {dbw_ford_msgs__msg__SurroundReport__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "# Cross Traffic Alert (CTA)\n"
  "bool cta_left_alert\n"
  "bool cta_right_alert\n"
  "bool cta_left_enabled\n"
  "bool cta_right_enabled\n"
  "\n"
  "# Blind Spot Information System (BLIS)\n"
  "bool blis_left_alert\n"
  "bool blis_right_alert\n"
  "bool blis_left_enabled\n"
  "bool blis_right_enabled\n"
  "\n"
  "# Sonar Sensors\n"
  "bool sonar_enabled\n"
  "bool sonar_fault\n"
  "\n"
  "# Sonar ranges in meters, zero is no-detection\n"
  "float32[12] sonar\n"
  "\n"
  "# Sonar index enumeration\n"
  "uint8 FRONT_LEFT_SIDE=0\n"
  "uint8 FRONT_LEFT_CORNER=1\n"
  "uint8 FRONT_LEFT_CENTER=2\n"
  "uint8 FRONT_RIGHT_CENTER=3\n"
  "uint8 FRONT_RIGHT_CORNER=4\n"
  "uint8 FRONT_RIGHT_SIDE=5\n"
  "uint8 REAR_LEFT_SIDE=6\n"
  "uint8 REAR_LEFT_CORNER=7\n"
  "uint8 REAR_LEFT_CENTER=8\n"
  "uint8 REAR_RIGHT_CENTER=9\n"
  "uint8 REAR_RIGHT_CORNER=10\n"
  "uint8 REAR_RIGHT_SIDE=11";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__SurroundReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__SurroundReport__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 720, 720},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__SurroundReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__SurroundReport__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
