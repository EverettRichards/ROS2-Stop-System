// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dbw_ford_msgs:msg/SteeringReport.idl
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
#include "dbw_ford_msgs/msg/detail/steering_report__struct.h"
#include "dbw_ford_msgs/msg/detail/steering_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dbw_ford_msgs__msg__steering_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("dbw_ford_msgs.msg._steering_report.SteeringReport", full_classname_dest, 49) == 0);
  }
  dbw_ford_msgs__msg__SteeringReport * ros_message = _ros_message;
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
  {  // steering_wheel_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_wheel_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_wheel_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_wheel_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_wheel_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_wheel_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_wheel_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_wheel_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_wheel_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_wheel_cmd_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_wheel_cmd_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steering_wheel_cmd_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = (float)PyFloat_AS_DOUBLE(field);
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
  {  // timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->timeout = (Py_True == field);
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
  {  // fault_bus1
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_bus1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_bus1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_bus2
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_bus2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_bus2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_calibration
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_calibration");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_calibration = (Py_True == field);
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
PyObject * dbw_ford_msgs__msg__steering_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SteeringReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dbw_ford_msgs.msg._steering_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SteeringReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dbw_ford_msgs__msg__SteeringReport * ros_message = (dbw_ford_msgs__msg__SteeringReport *)raw_ros_message;
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
  {  // steering_wheel_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_wheel_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_wheel_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_wheel_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_wheel_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_wheel_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_wheel_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_wheel_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_wheel_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_wheel_cmd_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steering_wheel_cmd_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_wheel_cmd_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
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
  {  // fault_bus1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_bus1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_bus1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_bus2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_bus2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_bus2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_calibration
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_calibration ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_calibration", field);
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
