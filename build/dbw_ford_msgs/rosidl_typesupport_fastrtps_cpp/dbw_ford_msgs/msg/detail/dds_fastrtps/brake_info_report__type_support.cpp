// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dbw_ford_msgs:msg/BrakeInfoReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/brake_info_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dbw_ford_msgs/msg/detail/brake_info_report__functions.h"
#include "dbw_ford_msgs/msg/detail/brake_info_report__struct.hpp"

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
  const dbw_ford_msgs::msg::QualityFactor &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dbw_ford_msgs::msg::QualityFactor &);
size_t get_serialized_size(
  const dbw_ford_msgs::msg::QualityFactor &,
  size_t current_alignment);
size_t
max_serialized_size_QualityFactor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const dbw_ford_msgs::msg::QualityFactor &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const dbw_ford_msgs::msg::QualityFactor &,
  size_t current_alignment);
size_t
max_serialized_size_key_QualityFactor(
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
  const dbw_ford_msgs::msg::HillStartAssist &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dbw_ford_msgs::msg::HillStartAssist &);
size_t get_serialized_size(
  const dbw_ford_msgs::msg::HillStartAssist &,
  size_t current_alignment);
size_t
max_serialized_size_HillStartAssist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const dbw_ford_msgs::msg::HillStartAssist &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const dbw_ford_msgs::msg::HillStartAssist &,
  size_t current_alignment);
size_t
max_serialized_size_key_HillStartAssist(
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
  const dbw_ford_msgs::msg::ParkingBrake &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dbw_ford_msgs::msg::ParkingBrake &);
size_t get_serialized_size(
  const dbw_ford_msgs::msg::ParkingBrake &,
  size_t current_alignment);
size_t
max_serialized_size_ParkingBrake(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const dbw_ford_msgs::msg::ParkingBrake &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const dbw_ford_msgs::msg::ParkingBrake &,
  size_t current_alignment);
