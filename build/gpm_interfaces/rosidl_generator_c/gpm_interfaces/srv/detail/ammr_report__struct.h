// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpm_interfaces:srv/AmmrReport.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__AMMR_REPORT__STRUCT_H_
#define GPM_INTERFACES__SRV__DETAIL__AMMR_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/AmmrReport in the package gpm_interfaces.
typedef struct gpm_interfaces__srv__AmmrReport_Request
{
  int64_t slot1;
  int64_t slot2;
  rosidl_runtime_c__String position;
} gpm_interfaces__srv__AmmrReport_Request;

// Struct for a sequence of gpm_interfaces__srv__AmmrReport_Request.
typedef struct gpm_interfaces__srv__AmmrReport_Request__Sequence
{
  gpm_interfaces__srv__AmmrReport_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpm_interfaces__srv__AmmrReport_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AmmrReport in the package gpm_interfaces.
typedef struct gpm_interfaces__srv__AmmrReport_Response
{
  bool receive;
} gpm_interfaces__srv__AmmrReport_Response;

// Struct for a sequence of gpm_interfaces__srv__AmmrReport_Response.
typedef struct gpm_interfaces__srv__AmmrReport_Response__Sequence
{
  gpm_interfaces__srv__AmmrReport_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpm_interfaces__srv__AmmrReport_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPM_INTERFACES__SRV__DETAIL__AMMR_REPORT__STRUCT_H_
