// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dbw_ford_msgs:msg/DriverAssistReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/driver_assist_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dbw_ford_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dbw_ford_msgs/msg/detail/driver_assist_report__struct.h"
#include "dbw_ford_msgs/msg/detail/driver_assist_report__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

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


using _DriverAssistReport__ros_msg_type = dbw_ford_msgs__msg__DriverAssistReport;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
bool cdr_serialize_dbw_ford_msgs__msg__DriverAssistReport(
  const dbw_ford_msgs__msg__DriverAssistReport * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: decel
  {
    cdr << ros_message->decel;
  }

  // Field name: decel_src
  {
    cdr << ros_message->decel_src;
  }

  // Field name: fcw_enabled
  {
    cdr << (ros_message->fcw_enabled ? true : false);
  }

  // Field name: fcw_active
  {
    cdr << (ros_message->fcw_active ? true : false);
  }

  // Field name: aeb_enabled
  {
    cdr << (ros_message->aeb_enabled ? true : false);
  }

  // Field name: aeb_precharge
  {
    cdr << (ros_message->aeb_precharge ? true : false);
  }

  // Field name: aeb_braking
  {
    cdr << (ros_message->aeb_braking ? true : false);
  }

  // Field name: acc_enabled
  {
    cdr << (ros_message->acc_enabled ? true : false);
  }

  // Field name: acc_braking
  {
    cdr << (ros_message->acc_braking ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
bool cdr_deserialize_dbw_ford_msgs__msg__DriverAssistReport(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__DriverAssistReport * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: decel
  {
    cdr >> ros_message->decel;
  }

  // Field name: decel_src
  {
    cdr >> ros_message->decel_src;
  }

  // Field name: fcw_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fcw_enabled = tmp ? true : false;
  }

  // Field name: fcw_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fcw_active = tmp ? true : false;
  }

  // Field name: aeb_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->aeb_enabled = tmp ? true : false;
  }

  // Field name: aeb_precharge
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->aeb_precharge = tmp ? true : false;
  }

  // Field name: aeb_braking
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->aeb_braking = tmp ? true : false;
  }

  // Field name: acc_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->acc_enabled = tmp ? true : false;
  }

  // Field name: acc_braking
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->acc_braking = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t get_serialized_size_dbw_ford_msgs__msg__DriverAssistReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DriverAssistReport__ros_msg_type * ros_message = static_cast<const _DriverAssistReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: decel
  {
    size_t item_size = sizeof(ros_message->decel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: decel_src
  {
    size_t item_size = sizeof(ros_message->decel_src);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fcw_enabled
  {
    size_t item_size = sizeof(ros_message->fcw_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fcw_active
  {
    size_t item_size = sizeof(ros_message->fcw_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: aeb_enabled
  {
    size_t item_size = sizeof(ros_message->aeb_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: aeb_precharge
  {
    size_t item_size = sizeof(ros_message->aeb_precharge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: aeb_braking
  {
    size_t item_size = sizeof(ros_message->aeb_braking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: acc_enabled
  {
    size_t item_size = sizeof(ros_message->acc_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: acc_braking
  {
    size_t item_size = sizeof(ros_message->acc_braking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t max_serialized_size_dbw_ford_msgs__msg__DriverAssistReport(
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

  // Field name: decel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: decel_src
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fcw_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fcw_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: aeb_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: aeb_precharge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: aeb_braking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: acc_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: acc_braking
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
    using DataType = dbw_ford_msgs__msg__DriverAssistReport;
    is_plain =
      (
      offsetof(DataType, acc_braking) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
bool cdr_serialize_key_dbw_ford_msgs__msg__DriverAssistReport(
  const dbw_ford_msgs__msg__DriverAssistReport * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: decel
  {
    cdr << ros_message->decel;
  }

  // Field name: decel_src
  {
    cdr << ros_message->decel_src;
  }

  // Field name: fcw_enabled
  {
    cdr << (ros_message->fcw_enabled ? true : false);
  }

  // Field name: fcw_active
  {
    cdr << (ros_message->fcw_active ? true : false);
  }

  // Field name: aeb_enabled
  {
    cdr << (ros_message->aeb_enabled ? true : false);
  }

  // Field name: aeb_precharge
  {
    cdr << (ros_message->aeb_precharge ? true : false);
  }

  // Field name: aeb_braking
  {
    cdr << (ros_message->aeb_braking ? true : false);
  }

  // Field name: acc_enabled
  {
    cdr << (ros_message->acc_enabled ? true : false);
  }

  // Field name: acc_braking
  {
    cdr << (ros_message->acc_braking ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t get_serialized_size_key_dbw_ford_msgs__msg__DriverAssistReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DriverAssistReport__ros_msg_type * ros_message = static_cast<const _DriverAssistReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: decel
  {
    size_t item_size = sizeof(ros_message->decel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: decel_src
  {
    size_t item_size = sizeof(ros_message->decel_src);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fcw_enabled
  {
    size_t item_size = sizeof(ros_message->fcw_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fcw_active
  {
    size_t item_size = sizeof(ros_message->fcw_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: aeb_enabled
  {
    size_t item_size = sizeof(ros_message->aeb_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: aeb_precharge
  {
    size_t item_size = sizeof(ros_message->aeb_precharge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: aeb_braking
  {
    size_t item_size = sizeof(ros_message->aeb_braking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: acc_enabled
  {
    size_t item_size = sizeof(ros_message->acc_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: acc_braking
  {
    size_t item_size = sizeof(ros_message->acc_braking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t max_serialized_size_key_dbw_ford_msgs__msg__DriverAssistReport(
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

  // Field name: decel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: decel_src
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fcw_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fcw_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: aeb_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: aeb_precharge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: aeb_braking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: acc_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: acc_braking
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
    using DataType = dbw_ford_msgs__msg__DriverAssistReport;
    is_plain =
      (
      offsetof(DataType, acc_braking) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DriverAssistReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const dbw_ford_msgs__msg__DriverAssistReport * ros_message = static_cast<const dbw_ford_msgs__msg__DriverAssistReport *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_dbw_ford_msgs__msg__DriverAssistReport(ros_message, cdr);
}

static bool _DriverAssistReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  dbw_ford_msgs__msg__DriverAssistReport * ros_message = static_cast<dbw_ford_msgs__msg__DriverAssistReport *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_dbw_ford_msgs__msg__DriverAssistReport(cdr, ros_message);
}

static uint32_t _DriverAssistReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dbw_ford_msgs__msg__DriverAssistReport(
      untyped_ros_message, 0));
}

static size_t _DriverAssistReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dbw_ford_msgs__msg__DriverAssistReport(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DriverAssistReport = {
  "dbw_ford_msgs::msg",
  "DriverAssistReport",
  _DriverAssistReport__cdr_serialize,
  _DriverAssistReport__cdr_deserialize,
  _DriverAssistReport__get_serialized_size,
  _DriverAssistReport__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DriverAssistReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DriverAssistReport,
  get_message_typesupport_handle_function,
  &dbw_ford_msgs__msg__DriverAssistReport__get_type_hash,
  &dbw_ford_msgs__msg__DriverAssistReport__get_type_description,
  &dbw_ford_msgs__msg__DriverAssistReport__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, DriverAssistReport)() {
  return &_DriverAssistReport__type_support;
}

#if defined(__cplusplus)
}
#endif
