// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gpm_interfaces:srv/ConveyerReport.idl
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
#include "gpm_interfaces/srv/detail/conveyer_report__struct.h"
#include "gpm_interfaces/srv/detail/conveyer_report__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool gpm_interfaces__srv__conveyer_report__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("gpm_interfaces.srv._conveyer_report.ConveyerReport_Request", full_classname_dest, 58) == 0);
  }
  gpm_interfaces__srv__ConveyerReport_Request * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // empty
    PyObject * field = PyObject_GetAttrString(_pymsg, "empty");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->empty = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wafer_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "wafer_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wafer_num = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gpm_interfaces__srv__conveyer_report__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConveyerReport_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gpm_interfaces.srv._conveyer_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConveyerReport_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gpm_interfaces__srv__ConveyerReport_Request * ros_message = (gpm_interfaces__srv__ConveyerReport_Request *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // empty
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->empty ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "empty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wafer_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wafer_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wafer_num", field);
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
// #include "gpm_interfaces/srv/detail/conveyer_report__struct.h"
// already included above
// #include "gpm_interfaces/srv/detail/conveyer_report__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool gpm_interfaces__srv__conveyer_report__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("gpm_interfaces.srv._conveyer_report.ConveyerReport_Response", full_classname_dest, 59) == 0);
  }
  gpm_interfaces__srv__ConveyerReport_Response * ros_message = _ros_message;
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
PyObject * gpm_interfaces__srv__conveyer_report__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConveyerReport_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gpm_interfaces.srv._conveyer_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConveyerReport_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gpm_interfaces__srv__ConveyerReport_Response * ros_message = (gpm_interfaces__srv__ConveyerReport_Response *)raw_ros_message;
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
