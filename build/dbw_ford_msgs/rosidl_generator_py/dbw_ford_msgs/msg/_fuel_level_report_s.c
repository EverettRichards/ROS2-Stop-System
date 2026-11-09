// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dbw_ford_msgs:msg/FuelLevelReport.idl
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
#include "dbw_ford_msgs/msg/detail/fuel_level_report__struct.h"
#include "dbw_ford_msgs/msg/detail/fuel_level_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dbw_ford_msgs__msg__fuel_level_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("dbw_ford_msgs.msg._fuel_level_report.FuelLevelReport", full_classname_dest, 52) == 0);
  }
  dbw_ford_msgs__msg__FuelLevelReport * ros_message = _ros_message;
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
  {  // fuel_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_level = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_12v
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_12v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_12v = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_hev
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_hev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_hev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odometer
    PyObject * field = PyObject_GetAttrString(_pymsg, "odometer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odometer = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dbw_ford_msgs__msg__fuel_level_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FuelLevelReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dbw_ford_msgs.msg._fuel_level_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FuelLevelReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dbw_ford_msgs__msg__FuelLevelReport * ros_message = (dbw_ford_msgs__msg__FuelLevelReport *)raw_ros_message;
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
  {  // fuel_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_12v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_12v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_12v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_hev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_hev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_hev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odometer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odometer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odometer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
