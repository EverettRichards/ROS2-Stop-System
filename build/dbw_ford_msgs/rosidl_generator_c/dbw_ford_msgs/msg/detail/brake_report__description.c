// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/BrakeReport.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/brake_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__BrakeReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0x7d, 0x43, 0x7b, 0xd3, 0xc6, 0x4d, 0xfc,
      0xd0, 0x58, 0x85, 0x45, 0x3b, 0xa8, 0x4e, 0xa2,
      0x6e, 0xb6, 0xb2, 0x18, 0x60, 0x9a, 0x20, 0x51,
      0x1e, 0xd8, 0x4f, 0x69, 0x7f, 0x75, 0x78, 0x53,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "dbw_ford_msgs/msg/detail/watchdog_counter__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__WatchdogCounter__EXPECTED_HASH = {1, {
    0xf3, 0xff, 0xb8, 0x72, 0x7e, 0xe3, 0xa7, 0x50,
    0xf8, 0x33, 0x0c, 0x9a, 0xd1, 0x30, 0xf8, 0xc4,
    0x97, 0x74, 0x36, 0xec, 0x4b, 0x03, 0x21, 0xea,
    0x4c, 0xfc, 0xc7, 0xb2, 0x2d, 0x83, 0x31, 0x55,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char dbw_ford_msgs__msg__BrakeReport__TYPE_NAME[] = "dbw_ford_msgs/msg/BrakeReport";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dbw_ford_msgs__msg__WatchdogCounter__TYPE_NAME[] = "dbw_ford_msgs/msg/WatchdogCounter";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__header[] = "header";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__pedal_input[] = "pedal_input";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__pedal_cmd[] = "pedal_cmd";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__pedal_output[] = "pedal_output";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__torque_input[] = "torque_input";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__torque_cmd[] = "torque_cmd";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__torque_output[] = "torque_output";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__decel_cmd[] = "decel_cmd";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__decel_output[] = "decel_output";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__boo_cmd[] = "boo_cmd";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__enabled[] = "enabled";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__override[] = "override";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__driver[] = "driver";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__timeout[] = "timeout";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__watchdog_counter[] = "watchdog_counter";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__watchdog_braking[] = "watchdog_braking";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__fault_wdc[] = "fault_wdc";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__fault_ch1[] = "fault_ch1";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__fault_ch2[] = "fault_ch2";
static char dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__fault_power[] = "fault_power";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__BrakeReport__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__pedal_input, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__pedal_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__pedal_output, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__torque_input, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__torque_cmd, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__torque_output, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__decel_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__decel_output, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__boo_cmd, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__override, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__driver, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__timeout, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__watchdog_counter, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__WatchdogCounter__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__watchdog_braking, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__fault_wdc, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__fault_ch1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__fault_ch2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeReport__FIELD_NAME__fault_power, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dbw_ford_msgs__msg__BrakeReport__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__WatchdogCounter__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dbw_ford_msgs__msg__BrakeReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__BrakeReport__TYPE_NAME, 29, 29},
      {dbw_ford_msgs__msg__BrakeReport__FIELDS, 20, 20},
    },
    {dbw_ford_msgs__msg__BrakeReport__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__WatchdogCounter__EXPECTED_HASH, dbw_ford_msgs__msg__WatchdogCounter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = dbw_ford_msgs__msg__WatchdogCounter__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "# Brake pedal\n"
  "# Unitless, range 0.15 to 0.50\n"
  "float32 pedal_input\n"
  "float32 pedal_cmd\n"
  "float32 pedal_output\n"
  "\n"
  "# Braking torque (Nm)\n"
  "float32 torque_input\n"
  "float32 torque_cmd\n"
  "float32 torque_output\n"
  "\n"
  "# Braking decel (m/s^2)\n"
  "float32 decel_cmd\n"
  "float32 decel_output\n"
  "\n"
  "# Brake On Off (BOO)\n"
  "bool boo_cmd\n"
  "\n"
  "# Status\n"
  "bool enabled  # Enabled\n"
  "bool override # Driver override\n"
  "bool driver   # Driver activity\n"
  "bool timeout  # Command timeout\n"
  "\n"
  "# Watchdog Counter\n"
  "WatchdogCounter watchdog_counter\n"
  "bool watchdog_braking\n"
  "bool fault_wdc\n"
  "\n"
  "# Faults\n"
  "bool fault_ch1\n"
  "bool fault_ch2\n"
  "bool fault_power";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__BrakeReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__BrakeReport__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 589, 589},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__BrakeReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__BrakeReport__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dbw_ford_msgs__msg__WatchdogCounter__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
