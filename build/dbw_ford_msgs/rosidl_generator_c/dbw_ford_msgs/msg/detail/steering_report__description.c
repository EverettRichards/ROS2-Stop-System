// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/SteeringReport.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/steering_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__SteeringReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0x92, 0x3a, 0x39, 0x56, 0x80, 0x61, 0x69,
      0x23, 0x75, 0x48, 0xf2, 0xdc, 0x05, 0x4a, 0xbb,
      0x27, 0x7e, 0xbe, 0x97, 0xd1, 0x3e, 0xb1, 0x5c,
      0x16, 0x9a, 0xf9, 0x8e, 0x54, 0x92, 0xd8, 0xe9,
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

static char dbw_ford_msgs__msg__SteeringReport__TYPE_NAME[] = "dbw_ford_msgs/msg/SteeringReport";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__header[] = "header";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__steering_wheel_angle[] = "steering_wheel_angle";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__steering_wheel_cmd[] = "steering_wheel_cmd";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__steering_wheel_torque[] = "steering_wheel_torque";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__steering_wheel_cmd_type[] = "steering_wheel_cmd_type";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__speed[] = "speed";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__enabled[] = "enabled";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__override[] = "override";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__timeout[] = "timeout";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__fault_wdc[] = "fault_wdc";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__fault_bus1[] = "fault_bus1";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__fault_bus2[] = "fault_bus2";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__fault_calibration[] = "fault_calibration";
static char dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__fault_power[] = "fault_power";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__SteeringReport__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__steering_wheel_angle, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__steering_wheel_cmd, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__steering_wheel_torque, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__steering_wheel_cmd_type, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__override, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__timeout, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__fault_wdc, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__fault_bus1, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__fault_bus2, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__fault_calibration, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringReport__FIELD_NAME__fault_power, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dbw_ford_msgs__msg__SteeringReport__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
dbw_ford_msgs__msg__SteeringReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__SteeringReport__TYPE_NAME, 32, 32},
      {dbw_ford_msgs__msg__SteeringReport__FIELDS, 14, 14},
    },
    {dbw_ford_msgs__msg__SteeringReport__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Steering Wheel\n"
  "float32 steering_wheel_angle      # rad\n"
  "float32 steering_wheel_cmd        # rad or Nm\n"
  "float32 steering_wheel_torque     # Nm\n"
  "uint8 steering_wheel_cmd_type\n"
  "\n"
  "# Command types\n"
  "uint8 CMD_ANGLE=0\n"
  "uint8 CMD_TORQUE=1\n"
  "\n"
  "# Vehicle Speed\n"
  "float32 speed                     # m/s\n"
  "\n"
  "# Status\n"
  "bool enabled  # Enabled\n"
  "bool override # Driver override\n"
  "bool timeout  # Command timeout\n"
  "\n"
  "# Watchdog Counter\n"
  "bool fault_wdc\n"
  "\n"
  "# Faults\n"
  "bool fault_bus1\n"
  "bool fault_bus2\n"
  "bool fault_calibration\n"
  "bool fault_power";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__SteeringReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__SteeringReport__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 522, 522},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__SteeringReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__SteeringReport__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
