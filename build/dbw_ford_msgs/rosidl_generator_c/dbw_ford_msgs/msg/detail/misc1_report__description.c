// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dbw_ford_msgs:msg/Misc1Report.idl
// generated code does not contain a copyright notice

#include "dbw_ford_msgs/msg/detail/misc1_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dbw_ford_msgs
const rosidl_type_hash_t *
dbw_ford_msgs__msg__Misc1Report__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x25, 0x0a, 0x6f, 0x5a, 0x1d, 0x61, 0x31,
      0xa8, 0xc7, 0x38, 0xe1, 0x96, 0x46, 0x8e, 0xb0,
      0x4f, 0x2a, 0x90, 0x08, 0x3d, 0xa2, 0xe2, 0x2b,
      0x1f, 0x1b, 0x8f, 0xb8, 0x15, 0x15, 0xed, 0xb0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "dbw_ford_msgs/msg/detail/ambient_light__functions.h"
#include "dbw_ford_msgs/msg/detail/turn_signal__functions.h"
#include "dbw_ford_msgs/msg/detail/wiper__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__AmbientLight__EXPECTED_HASH = {1, {
    0xde, 0x8d, 0x05, 0xb9, 0xab, 0xb1, 0xc2, 0xfb,
    0x29, 0xf7, 0x48, 0x18, 0x43, 0x58, 0x9a, 0x49,
    0xfa, 0xa8, 0xbd, 0x46, 0xcd, 0x69, 0xec, 0x8d,
    0x87, 0x15, 0x30, 0x91, 0x2b, 0x69, 0x62, 0x7a,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__TurnSignal__EXPECTED_HASH = {1, {
    0xcb, 0xc5, 0x0a, 0xfe, 0x9f, 0x36, 0x04, 0xf2,
    0x0c, 0xdf, 0x48, 0x5b, 0x35, 0x3b, 0x24, 0xc5,
    0x10, 0x0d, 0x1c, 0xbb, 0x73, 0xe0, 0x8e, 0xa9,
    0x8a, 0x1a, 0xd8, 0xe3, 0x74, 0x11, 0x7b, 0x1c,
  }};
