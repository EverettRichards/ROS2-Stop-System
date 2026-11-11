// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dbw_ford_msgs:msg/BrakeInfoReport.idl
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
#include "dbw_ford_msgs/msg/detail/brake_info_report__struct.h"
#include "dbw_ford_msgs/msg/detail/brake_info_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool dbw_ford_msgs__msg__quality_factor__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dbw_ford_msgs__msg__quality_factor__convert_to_py(void * raw_ros_message);
bool dbw_ford_msgs__msg__hill_start_assist__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dbw_ford_msgs__msg__hill_start_assist__convert_to_py(void * raw_ros_message);
bool dbw_ford_msgs__msg__parking_brake__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dbw_ford_msgs__msg__parking_brake__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dbw_ford_msgs__msg__brake_info_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("dbw_ford_msgs.msg._brake_info_report.BrakeInfoReport", full_classname_dest, 52) == 0);
  }
  dbw_ford_msgs__msg__BrakeInfoReport * ros_message = _ros_message;
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
  {  // brake_torque_request
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_torque_request");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_torque_request = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_torque_actual
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_torque_actual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_torque_actual = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_torque_actual
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_torque_actual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_torque_actual = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_over_ground
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_over_ground");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_over_ground = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_pedal_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_pedal_qf");
    if (!field) {
      return false;
    }
    if (!dbw_ford_msgs__msg__quality_factor__convert_from_py(field, &ros_message->brake_pedal_qf)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // hsa
    PyObject * field = PyObject_GetAttrString(_pymsg, "hsa");
    if (!field) {
      return false;
    }
    if (!dbw_ford_msgs__msg__hill_start_assist__convert_from_py(field, &ros_message->hsa)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // abs_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->abs_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // abs_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->abs_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stab_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "stab_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stab_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stab_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "stab_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stab_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // trac_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "trac_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->trac_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // trac_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "trac_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->trac_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // parking_brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_brake");
    if (!field) {
      return false;
    }
    if (!dbw_ford_msgs__msg__parking_brake__convert_from_py(field, &ros_message->parking_brake)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // stationary
    PyObject * field = PyObject_GetAttrString(_pymsg, "stationary");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stationary = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dbw_ford_msgs__msg__brake_info_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BrakeInfoReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dbw_ford_msgs.msg._brake_info_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BrakeInfoReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dbw_ford_msgs__msg__BrakeInfoReport * ros_message = (dbw_ford_msgs__msg__BrakeInfoReport *)raw_ros_message;
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
  {  // brake_torque_request
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_torque_request);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_torque_request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_torque_actual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_torque_actual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_torque_actual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_torque_actual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_torque_actual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_torque_actual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_over_ground
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_over_ground);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_over_ground", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_pedal_qf
    PyObject * field = NULL;
    field = dbw_ford_msgs__msg__quality_factor__convert_to_py(&ros_message->brake_pedal_qf);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_pedal_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hsa
    PyObject * field = NULL;
    field = dbw_ford_msgs__msg__hill_start_assist__convert_to_py(&ros_message->hsa);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hsa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->abs_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->abs_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stab_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stab_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stab_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stab_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stab_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stab_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trac_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->trac_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trac_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trac_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->trac_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trac_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parking_brake
    PyObject * field = NULL;
    field = dbw_ford_msgs__msg__parking_brake__convert_to_py(&ros_message->parking_brake);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking_brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stationary
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stationary ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stationary", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
