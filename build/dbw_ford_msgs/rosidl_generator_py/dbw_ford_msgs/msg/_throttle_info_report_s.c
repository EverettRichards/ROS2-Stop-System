// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dbw_ford_msgs:msg/ThrottleInfoReport.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "dbw_ford_msgs/msg/detail/throttle_info_report__struct.h"
#include "dbw_ford_msgs/msg/detail/throttle_info_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool dbw_ford_msgs__msg__quality_factor__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dbw_ford_msgs__msg__quality_factor__convert_to_py(void * raw_ros_message);
bool dbw_ford_msgs__msg__one_pedal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dbw_ford_msgs__msg__one_pedal__convert_to_py(void * raw_ros_message);
bool dbw_ford_msgs__msg__gear_num__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dbw_ford_msgs__msg__gear_num__convert_to_py(void * raw_ros_message);
bool dbw_ford_msgs__msg__ignition__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dbw_ford_msgs__msg__ignition__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dbw_ford_msgs__msg__throttle_info_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("dbw_ford_msgs.msg._throttle_info_report.ThrottleInfoReport", full_classname_dest, 58) == 0);
  }
  dbw_ford_msgs__msg__ThrottleInfoReport * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // throttle_pc
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_pc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_pc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_pedal_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_pedal_qf");
    if (!field) {
      return false;
    }
    if (!dbw_ford_msgs__msg__quality_factor__convert_from_py(field, &ros_message->throttle_pedal_qf)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // one_pedal
    PyObject * field = PyObject_GetAttrString(_pymsg, "one_pedal");
    if (!field) {
      return false;
    }
    if (!dbw_ford_msgs__msg__one_pedal__convert_from_py(field, &ros_message->one_pedal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // engine_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gear_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_num");
    if (!field) {
      return false;
    }
    if (!dbw_ford_msgs__msg__gear_num__convert_from_py(field, &ros_message->gear_num)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ignition
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignition");
    if (!field) {
      return false;
    }
    if (!dbw_ford_msgs__msg__ignition__convert_from_py(field, &ros_message->ignition)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // batt_curr
    PyObject * field = PyObject_GetAttrString(_pymsg, "batt_curr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->batt_curr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dbw_ford_msgs__msg__throttle_info_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ThrottleInfoReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dbw_ford_msgs.msg._throttle_info_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ThrottleInfoReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dbw_ford_msgs__msg__ThrottleInfoReport * ros_message = (dbw_ford_msgs__msg__ThrottleInfoReport *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_pc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_pc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_pc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_pedal_qf
    PyObject * field = NULL;
    field = dbw_ford_msgs__msg__quality_factor__convert_to_py(&ros_message->throttle_pedal_qf);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_pedal_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // one_pedal
    PyObject * field = NULL;
    field = dbw_ford_msgs__msg__one_pedal__convert_to_py(&ros_message->one_pedal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "one_pedal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_num
    PyObject * field = NULL;
    field = dbw_ford_msgs__msg__gear_num__convert_to_py(&ros_message->gear_num);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignition
    PyObject * field = NULL;
    field = dbw_ford_msgs__msg__ignition__convert_to_py(&ros_message->ignition);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // batt_curr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->batt_curr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batt_curr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
