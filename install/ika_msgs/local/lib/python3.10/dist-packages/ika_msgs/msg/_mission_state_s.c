// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ika_msgs:msg/MissionState.idl
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
#include "ika_msgs/msg/detail/mission_state__struct.h"
#include "ika_msgs/msg/detail/mission_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ika_msgs__msg__mission_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("ika_msgs.msg._mission_state.MissionState", full_classname_dest, 40) == 0);
  }
  ika_msgs__msg__MissionState * ros_message = _ros_message;
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
  {  // mission_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mission_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_stage
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_stage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_stage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mission_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mission_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stage_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "stage_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->stage_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // status_text
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->status_text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // autonomous_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "autonomous_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->autonomous_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_stop_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_stop_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_stop_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // elapsed_time_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "elapsed_time_sec");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->elapsed_time_sec = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ika_msgs__msg__mission_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MissionState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ika_msgs.msg._mission_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MissionState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ika_msgs__msg__MissionState * ros_message = (ika_msgs__msg__MissionState *)raw_ros_message;
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
  {  // mission_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mission_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_stage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_stage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_stage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mission_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stage_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->stage_name.data,
      strlen(ros_message->stage_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stage_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->status_text.data,
      strlen(ros_message->status_text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // autonomous_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->autonomous_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "autonomous_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_stop_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_stop_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_stop_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elapsed_time_sec
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->elapsed_time_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elapsed_time_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
