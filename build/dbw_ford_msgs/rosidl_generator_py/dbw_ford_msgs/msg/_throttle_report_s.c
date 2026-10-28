// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dbw_ford_msgs:msg/ThrottleReport.idl
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
#include "dbw_ford_msgs/msg/detail/throttle_report__struct.h"
#include "dbw_ford_msgs/msg/detail/throttle_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool dbw_ford_msgs__msg__watchdog_counter__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dbw_ford_msgs__msg__watchdog_counter__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dbw_ford_msgs__msg__throttle_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("dbw_ford_msgs.msg._throttle_report.ThrottleReport", full_classname_dest, 49) == 0);
  }
  dbw_ford_msgs__msg__ThrottleReport * ros_message = _ros_message;
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
  {  // pedal_input
    PyObject * field = PyObject_GetAttrString(_pymsg, "pedal_input");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pedal_input = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pedal_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "pedal_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pedal_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pedal_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "pedal_output");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pedal_output = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // override
    PyObject * field = PyObject_GetAttrString(_pymsg, "override");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->override = (Py_True == field);
    Py_DECREF(field);
  }
  {  // driver
    PyObject * field = PyObject_GetAttrString(_pymsg, "driver");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->driver = (Py_True == field);
    Py_DECREF(field);
  }
  {  // timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->timeout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // watchdog_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "watchdog_counter");
    if (!field) {
      return false;
    }
    if (!dbw_ford_msgs__msg__watchdog_counter__convert_from_py(field, &ros_message->watchdog_counter)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fault_wdc
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_wdc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_wdc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_ch1
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_ch1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_ch1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_ch2
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_ch2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_ch2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_power");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_power = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dbw_ford_msgs__msg__throttle_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ThrottleReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dbw_ford_msgs.msg._throttle_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ThrottleReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dbw_ford_msgs__msg__ThrottleReport * ros_message = (dbw_ford_msgs__msg__ThrottleReport *)raw_ros_message;
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
  {  // pedal_input
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pedal_input);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pedal_input", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pedal_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pedal_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pedal_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pedal_output
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pedal_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pedal_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // override
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->override ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "override", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driver
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->driver ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timeout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->timeout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // watchdog_counter
    PyObject * field = NULL;
    field = dbw_ford_msgs__msg__watchdog_counter__convert_to_py(&ros_message->watchdog_counter);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "watchdog_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_wdc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_wdc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_wdc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_ch1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_ch1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_ch1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_ch2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_ch2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_ch2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_power
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_power ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
