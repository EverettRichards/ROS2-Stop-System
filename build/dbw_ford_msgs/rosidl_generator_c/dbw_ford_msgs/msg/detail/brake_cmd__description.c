// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/BrakeCmd.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/brake_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__BrakeCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0x9c, 0x5f, 0xcf, 0xa3, 0x43, 0x32, 0xdc,
      0x61, 0x65, 0xf7, 0xaa, 0x84, 0x36, 0x64, 0x77,
      0xbf, 0x0e, 0xe9, 0xc0, 0x70, 0x20, 0x3e, 0xb2,
      0xe2, 0x66, 0x79, 0xdd, 0x89, 0xda, 0x26, 0xa6,
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

static char dbw_ford_msgs__msg__BrakeCmd__TYPE_NAME[] = "dbw_ford_msgs/msg/BrakeCmd";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__header[] = "header";
static char dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__pedal_cmd[] = "pedal_cmd";
static char dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__pedal_cmd_type[] = "pedal_cmd_type";
static char dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__enable[] = "enable";
static char dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__clear[] = "clear";
static char dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__ignore[] = "ignore";
static char dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__count[] = "count";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__BrakeCmd__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__pedal_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__pedal_cmd_type, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__enable, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__clear, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__ignore, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeCmd__FIELD_NAME__count, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dbw_ford_msgs__msg__BrakeCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
dbw_ford_msgs__msg__BrakeCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__BrakeCmd__TYPE_NAME, 26, 26},
      {dbw_ford_msgs__msg__BrakeCmd__FIELDS, 7, 7},
    },
    {dbw_ford_msgs__msg__BrakeCmd__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Brake pedal\n"
  "# Options defined below\n"
  "float32 pedal_cmd\n"
  "uint8 pedal_cmd_type\n"
  "\n"
  "# Enable\n"
  "bool enable\n"
  "\n"
  "# Clear driver overrides\n"
  "bool clear\n"
  "\n"
  "# Ignore driver overrides\n"
  "bool ignore\n"
  "\n"
  "# Watchdog counter (optional)\n"
  "uint8 count\n"
  "\n"
  "uint8 CMD_NONE=0\n"
  "uint8 CMD_PEDAL=1     # Unitless, range 0.15 to 0.50\n"
  "uint8 CMD_PERCENT=2   # Percent of maximum torque, range 0 to 1\n"
  "uint8 CMD_TORQUE=3    # Nm, range 0 to 3412, open-loop\n"
  "uint8 CMD_TORQUE_RQ=4 # Nm, range 0 to 3412, closed-loop\n"
  "uint8 CMD_DECEL=6     # m/s^2, range 0 to 10\n"
  "\n"
  "float32 TORQUE_BOO=520  # Nm, brake lights threshold\n"
  "float32 TORQUE_MAX=3412 # Nm, maximum torque";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__BrakeCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__BrakeCmd__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 633, 633},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__BrakeCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__BrakeCmd__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
