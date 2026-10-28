// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dbw_ford_msgs:msg/ThrottleInfoReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/throttle_info_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dbw_ford_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dbw_ford_msgs/msg/detail/throttle_info_report__struct.h"
#include "dbw_ford_msgs/msg/detail/throttle_info_report__functions.h"
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

#include "dbw_ford_msgs/msg/detail/gear_num__functions.h"  // gear_num
#include "dbw_ford_msgs/msg/detail/ignition__functions.h"  // ignition
#include "dbw_ford_msgs/msg/detail/one_pedal__functions.h"  // one_pedal
#include "dbw_ford_msgs/msg/detail/quality_factor__functions.h"  // throttle_pedal_qf
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_dbw_ford_msgs__msg__GearNum(
  const dbw_ford_msgs__msg__GearNum * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dbw_ford_msgs__msg__GearNum(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__GearNum * ros_message);

size_t get_serialized_size_dbw_ford_msgs__msg__GearNum(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dbw_ford_msgs__msg__GearNum(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dbw_ford_msgs__msg__GearNum(
  const dbw_ford_msgs__msg__GearNum * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dbw_ford_msgs__msg__GearNum(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dbw_ford_msgs__msg__GearNum(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, GearNum)();

bool cdr_serialize_dbw_ford_msgs__msg__Ignition(
  const dbw_ford_msgs__msg__Ignition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dbw_ford_msgs__msg__Ignition(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__Ignition * ros_message);

size_t get_serialized_size_dbw_ford_msgs__msg__Ignition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dbw_ford_msgs__msg__Ignition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dbw_ford_msgs__msg__Ignition(
  const dbw_ford_msgs__msg__Ignition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dbw_ford_msgs__msg__Ignition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dbw_ford_msgs__msg__Ignition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, Ignition)();

bool cdr_serialize_dbw_ford_msgs__msg__OnePedal(
  const dbw_ford_msgs__msg__OnePedal * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dbw_ford_msgs__msg__OnePedal(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__OnePedal * ros_message);

size_t get_serialized_size_dbw_ford_msgs__msg__OnePedal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dbw_ford_msgs__msg__OnePedal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dbw_ford_msgs__msg__OnePedal(
  const dbw_ford_msgs__msg__OnePedal * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dbw_ford_msgs__msg__OnePedal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dbw_ford_msgs__msg__OnePedal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, OnePedal)();

bool cdr_serialize_dbw_ford_msgs__msg__QualityFactor(
  const dbw_ford_msgs__msg__QualityFactor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dbw_ford_msgs__msg__QualityFactor(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__QualityFactor * ros_message);

size_t get_serialized_size_dbw_ford_msgs__msg__QualityFactor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dbw_ford_msgs__msg__QualityFactor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dbw_ford_msgs__msg__QualityFactor(
  const dbw_ford_msgs__msg__QualityFactor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dbw_ford_msgs__msg__QualityFactor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dbw_ford_msgs__msg__QualityFactor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, QualityFactor)();

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


using _ThrottleInfoReport__ros_msg_type = dbw_ford_msgs__msg__ThrottleInfoReport;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
bool cdr_serialize_dbw_ford_msgs__msg__ThrottleInfoReport(
  const dbw_ford_msgs__msg__ThrottleInfoReport * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: throttle_pc
  {
    cdr << ros_message->throttle_pc;
  }

  // Field name: throttle_rate
  {
    cdr << ros_message->throttle_rate;
  }

  // Field name: throttle_pedal_qf
  {
    cdr_serialize_dbw_ford_msgs__msg__QualityFactor(
      &ros_message->throttle_pedal_qf, cdr);
  }

  // Field name: one_pedal
  {
    cdr_serialize_dbw_ford_msgs__msg__OnePedal(
      &ros_message->one_pedal, cdr);
  }

  // Field name: engine_rpm
  {
    cdr << ros_message->engine_rpm;
  }

  // Field name: gear_num
  {
    cdr_serialize_dbw_ford_msgs__msg__GearNum(
      &ros_message->gear_num, cdr);
  }

  // Field name: ignition
  {
    cdr_serialize_dbw_ford_msgs__msg__Ignition(
      &ros_message->ignition, cdr);
  }

  // Field name: batt_curr
  {
    cdr << ros_message->batt_curr;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
bool cdr_deserialize_dbw_ford_msgs__msg__ThrottleInfoReport(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__ThrottleInfoReport * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: throttle_pc
  {
    cdr >> ros_message->throttle_pc;
  }

  // Field name: throttle_rate
  {
    cdr >> ros_message->throttle_rate;
  }

  // Field name: throttle_pedal_qf
  {
    cdr_deserialize_dbw_ford_msgs__msg__QualityFactor(cdr, &ros_message->throttle_pedal_qf);
  }

  // Field name: one_pedal
  {
    cdr_deserialize_dbw_ford_msgs__msg__OnePedal(cdr, &ros_message->one_pedal);
  }

  // Field name: engine_rpm
  {
    cdr >> ros_message->engine_rpm;
  }

  // Field name: gear_num
  {
    cdr_deserialize_dbw_ford_msgs__msg__GearNum(cdr, &ros_message->gear_num);
  }

  // Field name: ignition
  {
    cdr_deserialize_dbw_ford_msgs__msg__Ignition(cdr, &ros_message->ignition);
  }

  // Field name: batt_curr
  {
    cdr >> ros_message->batt_curr;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t get_serialized_size_dbw_ford_msgs__msg__ThrottleInfoReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ThrottleInfoReport__ros_msg_type * ros_message = static_cast<const _ThrottleInfoReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: throttle_pc
  {
    size_t item_size = sizeof(ros_message->throttle_pc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throttle_rate
  {
    size_t item_size = sizeof(ros_message->throttle_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throttle_pedal_qf
  current_alignment += get_serialized_size_dbw_ford_msgs__msg__QualityFactor(
    &(ros_message->throttle_pedal_qf), current_alignment);

  // Field name: one_pedal
  current_alignment += get_serialized_size_dbw_ford_msgs__msg__OnePedal(
    &(ros_message->one_pedal), current_alignment);

  // Field name: engine_rpm
  {
    size_t item_size = sizeof(ros_message->engine_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gear_num
  current_alignment += get_serialized_size_dbw_ford_msgs__msg__GearNum(
    &(ros_message->gear_num), current_alignment);

  // Field name: ignition
  current_alignment += get_serialized_size_dbw_ford_msgs__msg__Ignition(
    &(ros_message->ignition), current_alignment);

  // Field name: batt_curr
  {
    size_t item_size = sizeof(ros_message->batt_curr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t max_serialized_size_dbw_ford_msgs__msg__ThrottleInfoReport(
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

  // Field name: throttle_pc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throttle_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throttle_pedal_qf
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dbw_ford_msgs__msg__QualityFactor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: one_pedal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dbw_ford_msgs__msg__OnePedal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: engine_rpm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gear_num
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dbw_ford_msgs__msg__GearNum(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ignition
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dbw_ford_msgs__msg__Ignition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: batt_curr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dbw_ford_msgs__msg__ThrottleInfoReport;
    is_plain =
      (
      offsetof(DataType, batt_curr) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
bool cdr_serialize_key_dbw_ford_msgs__msg__ThrottleInfoReport(
  const dbw_ford_msgs__msg__ThrottleInfoReport * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: throttle_pc
  {
    cdr << ros_message->throttle_pc;
  }

  // Field name: throttle_rate
  {
    cdr << ros_message->throttle_rate;
  }

  // Field name: throttle_pedal_qf
  {
    cdr_serialize_key_dbw_ford_msgs__msg__QualityFactor(
      &ros_message->throttle_pedal_qf, cdr);
  }

  // Field name: one_pedal
  {
    cdr_serialize_key_dbw_ford_msgs__msg__OnePedal(
      &ros_message->one_pedal, cdr);
  }

  // Field name: engine_rpm
  {
    cdr << ros_message->engine_rpm;
  }

  // Field name: gear_num
  {
    cdr_serialize_key_dbw_ford_msgs__msg__GearNum(
      &ros_message->gear_num, cdr);
  }

  // Field name: ignition
  {
    cdr_serialize_key_dbw_ford_msgs__msg__Ignition(
      &ros_message->ignition, cdr);
  }

  // Field name: batt_curr
  {
    cdr << ros_message->batt_curr;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t get_serialized_size_key_dbw_ford_msgs__msg__ThrottleInfoReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ThrottleInfoReport__ros_msg_type * ros_message = static_cast<const _ThrottleInfoReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: throttle_pc
  {
    size_t item_size = sizeof(ros_message->throttle_pc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throttle_rate
  {
    size_t item_size = sizeof(ros_message->throttle_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throttle_pedal_qf
  current_alignment += get_serialized_size_key_dbw_ford_msgs__msg__QualityFactor(
    &(ros_message->throttle_pedal_qf), current_alignment);

  // Field name: one_pedal
  current_alignment += get_serialized_size_key_dbw_ford_msgs__msg__OnePedal(
    &(ros_message->one_pedal), current_alignment);

  // Field name: engine_rpm
  {
    size_t item_size = sizeof(ros_message->engine_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gear_num
  current_alignment += get_serialized_size_key_dbw_ford_msgs__msg__GearNum(
    &(ros_message->gear_num), current_alignment);

  // Field name: ignition
  current_alignment += get_serialized_size_key_dbw_ford_msgs__msg__Ignition(
    &(ros_message->ignition), current_alignment);

  // Field name: batt_curr
  {
    size_t item_size = sizeof(ros_message->batt_curr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t max_serialized_size_key_dbw_ford_msgs__msg__ThrottleInfoReport(
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

  // Field name: throttle_pc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throttle_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throttle_pedal_qf
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dbw_ford_msgs__msg__QualityFactor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: one_pedal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dbw_ford_msgs__msg__OnePedal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: engine_rpm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gear_num
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dbw_ford_msgs__msg__GearNum(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ignition
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dbw_ford_msgs__msg__Ignition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: batt_curr
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dbw_ford_msgs__msg__ThrottleInfoReport;
    is_plain =
      (
      offsetof(DataType, batt_curr) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ThrottleInfoReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const dbw_ford_msgs__msg__ThrottleInfoReport * ros_message = static_cast<const dbw_ford_msgs__msg__ThrottleInfoReport *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_dbw_ford_msgs__msg__ThrottleInfoReport(ros_message, cdr);
}

static bool _ThrottleInfoReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  dbw_ford_msgs__msg__ThrottleInfoReport * ros_message = static_cast<dbw_ford_msgs__msg__ThrottleInfoReport *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_dbw_ford_msgs__msg__ThrottleInfoReport(cdr, ros_message);
}

static uint32_t _ThrottleInfoReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dbw_ford_msgs__msg__ThrottleInfoReport(
      untyped_ros_message, 0));
}

static size_t _ThrottleInfoReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dbw_ford_msgs__msg__ThrottleInfoReport(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ThrottleInfoReport = {
  "dbw_ford_msgs::msg",
  "ThrottleInfoReport",
  _ThrottleInfoReport__cdr_serialize,
  _ThrottleInfoReport__cdr_deserialize,
  _ThrottleInfoReport__get_serialized_size,
  _ThrottleInfoReport__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ThrottleInfoReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ThrottleInfoReport,
  get_message_typesupport_handle_function,
  &dbw_ford_msgs__msg__ThrottleInfoReport__get_type_hash,
  &dbw_ford_msgs__msg__ThrottleInfoReport__get_type_description,
  &dbw_ford_msgs__msg__ThrottleInfoReport__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, ThrottleInfoReport)() {
  return &_ThrottleInfoReport__type_support;
}

#if defined(__cplusplus)
}
#endif
