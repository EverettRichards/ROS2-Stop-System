// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dbw_ford_msgs:msg/SurroundReport.idl
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
#include "dbw_ford_msgs/msg/detail/surround_report__struct.h"
#include "dbw_ford_msgs/msg/detail/surround_report__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dbw_ford_msgs__msg__surround_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("dbw_ford_msgs.msg._surround_report.SurroundReport", full_classname_dest, 49) == 0);
  }
  dbw_ford_msgs__msg__SurroundReport * ros_message = _ros_message;
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
  {  // cta_left_alert
    PyObject * field = PyObject_GetAttrString(_pymsg, "cta_left_alert");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cta_left_alert = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cta_right_alert
    PyObject * field = PyObject_GetAttrString(_pymsg, "cta_right_alert");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cta_right_alert = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cta_left_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "cta_left_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cta_left_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cta_right_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "cta_right_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cta_right_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // blis_left_alert
    PyObject * field = PyObject_GetAttrString(_pymsg, "blis_left_alert");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->blis_left_alert = (Py_True == field);
    Py_DECREF(field);
  }
  {  // blis_right_alert
    PyObject * field = PyObject_GetAttrString(_pymsg, "blis_right_alert");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->blis_right_alert = (Py_True == field);
    Py_DECREF(field);
  }
  {  // blis_left_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "blis_left_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->blis_left_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // blis_right_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "blis_right_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->blis_right_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sonar_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "sonar_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sonar_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sonar_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "sonar_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sonar_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sonar
    PyObject * field = PyObject_GetAttrString(_pymsg, "sonar");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 12;
      float * dest = ros_message->sonar;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dbw_ford_msgs__msg__surround_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SurroundReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dbw_ford_msgs.msg._surround_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SurroundReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dbw_ford_msgs__msg__SurroundReport * ros_message = (dbw_ford_msgs__msg__SurroundReport *)raw_ros_message;
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
  {  // cta_left_alert
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cta_left_alert ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cta_left_alert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cta_right_alert
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cta_right_alert ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cta_right_alert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cta_left_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cta_left_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cta_left_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cta_right_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cta_right_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cta_right_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blis_left_alert
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->blis_left_alert ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blis_left_alert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blis_right_alert
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->blis_right_alert ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blis_right_alert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blis_left_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->blis_left_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blis_left_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blis_right_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->blis_right_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blis_right_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sonar_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sonar_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sonar_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sonar_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sonar_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sonar_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sonar
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "sonar");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->sonar[0]);
    memcpy(dst, src, 12 * sizeof(float));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
