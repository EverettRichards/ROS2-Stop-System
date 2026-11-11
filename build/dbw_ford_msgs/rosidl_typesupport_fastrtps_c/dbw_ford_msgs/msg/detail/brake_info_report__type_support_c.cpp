// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dbw_ford_msgs:msg/BrakeInfoReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/brake_info_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dbw_ford_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dbw_ford_msgs/msg/detail/brake_info_report__struct.h"
#include "dbw_ford_msgs/msg/detail/brake_info_report__functions.h"
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

#include "dbw_ford_msgs/msg/detail/hill_start_assist__functions.h"  // hsa
#include "dbw_ford_msgs/msg/detail/parking_brake__functions.h"  // parking_brake
#include "dbw_ford_msgs/msg/detail/quality_factor__functions.h"  // brake_pedal_qf
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_dbw_ford_msgs__msg__HillStartAssist(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dbw_ford_msgs__msg__HillStartAssist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, HillStartAssist)();
size_t get_serialized_size_dbw_ford_msgs__msg__ParkingBrake(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dbw_ford_msgs__msg__ParkingBrake(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, ParkingBrake)();
size_t get_serialized_size_dbw_ford_msgs__msg__QualityFactor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dbw_ford_msgs__msg__QualityFactor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, QualityFactor)();
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
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _BrakeInfoReport__ros_msg_type = dbw_ford_msgs__msg__BrakeInfoReport;

static bool _BrakeInfoReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BrakeInfoReport__ros_msg_type * ros_message = static_cast<const _BrakeInfoReport__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: brake_torque_request
  {
    cdr << ros_message->brake_torque_request;
  }

  // Field name: brake_torque_actual
  {
    cdr << ros_message->brake_torque_actual;
  }

  // Field name: wheel_torque_actual
  {
    cdr << ros_message->wheel_torque_actual;
  }

  // Field name: accel_over_ground
  {
    cdr << ros_message->accel_over_ground;
  }

  // Field name: brake_pedal_qf
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, QualityFactor
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->brake_pedal_qf, cdr))
    {
      return false;
    }
  }

  // Field name: hsa
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, HillStartAssist
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->hsa, cdr))
    {
      return false;
    }
  }

  // Field name: abs_active
  {
    cdr << (ros_message->abs_active ? true : false);
  }

  // Field name: abs_enabled
  {
    cdr << (ros_message->abs_enabled ? true : false);
  }

  // Field name: stab_active
  {
    cdr << (ros_message->stab_active ? true : false);
  }

  // Field name: stab_enabled
  {
    cdr << (ros_message->stab_enabled ? true : false);
  }

  // Field name: trac_active
  {
    cdr << (ros_message->trac_active ? true : false);
  }

  // Field name: trac_enabled
  {
    cdr << (ros_message->trac_enabled ? true : false);
  }

  // Field name: parking_brake
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, ParkingBrake
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->parking_brake, cdr))
    {
      return false;
    }
  }

  // Field name: stationary
  {
    cdr << (ros_message->stationary ? true : false);
  }

  return true;
}

static bool _BrakeInfoReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BrakeInfoReport__ros_msg_type * ros_message = static_cast<_BrakeInfoReport__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: brake_torque_request
  {
    cdr >> ros_message->brake_torque_request;
  }

  // Field name: brake_torque_actual
  {
    cdr >> ros_message->brake_torque_actual;
  }

  // Field name: wheel_torque_actual
  {
    cdr >> ros_message->wheel_torque_actual;
  }

  // Field name: accel_over_ground
  {
    cdr >> ros_message->accel_over_ground;
  }

  // Field name: brake_pedal_qf
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, QualityFactor
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->brake_pedal_qf))
    {
      return false;
    }
  }

  // Field name: hsa
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, HillStartAssist
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->hsa))
    {
      return false;
    }
  }

  // Field name: abs_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->abs_active = tmp ? true : false;
  }

  // Field name: abs_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->abs_enabled = tmp ? true : false;
  }

  // Field name: stab_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stab_active = tmp ? true : false;
  }

  // Field name: stab_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stab_enabled = tmp ? true : false;
  }

  // Field name: trac_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->trac_active = tmp ? true : false;
  }

  // Field name: trac_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->trac_enabled = tmp ? true : false;
  }

  // Field name: parking_brake
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, ParkingBrake
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->parking_brake))
    {
      return false;
    }
  }

  // Field name: stationary
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stationary = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t get_serialized_size_dbw_ford_msgs__msg__BrakeInfoReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BrakeInfoReport__ros_msg_type * ros_message = static_cast<const _BrakeInfoReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name brake_torque_request
  {
    size_t item_size = sizeof(ros_message->brake_torque_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_torque_actual
  {
    size_t item_size = sizeof(ros_message->brake_torque_actual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_torque_actual
  {
    size_t item_size = sizeof(ros_message->wheel_torque_actual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_over_ground
  {
    size_t item_size = sizeof(ros_message->accel_over_ground);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_pedal_qf

  current_alignment += get_serialized_size_dbw_ford_msgs__msg__QualityFactor(
    &(ros_message->brake_pedal_qf), current_alignment);
  // field.name hsa

  current_alignment += get_serialized_size_dbw_ford_msgs__msg__HillStartAssist(
    &(ros_message->hsa), current_alignment);
  // field.name abs_active
  {
    size_t item_size = sizeof(ros_message->abs_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name abs_enabled
  {
    size_t item_size = sizeof(ros_message->abs_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stab_active
  {
    size_t item_size = sizeof(ros_message->stab_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stab_enabled
  {
    size_t item_size = sizeof(ros_message->stab_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trac_active
  {
    size_t item_size = sizeof(ros_message->trac_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trac_enabled
  {
    size_t item_size = sizeof(ros_message->trac_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parking_brake

  current_alignment += get_serialized_size_dbw_ford_msgs__msg__ParkingBrake(
    &(ros_message->parking_brake), current_alignment);
  // field.name stationary
  {
    size_t item_size = sizeof(ros_message->stationary);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BrakeInfoReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dbw_ford_msgs__msg__BrakeInfoReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dbw_ford_msgs
size_t max_serialized_size_dbw_ford_msgs__msg__BrakeInfoReport(
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

  // member: header
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
  // member: brake_torque_request
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_torque_actual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_torque_actual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_over_ground
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_pedal_qf
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
  // member: hsa
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dbw_ford_msgs__msg__HillStartAssist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: abs_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: abs_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stab_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stab_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trac_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trac_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: parking_brake
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dbw_ford_msgs__msg__ParkingBrake(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: stationary
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
    using DataType = dbw_ford_msgs__msg__BrakeInfoReport;
    is_plain =
      (
      offsetof(DataType, stationary) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BrakeInfoReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dbw_ford_msgs__msg__BrakeInfoReport(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BrakeInfoReport = {
  "dbw_ford_msgs::msg",
  "BrakeInfoReport",
  _BrakeInfoReport__cdr_serialize,
  _BrakeInfoReport__cdr_deserialize,
  _BrakeInfoReport__get_serialized_size,
  _BrakeInfoReport__max_serialized_size
};

static rosidl_message_type_support_t _BrakeInfoReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BrakeInfoReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dbw_ford_msgs, msg, BrakeInfoReport)() {
  return &_BrakeInfoReport__type_support;
}

#if defined(__cplusplus)
}
#endif
