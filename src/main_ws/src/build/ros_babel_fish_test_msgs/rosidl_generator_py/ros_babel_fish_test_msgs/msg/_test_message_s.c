// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_babel_fish_test_msgs:msg/TestMessage.idl
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
#include "ros_babel_fish_test_msgs/msg/detail/test_message__struct.h"
#include "ros_babel_fish_test_msgs/msg/detail/test_message__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "geometry_msgs/msg/detail/point__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__duration__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__duration__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_babel_fish_test_msgs__msg__test_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("ros_babel_fish_test_msgs.msg._test_message.TestMessage", full_classname_dest, 54) == 0);
  }
  ros_babel_fish_test_msgs__msg__TestMessage * ros_message = _ros_message;
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
  {  // b
    PyObject * field = PyObject_GetAttrString(_pymsg, "b");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->b = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ui8
    PyObject * field = PyObject_GetAttrString(_pymsg, "ui8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ui8 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ui16
    PyObject * field = PyObject_GetAttrString(_pymsg, "ui16");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ui16 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ui32
    PyObject * field = PyObject_GetAttrString(_pymsg, "ui32");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ui32 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ui64
    PyObject * field = PyObject_GetAttrString(_pymsg, "ui64");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ui64 = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // i8
    PyObject * field = PyObject_GetAttrString(_pymsg, "i8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->i8 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // i16
    PyObject * field = PyObject_GetAttrString(_pymsg, "i16");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->i16 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // i32
    PyObject * field = PyObject_GetAttrString(_pymsg, "i32");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->i32 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // i64
    PyObject * field = PyObject_GetAttrString(_pymsg, "i64");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->i64 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // f32
    PyObject * field = PyObject_GetAttrString(_pymsg, "f32");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f32 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f64
    PyObject * field = PyObject_GetAttrString(_pymsg, "f64");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f64 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // str
    PyObject * field = PyObject_GetAttrString(_pymsg, "str");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->str, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bounded_str
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_str");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bounded_str, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // t
    PyObject * field = PyObject_GetAttrString(_pymsg, "t");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->t)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // d
    PyObject * field = PyObject_GetAttrString(_pymsg, "d");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__duration__convert_from_py(field, &ros_message->d)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // point_arr
    PyObject * field = PyObject_GetAttrString(_pymsg, "point_arr");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'point_arr'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!geometry_msgs__msg__Point__Sequence__init(&(ros_message->point_arr), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Point__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__Point * dest = ros_message->point_arr.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_babel_fish_test_msgs__msg__test_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TestMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_babel_fish_test_msgs.msg._test_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TestMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_babel_fish_test_msgs__msg__TestMessage * ros_message = (ros_babel_fish_test_msgs__msg__TestMessage *)raw_ros_message;
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
  {  // b
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->b ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ui8
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ui8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ui8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ui16
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ui16);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ui16", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ui32
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ui32);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ui32", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ui64
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->ui64);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ui64", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i8
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->i8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i16
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->i16);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i16", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i32
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->i32);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i32", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i64
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->i64);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i64", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f32
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f32);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f32", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f64
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f64);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f64", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // str
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->str.data,
      strlen(ros_message->str.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "str", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_str
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bounded_str.data,
      strlen(ros_message->bounded_str.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_str", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->t);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d
    PyObject * field = NULL;
    field = builtin_interfaces__msg__duration__convert_to_py(&ros_message->d);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // point_arr
    PyObject * field = NULL;
    size_t size = ros_message->point_arr.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Point * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->point_arr.data[i]);
      PyObject * pyitem = geometry_msgs__msg__point__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "point_arr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
