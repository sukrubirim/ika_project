// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ika_msgs:msg/EnvironmentData.idl
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
#include "ika_msgs/msg/detail/environment_data__struct.h"
#include "ika_msgs/msg/detail/environment_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ika_msgs__msg__environment_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("ika_msgs.msg._environment_data.EnvironmentData", full_classname_dest, 46) == 0);
  }
  ika_msgs__msg__EnvironmentData * ros_message = _ros_message;
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
  {  // temperature_celsius
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_celsius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature_celsius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // relative_humidity_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_humidity_percent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->relative_humidity_percent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pressure_pa
    PyObject * field = PyObject_GetAttrString(_pymsg, "pressure_pa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pressure_pa = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude_m = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rain_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "rain_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rain_detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // water_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "water_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->water_detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sensor_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sensor_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ika_msgs__msg__environment_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EnvironmentData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ika_msgs.msg._environment_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EnvironmentData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ika_msgs__msg__EnvironmentData * ros_message = (ika_msgs__msg__EnvironmentData *)raw_ros_message;
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
  {  // temperature_celsius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature_celsius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_celsius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_humidity_percent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->relative_humidity_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_humidity_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pressure_pa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pressure_pa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pressure_pa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rain_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rain_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rain_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // water_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->water_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "water_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sensor_status.data,
      strlen(ros_message->sensor_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
