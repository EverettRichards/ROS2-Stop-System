// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dbw_ford_msgs:msg/SteeringCmd.idl
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
#include "dbw_ford_msgs/msg/detail/steering_cmd__struct.h"
#include "dbw_ford_msgs/msg/detail/steering_cmd__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dbw_ford_msgs__msg__steering_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("dbw_ford_msgs.msg._steering_cmd.SteeringCmd", full_classname_dest, 43) == 0);
  }
  dbw_ford_msgs__msg__SteeringCmd * ros_message = _ros_message;
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
  {  // steering_wheel_angle_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_wheel_angle_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_wheel_angle_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_wheel_angle_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_wheel_angle_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_wheel_angle_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_wheel_torque_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_wheel_torque_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_wheel_torque_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cmd_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // clear
    PyObject * field = PyObject_GetAttrString(_pymsg, "clear");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->clear = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ignore
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignore");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ignore = (Py_True == field);
    Py_DECREF(field);
  }
  {  // quiet
    PyObject * field = PyObject_GetAttrString(_pymsg, "quiet");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->quiet = (Py_True == field);
    Py_DECREF(field);
  }
  {  // alert
    PyObject * field = PyObject_GetAttrString(_pymsg, "alert");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->alert = (Py_True == field);
    Py_DECREF(field);
  }
  {  // count
    PyObject * field = PyObject_GetAttrString(_pymsg, "count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dbw_ford_msgs__msg__steering_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SteeringCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dbw_ford_msgs.msg._steering_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SteeringCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dbw_ford_msgs__msg__SteeringCmd * ros_message = (dbw_ford_msgs__msg__SteeringCmd *)raw_ros_message;
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
  {  // steering_wheel_angle_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_wheel_angle_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_wheel_angle_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_wheel_angle_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_wheel_angle_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_wheel_angle_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_wheel_torque_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_wheel_torque_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_wheel_torque_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cmd_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clear
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->clear ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignore
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ignore ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignore", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quiet
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->quiet ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quiet", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alert
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->alert ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
