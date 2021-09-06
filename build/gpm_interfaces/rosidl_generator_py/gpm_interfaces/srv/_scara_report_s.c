// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gpm_interfaces:srv/ScaraReport.idl
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
#include "gpm_interfaces/srv/detail/scara_report__struct.h"
#include "gpm_interfaces/srv/detail/scara_report__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool gpm_interfaces__srv__scara_report__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("gpm_interfaces.srv._scara_report.ScaraReport_Request", full_classname_dest, 52) == 0);
  }
  gpm_interfaces__srv__ScaraReport_Request * ros_message = _ros_message;
  {  // action
    PyObject * field = PyObject_GetAttrString(_pymsg, "action");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->action, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // dummy_wafer
    PyObject * field = PyObject_GetAttrString(_pymsg, "dummy_wafer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dummy_wafer = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // dummy_cassette
    PyObject * field = PyObject_GetAttrString(_pymsg, "dummy_cassette");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dummy_cassette = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // slot_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "slot_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->slot_num = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // faild
    PyObject * field = PyObject_GetAttrString(_pymsg, "faild");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->faild, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gpm_interfaces__srv__scara_report__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ScaraReport_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gpm_interfaces.srv._scara_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ScaraReport_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gpm_interfaces__srv__ScaraReport_Request * ros_message = (gpm_interfaces__srv__ScaraReport_Request *)raw_ros_message;
  {  // action
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->action.data,
      strlen(ros_message->action.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dummy_wafer
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->dummy_wafer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dummy_wafer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dummy_cassette
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->dummy_cassette);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dummy_cassette", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slot_num
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->slot_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slot_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // faild
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->faild.data,
      strlen(ros_message->faild.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "faild", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "gpm_interfaces/srv/detail/scara_report__struct.h"
// already included above
// #include "gpm_interfaces/srv/detail/scara_report__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool gpm_interfaces__srv__scara_report__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("gpm_interfaces.srv._scara_report.ScaraReport_Response", full_classname_dest, 53) == 0);
  }
  gpm_interfaces__srv__ScaraReport_Response * ros_message = _ros_message;
  {  // receive
    PyObject * field = PyObject_GetAttrString(_pymsg, "receive");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->receive = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gpm_interfaces__srv__scara_report__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ScaraReport_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gpm_interfaces.srv._scara_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ScaraReport_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gpm_interfaces__srv__ScaraReport_Response * ros_message = (gpm_interfaces__srv__ScaraReport_Response *)raw_ros_message;
  {  // receive
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->receive ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "receive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
