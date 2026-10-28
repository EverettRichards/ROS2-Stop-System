// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/BrakeInfoReport.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/brake_info_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__BrakeInfoReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1a, 0x85, 0x38, 0xa9, 0x20, 0x1f, 0xc8, 0xb5,
      0x68, 0xb0, 0xb9, 0x27, 0x95, 0x58, 0x3f, 0x28,
      0x09, 0x4b, 0xcc, 0x0d, 0x28, 0x49, 0xd5, 0x21,
      0x1c, 0x09, 0x65, 0x1d, 0xc5, 0x3b, 0xcf, 0xeb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "dbw_ford_msgs/msg/detail/quality_factor__functions.h"
#include "dbw_ford_msgs/msg/detail/parking_brake__functions.h"
#include "dbw_ford_msgs/msg/detail/hill_start_assist__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__HillStartAssist__EXPECTED_HASH = {1, {
    0x55, 0x92, 0x00, 0xb8, 0x80, 0x8e, 0xd6, 0x79,
    0xdf, 0x6f, 0x81, 0x23, 0x13, 0xcf, 0xe4, 0xb0,
    0x9e, 0x28, 0x02, 0xfa, 0x3d, 0x7f, 0xf4, 0x52,
    0xbc, 0x31, 0xf5, 0xb1, 0xc5, 0xbd, 0x7e, 0x7f,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__ParkingBrake__EXPECTED_HASH = {1, {
    0xb8, 0xa8, 0xae, 0x4b, 0x51, 0xde, 0xfc, 0xb8,
    0xc2, 0x4a, 0xad, 0x8f, 0xdb, 0x32, 0xdb, 0x9f,
    0xe7, 0x79, 0x36, 0xa5, 0x9b, 0x67, 0x9a, 0xcb,
    0x81, 0x62, 0xd2, 0xfc, 0x51, 0x73, 0xd1, 0x1b,
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

static char dbw_ford_msgs__msg__BrakeInfoReport__TYPE_NAME[] = "dbw_ford_msgs/msg/BrakeInfoReport";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dbw_ford_msgs__msg__HillStartAssist__TYPE_NAME[] = "dbw_ford_msgs/msg/HillStartAssist";
static char dbw_ford_msgs__msg__ParkingBrake__TYPE_NAME[] = "dbw_ford_msgs/msg/ParkingBrake";
static char dbw_ford_msgs__msg__QualityFactor__TYPE_NAME[] = "dbw_ford_msgs/msg/QualityFactor";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__header[] = "header";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__brake_torque_request[] = "brake_torque_request";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__brake_torque_actual[] = "brake_torque_actual";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__wheel_torque_actual[] = "wheel_torque_actual";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__accel_over_ground[] = "accel_over_ground";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__brake_pedal_qf[] = "brake_pedal_qf";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__hsa[] = "hsa";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__abs_active[] = "abs_active";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__abs_enabled[] = "abs_enabled";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__stab_active[] = "stab_active";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__stab_enabled[] = "stab_enabled";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__trac_active[] = "trac_active";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__trac_enabled[] = "trac_enabled";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__parking_brake[] = "parking_brake";
static char dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__stationary[] = "stationary";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__BrakeInfoReport__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__brake_torque_request, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__brake_torque_actual, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__wheel_torque_actual, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__accel_over_ground, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__brake_pedal_qf, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__QualityFactor__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__hsa, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__HillStartAssist__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__abs_active, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__abs_enabled, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__stab_active, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__stab_enabled, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__trac_active, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__trac_enabled, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__parking_brake, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__ParkingBrake__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__BrakeInfoReport__FIELD_NAME__stationary, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dbw_ford_msgs__msg__BrakeInfoReport__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__HillStartAssist__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__ParkingBrake__TYPE_NAME, 30, 30},
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
dbw_ford_msgs__msg__BrakeInfoReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__BrakeInfoReport__TYPE_NAME, 33, 33},
      {dbw_ford_msgs__msg__BrakeInfoReport__FIELDS, 15, 15},
    },
    {dbw_ford_msgs__msg__BrakeInfoReport__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__HillStartAssist__EXPECTED_HASH, dbw_ford_msgs__msg__HillStartAssist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = dbw_ford_msgs__msg__HillStartAssist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__ParkingBrake__EXPECTED_HASH, dbw_ford_msgs__msg__ParkingBrake__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = dbw_ford_msgs__msg__ParkingBrake__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__QualityFactor__EXPECTED_HASH, dbw_ford_msgs__msg__QualityFactor__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = dbw_ford_msgs__msg__QualityFactor__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "# Wheel torques (Nm)\n"
  "float32 brake_torque_request\n"
  "float32 brake_torque_actual\n"
  "float32 wheel_torque_actual\n"
  "\n"
  "# Vehicle Acceleration (m/s^2)\n"
  "float32 accel_over_ground\n"
  "\n"
  "# Brake Pedal\n"
  "QualityFactor brake_pedal_qf\n"
  "\n"
  "# Hill Start Assist\n"
  "HillStartAssist hsa\n"
  "\n"
  "# Anti-lock Brakes\n"
  "bool abs_active\n"
  "bool abs_enabled\n"
  "\n"
  "# Stability Control\n"
  "bool stab_active\n"
  "bool stab_enabled\n"
  "\n"
  "# Traction Control\n"
  "bool trac_active\n"
  "bool trac_enabled\n"
  "\n"
  "# Parking Brake\n"
  "ParkingBrake parking_brake\n"
  "\n"
  "# Misc\n"
  "bool stationary";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__BrakeInfoReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__BrakeInfoReport__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 505, 505},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__BrakeInfoReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__BrakeInfoReport__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dbw_ford_msgs__msg__HillStartAssist__get_individual_type_description_source(NULL);
    sources[3] = *dbw_ford_msgs__msg__ParkingBrake__get_individual_type_description_source(NULL);
    sources[4] = *dbw_ford_msgs__msg__QualityFactor__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
