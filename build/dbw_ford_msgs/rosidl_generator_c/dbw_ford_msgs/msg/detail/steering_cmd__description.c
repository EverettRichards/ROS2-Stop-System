// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/SteeringCmd.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/steering_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__SteeringCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1b, 0xee, 0x6a, 0xcb, 0xef, 0x0c, 0xa0, 0xe5,
      0x85, 0xaa, 0x94, 0xb0, 0xf3, 0x40, 0x27, 0xa3,
      0x39, 0xd7, 0x7e, 0xd4, 0xa3, 0x76, 0x28, 0xbf,
      0xba, 0x65, 0xf6, 0xdf, 0xd7, 0xbb, 0xa2, 0x30,
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

static char dbw_ford_msgs__msg__SteeringCmd__TYPE_NAME[] = "dbw_ford_msgs/msg/SteeringCmd";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__header[] = "header";
static char dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__steering_wheel_angle_cmd[] = "steering_wheel_angle_cmd";
static char dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__steering_wheel_angle_velocity[] = "steering_wheel_angle_velocity";
static char dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__steering_wheel_torque_cmd[] = "steering_wheel_torque_cmd";
static char dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__cmd_type[] = "cmd_type";
static char dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__enable[] = "enable";
static char dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__clear[] = "clear";
static char dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__ignore[] = "ignore";
static char dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__quiet[] = "quiet";
static char dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__alert[] = "alert";
static char dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__count[] = "count";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__SteeringCmd__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__steering_wheel_angle_cmd, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__steering_wheel_angle_velocity, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__steering_wheel_torque_cmd, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__cmd_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__enable, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__clear, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__ignore, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__quiet, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__alert, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__SteeringCmd__FIELD_NAME__count, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dbw_ford_msgs__msg__SteeringCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
dbw_ford_msgs__msg__SteeringCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__SteeringCmd__TYPE_NAME, 29, 29},
      {dbw_ford_msgs__msg__SteeringCmd__FIELDS, 11, 11},
    },
    {dbw_ford_msgs__msg__SteeringCmd__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "float32 steering_wheel_angle_cmd        # rad, range -9.6 to 9.6\n"
  "float32 steering_wheel_angle_velocity   # rad/s, range 0 to 17.5, 0 = default\n"
  "float32 steering_wheel_torque_cmd       # Nm, range -8.0 to 8.0\n"
  "uint8 cmd_type\n"
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
  "# Disable or activate the driver override audible warning\n"
  "bool quiet\n"
  "bool alert\n"
  "\n"
  "# Watchdog counter (optional)\n"
  "uint8 count\n"
  "\n"
  "# Command types\n"
  "uint8 CMD_ANGLE=0\n"
  "uint8 CMD_TORQUE=1\n"
  "\n"
  "# Maximum values\n"
  "float32 ANGLE_MAX=9.6     # rad, maximum angle\n"
  "float32 VELOCITY_MAX=17.5 # rad/s, maximum velocity\n"
  "float32 TORQUE_MAX=8.0    # Nm, maximum torque";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__SteeringCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__SteeringCmd__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 703, 703},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__SteeringCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__SteeringCmd__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
