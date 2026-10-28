// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dbw_ford_msgs:msg/Misc1Report.idl
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
#include "dbw_ford_msgs/msg/detail/misc1_report__struct.h"
#include "dbw_ford_msgs/msg/detail/misc1_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool dbw_ford_msgs__msg__turn_signal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dbw_ford_msgs__msg__turn_signal__convert_to_py(void * raw_ros_message);
bool dbw_ford_msgs__msg__wiper__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dbw_ford_msgs__msg__wiper__convert_to_py(void * raw_ros_message);
bool dbw_ford_msgs__msg__ambient_light__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dbw_ford_msgs__msg__ambient_light__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dbw_ford_msgs__msg__misc1_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("dbw_ford_msgs.msg._misc1_report.Misc1Report", full_classname_dest, 43) == 0);
  }
  dbw_ford_msgs__msg__Misc1Report * ros_message = _ros_message;
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
  {  // turn_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_signal");
    if (!field) {
      return false;
    }
    if (!dbw_ford_msgs__msg__turn_signal__convert_from_py(field, &ros_message->turn_signal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // high_beam_headlights
    PyObject * field = PyObject_GetAttrString(_pymsg, "high_beam_headlights");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->high_beam_headlights = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wiper
    PyObject * field = PyObject_GetAttrString(_pymsg, "wiper");
    if (!field) {
      return false;
    }
    if (!dbw_ford_msgs__msg__wiper__convert_from_py(field, &ros_message->wiper)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ambient_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "ambient_light");
    if (!field) {
      return false;
    }
    if (!dbw_ford_msgs__msg__ambient_light__convert_from_py(field, &ros_message->ambient_light)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // outside_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "outside_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outside_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // btn_cc_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_cc_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_cc_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_cc_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_cc_off");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_cc_off = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_cc_on_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_cc_on_off");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_cc_on_off = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_cc_res
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_cc_res");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_cc_res = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_cc_cncl
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_cc_cncl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_cc_cncl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_cc_res_cncl
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_cc_res_cncl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_cc_res_cncl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_cc_res_inc
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_cc_res_inc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_cc_res_inc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_cc_res_dec
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_cc_res_dec");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_cc_res_dec = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_cc_set_inc
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_cc_set_inc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_cc_set_inc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_cc_set_dec
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_cc_set_dec");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_cc_set_dec = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_cc_gap_inc
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_cc_gap_inc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_cc_gap_inc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_cc_gap_dec
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_cc_gap_dec");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_cc_gap_dec = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_la_on_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_la_on_off");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_la_on_off = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_ld_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_ld_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_ld_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_ld_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_ld_up");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_ld_up = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_ld_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_ld_down");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_ld_down = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_ld_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_ld_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_ld_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_ld_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_ld_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_ld_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_rd_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_rd_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_rd_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_rd_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_rd_up");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_rd_up = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_rd_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_rd_down");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_rd_down = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_rd_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_rd_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_rd_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_rd_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_rd_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_rd_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_vol_inc
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_vol_inc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_vol_inc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_vol_dec
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_vol_dec");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_vol_dec = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_mute
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_mute");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_mute = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_media
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_media");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_media = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_prev
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_prev");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_prev = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_next
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_next");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_next = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_speak
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_speak");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_speak = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_call_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_call_start");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_call_start = (Py_True == field);
    Py_DECREF(field);
  }
  {  // btn_call_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_call_end");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->btn_call_end = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_bus
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_bus");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_bus = (Py_True == field);
    Py_DECREF(field);
  }
  {  // door_driver
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_driver");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->door_driver = (Py_True == field);
    Py_DECREF(field);
  }
  {  // door_passenger
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_passenger");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->door_passenger = (Py_True == field);
    Py_DECREF(field);
  }
  {  // door_rear_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_rear_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->door_rear_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // door_rear_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_rear_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->door_rear_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // door_hood
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_hood");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->door_hood = (Py_True == field);
    Py_DECREF(field);
  }
  {  // door_trunk
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_trunk");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->door_trunk = (Py_True == field);
    Py_DECREF(field);
  }
  {  // passenger_detect
    PyObject * field = PyObject_GetAttrString(_pymsg, "passenger_detect");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->passenger_detect = (Py_True == field);
    Py_DECREF(field);
  }
  {  // passenger_airbag
    PyObject * field = PyObject_GetAttrString(_pymsg, "passenger_airbag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->passenger_airbag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // buckle_driver
    PyObject * field = PyObject_GetAttrString(_pymsg, "buckle_driver");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->buckle_driver = (Py_True == field);
    Py_DECREF(field);
  }
  {  // buckle_passenger
    PyObject * field = PyObject_GetAttrString(_pymsg, "buckle_passenger");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->buckle_passenger = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dbw_ford_msgs__msg__misc1_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Misc1Report */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dbw_ford_msgs.msg._misc1_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Misc1Report");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dbw_ford_msgs__msg__Misc1Report * ros_message = (dbw_ford_msgs__msg__Misc1Report *)raw_ros_message;
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
  {  // turn_signal
    PyObject * field = NULL;
    field = dbw_ford_msgs__msg__turn_signal__convert_to_py(&ros_message->turn_signal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // high_beam_headlights
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->high_beam_headlights ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "high_beam_headlights", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wiper
    PyObject * field = NULL;
    field = dbw_ford_msgs__msg__wiper__convert_to_py(&ros_message->wiper);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wiper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ambient_light
    PyObject * field = NULL;
    field = dbw_ford_msgs__msg__ambient_light__convert_to_py(&ros_message->ambient_light);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ambient_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outside_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outside_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outside_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_cc_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_cc_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_cc_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_cc_off
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_cc_off ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_cc_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_cc_on_off
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_cc_on_off ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_cc_on_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_cc_res
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_cc_res ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_cc_res", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_cc_cncl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_cc_cncl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_cc_cncl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_cc_res_cncl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_cc_res_cncl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_cc_res_cncl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_cc_res_inc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_cc_res_inc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_cc_res_inc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_cc_res_dec
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_cc_res_dec ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_cc_res_dec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_cc_set_inc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_cc_set_inc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_cc_set_inc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_cc_set_dec
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_cc_set_dec ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_cc_set_dec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_cc_gap_inc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_cc_gap_inc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_cc_gap_inc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_cc_gap_dec
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_cc_gap_dec ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_cc_gap_dec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_la_on_off
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_la_on_off ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_la_on_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_ld_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_ld_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_ld_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_ld_up
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_ld_up ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_ld_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_ld_down
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_ld_down ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_ld_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_ld_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_ld_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_ld_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_ld_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_ld_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_ld_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_rd_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_rd_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_rd_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_rd_up
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_rd_up ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_rd_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_rd_down
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_rd_down ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_rd_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_rd_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_rd_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_rd_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_rd_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_rd_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_rd_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_vol_inc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_vol_inc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_vol_inc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_vol_dec
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_vol_dec ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_vol_dec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_mute
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_mute ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_mute", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_media
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_media ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_media", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_prev
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_prev ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_prev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_next
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_next ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_next", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_speak
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_speak ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_speak", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_call_start
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_call_start ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_call_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_call_end
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->btn_call_end ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_call_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_bus
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_bus ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_bus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_driver
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->door_driver ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_driver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_passenger
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->door_passenger ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_passenger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_rear_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->door_rear_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_rear_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_rear_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->door_rear_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_rear_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_hood
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->door_hood ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_hood", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_trunk
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->door_trunk ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_trunk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // passenger_detect
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->passenger_detect ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "passenger_detect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // passenger_airbag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->passenger_airbag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "passenger_airbag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buckle_driver
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->buckle_driver ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buckle_driver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buckle_passenger
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->buckle_passenger ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buckle_passenger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
