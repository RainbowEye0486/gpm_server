// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpm_interfaces:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__COMMAND__STRUCT_H_
#define GPM_INTERFACES__SRV__DETAIL__COMMAND__STRUCT_H_

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
// Member 'destination'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Command in the package gpm_interfaces.
typedef struct gpm_interfaces__srv__Command_Request
{
  rosidl_runtime_c__String action;
  rosidl_runtime_c__String destination;
} gpm_interfaces__srv__Command_Request;

// Struct for a sequence of gpm_interfaces__srv__Command_Request.
typedef struct gpm_interfaces__srv__Command_Request__Sequence
{
  gpm_interfaces__srv__Command_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpm_interfaces__srv__Command_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'device'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/Command in the package gpm_interfaces.
typedef struct gpm_interfaces__srv__Command_Response
{
  rosidl_runtime_c__String device;
  bool accept;
} gpm_interfaces__srv__Command_Response;

// Struct for a sequence of gpm_interfaces__srv__Command_Response.
typedef struct gpm_interfaces__srv__Command_Response__Sequence
{
  gpm_interfaces__srv__Command_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpm_interfaces__srv__Command_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPM_INTERFACES__SRV__DETAIL__COMMAND__STRUCT_H_
