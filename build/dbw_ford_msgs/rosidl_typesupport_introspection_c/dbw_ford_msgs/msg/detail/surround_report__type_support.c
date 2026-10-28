// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dbw_ford_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dbw_ford_msgs/msg/detail/surround_report__rosidl_typesupport_introspection_c.h"
#include "dbw_ford_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dbw_ford_msgs/msg/detail/surround_report__functions.h"
#include "dbw_ford_msgs/msg/detail/surround_report__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dbw_ford_msgs__msg__SurroundReport__init(message_memory);
}

void dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_fini_function(void * message_memory)
{
  dbw_ford_msgs__msg__SurroundReport__fini(message_memory);
}

size_t dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__size_function__SurroundReport__sonar(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__get_const_function__SurroundReport__sonar(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__get_function__SurroundReport__sonar(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__fetch_function__SurroundReport__sonar(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__get_const_function__SurroundReport__sonar(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__assign_function__SurroundReport__sonar(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__get_function__SurroundReport__sonar(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_message_member_array[12] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__SurroundReport, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cta_left_alert",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__SurroundReport, cta_left_alert),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cta_right_alert",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__SurroundReport, cta_right_alert),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cta_left_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__SurroundReport, cta_left_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cta_right_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__SurroundReport, cta_right_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blis_left_alert",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__SurroundReport, blis_left_alert),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blis_right_alert",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__SurroundReport, blis_right_alert),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blis_left_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__SurroundReport, blis_left_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blis_right_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__SurroundReport, blis_right_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sonar_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__SurroundReport, sonar_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sonar_fault",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__SurroundReport, sonar_fault),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sonar",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs__msg__SurroundReport, sonar),  // bytes offset in struct
    NULL,  // default value
    dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__size_function__SurroundReport__sonar,  // size() function pointer
    dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__get_const_function__SurroundReport__sonar,  // get_const(index) function pointer
    dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__get_function__SurroundReport__sonar,  // get(index) function pointer
    dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__fetch_function__SurroundReport__sonar,  // fetch(index, &value) function pointer
    dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__assign_function__SurroundReport__sonar,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_message_members = {
  "dbw_ford_msgs__msg",  // message namespace
  "SurroundReport",  // message name
  12,  // number of fields
  sizeof(dbw_ford_msgs__msg__SurroundReport),
  false,  // has_any_key_member_
  dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_message_member_array,  // message members
  dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_init_function,  // function to initialize message memory (memory has to be allocated)
  dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_message_type_support_handle = {
  0,
  &dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_message_members,
  get_message_typesupport_handle_function,
  &dbw_ford_msgs__msg__SurroundReport__get_type_hash,
  &dbw_ford_msgs__msg__SurroundReport__get_type_description,
  &dbw_ford_msgs__msg__SurroundReport__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dbw_ford_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dbw_ford_msgs, msg, SurroundReport)() {
  dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_message_type_support_handle.typesupport_identifier) {
    dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dbw_ford_msgs__msg__SurroundReport__rosidl_typesupport_introspection_c__SurroundReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
