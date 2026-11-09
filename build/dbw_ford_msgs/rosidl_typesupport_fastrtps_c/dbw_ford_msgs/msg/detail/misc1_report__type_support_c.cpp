// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dbw_ford_msgs:msg/Misc1Report.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/misc1_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dbw_ford_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dbw_ford_msgs/msg/detail/misc1_report__struct.h"
#include "dbw_ford_msgs/msg/detail/misc1_report__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "dbw_ford_msgs/msg/detail/ambient_light__functions.h"  // ambient_light
#include "dbw_ford_msgs/msg/detail/turn_signal__functions.h"  // turn_signal
#include "dbw_ford_msgs/msg/detail/wiper__functions.h"  // wiper
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_dbw_ford_msgs__msg__AmbientLight(
  const dbw_ford_msgs__msg__AmbientLight * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dbw_ford_msgs__msg__AmbientLight(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__AmbientLight * ros_message);

size_t get_serialized_size_dbw_ford_msgs__msg__AmbientLight(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dbw_ford_msgs__msg__AmbientLight(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dbw_ford_msgs__msg__AmbientLight(
  const dbw_ford_msgs__msg__AmbientLight * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dbw_ford_msgs__msg__AmbientLight(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dbw_ford_msgs__msg__AmbientLight(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, AmbientLight)();

bool cdr_serialize_dbw_ford_msgs__msg__TurnSignal(
  const dbw_ford_msgs__msg__TurnSignal * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dbw_ford_msgs__msg__TurnSignal(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__TurnSignal * ros_message);

size_t get_serialized_size_dbw_ford_msgs__msg__TurnSignal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dbw_ford_msgs__msg__TurnSignal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dbw_ford_msgs__msg__TurnSignal(
  const dbw_ford_msgs__msg__TurnSignal * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dbw_ford_msgs__msg__TurnSignal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dbw_ford_msgs__msg__TurnSignal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, TurnSignal)();

bool cdr_serialize_dbw_ford_msgs__msg__Wiper(
  const dbw_ford_msgs__msg__Wiper * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dbw_ford_msgs__msg__Wiper(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__Wiper * ros_message);

size_t get_serialized_size_dbw_ford_msgs__msg__Wiper(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dbw_ford_msgs__msg__Wiper(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dbw_ford_msgs__msg__Wiper(
  const dbw_ford_msgs__msg__Wiper * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dbw_ford_msgs__msg__Wiper(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dbw_ford_msgs__msg__Wiper(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, Wiper)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dbw_ford_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dbw_ford_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dbw_ford_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dbw_ford_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dbw_ford_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dbw_ford_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dbw_ford_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dbw_ford_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Misc1Report__ros_msg_type = dbw_ford_msgs__msg__Misc1Report;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
bool cdr_serialize_dbw_ford_msgs__msg__Misc1Report(
  const dbw_ford_msgs__msg__Misc1Report * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: turn_signal
  {
    cdr_serialize_dbw_ford_msgs__msg__TurnSignal(
      &ros_message->turn_signal, cdr);
  }

  // Field name: high_beam_headlights
  {
    cdr << (ros_message->high_beam_headlights ? true : false);
  }

  // Field name: wiper
  {
    cdr_serialize_dbw_ford_msgs__msg__Wiper(
      &ros_message->wiper, cdr);
  }

  // Field name: ambient_light
  {
    cdr_serialize_dbw_ford_msgs__msg__AmbientLight(
      &ros_message->ambient_light, cdr);
  }

  // Field name: outside_temperature
  {
    cdr << ros_message->outside_temperature;
  }

  // Field name: btn_cc_on
  {
    cdr << (ros_message->btn_cc_on ? true : false);
  }

  // Field name: btn_cc_off
  {
    cdr << (ros_message->btn_cc_off ? true : false);
  }

  // Field name: btn_cc_on_off
  {
    cdr << (ros_message->btn_cc_on_off ? true : false);
  }

  // Field name: btn_cc_res
  {
    cdr << (ros_message->btn_cc_res ? true : false);
  }

  // Field name: btn_cc_cncl
  {
    cdr << (ros_message->btn_cc_cncl ? true : false);
  }

  // Field name: btn_cc_res_cncl
  {
    cdr << (ros_message->btn_cc_res_cncl ? true : false);
  }

  // Field name: btn_cc_res_inc
  {
    cdr << (ros_message->btn_cc_res_inc ? true : false);
  }

  // Field name: btn_cc_res_dec
  {
    cdr << (ros_message->btn_cc_res_dec ? true : false);
  }

  // Field name: btn_cc_set_inc
  {
    cdr << (ros_message->btn_cc_set_inc ? true : false);
  }

  // Field name: btn_cc_set_dec
  {
    cdr << (ros_message->btn_cc_set_dec ? true : false);
  }

  // Field name: btn_cc_gap_inc
  {
    cdr << (ros_message->btn_cc_gap_inc ? true : false);
  }

  // Field name: btn_cc_gap_dec
  {
    cdr << (ros_message->btn_cc_gap_dec ? true : false);
  }

  // Field name: btn_la_on_off
  {
    cdr << (ros_message->btn_la_on_off ? true : false);
  }

  // Field name: btn_ld_ok
  {
    cdr << (ros_message->btn_ld_ok ? true : false);
  }

  // Field name: btn_ld_up
  {
    cdr << (ros_message->btn_ld_up ? true : false);
  }

  // Field name: btn_ld_down
  {
    cdr << (ros_message->btn_ld_down ? true : false);
  }

  // Field name: btn_ld_left
  {
    cdr << (ros_message->btn_ld_left ? true : false);
  }

  // Field name: btn_ld_right
  {
    cdr << (ros_message->btn_ld_right ? true : false);
  }

  // Field name: btn_rd_ok
  {
    cdr << (ros_message->btn_rd_ok ? true : false);
  }

  // Field name: btn_rd_up
  {
    cdr << (ros_message->btn_rd_up ? true : false);
  }

  // Field name: btn_rd_down
  {
    cdr << (ros_message->btn_rd_down ? true : false);
  }

  // Field name: btn_rd_left
  {
    cdr << (ros_message->btn_rd_left ? true : false);
  }

  // Field name: btn_rd_right
  {
    cdr << (ros_message->btn_rd_right ? true : false);
  }

  // Field name: btn_vol_inc
  {
    cdr << (ros_message->btn_vol_inc ? true : false);
  }

  // Field name: btn_vol_dec
  {
    cdr << (ros_message->btn_vol_dec ? true : false);
  }

  // Field name: btn_mute
  {
    cdr << (ros_message->btn_mute ? true : false);
  }

  // Field name: btn_media
  {
    cdr << (ros_message->btn_media ? true : false);
  }

  // Field name: btn_prev
  {
    cdr << (ros_message->btn_prev ? true : false);
  }

  // Field name: btn_next
  {
    cdr << (ros_message->btn_next ? true : false);
  }

  // Field name: btn_speak
  {
    cdr << (ros_message->btn_speak ? true : false);
  }

  // Field name: btn_call_start
  {
    cdr << (ros_message->btn_call_start ? true : false);
  }

  // Field name: btn_call_end
  {
    cdr << (ros_message->btn_call_end ? true : false);
  }

  // Field name: fault_bus
  {
    cdr << (ros_message->fault_bus ? true : false);
  }

  // Field name: door_driver
  {
    cdr << (ros_message->door_driver ? true : false);
  }

  // Field name: door_passenger
  {
    cdr << (ros_message->door_passenger ? true : false);
  }

  // Field name: door_rear_left
  {
    cdr << (ros_message->door_rear_left ? true : false);
  }

  // Field name: door_rear_right
  {
    cdr << (ros_message->door_rear_right ? true : false);
  }

  // Field name: door_hood
  {
    cdr << (ros_message->door_hood ? true : false);
  }

  // Field name: door_trunk
  {
    cdr << (ros_message->door_trunk ? true : false);
  }

  // Field name: passenger_detect
  {
    cdr << (ros_message->passenger_detect ? true : false);
  }

  // Field name: passenger_airbag
  {
    cdr << (ros_message->passenger_airbag ? true : false);
  }

  // Field name: buckle_driver
  {
    cdr << (ros_message->buckle_driver ? true : false);
  }

  // Field name: buckle_passenger
  {
    cdr << (ros_message->buckle_passenger ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
bool cdr_deserialize_dbw_ford_msgs__msg__Misc1Report(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__Misc1Report * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: turn_signal
  {
    cdr_deserialize_dbw_ford_msgs__msg__TurnSignal(cdr, &ros_message->turn_signal);
  }

  // Field name: high_beam_headlights
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->high_beam_headlights = tmp ? true : false;
  }

  // Field name: wiper
  {
    cdr_deserialize_dbw_ford_msgs__msg__Wiper(cdr, &ros_message->wiper);
  }

  // Field name: ambient_light
  {
    cdr_deserialize_dbw_ford_msgs__msg__AmbientLight(cdr, &ros_message->ambient_light);
  }

  // Field name: outside_temperature
  {
    cdr >> ros_message->outside_temperature;
  }

  // Field name: btn_cc_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_cc_on = tmp ? true : false;
  }

  // Field name: btn_cc_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_cc_off = tmp ? true : false;
  }

  // Field name: btn_cc_on_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_cc_on_off = tmp ? true : false;
  }

  // Field name: btn_cc_res
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_cc_res = tmp ? true : false;
  }

  // Field name: btn_cc_cncl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_cc_cncl = tmp ? true : false;
  }

  // Field name: btn_cc_res_cncl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_cc_res_cncl = tmp ? true : false;
  }

  // Field name: btn_cc_res_inc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_cc_res_inc = tmp ? true : false;
  }

  // Field name: btn_cc_res_dec
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_cc_res_dec = tmp ? true : false;
  }

  // Field name: btn_cc_set_inc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_cc_set_inc = tmp ? true : false;
  }

  // Field name: btn_cc_set_dec
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_cc_set_dec = tmp ? true : false;
  }

  // Field name: btn_cc_gap_inc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_cc_gap_inc = tmp ? true : false;
  }

  // Field name: btn_cc_gap_dec
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_cc_gap_dec = tmp ? true : false;
  }

  // Field name: btn_la_on_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_la_on_off = tmp ? true : false;
  }

  // Field name: btn_ld_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_ld_ok = tmp ? true : false;
  }

  // Field name: btn_ld_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_ld_up = tmp ? true : false;
  }

  // Field name: btn_ld_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_ld_down = tmp ? true : false;
  }

  // Field name: btn_ld_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_ld_left = tmp ? true : false;
  }

  // Field name: btn_ld_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_ld_right = tmp ? true : false;
  }

  // Field name: btn_rd_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_rd_ok = tmp ? true : false;
  }

  // Field name: btn_rd_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_rd_up = tmp ? true : false;
  }

  // Field name: btn_rd_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_rd_down = tmp ? true : false;
  }

  // Field name: btn_rd_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_rd_left = tmp ? true : false;
  }

  // Field name: btn_rd_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_rd_right = tmp ? true : false;
  }

  // Field name: btn_vol_inc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_vol_inc = tmp ? true : false;
  }

  // Field name: btn_vol_dec
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_vol_dec = tmp ? true : false;
  }

  // Field name: btn_mute
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_mute = tmp ? true : false;
  }

  // Field name: btn_media
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_media = tmp ? true : false;
  }

  // Field name: btn_prev
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_prev = tmp ? true : false;
  }

  // Field name: btn_next
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_next = tmp ? true : false;
  }

  // Field name: btn_speak
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_speak = tmp ? true : false;
  }

  // Field name: btn_call_start
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_call_start = tmp ? true : false;
  }

  // Field name: btn_call_end
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->btn_call_end = tmp ? true : false;
  }

  // Field name: fault_bus
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fault_bus = tmp ? true : false;
  }

  // Field name: door_driver
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->door_driver = tmp ? true : false;
  }

  // Field name: door_passenger
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->door_passenger = tmp ? true : false;
  }

  // Field name: door_rear_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->door_rear_left = tmp ? true : false;
  }

  // Field name: door_rear_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->door_rear_right = tmp ? true : false;
  }

  // Field name: door_hood
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->door_hood = tmp ? true : false;
  }

  // Field name: door_trunk
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->door_trunk = tmp ? true : false;
  }

  // Field name: passenger_detect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->passenger_detect = tmp ? true : false;
  }

  // Field name: passenger_airbag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->passenger_airbag = tmp ? true : false;
  }

  // Field name: buckle_driver
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->buckle_driver = tmp ? true : false;
  }

  // Field name: buckle_passenger
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->buckle_passenger = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t get_serialized_size_dbw_ford_msgs__msg__Misc1Report(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Misc1Report__ros_msg_type * ros_message = static_cast<const _Misc1Report__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: turn_signal
  current_alignment += get_serialized_size_dbw_ford_msgs__msg__TurnSignal(
    &(ros_message->turn_signal), current_alignment);

  // Field name: high_beam_headlights
  {
    size_t item_size = sizeof(ros_message->high_beam_headlights);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wiper
  current_alignment += get_serialized_size_dbw_ford_msgs__msg__Wiper(
    &(ros_message->wiper), current_alignment);

  // Field name: ambient_light
  current_alignment += get_serialized_size_dbw_ford_msgs__msg__AmbientLight(
    &(ros_message->ambient_light), current_alignment);

  // Field name: outside_temperature
  {
    size_t item_size = sizeof(ros_message->outside_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_on
  {
    size_t item_size = sizeof(ros_message->btn_cc_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_off
  {
    size_t item_size = sizeof(ros_message->btn_cc_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_on_off
  {
    size_t item_size = sizeof(ros_message->btn_cc_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_res
  {
    size_t item_size = sizeof(ros_message->btn_cc_res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_cncl
  {
    size_t item_size = sizeof(ros_message->btn_cc_cncl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_res_cncl
  {
    size_t item_size = sizeof(ros_message->btn_cc_res_cncl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_res_inc
  {
    size_t item_size = sizeof(ros_message->btn_cc_res_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_res_dec
  {
    size_t item_size = sizeof(ros_message->btn_cc_res_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_set_inc
  {
    size_t item_size = sizeof(ros_message->btn_cc_set_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_set_dec
  {
    size_t item_size = sizeof(ros_message->btn_cc_set_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_gap_inc
  {
    size_t item_size = sizeof(ros_message->btn_cc_gap_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_gap_dec
  {
    size_t item_size = sizeof(ros_message->btn_cc_gap_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_la_on_off
  {
    size_t item_size = sizeof(ros_message->btn_la_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_ld_ok
  {
    size_t item_size = sizeof(ros_message->btn_ld_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_ld_up
  {
    size_t item_size = sizeof(ros_message->btn_ld_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_ld_down
  {
    size_t item_size = sizeof(ros_message->btn_ld_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_ld_left
  {
    size_t item_size = sizeof(ros_message->btn_ld_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_ld_right
  {
    size_t item_size = sizeof(ros_message->btn_ld_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_rd_ok
  {
    size_t item_size = sizeof(ros_message->btn_rd_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_rd_up
  {
    size_t item_size = sizeof(ros_message->btn_rd_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_rd_down
  {
    size_t item_size = sizeof(ros_message->btn_rd_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_rd_left
  {
    size_t item_size = sizeof(ros_message->btn_rd_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_rd_right
  {
    size_t item_size = sizeof(ros_message->btn_rd_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_vol_inc
  {
    size_t item_size = sizeof(ros_message->btn_vol_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_vol_dec
  {
    size_t item_size = sizeof(ros_message->btn_vol_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_mute
  {
    size_t item_size = sizeof(ros_message->btn_mute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_media
  {
    size_t item_size = sizeof(ros_message->btn_media);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_prev
  {
    size_t item_size = sizeof(ros_message->btn_prev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_next
  {
    size_t item_size = sizeof(ros_message->btn_next);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_speak
  {
    size_t item_size = sizeof(ros_message->btn_speak);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_call_start
  {
    size_t item_size = sizeof(ros_message->btn_call_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_call_end
  {
    size_t item_size = sizeof(ros_message->btn_call_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fault_bus
  {
    size_t item_size = sizeof(ros_message->fault_bus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: door_driver
  {
    size_t item_size = sizeof(ros_message->door_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: door_passenger
  {
    size_t item_size = sizeof(ros_message->door_passenger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: door_rear_left
  {
    size_t item_size = sizeof(ros_message->door_rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: door_rear_right
  {
    size_t item_size = sizeof(ros_message->door_rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: door_hood
  {
    size_t item_size = sizeof(ros_message->door_hood);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: door_trunk
  {
    size_t item_size = sizeof(ros_message->door_trunk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: passenger_detect
  {
    size_t item_size = sizeof(ros_message->passenger_detect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: passenger_airbag
  {
    size_t item_size = sizeof(ros_message->passenger_airbag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: buckle_driver
  {
    size_t item_size = sizeof(ros_message->buckle_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: buckle_passenger
  {
    size_t item_size = sizeof(ros_message->buckle_passenger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t max_serialized_size_dbw_ford_msgs__msg__Misc1Report(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: turn_signal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dbw_ford_msgs__msg__TurnSignal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: high_beam_headlights
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wiper
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dbw_ford_msgs__msg__Wiper(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ambient_light
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dbw_ford_msgs__msg__AmbientLight(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: outside_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: btn_cc_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_off
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_on_off
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_res
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_cncl
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_res_cncl
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_res_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_res_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_set_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_set_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_gap_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_gap_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_la_on_off
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_ld_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_ld_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_ld_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_ld_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_ld_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_rd_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_rd_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_rd_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_rd_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_rd_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_vol_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_vol_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_mute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_media
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_prev
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_next
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_speak
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_call_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_call_end
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fault_bus
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: door_driver
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: door_passenger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: door_rear_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: door_rear_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: door_hood
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: door_trunk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: passenger_detect
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: passenger_airbag
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: buckle_driver
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: buckle_passenger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dbw_ford_msgs__msg__Misc1Report;
    is_plain =
      (
      offsetof(DataType, buckle_passenger) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
bool cdr_serialize_key_dbw_ford_msgs__msg__Misc1Report(
  const dbw_ford_msgs__msg__Misc1Report * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: turn_signal
  {
    cdr_serialize_key_dbw_ford_msgs__msg__TurnSignal(
      &ros_message->turn_signal, cdr);
  }

  // Field name: high_beam_headlights
  {
    cdr << (ros_message->high_beam_headlights ? true : false);
  }

  // Field name: wiper
  {
    cdr_serialize_key_dbw_ford_msgs__msg__Wiper(
      &ros_message->wiper, cdr);
  }

  // Field name: ambient_light
  {
    cdr_serialize_key_dbw_ford_msgs__msg__AmbientLight(
      &ros_message->ambient_light, cdr);
  }

  // Field name: outside_temperature
  {
    cdr << ros_message->outside_temperature;
  }

  // Field name: btn_cc_on
  {
    cdr << (ros_message->btn_cc_on ? true : false);
  }

  // Field name: btn_cc_off
  {
    cdr << (ros_message->btn_cc_off ? true : false);
  }

  // Field name: btn_cc_on_off
  {
    cdr << (ros_message->btn_cc_on_off ? true : false);
  }

  // Field name: btn_cc_res
  {
    cdr << (ros_message->btn_cc_res ? true : false);
  }

  // Field name: btn_cc_cncl
  {
    cdr << (ros_message->btn_cc_cncl ? true : false);
  }

  // Field name: btn_cc_res_cncl
  {
    cdr << (ros_message->btn_cc_res_cncl ? true : false);
  }

  // Field name: btn_cc_res_inc
  {
    cdr << (ros_message->btn_cc_res_inc ? true : false);
  }

  // Field name: btn_cc_res_dec
  {
    cdr << (ros_message->btn_cc_res_dec ? true : false);
  }

  // Field name: btn_cc_set_inc
  {
    cdr << (ros_message->btn_cc_set_inc ? true : false);
  }

  // Field name: btn_cc_set_dec
  {
    cdr << (ros_message->btn_cc_set_dec ? true : false);
  }

  // Field name: btn_cc_gap_inc
  {
    cdr << (ros_message->btn_cc_gap_inc ? true : false);
  }

  // Field name: btn_cc_gap_dec
  {
    cdr << (ros_message->btn_cc_gap_dec ? true : false);
  }

  // Field name: btn_la_on_off
  {
    cdr << (ros_message->btn_la_on_off ? true : false);
  }

  // Field name: btn_ld_ok
  {
    cdr << (ros_message->btn_ld_ok ? true : false);
  }

  // Field name: btn_ld_up
  {
    cdr << (ros_message->btn_ld_up ? true : false);
  }

  // Field name: btn_ld_down
  {
    cdr << (ros_message->btn_ld_down ? true : false);
  }

  // Field name: btn_ld_left
  {
    cdr << (ros_message->btn_ld_left ? true : false);
  }

  // Field name: btn_ld_right
  {
    cdr << (ros_message->btn_ld_right ? true : false);
  }

  // Field name: btn_rd_ok
  {
    cdr << (ros_message->btn_rd_ok ? true : false);
  }

  // Field name: btn_rd_up
  {
    cdr << (ros_message->btn_rd_up ? true : false);
  }

  // Field name: btn_rd_down
  {
    cdr << (ros_message->btn_rd_down ? true : false);
  }

  // Field name: btn_rd_left
  {
    cdr << (ros_message->btn_rd_left ? true : false);
  }

  // Field name: btn_rd_right
  {
    cdr << (ros_message->btn_rd_right ? true : false);
  }

  // Field name: btn_vol_inc
  {
    cdr << (ros_message->btn_vol_inc ? true : false);
  }

  // Field name: btn_vol_dec
  {
    cdr << (ros_message->btn_vol_dec ? true : false);
  }

  // Field name: btn_mute
  {
    cdr << (ros_message->btn_mute ? true : false);
  }

  // Field name: btn_media
  {
    cdr << (ros_message->btn_media ? true : false);
  }

  // Field name: btn_prev
  {
    cdr << (ros_message->btn_prev ? true : false);
  }

  // Field name: btn_next
  {
    cdr << (ros_message->btn_next ? true : false);
  }

  // Field name: btn_speak
  {
    cdr << (ros_message->btn_speak ? true : false);
  }

  // Field name: btn_call_start
  {
    cdr << (ros_message->btn_call_start ? true : false);
  }

  // Field name: btn_call_end
  {
    cdr << (ros_message->btn_call_end ? true : false);
  }

  // Field name: fault_bus
  {
    cdr << (ros_message->fault_bus ? true : false);
  }

  // Field name: door_driver
  {
    cdr << (ros_message->door_driver ? true : false);
  }

  // Field name: door_passenger
  {
    cdr << (ros_message->door_passenger ? true : false);
  }

  // Field name: door_rear_left
  {
    cdr << (ros_message->door_rear_left ? true : false);
  }

  // Field name: door_rear_right
  {
    cdr << (ros_message->door_rear_right ? true : false);
  }

  // Field name: door_hood
  {
    cdr << (ros_message->door_hood ? true : false);
  }

  // Field name: door_trunk
  {
    cdr << (ros_message->door_trunk ? true : false);
  }

  // Field name: passenger_detect
  {
    cdr << (ros_message->passenger_detect ? true : false);
  }

  // Field name: passenger_airbag
  {
    cdr << (ros_message->passenger_airbag ? true : false);
  }

  // Field name: buckle_driver
  {
    cdr << (ros_message->buckle_driver ? true : false);
  }

  // Field name: buckle_passenger
  {
    cdr << (ros_message->buckle_passenger ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t get_serialized_size_key_dbw_ford_msgs__msg__Misc1Report(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Misc1Report__ros_msg_type * ros_message = static_cast<const _Misc1Report__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: turn_signal
  current_alignment += get_serialized_size_key_dbw_ford_msgs__msg__TurnSignal(
    &(ros_message->turn_signal), current_alignment);

  // Field name: high_beam_headlights
  {
    size_t item_size = sizeof(ros_message->high_beam_headlights);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wiper
  current_alignment += get_serialized_size_key_dbw_ford_msgs__msg__Wiper(
    &(ros_message->wiper), current_alignment);

  // Field name: ambient_light
  current_alignment += get_serialized_size_key_dbw_ford_msgs__msg__AmbientLight(
    &(ros_message->ambient_light), current_alignment);

  // Field name: outside_temperature
  {
    size_t item_size = sizeof(ros_message->outside_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_on
  {
    size_t item_size = sizeof(ros_message->btn_cc_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_off
  {
    size_t item_size = sizeof(ros_message->btn_cc_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_on_off
  {
    size_t item_size = sizeof(ros_message->btn_cc_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_res
  {
    size_t item_size = sizeof(ros_message->btn_cc_res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_cncl
  {
    size_t item_size = sizeof(ros_message->btn_cc_cncl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_res_cncl
  {
    size_t item_size = sizeof(ros_message->btn_cc_res_cncl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_res_inc
  {
    size_t item_size = sizeof(ros_message->btn_cc_res_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_res_dec
  {
    size_t item_size = sizeof(ros_message->btn_cc_res_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_set_inc
  {
    size_t item_size = sizeof(ros_message->btn_cc_set_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_set_dec
  {
    size_t item_size = sizeof(ros_message->btn_cc_set_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_gap_inc
  {
    size_t item_size = sizeof(ros_message->btn_cc_gap_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_cc_gap_dec
  {
    size_t item_size = sizeof(ros_message->btn_cc_gap_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_la_on_off
  {
    size_t item_size = sizeof(ros_message->btn_la_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_ld_ok
  {
    size_t item_size = sizeof(ros_message->btn_ld_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_ld_up
  {
    size_t item_size = sizeof(ros_message->btn_ld_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_ld_down
  {
    size_t item_size = sizeof(ros_message->btn_ld_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_ld_left
  {
    size_t item_size = sizeof(ros_message->btn_ld_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_ld_right
  {
    size_t item_size = sizeof(ros_message->btn_ld_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_rd_ok
  {
    size_t item_size = sizeof(ros_message->btn_rd_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_rd_up
  {
    size_t item_size = sizeof(ros_message->btn_rd_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_rd_down
  {
    size_t item_size = sizeof(ros_message->btn_rd_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_rd_left
  {
    size_t item_size = sizeof(ros_message->btn_rd_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_rd_right
  {
    size_t item_size = sizeof(ros_message->btn_rd_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_vol_inc
  {
    size_t item_size = sizeof(ros_message->btn_vol_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_vol_dec
  {
    size_t item_size = sizeof(ros_message->btn_vol_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_mute
  {
    size_t item_size = sizeof(ros_message->btn_mute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_media
  {
    size_t item_size = sizeof(ros_message->btn_media);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_prev
  {
    size_t item_size = sizeof(ros_message->btn_prev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_next
  {
    size_t item_size = sizeof(ros_message->btn_next);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_speak
  {
    size_t item_size = sizeof(ros_message->btn_speak);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_call_start
  {
    size_t item_size = sizeof(ros_message->btn_call_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: btn_call_end
  {
    size_t item_size = sizeof(ros_message->btn_call_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fault_bus
  {
    size_t item_size = sizeof(ros_message->fault_bus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: door_driver
  {
    size_t item_size = sizeof(ros_message->door_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: door_passenger
  {
    size_t item_size = sizeof(ros_message->door_passenger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: door_rear_left
  {
    size_t item_size = sizeof(ros_message->door_rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: door_rear_right
  {
    size_t item_size = sizeof(ros_message->door_rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: door_hood
  {
    size_t item_size = sizeof(ros_message->door_hood);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: door_trunk
  {
    size_t item_size = sizeof(ros_message->door_trunk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: passenger_detect
  {
    size_t item_size = sizeof(ros_message->passenger_detect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: passenger_airbag
  {
    size_t item_size = sizeof(ros_message->passenger_airbag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: buckle_driver
  {
    size_t item_size = sizeof(ros_message->buckle_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: buckle_passenger
  {
    size_t item_size = sizeof(ros_message->buckle_passenger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t max_serialized_size_key_dbw_ford_msgs__msg__Misc1Report(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: turn_signal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dbw_ford_msgs__msg__TurnSignal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: high_beam_headlights
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wiper
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dbw_ford_msgs__msg__Wiper(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ambient_light
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dbw_ford_msgs__msg__AmbientLight(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: outside_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: btn_cc_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_off
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_on_off
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_res
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_cncl
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_res_cncl
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_res_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_res_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_set_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_set_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_gap_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_cc_gap_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_la_on_off
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_ld_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_ld_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_ld_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_ld_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_ld_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_rd_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_rd_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_rd_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_rd_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_rd_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_vol_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_vol_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_mute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_media
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_prev
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_next
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_speak
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_call_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: btn_call_end
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fault_bus
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: door_driver
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: door_passenger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: door_rear_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: door_rear_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: door_hood
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: door_trunk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: passenger_detect
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: passenger_airbag
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: buckle_driver
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: buckle_passenger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dbw_ford_msgs__msg__Misc1Report;
    is_plain =
      (
      offsetof(DataType, buckle_passenger) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Misc1Report__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const dbw_ford_msgs__msg__Misc1Report * ros_message = static_cast<const dbw_ford_msgs__msg__Misc1Report *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_dbw_ford_msgs__msg__Misc1Report(ros_message, cdr);
}

static bool _Misc1Report__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  dbw_ford_msgs__msg__Misc1Report * ros_message = static_cast<dbw_ford_msgs__msg__Misc1Report *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_dbw_ford_msgs__msg__Misc1Report(cdr, ros_message);
}

static uint32_t _Misc1Report__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dbw_ford_msgs__msg__Misc1Report(
      untyped_ros_message, 0));
}

static size_t _Misc1Report__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dbw_ford_msgs__msg__Misc1Report(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Misc1Report = {
  "dbw_ford_msgs::msg",
  "Misc1Report",
  _Misc1Report__cdr_serialize,
  _Misc1Report__cdr_deserialize,
  _Misc1Report__get_serialized_size,
  _Misc1Report__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Misc1Report__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Misc1Report,
  get_message_typesupport_handle_function,
  &dbw_ford_msgs__msg__Misc1Report__get_type_hash,
  &dbw_ford_msgs__msg__Misc1Report__get_type_description,
  &dbw_ford_msgs__msg__Misc1Report__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, Misc1Report)() {
  return &_Misc1Report__type_support;
}

#if defined(__cplusplus)
}
#endif
