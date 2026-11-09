// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from dbw_ford_msgs:msg/DriverAssistReport.idl
// generated code does not contain a copyright notice

#ifndef DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "dbw_ford_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "dbw_ford_msgs/msg/detail/driver_assist_report__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace dbw_ford_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
cdr_serialize(
  const dbw_ford_msgs::msg::DriverAssistReport & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dbw_ford_msgs::msg::DriverAssistReport & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
get_serialized_size(
  const dbw_ford_msgs::msg::DriverAssistReport & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
max_serialized_size_DriverAssistReport(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
cdr_serialize_key(
  const dbw_ford_msgs::msg::DriverAssistReport & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
get_serialized_size_key(
  const dbw_ford_msgs::msg::DriverAssistReport & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
max_serialized_size_key_DriverAssistReport(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dbw_ford_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dbw_ford_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dbw_ford_msgs, msg, DriverAssistReport)();

#ifdef __cplusplus
}
#endif

#endif  // DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
