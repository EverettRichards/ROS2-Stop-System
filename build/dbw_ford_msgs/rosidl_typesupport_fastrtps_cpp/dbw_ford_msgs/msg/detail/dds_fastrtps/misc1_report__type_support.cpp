// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dbw_ford_msgs:msg/Misc1Report.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/misc1_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dbw_ford_msgs/msg/detail/misc1_report__functions.h"
#include "dbw_ford_msgs/msg/detail/misc1_report__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace dbw_ford_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const dbw_ford_msgs::msg::TurnSignal &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dbw_ford_msgs::msg::TurnSignal &);
size_t get_serialized_size(
  const dbw_ford_msgs::msg::TurnSignal &,
  size_t current_alignment);
size_t
max_serialized_size_TurnSignal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const dbw_ford_msgs::msg::TurnSignal &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const dbw_ford_msgs::msg::TurnSignal &,
  size_t current_alignment);
size_t
max_serialized_size_key_TurnSignal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace dbw_ford_msgs

namespace dbw_ford_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const dbw_ford_msgs::msg::Wiper &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dbw_ford_msgs::msg::Wiper &);
size_t get_serialized_size(
  const dbw_ford_msgs::msg::Wiper &,
  size_t current_alignment);
size_t
max_serialized_size_Wiper(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const dbw_ford_msgs::msg::Wiper &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const dbw_ford_msgs::msg::Wiper &,
  size_t current_alignment);
size_t
max_serialized_size_key_Wiper(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace dbw_ford_msgs

namespace dbw_ford_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const dbw_ford_msgs::msg::AmbientLight &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dbw_ford_msgs::msg::AmbientLight &);
size_t get_serialized_size(
  const dbw_ford_msgs::msg::AmbientLight &,
  size_t current_alignment);
size_t
max_serialized_size_AmbientLight(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const dbw_ford_msgs::msg::AmbientLight &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const dbw_ford_msgs::msg::AmbientLight &,
  size_t current_alignment);
