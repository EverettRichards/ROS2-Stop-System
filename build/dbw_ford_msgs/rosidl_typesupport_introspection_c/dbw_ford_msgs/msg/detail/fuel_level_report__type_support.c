// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dbw_ford_msgs:msg/FuelLevelReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dbw_ford_msgs/msg/detail/fuel_level_report__rosidl_typesupport_introspection_c.h"
#include "dbw_ford_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dbw_ford_msgs/msg/detail/fuel_level_report__functions.h"
#include "dbw_ford_msgs/msg/detail/fuel_level_report__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dbw_ford_msgs__msg__FuelLevelReport__init(message_memory);
}

void dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_fini_function(void * message_memory)
{
  dbw_ford_msgs__msg__FuelLevelReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__FuelLevelReport, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fuel_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__FuelLevelReport, fuel_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_12v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__FuelLevelReport, battery_12v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_hev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__FuelLevelReport, battery_hev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odometer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__FuelLevelReport, odometer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_message_members = {
  "dbw_ford_msgs__msg",  // message namespace
  "FuelLevelReport",  // message name
  5,  // number of fields
  sizeof(dbw_ford_msgs__msg__FuelLevelReport),
  false,  // has_any_key_member_
  dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_message_member_array,  // message members
  dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_init_function,  // function to initialize message memory (memory has to be allocated)
  dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_message_type_support_handle = {
  0,
  &dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_message_members,
  get_message_typesupport_handle_function,
  &dbw_ford_msgs__msg__FuelLevelReport__get_type_hash,
  &dbw_ford_msgs__msg__FuelLevelReport__get_type_description,
  &dbw_ford_msgs__msg__FuelLevelReport__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dbw_ford_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dbw_ford_msgs, msg, FuelLevelReport)() {
  dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_message_type_support_handle.typesupport_identifier) {
    dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dbw_ford_msgs__msg__FuelLevelReport__rosidl_typesupport_introspection_c__FuelLevelReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
