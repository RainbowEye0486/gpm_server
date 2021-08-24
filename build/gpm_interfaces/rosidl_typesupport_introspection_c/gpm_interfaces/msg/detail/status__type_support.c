// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gpm_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gpm_interfaces/msg/detail/status__rosidl_typesupport_introspection_c.h"
#include "gpm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gpm_interfaces/msg/detail/status__functions.h"
#include "gpm_interfaces/msg/detail/status__struct.h"


// Include directives for member types
// Member `device`
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Status__rosidl_typesupport_introspection_c__Status_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gpm_interfaces__msg__Status__init(message_memory);
}

void Status__rosidl_typesupport_introspection_c__Status_fini_function(void * message_memory)
{
  gpm_interfaces__msg__Status__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Status__rosidl_typesupport_introspection_c__Status_message_member_array[3] = {
  {
    "device",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__msg__Status, device),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__msg__Status, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__msg__Status, msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Status__rosidl_typesupport_introspection_c__Status_message_members = {
  "gpm_interfaces__msg",  // message namespace
  "Status",  // message name
  3,  // number of fields
  sizeof(gpm_interfaces__msg__Status),
  Status__rosidl_typesupport_introspection_c__Status_message_member_array,  // message members
  Status__rosidl_typesupport_introspection_c__Status_init_function,  // function to initialize message memory (memory has to be allocated)
  Status__rosidl_typesupport_introspection_c__Status_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Status__rosidl_typesupport_introspection_c__Status_message_type_support_handle = {
  0,
  &Status__rosidl_typesupport_introspection_c__Status_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gpm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, msg, Status)() {
  if (!Status__rosidl_typesupport_introspection_c__Status_message_type_support_handle.typesupport_identifier) {
    Status__rosidl_typesupport_introspection_c__Status_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Status__rosidl_typesupport_introspection_c__Status_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
