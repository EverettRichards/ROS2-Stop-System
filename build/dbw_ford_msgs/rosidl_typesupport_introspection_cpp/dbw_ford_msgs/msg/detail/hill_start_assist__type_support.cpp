// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dbw_ford_msgs:msg/HillStartAssist.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dbw_ford_msgs/msg/detail/hill_start_assist__functions.h"
#include "dbw_ford_msgs/msg/detail/hill_start_assist__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dbw_ford_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HillStartAssist_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dbw_ford_msgs::msg::HillStartAssist(_init);
}

void HillStartAssist_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dbw_ford_msgs::msg::HillStartAssist *>(message_memory);
  typed_message->~HillStartAssist();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HillStartAssist_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs::msg::HillStartAssist, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dbw_ford_msgs::msg::HillStartAssist, mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HillStartAssist_message_members = {
  "dbw_ford_msgs::msg",  // message namespace
  "HillStartAssist",  // message name
  2,  // number of fields
  sizeof(dbw_ford_msgs::msg::HillStartAssist),
  false,  // has_any_key_member_
  HillStartAssist_message_member_array,  // message members
  HillStartAssist_init_function,  // function to initialize message memory (memory has to be allocated)
  HillStartAssist_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HillStartAssist_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HillStartAssist_message_members,
  get_message_typesupport_handle_function,
  &dbw_ford_msgs__msg__HillStartAssist__get_type_hash,
  &dbw_ford_msgs__msg__HillStartAssist__get_type_description,
  &dbw_ford_msgs__msg__HillStartAssist__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dbw_ford_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dbw_ford_msgs::msg::HillStartAssist>()
{
  return &::dbw_ford_msgs::msg::rosidl_typesupport_introspection_cpp::HillStartAssist_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dbw_ford_msgs, msg, HillStartAssist)() {
  return &::dbw_ford_msgs::msg::rosidl_typesupport_introspection_cpp::HillStartAssist_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
