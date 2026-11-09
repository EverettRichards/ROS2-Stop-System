// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dbw_ford_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/gear_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dbw_ford_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dbw_ford_msgs/msg/detail/gear_report__struct.h"
#include "dbw_ford_msgs/msg/detail/gear_report__functions.h"
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

#include "dbw_ford_msgs/msg/detail/gear__functions.h"  // cmd, state
#include "dbw_ford_msgs/msg/detail/gear_reject__functions.h"  // reject
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_dbw_ford_msgs__msg__Gear(
  const dbw_ford_msgs__msg__Gear * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dbw_ford_msgs__msg__Gear(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__Gear * ros_message);

size_t get_serialized_size_dbw_ford_msgs__msg__Gear(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dbw_ford_msgs__msg__Gear(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dbw_ford_msgs__msg__Gear(
  const dbw_ford_msgs__msg__Gear * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dbw_ford_msgs__msg__Gear(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dbw_ford_msgs__msg__Gear(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, Gear)();

bool cdr_serialize_dbw_ford_msgs__msg__GearReject(
  const dbw_ford_msgs__msg__GearReject * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dbw_ford_msgs__msg__GearReject(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__GearReject * ros_message);

size_t get_serialized_size_dbw_ford_msgs__msg__GearReject(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dbw_ford_msgs__msg__GearReject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dbw_ford_msgs__msg__GearReject(
  const dbw_ford_msgs__msg__GearReject * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dbw_ford_msgs__msg__GearReject(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dbw_ford_msgs__msg__GearReject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, GearReject)();

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


using _GearReport__ros_msg_type = dbw_ford_msgs__msg__GearReport;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
bool cdr_serialize_dbw_ford_msgs__msg__GearReport(
  const dbw_ford_msgs__msg__GearReport * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: state
  {
    cdr_serialize_dbw_ford_msgs__msg__Gear(
      &ros_message->state, cdr);
  }

  // Field name: cmd
  {
    cdr_serialize_dbw_ford_msgs__msg__Gear(
      &ros_message->cmd, cdr);
  }

  // Field name: reject
  {
    cdr_serialize_dbw_ford_msgs__msg__GearReject(
      &ros_message->reject, cdr);
  }

  // Field name: ready
  {
    cdr << (ros_message->ready ? true : false);
  }

  // Field name: override
  {
    cdr << (ros_message->override ? true : false);
  }

  // Field name: fault_bus
  {
    cdr << (ros_message->fault_bus ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
bool cdr_deserialize_dbw_ford_msgs__msg__GearReport(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs__msg__GearReport * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: state
  {
    cdr_deserialize_dbw_ford_msgs__msg__Gear(cdr, &ros_message->state);
  }

  // Field name: cmd
  {
    cdr_deserialize_dbw_ford_msgs__msg__Gear(cdr, &ros_message->cmd);
  }

  // Field name: reject
  {
    cdr_deserialize_dbw_ford_msgs__msg__GearReject(cdr, &ros_message->reject);
  }

  // Field name: ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ready = tmp ? true : false;
  }

  // Field name: override
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->override = tmp ? true : false;
  }

  // Field name: fault_bus
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fault_bus = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t get_serialized_size_dbw_ford_msgs__msg__GearReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GearReport__ros_msg_type * ros_message = static_cast<const _GearReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: state
  current_alignment += get_serialized_size_dbw_ford_msgs__msg__Gear(
    &(ros_message->state), current_alignment);

  // Field name: cmd
  current_alignment += get_serialized_size_dbw_ford_msgs__msg__Gear(
    &(ros_message->cmd), current_alignment);

  // Field name: reject
  current_alignment += get_serialized_size_dbw_ford_msgs__msg__GearReject(
    &(ros_message->reject), current_alignment);

  // Field name: ready
  {
    size_t item_size = sizeof(ros_message->ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override
  {
    size_t item_size = sizeof(ros_message->override);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fault_bus
  {
    size_t item_size = sizeof(ros_message->fault_bus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t max_serialized_size_dbw_ford_msgs__msg__GearReport(
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

  // Field name: state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dbw_ford_msgs__msg__Gear(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: cmd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dbw_ford_msgs__msg__Gear(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: reject
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dbw_ford_msgs__msg__GearReject(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ready
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: override
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dbw_ford_msgs__msg__GearReport;
    is_plain =
      (
      offsetof(DataType, fault_bus) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
bool cdr_serialize_key_dbw_ford_msgs__msg__GearReport(
  const dbw_ford_msgs__msg__GearReport * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: state
  {
    cdr_serialize_key_dbw_ford_msgs__msg__Gear(
      &ros_message->state, cdr);
  }

  // Field name: cmd
  {
    cdr_serialize_key_dbw_ford_msgs__msg__Gear(
      &ros_message->cmd, cdr);
  }

  // Field name: reject
  {
    cdr_serialize_key_dbw_ford_msgs__msg__GearReject(
      &ros_message->reject, cdr);
  }

  // Field name: ready
  {
    cdr << (ros_message->ready ? true : false);
  }

  // Field name: override
  {
    cdr << (ros_message->override ? true : false);
  }

  // Field name: fault_bus
  {
    cdr << (ros_message->fault_bus ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t get_serialized_size_key_dbw_ford_msgs__msg__GearReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GearReport__ros_msg_type * ros_message = static_cast<const _GearReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: state
  current_alignment += get_serialized_size_key_dbw_ford_msgs__msg__Gear(
    &(ros_message->state), current_alignment);

  // Field name: cmd
  current_alignment += get_serialized_size_key_dbw_ford_msgs__msg__Gear(
    &(ros_message->cmd), current_alignment);

  // Field name: reject
  current_alignment += get_serialized_size_key_dbw_ford_msgs__msg__GearReject(
    &(ros_message->reject), current_alignment);

  // Field name: ready
  {
    size_t item_size = sizeof(ros_message->ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: override
  {
    size_t item_size = sizeof(ros_message->override);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fault_bus
  {
    size_t item_size = sizeof(ros_message->fault_bus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t max_serialized_size_key_dbw_ford_msgs__msg__GearReport(
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

  // Field name: state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dbw_ford_msgs__msg__Gear(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: cmd
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dbw_ford_msgs__msg__Gear(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: reject
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dbw_ford_msgs__msg__GearReject(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ready
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: override
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dbw_ford_msgs__msg__GearReport;
    is_plain =
      (
      offsetof(DataType, fault_bus) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GearReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const dbw_ford_msgs__msg__GearReport * ros_message = static_cast<const dbw_ford_msgs__msg__GearReport *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_dbw_ford_msgs__msg__GearReport(ros_message, cdr);
}

static bool _GearReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  dbw_ford_msgs__msg__GearReport * ros_message = static_cast<dbw_ford_msgs__msg__GearReport *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_dbw_ford_msgs__msg__GearReport(cdr, ros_message);
}

static uint32_t _GearReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dbw_ford_msgs__msg__GearReport(
      untyped_ros_message, 0));
}

static size_t _GearReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dbw_ford_msgs__msg__GearReport(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GearReport = {
  "dbw_ford_msgs::msg",
  "GearReport",
  _GearReport__cdr_serialize,
  _GearReport__cdr_deserialize,
  _GearReport__get_serialized_size,
  _GearReport__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GearReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GearReport,
  get_message_typesupport_handle_function,
  &dbw_ford_msgs__msg__GearReport__get_type_hash,
  &dbw_ford_msgs__msg__GearReport__get_type_description,
  &dbw_ford_msgs__msg__GearReport__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, GearReport)() {
  return &_GearReport__type_support;
}

#if defined(__cplusplus)
}
#endif
