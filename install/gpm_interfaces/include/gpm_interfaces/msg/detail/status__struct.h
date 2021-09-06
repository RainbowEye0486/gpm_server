// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpm_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__MSG__DETAIL__STATUS__STRUCT_H_
#define GPM_INTERFACES__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'device'
// Member 'status'
// Member 'msg'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Status in the package gpm_interfaces.
typedef struct gpm_interfaces__msg__Status
{
  rosidl_runtime_c__String device;
  bool error;
  rosidl_runtime_c__String status;
  rosidl_runtime_c__String msg;
} gpm_interfaces__msg__Status;

// Struct for a sequence of gpm_interfaces__msg__Status.
typedef struct gpm_interfaces__msg__Status__Sequence
{
  gpm_interfaces__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpm_interfaces__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPM_INTERFACES__MSG__DETAIL__STATUS__STRUCT_H_