size_t
max_serialized_size_key_AmbientLight(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace dbw_ford_msgs


namespace dbw_ford_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
cdr_serialize(
  const dbw_ford_msgs::msg::Misc1Report & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: turn_signal
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.turn_signal,
    cdr);

  // Member: high_beam_headlights
  cdr << (ros_message.high_beam_headlights ? true : false);

  // Member: wiper
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.wiper,
    cdr);

  // Member: ambient_light
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ambient_light,
    cdr);

  // Member: outside_temperature
  cdr << ros_message.outside_temperature;

  // Member: btn_cc_on
  cdr << (ros_message.btn_cc_on ? true : false);

  // Member: btn_cc_off
  cdr << (ros_message.btn_cc_off ? true : false);

  // Member: btn_cc_on_off
  cdr << (ros_message.btn_cc_on_off ? true : false);

  // Member: btn_cc_res
  cdr << (ros_message.btn_cc_res ? true : false);

  // Member: btn_cc_cncl
  cdr << (ros_message.btn_cc_cncl ? true : false);

  // Member: btn_cc_res_cncl
  cdr << (ros_message.btn_cc_res_cncl ? true : false);

  // Member: btn_cc_res_inc
  cdr << (ros_message.btn_cc_res_inc ? true : false);

  // Member: btn_cc_res_dec
  cdr << (ros_message.btn_cc_res_dec ? true : false);

  // Member: btn_cc_set_inc
  cdr << (ros_message.btn_cc_set_inc ? true : false);

  // Member: btn_cc_set_dec
  cdr << (ros_message.btn_cc_set_dec ? true : false);

  // Member: btn_cc_gap_inc
  cdr << (ros_message.btn_cc_gap_inc ? true : false);

  // Member: btn_cc_gap_dec
  cdr << (ros_message.btn_cc_gap_dec ? true : false);

  // Member: btn_la_on_off
  cdr << (ros_message.btn_la_on_off ? true : false);

  // Member: btn_ld_ok
  cdr << (ros_message.btn_ld_ok ? true : false);

  // Member: btn_ld_up
  cdr << (ros_message.btn_ld_up ? true : false);

  // Member: btn_ld_down
  cdr << (ros_message.btn_ld_down ? true : false);

  // Member: btn_ld_left
  cdr << (ros_message.btn_ld_left ? true : false);

  // Member: btn_ld_right
  cdr << (ros_message.btn_ld_right ? true : false);

  // Member: btn_rd_ok
  cdr << (ros_message.btn_rd_ok ? true : false);

  // Member: btn_rd_up
  cdr << (ros_message.btn_rd_up ? true : false);

  // Member: btn_rd_down
  cdr << (ros_message.btn_rd_down ? true : false);

  // Member: btn_rd_left
  cdr << (ros_message.btn_rd_left ? true : false);

  // Member: btn_rd_right
  cdr << (ros_message.btn_rd_right ? true : false);

  // Member: btn_vol_inc
  cdr << (ros_message.btn_vol_inc ? true : false);

  // Member: btn_vol_dec
  cdr << (ros_message.btn_vol_dec ? true : false);

  // Member: btn_mute
  cdr << (ros_message.btn_mute ? true : false);

  // Member: btn_media
  cdr << (ros_message.btn_media ? true : false);

  // Member: btn_prev
  cdr << (ros_message.btn_prev ? true : false);

  // Member: btn_next
  cdr << (ros_message.btn_next ? true : false);

  // Member: btn_speak
  cdr << (ros_message.btn_speak ? true : false);

  // Member: btn_call_start
  cdr << (ros_message.btn_call_start ? true : false);

  // Member: btn_call_end
  cdr << (ros_message.btn_call_end ? true : false);

  // Member: fault_bus
  cdr << (ros_message.fault_bus ? true : false);

  // Member: door_driver
  cdr << (ros_message.door_driver ? true : false);

  // Member: door_passenger
  cdr << (ros_message.door_passenger ? true : false);

  // Member: door_rear_left
  cdr << (ros_message.door_rear_left ? true : false);

  // Member: door_rear_right
  cdr << (ros_message.door_rear_right ? true : false);

  // Member: door_hood
  cdr << (ros_message.door_hood ? true : false);

  // Member: door_trunk
  cdr << (ros_message.door_trunk ? true : false);

  // Member: passenger_detect
  cdr << (ros_message.passenger_detect ? true : false);

  // Member: passenger_airbag
  cdr << (ros_message.passenger_airbag ? true : false);

  // Member: buckle_driver
  cdr << (ros_message.buckle_driver ? true : false);

  // Member: buckle_passenger
  cdr << (ros_message.buckle_passenger ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs::msg::Misc1Report & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: turn_signal
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.turn_signal);

  // Member: high_beam_headlights
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.high_beam_headlights = tmp ? true : false;
  }

  // Member: wiper
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.wiper);

  // Member: ambient_light
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ambient_light);

  // Member: outside_temperature
  cdr >> ros_message.outside_temperature;

  // Member: btn_cc_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_cc_on = tmp ? true : false;
  }

  // Member: btn_cc_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_cc_off = tmp ? true : false;
  }

  // Member: btn_cc_on_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_cc_on_off = tmp ? true : false;
  }

  // Member: btn_cc_res
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_cc_res = tmp ? true : false;
  }

  // Member: btn_cc_cncl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_cc_cncl = tmp ? true : false;
  }

  // Member: btn_cc_res_cncl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_cc_res_cncl = tmp ? true : false;
  }

  // Member: btn_cc_res_inc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_cc_res_inc = tmp ? true : false;
  }

  // Member: btn_cc_res_dec
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_cc_res_dec = tmp ? true : false;
  }

  // Member: btn_cc_set_inc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_cc_set_inc = tmp ? true : false;
  }

  // Member: btn_cc_set_dec
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_cc_set_dec = tmp ? true : false;
  }

  // Member: btn_cc_gap_inc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_cc_gap_inc = tmp ? true : false;
  }

  // Member: btn_cc_gap_dec
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_cc_gap_dec = tmp ? true : false;
  }

  // Member: btn_la_on_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_la_on_off = tmp ? true : false;
  }

  // Member: btn_ld_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_ld_ok = tmp ? true : false;
  }

  // Member: btn_ld_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_ld_up = tmp ? true : false;
  }

  // Member: btn_ld_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_ld_down = tmp ? true : false;
  }

  // Member: btn_ld_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_ld_left = tmp ? true : false;
  }

  // Member: btn_ld_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_ld_right = tmp ? true : false;
  }

  // Member: btn_rd_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_rd_ok = tmp ? true : false;
  }

  // Member: btn_rd_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_rd_up = tmp ? true : false;
  }

  // Member: btn_rd_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_rd_down = tmp ? true : false;
  }

  // Member: btn_rd_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_rd_left = tmp ? true : false;
  }

  // Member: btn_rd_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_rd_right = tmp ? true : false;
  }

  // Member: btn_vol_inc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_vol_inc = tmp ? true : false;
  }

  // Member: btn_vol_dec
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_vol_dec = tmp ? true : false;
  }

  // Member: btn_mute
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_mute = tmp ? true : false;
  }

  // Member: btn_media
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_media = tmp ? true : false;
  }

  // Member: btn_prev
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_prev = tmp ? true : false;
  }

  // Member: btn_next
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_next = tmp ? true : false;
  }

  // Member: btn_speak
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_speak = tmp ? true : false;
  }

  // Member: btn_call_start
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_call_start = tmp ? true : false;
  }

  // Member: btn_call_end
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.btn_call_end = tmp ? true : false;
  }

  // Member: fault_bus
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fault_bus = tmp ? true : false;
  }

  // Member: door_driver
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.door_driver = tmp ? true : false;
  }

  // Member: door_passenger
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.door_passenger = tmp ? true : false;
  }

  // Member: door_rear_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.door_rear_left = tmp ? true : false;
  }

  // Member: door_rear_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.door_rear_right = tmp ? true : false;
  }

  // Member: door_hood
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.door_hood = tmp ? true : false;
  }

  // Member: door_trunk
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.door_trunk = tmp ? true : false;
  }

  // Member: passenger_detect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.passenger_detect = tmp ? true : false;
  }

  // Member: passenger_airbag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.passenger_airbag = tmp ? true : false;
  }

  // Member: buckle_driver
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.buckle_driver = tmp ? true : false;
  }

  // Member: buckle_passenger
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.buckle_passenger = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
get_serialized_size(
  const dbw_ford_msgs::msg::Misc1Report & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: turn_signal
  current_alignment +=
    dbw_ford_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.turn_signal, current_alignment);

  // Member: high_beam_headlights
  {
    size_t item_size = sizeof(ros_message.high_beam_headlights);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wiper
  current_alignment +=
    dbw_ford_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.wiper, current_alignment);

  // Member: ambient_light
  current_alignment +=
    dbw_ford_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ambient_light, current_alignment);

  // Member: outside_temperature
  {
    size_t item_size = sizeof(ros_message.outside_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_on
  {
    size_t item_size = sizeof(ros_message.btn_cc_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_off
  {
    size_t item_size = sizeof(ros_message.btn_cc_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_on_off
  {
    size_t item_size = sizeof(ros_message.btn_cc_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_res
  {
    size_t item_size = sizeof(ros_message.btn_cc_res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_cncl
  {
    size_t item_size = sizeof(ros_message.btn_cc_cncl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_res_cncl
  {
    size_t item_size = sizeof(ros_message.btn_cc_res_cncl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_res_inc
  {
    size_t item_size = sizeof(ros_message.btn_cc_res_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_res_dec
  {
    size_t item_size = sizeof(ros_message.btn_cc_res_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_set_inc
  {
    size_t item_size = sizeof(ros_message.btn_cc_set_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_set_dec
  {
    size_t item_size = sizeof(ros_message.btn_cc_set_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_gap_inc
  {
    size_t item_size = sizeof(ros_message.btn_cc_gap_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_gap_dec
  {
    size_t item_size = sizeof(ros_message.btn_cc_gap_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_la_on_off
  {
    size_t item_size = sizeof(ros_message.btn_la_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_ld_ok
  {
    size_t item_size = sizeof(ros_message.btn_ld_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_ld_up
  {
    size_t item_size = sizeof(ros_message.btn_ld_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_ld_down
  {
    size_t item_size = sizeof(ros_message.btn_ld_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_ld_left
  {
    size_t item_size = sizeof(ros_message.btn_ld_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_ld_right
  {
    size_t item_size = sizeof(ros_message.btn_ld_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_rd_ok
  {
    size_t item_size = sizeof(ros_message.btn_rd_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_rd_up
  {
    size_t item_size = sizeof(ros_message.btn_rd_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_rd_down
  {
    size_t item_size = sizeof(ros_message.btn_rd_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_rd_left
  {
    size_t item_size = sizeof(ros_message.btn_rd_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_rd_right
  {
    size_t item_size = sizeof(ros_message.btn_rd_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_vol_inc
  {
    size_t item_size = sizeof(ros_message.btn_vol_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_vol_dec
  {
    size_t item_size = sizeof(ros_message.btn_vol_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_mute
  {
    size_t item_size = sizeof(ros_message.btn_mute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_media
  {
    size_t item_size = sizeof(ros_message.btn_media);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_prev
  {
    size_t item_size = sizeof(ros_message.btn_prev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_next
  {
    size_t item_size = sizeof(ros_message.btn_next);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_speak
  {
    size_t item_size = sizeof(ros_message.btn_speak);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_call_start
  {
    size_t item_size = sizeof(ros_message.btn_call_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_call_end
  {
    size_t item_size = sizeof(ros_message.btn_call_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fault_bus
  {
    size_t item_size = sizeof(ros_message.fault_bus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: door_driver
  {
    size_t item_size = sizeof(ros_message.door_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: door_passenger
  {
    size_t item_size = sizeof(ros_message.door_passenger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: door_rear_left
  {
    size_t item_size = sizeof(ros_message.door_rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: door_rear_right
  {
    size_t item_size = sizeof(ros_message.door_rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: door_hood
  {
    size_t item_size = sizeof(ros_message.door_hood);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: door_trunk
  {
    size_t item_size = sizeof(ros_message.door_trunk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: passenger_detect
  {
    size_t item_size = sizeof(ros_message.passenger_detect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: passenger_airbag
  {
    size_t item_size = sizeof(ros_message.passenger_airbag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: buckle_driver
  {
    size_t item_size = sizeof(ros_message.buckle_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: buckle_passenger
  {
    size_t item_size = sizeof(ros_message.buckle_passenger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
max_serialized_size_Misc1Report(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: turn_signal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dbw_ford_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TurnSignal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: high_beam_headlights
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: wiper
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dbw_ford_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Wiper(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: ambient_light
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dbw_ford_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AmbientLight(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: outside_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: btn_cc_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_cc_off
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_cc_on_off
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_cc_res
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_cc_cncl
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_cc_res_cncl
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_cc_res_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_cc_res_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_cc_set_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_cc_set_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_cc_gap_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_cc_gap_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_la_on_off
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_ld_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_ld_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_ld_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_ld_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_ld_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_rd_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_rd_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_rd_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_rd_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_rd_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_vol_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_vol_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_mute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_media
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_prev
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_next
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_speak
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_call_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: btn_call_end
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: fault_bus
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: door_driver
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: door_passenger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: door_rear_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: door_rear_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: door_hood
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: door_trunk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: passenger_detect
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: passenger_airbag
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: buckle_driver
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: buckle_passenger
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
    using DataType = dbw_ford_msgs::msg::Misc1Report;
    is_plain =
      (
      offsetof(DataType, buckle_passenger) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
cdr_serialize_key(
  const dbw_ford_msgs::msg::Misc1Report & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: turn_signal
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.turn_signal,
    cdr);

  // Member: high_beam_headlights
  cdr << (ros_message.high_beam_headlights ? true : false);

  // Member: wiper
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.wiper,
    cdr);

  // Member: ambient_light
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.ambient_light,
    cdr);

  // Member: outside_temperature
  cdr << ros_message.outside_temperature;

  // Member: btn_cc_on
  cdr << (ros_message.btn_cc_on ? true : false);

  // Member: btn_cc_off
  cdr << (ros_message.btn_cc_off ? true : false);

  // Member: btn_cc_on_off
  cdr << (ros_message.btn_cc_on_off ? true : false);

  // Member: btn_cc_res
  cdr << (ros_message.btn_cc_res ? true : false);

  // Member: btn_cc_cncl
  cdr << (ros_message.btn_cc_cncl ? true : false);

  // Member: btn_cc_res_cncl
  cdr << (ros_message.btn_cc_res_cncl ? true : false);

  // Member: btn_cc_res_inc
  cdr << (ros_message.btn_cc_res_inc ? true : false);

  // Member: btn_cc_res_dec
  cdr << (ros_message.btn_cc_res_dec ? true : false);

  // Member: btn_cc_set_inc
  cdr << (ros_message.btn_cc_set_inc ? true : false);

  // Member: btn_cc_set_dec
  cdr << (ros_message.btn_cc_set_dec ? true : false);

  // Member: btn_cc_gap_inc
  cdr << (ros_message.btn_cc_gap_inc ? true : false);

  // Member: btn_cc_gap_dec
  cdr << (ros_message.btn_cc_gap_dec ? true : false);

  // Member: btn_la_on_off
  cdr << (ros_message.btn_la_on_off ? true : false);

  // Member: btn_ld_ok
  cdr << (ros_message.btn_ld_ok ? true : false);

  // Member: btn_ld_up
  cdr << (ros_message.btn_ld_up ? true : false);

  // Member: btn_ld_down
  cdr << (ros_message.btn_ld_down ? true : false);

  // Member: btn_ld_left
  cdr << (ros_message.btn_ld_left ? true : false);

  // Member: btn_ld_right
  cdr << (ros_message.btn_ld_right ? true : false);

  // Member: btn_rd_ok
  cdr << (ros_message.btn_rd_ok ? true : false);

  // Member: btn_rd_up
  cdr << (ros_message.btn_rd_up ? true : false);

  // Member: btn_rd_down
  cdr << (ros_message.btn_rd_down ? true : false);

  // Member: btn_rd_left
  cdr << (ros_message.btn_rd_left ? true : false);

  // Member: btn_rd_right
  cdr << (ros_message.btn_rd_right ? true : false);

  // Member: btn_vol_inc
  cdr << (ros_message.btn_vol_inc ? true : false);

  // Member: btn_vol_dec
  cdr << (ros_message.btn_vol_dec ? true : false);

  // Member: btn_mute
  cdr << (ros_message.btn_mute ? true : false);

  // Member: btn_media
  cdr << (ros_message.btn_media ? true : false);

  // Member: btn_prev
  cdr << (ros_message.btn_prev ? true : false);

  // Member: btn_next
  cdr << (ros_message.btn_next ? true : false);

  // Member: btn_speak
  cdr << (ros_message.btn_speak ? true : false);

  // Member: btn_call_start
  cdr << (ros_message.btn_call_start ? true : false);

  // Member: btn_call_end
  cdr << (ros_message.btn_call_end ? true : false);

  // Member: fault_bus
  cdr << (ros_message.fault_bus ? true : false);

  // Member: door_driver
  cdr << (ros_message.door_driver ? true : false);

  // Member: door_passenger
  cdr << (ros_message.door_passenger ? true : false);

  // Member: door_rear_left
  cdr << (ros_message.door_rear_left ? true : false);

  // Member: door_rear_right
  cdr << (ros_message.door_rear_right ? true : false);

  // Member: door_hood
  cdr << (ros_message.door_hood ? true : false);

  // Member: door_trunk
  cdr << (ros_message.door_trunk ? true : false);

  // Member: passenger_detect
  cdr << (ros_message.passenger_detect ? true : false);

  // Member: passenger_airbag
  cdr << (ros_message.passenger_airbag ? true : false);

  // Member: buckle_driver
  cdr << (ros_message.buckle_driver ? true : false);

  // Member: buckle_passenger
  cdr << (ros_message.buckle_passenger ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
get_serialized_size_key(
  const dbw_ford_msgs::msg::Misc1Report & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: turn_signal
  current_alignment +=
    dbw_ford_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.turn_signal, current_alignment);

  // Member: high_beam_headlights
  {
    size_t item_size = sizeof(ros_message.high_beam_headlights);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wiper
  current_alignment +=
    dbw_ford_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.wiper, current_alignment);

  // Member: ambient_light
  current_alignment +=
    dbw_ford_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.ambient_light, current_alignment);

  // Member: outside_temperature
  {
    size_t item_size = sizeof(ros_message.outside_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_on
  {
    size_t item_size = sizeof(ros_message.btn_cc_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_off
  {
    size_t item_size = sizeof(ros_message.btn_cc_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_on_off
  {
    size_t item_size = sizeof(ros_message.btn_cc_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_res
  {
    size_t item_size = sizeof(ros_message.btn_cc_res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_cncl
  {
    size_t item_size = sizeof(ros_message.btn_cc_cncl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_res_cncl
  {
    size_t item_size = sizeof(ros_message.btn_cc_res_cncl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_res_inc
  {
    size_t item_size = sizeof(ros_message.btn_cc_res_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_res_dec
  {
    size_t item_size = sizeof(ros_message.btn_cc_res_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_set_inc
  {
    size_t item_size = sizeof(ros_message.btn_cc_set_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_set_dec
  {
    size_t item_size = sizeof(ros_message.btn_cc_set_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_gap_inc
  {
    size_t item_size = sizeof(ros_message.btn_cc_gap_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_cc_gap_dec
  {
    size_t item_size = sizeof(ros_message.btn_cc_gap_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_la_on_off
  {
    size_t item_size = sizeof(ros_message.btn_la_on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_ld_ok
  {
    size_t item_size = sizeof(ros_message.btn_ld_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_ld_up
  {
    size_t item_size = sizeof(ros_message.btn_ld_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_ld_down
  {
    size_t item_size = sizeof(ros_message.btn_ld_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_ld_left
  {
    size_t item_size = sizeof(ros_message.btn_ld_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_ld_right
  {
    size_t item_size = sizeof(ros_message.btn_ld_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_rd_ok
  {
    size_t item_size = sizeof(ros_message.btn_rd_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_rd_up
  {
    size_t item_size = sizeof(ros_message.btn_rd_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_rd_down
  {
    size_t item_size = sizeof(ros_message.btn_rd_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_rd_left
  {
    size_t item_size = sizeof(ros_message.btn_rd_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_rd_right
  {
    size_t item_size = sizeof(ros_message.btn_rd_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_vol_inc
  {
    size_t item_size = sizeof(ros_message.btn_vol_inc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_vol_dec
  {
    size_t item_size = sizeof(ros_message.btn_vol_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_mute
  {
    size_t item_size = sizeof(ros_message.btn_mute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_media
  {
    size_t item_size = sizeof(ros_message.btn_media);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_prev
  {
    size_t item_size = sizeof(ros_message.btn_prev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_next
  {
    size_t item_size = sizeof(ros_message.btn_next);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_speak
  {
    size_t item_size = sizeof(ros_message.btn_speak);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_call_start
  {
    size_t item_size = sizeof(ros_message.btn_call_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: btn_call_end
  {
    size_t item_size = sizeof(ros_message.btn_call_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fault_bus
  {
    size_t item_size = sizeof(ros_message.fault_bus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: door_driver
  {
    size_t item_size = sizeof(ros_message.door_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: door_passenger
  {
    size_t item_size = sizeof(ros_message.door_passenger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: door_rear_left
  {
    size_t item_size = sizeof(ros_message.door_rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: door_rear_right
  {
    size_t item_size = sizeof(ros_message.door_rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: door_hood
  {
    size_t item_size = sizeof(ros_message.door_hood);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: door_trunk
  {
    size_t item_size = sizeof(ros_message.door_trunk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: passenger_detect
  {
    size_t item_size = sizeof(ros_message.passenger_detect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: passenger_airbag
  {
    size_t item_size = sizeof(ros_message.passenger_airbag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: buckle_driver
  {
    size_t item_size = sizeof(ros_message.buckle_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: buckle_passenger
  {
    size_t item_size = sizeof(ros_message.buckle_passenger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
max_serialized_size_key_Misc1Report(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: turn_signal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dbw_ford_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_TurnSignal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: high_beam_headlights
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wiper
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dbw_ford_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Wiper(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ambient_light
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dbw_ford_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_AmbientLight(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: outside_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: btn_cc_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_cc_off
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_cc_on_off
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_cc_res
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_cc_cncl
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_cc_res_cncl
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_cc_res_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_cc_res_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_cc_set_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_cc_set_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_cc_gap_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_cc_gap_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_la_on_off
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_ld_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_ld_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_ld_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_ld_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_ld_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_rd_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_rd_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_rd_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_rd_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_rd_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_vol_inc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_vol_dec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_mute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_media
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_prev
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_next
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_speak
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_call_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: btn_call_end
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fault_bus
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_driver
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_passenger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_rear_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_rear_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_hood
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_trunk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: passenger_detect
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: passenger_airbag
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: buckle_driver
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: buckle_passenger
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
    using DataType = dbw_ford_msgs::msg::Misc1Report;
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
  auto typed_message =
    static_cast<const dbw_ford_msgs::msg::Misc1Report *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Misc1Report__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dbw_ford_msgs::msg::Misc1Report *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Misc1Report__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dbw_ford_msgs::msg::Misc1Report *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Misc1Report__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Misc1Report(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Misc1Report__callbacks = {
  "dbw_ford_msgs::msg",
  "Misc1Report",
  _Misc1Report__cdr_serialize,
  _Misc1Report__cdr_deserialize,
  _Misc1Report__get_serialized_size,
  _Misc1Report__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Misc1Report__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Misc1Report__callbacks,
  get_message_typesupport_handle_function,
  &dbw_ford_msgs__msg__Misc1Report__get_type_hash,
  &dbw_ford_msgs__msg__Misc1Report__get_type_description,
  &dbw_ford_msgs__msg__Misc1Report__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dbw_ford_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dbw_ford_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<dbw_ford_msgs::msg::Misc1Report>()
{
  return &dbw_ford_msgs::msg::typesupport_fastrtps_cpp::_Misc1Report__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dbw_ford_msgs, msg, Misc1Report)() {
  return &dbw_ford_msgs::msg::typesupport_fastrtps_cpp::_Misc1Report__handle;
}

#ifdef __cplusplus
}
#endif
