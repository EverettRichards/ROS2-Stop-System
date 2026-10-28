// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from dbw_ford_msgs:msg/HillStartAssist.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dbw_ford_msgs/msg/detail/hill_start_assist__functions.h"
#include "dbw_ford_msgs/msg/detail/hill_start_assist__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dbw_ford_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _HillStartAssist_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HillStartAssist_type_support_ids_t;

static const _HillStartAssist_type_support_ids_t _HillStartAssist_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HillStartAssist_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HillStartAssist_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HillStartAssist_type_support_symbol_names_t _HillStartAssist_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dbw_ford_msgs, msg, HillStartAssist)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dbw_ford_msgs, msg, HillStartAssist)),
  }
};

typedef struct _HillStartAssist_type_support_data_t
{
  void * data[2];
} _HillStartAssist_type_support_data_t;

static _HillStartAssist_type_support_data_t _HillStartAssist_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HillStartAssist_message_typesupport_map = {
  2,
  "dbw_ford_msgs",
  &_HillStartAssist_message_typesupport_ids.typesupport_identifier[0],
  &_HillStartAssist_message_typesupport_symbol_names.symbol_name[0],
  &_HillStartAssist_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HillStartAssist_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HillStartAssist_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dbw_ford_msgs__msg__HillStartAssist__get_type_hash,
  &dbw_ford_msgs__msg__HillStartAssist__get_type_description,
  &dbw_ford_msgs__msg__HillStartAssist__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace dbw_ford_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dbw_ford_msgs::msg::HillStartAssist>()
{
  return &::dbw_ford_msgs::msg::rosidl_typesupport_cpp::HillStartAssist_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dbw_ford_msgs, msg, HillStartAssist)() {
  return get_message_type_support_handle<dbw_ford_msgs::msg::HillStartAssist>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