static const rosidl_type_hash_t dbw_ford_msgs__msg__Wiper__EXPECTED_HASH = {1, {
    0x8c, 0x59, 0x91, 0xe1, 0xaa, 0xf8, 0x69, 0x5a,
    0x9c, 0x7a, 0x5c, 0x88, 0x12, 0x8b, 0xe9, 0x02,
    0xbc, 0x60, 0x16, 0x76, 0x74, 0x2a, 0xb4, 0x93,
    0xf8, 0x0e, 0x52, 0x89, 0x6b, 0x14, 0xde, 0x5d,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char dbw_ford_msgs__msg__Misc1Report__TYPE_NAME[] = "dbw_ford_msgs/msg/Misc1Report";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dbw_ford_msgs__msg__AmbientLight__TYPE_NAME[] = "dbw_ford_msgs/msg/AmbientLight";
static char dbw_ford_msgs__msg__TurnSignal__TYPE_NAME[] = "dbw_ford_msgs/msg/TurnSignal";
static char dbw_ford_msgs__msg__Wiper__TYPE_NAME[] = "dbw_ford_msgs/msg/Wiper";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__header[] = "header";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__turn_signal[] = "turn_signal";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__high_beam_headlights[] = "high_beam_headlights";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__wiper[] = "wiper";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__ambient_light[] = "ambient_light";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__outside_temperature[] = "outside_temperature";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_on[] = "btn_cc_on";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_off[] = "btn_cc_off";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_on_off[] = "btn_cc_on_off";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_res[] = "btn_cc_res";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_cncl[] = "btn_cc_cncl";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_res_cncl[] = "btn_cc_res_cncl";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_res_inc[] = "btn_cc_res_inc";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_res_dec[] = "btn_cc_res_dec";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_set_inc[] = "btn_cc_set_inc";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_set_dec[] = "btn_cc_set_dec";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_gap_inc[] = "btn_cc_gap_inc";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_gap_dec[] = "btn_cc_gap_dec";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_la_on_off[] = "btn_la_on_off";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_ld_ok[] = "btn_ld_ok";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_ld_up[] = "btn_ld_up";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_ld_down[] = "btn_ld_down";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_ld_left[] = "btn_ld_left";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_ld_right[] = "btn_ld_right";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_rd_ok[] = "btn_rd_ok";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_rd_up[] = "btn_rd_up";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_rd_down[] = "btn_rd_down";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_rd_left[] = "btn_rd_left";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_rd_right[] = "btn_rd_right";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_vol_inc[] = "btn_vol_inc";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_vol_dec[] = "btn_vol_dec";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_mute[] = "btn_mute";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_media[] = "btn_media";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_prev[] = "btn_prev";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_next[] = "btn_next";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_speak[] = "btn_speak";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_call_start[] = "btn_call_start";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_call_end[] = "btn_call_end";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__fault_bus[] = "fault_bus";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__door_driver[] = "door_driver";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__door_passenger[] = "door_passenger";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__door_rear_left[] = "door_rear_left";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__door_rear_right[] = "door_rear_right";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__door_hood[] = "door_hood";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__door_trunk[] = "door_trunk";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__passenger_detect[] = "passenger_detect";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__passenger_airbag[] = "passenger_airbag";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__buckle_driver[] = "buckle_driver";
static char dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__buckle_passenger[] = "buckle_passenger";

static rosidl_runtime_c__type_description__Field dbw_ford_msgs__msg__Misc1Report__FIELDS[] = {
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__turn_signal, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__TurnSignal__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__high_beam_headlights, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__wiper, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__Wiper__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__ambient_light, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dbw_ford_msgs__msg__AmbientLight__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__outside_temperature, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_on, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_off, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_on_off, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_res, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_cncl, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_res_cncl, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_res_inc, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_res_dec, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_set_inc, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_set_dec, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_gap_inc, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_cc_gap_dec, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_la_on_off, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_ld_ok, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_ld_up, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_ld_down, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_ld_left, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_ld_right, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_rd_ok, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_rd_up, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_rd_down, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_rd_left, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_rd_right, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_vol_inc, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_vol_dec, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_mute, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_media, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_prev, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_next, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_speak, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_call_start, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__btn_call_end, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__fault_bus, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__door_driver, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__door_passenger, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__door_rear_left, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__door_rear_right, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__door_hood, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__door_trunk, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__passenger_detect, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__passenger_airbag, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__buckle_driver, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Misc1Report__FIELD_NAME__buckle_passenger, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dbw_ford_msgs__msg__Misc1Report__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__AmbientLight__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__TurnSignal__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {dbw_ford_msgs__msg__Wiper__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dbw_ford_msgs__msg__Misc1Report__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dbw_ford_msgs__msg__Misc1Report__TYPE_NAME, 29, 29},
      {dbw_ford_msgs__msg__Misc1Report__FIELDS, 49, 49},
    },
    {dbw_ford_msgs__msg__Misc1Report__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__AmbientLight__EXPECTED_HASH, dbw_ford_msgs__msg__AmbientLight__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = dbw_ford_msgs__msg__AmbientLight__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__TurnSignal__EXPECTED_HASH, dbw_ford_msgs__msg__TurnSignal__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = dbw_ford_msgs__msg__TurnSignal__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dbw_ford_msgs__msg__Wiper__EXPECTED_HASH, dbw_ford_msgs__msg__Wiper__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = dbw_ford_msgs__msg__Wiper__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "# Turn Signal enumeration\n"
  "TurnSignal turn_signal\n"
  "\n"
  "# High beams\n"
  "bool high_beam_headlights\n"
  "\n"
  "# Front Windshield Wipers enumeration\n"
  "Wiper wiper\n"
  "\n"
  "# Ambient Light Sensor enumeration\n"
  "AmbientLight ambient_light\n"
  "\n"
  "# Outside air temperature\n"
  "float32 outside_temperature # Degrees Celsius\n"
  "\n"
  "# Buttons\n"
  "bool btn_cc_on        # Cruise Control On\n"
  "bool btn_cc_off       # Cruise Control Off\n"
  "bool btn_cc_on_off    # Cruise Control On/Off Toggle\n"
  "bool btn_cc_res       # Cruise Control Resume\n"
  "bool btn_cc_cncl      # Cruise Control Cancel\n"
  "bool btn_cc_res_cncl  # Cruise Control Resume/Cancel\n"
  "bool btn_cc_res_inc   # Cruise Control Resume+\n"
  "bool btn_cc_res_dec   # Cruise Control Resume-\n"
  "bool btn_cc_set_inc   # Cruise Control Set+\n"
  "bool btn_cc_set_dec   # Cruise Control Set-\n"
  "bool btn_cc_gap_inc   # Cruise Control Gap+\n"
  "bool btn_cc_gap_dec   # Cruise Control Gap-\n"
  "bool btn_la_on_off    # Lane Assist On/Off Toggle\n"
  "bool btn_ld_ok        # Left D-Pad OK\n"
  "bool btn_ld_up        # Left D-Pad Up\n"
  "bool btn_ld_down      # Left D-Pad Down\n"
  "bool btn_ld_left      # Left D-Pad Left\n"
  "bool btn_ld_right     # Left D-Pad Right\n"
  "bool btn_rd_ok        # Right D-Pad OK\n"
  "bool btn_rd_up        # Right D-Pad Up\n"
  "bool btn_rd_down      # Right D-Pad Down\n"
  "bool btn_rd_left      # Right D-Pad Left\n"
  "bool btn_rd_right     # Right D-Pad Right\n"
  "bool btn_vol_inc      # Volume increment\n"
  "bool btn_vol_dec      # Volume decrement\n"
  "bool btn_mute         # Volume mute\n"
  "bool btn_media        # Media (source)\n"
  "bool btn_prev         # Media previous\n"
  "bool btn_next         # Media next\n"
  "bool btn_speak        # Speak\n"
  "bool btn_call_start   # Call start/answer\n"
  "bool btn_call_end     # Call end/disconnect\n"
  "\n"
  "# Faults\n"
  "bool fault_bus\n"
  "\n"
  "# Doors\n"
  "bool door_driver\n"
  "bool door_passenger\n"
  "bool door_rear_left\n"
  "bool door_rear_right\n"
  "bool door_hood\n"
  "bool door_trunk\n"
  "\n"
  "# Passenger seat\n"
  "bool passenger_detect\n"
  "bool passenger_airbag\n"
  "\n"
  "# Seat Belts\n"
  "bool buckle_driver\n"
  "bool buckle_passenger";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dbw_ford_msgs__msg__Misc1Report__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dbw_ford_msgs__msg__Misc1Report__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1920, 1920},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dbw_ford_msgs__msg__Misc1Report__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dbw_ford_msgs__msg__Misc1Report__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dbw_ford_msgs__msg__AmbientLight__get_individual_type_description_source(NULL);
    sources[3] = *dbw_ford_msgs__msg__TurnSignal__get_individual_type_description_source(NULL);
    sources[4] = *dbw_ford_msgs__msg__Wiper__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