size_t
max_serialized_size_key_ParkingBrake(
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
  const dbw_ford_msgs::msg::BrakeInfoReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: brake_torque_request
  cdr << ros_message.brake_torque_request;

  // Member: brake_torque_actual
  cdr << ros_message.brake_torque_actual;

  // Member: wheel_torque_actual
  cdr << ros_message.wheel_torque_actual;

  // Member: accel_over_ground
  cdr << ros_message.accel_over_ground;

  // Member: brake_pedal_qf
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.brake_pedal_qf,
    cdr);

  // Member: hsa
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.hsa,
    cdr);

  // Member: abs_active
  cdr << (ros_message.abs_active ? true : false);

  // Member: abs_enabled
  cdr << (ros_message.abs_enabled ? true : false);

  // Member: stab_active
  cdr << (ros_message.stab_active ? true : false);

  // Member: stab_enabled
  cdr << (ros_message.stab_enabled ? true : false);

  // Member: trac_active
  cdr << (ros_message.trac_active ? true : false);

  // Member: trac_enabled
  cdr << (ros_message.trac_enabled ? true : false);

  // Member: parking_brake
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.parking_brake,
    cdr);

  // Member: stationary
  cdr << (ros_message.stationary ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs::msg::BrakeInfoReport & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: brake_torque_request
  cdr >> ros_message.brake_torque_request;

  // Member: brake_torque_actual
  cdr >> ros_message.brake_torque_actual;

  // Member: wheel_torque_actual
  cdr >> ros_message.wheel_torque_actual;

  // Member: accel_over_ground
  cdr >> ros_message.accel_over_ground;

  // Member: brake_pedal_qf
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.brake_pedal_qf);

  // Member: hsa
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.hsa);

  // Member: abs_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.abs_active = tmp ? true : false;
  }

  // Member: abs_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.abs_enabled = tmp ? true : false;
  }

  // Member: stab_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stab_active = tmp ? true : false;
  }

  // Member: stab_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stab_enabled = tmp ? true : false;
  }

  // Member: trac_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.trac_active = tmp ? true : false;
  }

  // Member: trac_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.trac_enabled = tmp ? true : false;
  }

  // Member: parking_brake
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.parking_brake);

  // Member: stationary
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stationary = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
get_serialized_size(
  const dbw_ford_msgs::msg::BrakeInfoReport & ros_message,
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

  // Member: brake_torque_request
  {
    size_t item_size = sizeof(ros_message.brake_torque_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: brake_torque_actual
  {
    size_t item_size = sizeof(ros_message.brake_torque_actual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wheel_torque_actual
  {
    size_t item_size = sizeof(ros_message.wheel_torque_actual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accel_over_ground
  {
    size_t item_size = sizeof(ros_message.accel_over_ground);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: brake_pedal_qf
  current_alignment +=
    dbw_ford_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.brake_pedal_qf, current_alignment);

  // Member: hsa
  current_alignment +=
    dbw_ford_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.hsa, current_alignment);

  // Member: abs_active
  {
    size_t item_size = sizeof(ros_message.abs_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: abs_enabled
  {
    size_t item_size = sizeof(ros_message.abs_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: stab_active
  {
    size_t item_size = sizeof(ros_message.stab_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: stab_enabled
  {
    size_t item_size = sizeof(ros_message.stab_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: trac_active
  {
    size_t item_size = sizeof(ros_message.trac_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: trac_enabled
  {
    size_t item_size = sizeof(ros_message.trac_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: parking_brake
  current_alignment +=
    dbw_ford_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.parking_brake, current_alignment);

  // Member: stationary
  {
    size_t item_size = sizeof(ros_message.stationary);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
max_serialized_size_BrakeInfoReport(
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
  // Member: brake_torque_request
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: brake_torque_actual
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: wheel_torque_actual
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: accel_over_ground
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: brake_pedal_qf
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dbw_ford_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_QualityFactor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: hsa
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dbw_ford_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_HillStartAssist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: abs_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: abs_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: stab_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: stab_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: trac_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: trac_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: parking_brake
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dbw_ford_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ParkingBrake(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: stationary
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
    using DataType = dbw_ford_msgs::msg::BrakeInfoReport;
    is_plain =
      (
      offsetof(DataType, stationary) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
cdr_serialize_key(
  const dbw_ford_msgs::msg::BrakeInfoReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: brake_torque_request
  cdr << ros_message.brake_torque_request;

  // Member: brake_torque_actual
  cdr << ros_message.brake_torque_actual;

  // Member: wheel_torque_actual
  cdr << ros_message.wheel_torque_actual;

  // Member: accel_over_ground
  cdr << ros_message.accel_over_ground;

  // Member: brake_pedal_qf
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.brake_pedal_qf,
    cdr);

  // Member: hsa
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.hsa,
    cdr);

  // Member: abs_active
  cdr << (ros_message.abs_active ? true : false);

  // Member: abs_enabled
  cdr << (ros_message.abs_enabled ? true : false);

  // Member: stab_active
  cdr << (ros_message.stab_active ? true : false);

  // Member: stab_enabled
  cdr << (ros_message.stab_enabled ? true : false);

  // Member: trac_active
  cdr << (ros_message.trac_active ? true : false);

  // Member: trac_enabled
  cdr << (ros_message.trac_enabled ? true : false);

  // Member: parking_brake
  dbw_ford_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.parking_brake,
    cdr);

  // Member: stationary
  cdr << (ros_message.stationary ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
get_serialized_size_key(
  const dbw_ford_msgs::msg::BrakeInfoReport & ros_message,
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

  // Member: brake_torque_request
  {
    size_t item_size = sizeof(ros_message.brake_torque_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: brake_torque_actual
  {
    size_t item_size = sizeof(ros_message.brake_torque_actual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wheel_torque_actual
  {
    size_t item_size = sizeof(ros_message.wheel_torque_actual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accel_over_ground
  {
    size_t item_size = sizeof(ros_message.accel_over_ground);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: brake_pedal_qf
  current_alignment +=
    dbw_ford_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.brake_pedal_qf, current_alignment);

  // Member: hsa
  current_alignment +=
    dbw_ford_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.hsa, current_alignment);

  // Member: abs_active
  {
    size_t item_size = sizeof(ros_message.abs_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: abs_enabled
  {
    size_t item_size = sizeof(ros_message.abs_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: stab_active
  {
    size_t item_size = sizeof(ros_message.stab_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: stab_enabled
  {
    size_t item_size = sizeof(ros_message.stab_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: trac_active
  {
    size_t item_size = sizeof(ros_message.trac_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: trac_enabled
  {
    size_t item_size = sizeof(ros_message.trac_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: parking_brake
  current_alignment +=
    dbw_ford_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.parking_brake, current_alignment);

  // Member: stationary
  {
    size_t item_size = sizeof(ros_message.stationary);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
max_serialized_size_key_BrakeInfoReport(
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

  // Member: brake_torque_request
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake_torque_actual
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_torque_actual
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_over_ground
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake_pedal_qf
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dbw_ford_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_QualityFactor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: hsa
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dbw_ford_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_HillStartAssist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: abs_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: abs_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stab_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stab_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trac_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trac_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: parking_brake
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dbw_ford_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ParkingBrake(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: stationary
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
    using DataType = dbw_ford_msgs::msg::BrakeInfoReport;
    is_plain =
      (
      offsetof(DataType, stationary) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _BrakeInfoReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dbw_ford_msgs::msg::BrakeInfoReport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BrakeInfoReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dbw_ford_msgs::msg::BrakeInfoReport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BrakeInfoReport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dbw_ford_msgs::msg::BrakeInfoReport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BrakeInfoReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BrakeInfoReport(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BrakeInfoReport__callbacks = {
  "dbw_ford_msgs::msg",
  "BrakeInfoReport",
  _BrakeInfoReport__cdr_serialize,
  _BrakeInfoReport__cdr_deserialize,
  _BrakeInfoReport__get_serialized_size,
  _BrakeInfoReport__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BrakeInfoReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BrakeInfoReport__callbacks,
  get_message_typesupport_handle_function,
  &dbw_ford_msgs__msg__BrakeInfoReport__get_type_hash,
  &dbw_ford_msgs__msg__BrakeInfoReport__get_type_description,
  &dbw_ford_msgs__msg__BrakeInfoReport__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dbw_ford_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dbw_ford_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<dbw_ford_msgs::msg::BrakeInfoReport>()
{
  return &dbw_ford_msgs::msg::typesupport_fastrtps_cpp::_BrakeInfoReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dbw_ford_msgs, msg, BrakeInfoReport)() {
  return &dbw_ford_msgs::msg::typesupport_fastrtps_cpp::_BrakeInfoReport__handle;
}

#ifdef __cplusplus
}
#endif
