// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dbw_ford_msgs:msg/DriverAssistReport.idl
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
#include "dbw_ford_msgs/msg/detail/driver_assist_report__struct.h"
#include "dbw_ford_msgs/msg/detail/driver_assist_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dbw_ford_msgs__msg__driver_assist_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("dbw_ford_msgs.msg._driver_assist_report.DriverAssistReport", full_classname_dest, 58) == 0);
  }
  dbw_ford_msgs__msg__DriverAssistReport * ros_message = _ros_message;
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
  {  // decel
    PyObject * field = PyObject_GetAttrString(_pymsg, "decel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->decel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // decel_src
    PyObject * field = PyObject_GetAttrString(_pymsg, "decel_src");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->decel_src = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fcw_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "fcw_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fcw_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fcw_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "fcw_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fcw_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // aeb_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "aeb_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->aeb_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // aeb_precharge
    PyObject * field = PyObject_GetAttrString(_pymsg, "aeb_precharge");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->aeb_precharge = (Py_True == field);
    Py_DECREF(field);
  }
  {  // aeb_braking
    PyObject * field = PyObject_GetAttrString(_pymsg, "aeb_braking");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->aeb_braking = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acc_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acc_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acc_braking
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_braking");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acc_braking = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dbw_ford_msgs__msg__driver_assist_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DriverAssistReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dbw_ford_msgs.msg._driver_assist_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DriverAssistReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dbw_ford_msgs__msg__DriverAssistReport * ros_message = (dbw_ford_msgs__msg__DriverAssistReport *)raw_ros_message;
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
  {  // decel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->decel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "decel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // decel_src
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->decel_src);
    {
      int rc = PyObject_SetAttrString(_pymessage, "decel_src", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fcw_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fcw_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fcw_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fcw_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fcw_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fcw_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aeb_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->aeb_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aeb_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aeb_precharge
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->aeb_precharge ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aeb_precharge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aeb_braking
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->aeb_braking ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aeb_braking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acc_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_braking
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acc_braking ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_braking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
