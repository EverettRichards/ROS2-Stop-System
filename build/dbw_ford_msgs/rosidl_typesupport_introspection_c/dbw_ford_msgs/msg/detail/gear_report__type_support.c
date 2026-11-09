// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dbw_ford_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dbw_ford_msgs/msg/detail/gear_report__rosidl_typesupport_introspection_c.h"
#include "dbw_ford_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dbw_ford_msgs/msg/detail/gear_report__functions.h"
#include "dbw_ford_msgs/msg/detail/gear_report__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `state`
// Member `cmd`
#include "dbw_ford_msgs/msg/gear.h"
// Member `state`
// Member `cmd`
#include "dbw_ford_msgs/msg/detail/gear__rosidl_typesupport_introspection_c.h"
// Member `reject`
#include "dbw_ford_msgs/msg/gear_reject.h"
// Member `reject`
#include "dbw_ford_msgs/msg/detail/gear_reject__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dbw_ford_msgs__msg__GearReport__init(message_memory);
}

void dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_fini_function(void * message_memory)
{
  dbw_ford_msgs__msg__GearReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__GearReport, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__GearReport, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__GearReport, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reject",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__GearReport, reject),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ready",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__GearReport, ready),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "override",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__GearReport, override),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fault_bus",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__GearReport, fault_bus),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_message_members = {
  "dbw_ford_msgs__msg",  // message namespace
  "GearReport",  // message name
  7,  // number of fields
  sizeof(dbw_ford_msgs__msg__GearReport),
  false,  // has_any_key_member_
  dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_message_member_array,  // message members
  dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_init_function,  // function to initialize message memory (memory has to be allocated)
  dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_message_type_support_handle = {
  0,
  &dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_message_members,
  get_message_typesupport_handle_function,
  &dbw_ford_msgs__msg__GearReport__get_type_hash,
  &dbw_ford_msgs__msg__GearReport__get_type_description,
  &dbw_ford_msgs__msg__GearReport__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dbw_ford_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dbw_ford_msgs, msg, GearReport)() {
  dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dbw_ford_msgs, msg, Gear)();
  dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dbw_ford_msgs, msg, Gear)();
  dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dbw_ford_msgs, msg, GearReject)();
  if (!dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_message_type_support_handle.typesupport_identifier) {
    dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dbw_ford_msgs__msg__GearReport__rosidl_typesupport_introspection_c__GearReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
