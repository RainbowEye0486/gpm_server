// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpm_interfaces:srv/ScaraReport.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__SCARA_REPORT__STRUCT_H_
#define GPM_INTERFACES__SRV__DETAIL__SCARA_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
// Member 'faild'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ScaraReport in the package gpm_interfaces.
typedef struct gpm_interfaces__srv__ScaraReport_Request
{
  rosidl_runtime_c__String action;
  int64_t dummy_wafer;
  int64_t dummy_cassette;
  int64_t slot_num;
  rosidl_runtime_c__String faild;
} gpm_interfaces__srv__ScaraReport_Request;

// Struct for a sequence of gpm_interfaces__srv__ScaraReport_Request.
typedef struct gpm_interfaces__srv__ScaraReport_Request__Sequence
{
  gpm_interfaces__srv__ScaraReport_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpm_interfaces__srv__ScaraReport_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ScaraReport in the package gpm_interfaces.
typedef struct gpm_interfaces__srv__ScaraReport_Response
{
  bool receive;
} gpm_interfaces__srv__ScaraReport_Response;

// Struct for a sequence of gpm_interfaces__srv__ScaraReport_Response.
typedef struct gpm_interfaces__srv__ScaraReport_Response__Sequence
{
  gpm_interfaces__srv__ScaraReport_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpm_interfaces__srv__ScaraReport_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPM_INTERFACES__SRV__DETAIL__SCARA_REPORT__STRUCT_H_
