// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from controls_msgs:msg/Dig.idl
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
#include "controls_msgs/msg/detail/dig__struct.h"
#include "controls_msgs/msg/detail/dig__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool controls_msgs__msg__dig__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[27];
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
    assert(strncmp("controls_msgs.msg._dig.Dig", full_classname_dest, 26) == 0);
  }
  controls_msgs__msg__Dig * ros_message = _ros_message;
  {  // motors
    PyObject * field = PyObject_GetAttrString(_pymsg, "motors");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motors = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lins
    PyObject * field = PyObject_GetAttrString(_pymsg, "lins");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lins = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * controls_msgs__msg__dig__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Dig */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("controls_msgs.msg._dig");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Dig");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  controls_msgs__msg__Dig * ros_message = (controls_msgs__msg__Dig *)raw_ros_message;
  {  // motors
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lins
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lins);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lins", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
