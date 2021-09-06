// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpm_interfaces:srv/ConveyerReport.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__CONVEYER_REPORT__STRUCT_H_
#define GPM_INTERFACES__SRV__DETAIL__CONVEYER_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ConveyerReport in the package gpm_interfaces.
typedef struct gpm_interfaces__srv__ConveyerReport_Request
{
  int64_t id;
  bool empty;
  int8_t wafer_num;
} gpm_interfaces__srv__ConveyerReport_Request;

// Struct for a sequence of gpm_interfaces__srv__ConveyerReport_Request.
typedef struct gpm_interfaces__srv__ConveyerReport_Request__Sequence
{
  gpm_interfaces__srv__ConveyerReport_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpm_interfaces__srv__ConveyerReport_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ConveyerReport in the package gpm_interfaces.
typedef struct gpm_interfaces__srv__ConveyerReport_Response
{
  bool receive;
} gpm_interfaces__srv__ConveyerReport_Response;

// Struct for a sequence of gpm_interfaces__srv__ConveyerReport_Response.
typedef struct gpm_interfaces__srv__ConveyerReport_Response__Sequence
{
  gpm_interfaces__srv__ConveyerReport_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpm_interfaces__srv__ConveyerReport_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPM_INTERFACES__SRV__DETAIL__CONVEYER_REPORT__STRUCT_H_
