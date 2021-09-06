// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gpm_interfaces:srv/ScaraReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gpm_interfaces/srv/detail/scara_report__rosidl_typesupport_introspection_c.h"
#include "gpm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gpm_interfaces/srv/detail/scara_report__functions.h"
#include "gpm_interfaces/srv/detail/scara_report__struct.h"


// Include directives for member types
// Member `action`
// Member `faild`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ScaraReport_Request__rosidl_typesupport_introspection_c__ScaraReport_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gpm_interfaces__srv__ScaraReport_Request__init(message_memory);
}

void ScaraReport_Request__rosidl_typesupport_introspection_c__ScaraReport_Request_fini_function(void * message_memory)
{
  gpm_interfaces__srv__ScaraReport_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ScaraReport_Request__rosidl_typesupport_introspection_c__ScaraReport_Request_message_member_array[5] = {
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__srv__ScaraReport_Request, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dummy_wafer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__srv__ScaraReport_Request, dummy_wafer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dummy_cassette",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__srv__ScaraReport_Request, dummy_cassette),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slot_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__srv__ScaraReport_Request, slot_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "faild",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__srv__ScaraReport_Request, faild),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScaraReport_Request__rosidl_typesupport_introspection_c__ScaraReport_Request_message_members = {
  "gpm_interfaces__srv",  // message namespace
  "ScaraReport_Request",  // message name
  5,  // number of fields
  sizeof(gpm_interfaces__srv__ScaraReport_Request),
  ScaraReport_Request__rosidl_typesupport_introspection_c__ScaraReport_Request_message_member_array,  // message members
  ScaraReport_Request__rosidl_typesupport_introspection_c__ScaraReport_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ScaraReport_Request__rosidl_typesupport_introspection_c__ScaraReport_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScaraReport_Request__rosidl_typesupport_introspection_c__ScaraReport_Request_message_type_support_handle = {
  0,
  &ScaraReport_Request__rosidl_typesupport_introspection_c__ScaraReport_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gpm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ScaraReport_Request)() {
  if (!ScaraReport_Request__rosidl_typesupport_introspection_c__ScaraReport_Request_message_type_support_handle.typesupport_identifier) {
    ScaraReport_Request__rosidl_typesupport_introspection_c__ScaraReport_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScaraReport_Request__rosidl_typesupport_introspection_c__ScaraReport_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gpm_interfaces/srv/detail/scara_report__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gpm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gpm_interfaces/srv/detail/scara_report__functions.h"
// already included above
// #include "gpm_interfaces/srv/detail/scara_report__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ScaraReport_Response__rosidl_typesupport_introspection_c__ScaraReport_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gpm_interfaces__srv__ScaraReport_Response__init(message_memory);
}

void ScaraReport_Response__rosidl_typesupport_introspection_c__ScaraReport_Response_fini_function(void * message_memory)
{
  gpm_interfaces__srv__ScaraReport_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ScaraReport_Response__rosidl_typesupport_introspection_c__ScaraReport_Response_message_member_array[1] = {
  {
    "receive",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__srv__ScaraReport_Response, receive),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScaraReport_Response__rosidl_typesupport_introspection_c__ScaraReport_Response_message_members = {
  "gpm_interfaces__srv",  // message namespace
  "ScaraReport_Response",  // message name
  1,  // number of fields
  sizeof(gpm_interfaces__srv__ScaraReport_Response),
  ScaraReport_Response__rosidl_typesupport_introspection_c__ScaraReport_Response_message_member_array,  // message members
  ScaraReport_Response__rosidl_typesupport_introspection_c__ScaraReport_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ScaraReport_Response__rosidl_typesupport_introspection_c__ScaraReport_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScaraReport_Response__rosidl_typesupport_introspection_c__ScaraReport_Response_message_type_support_handle = {
  0,
  &ScaraReport_Response__rosidl_typesupport_introspection_c__ScaraReport_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gpm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ScaraReport_Response)() {
  if (!ScaraReport_Response__rosidl_typesupport_introspection_c__ScaraReport_Response_message_type_support_handle.typesupport_identifier) {
    ScaraReport_Response__rosidl_typesupport_introspection_c__ScaraReport_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScaraReport_Response__rosidl_typesupport_introspection_c__ScaraReport_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gpm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gpm_interfaces/srv/detail/scara_report__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gpm_interfaces__srv__detail__scara_report__rosidl_typesupport_introspection_c__ScaraReport_service_members = {
  "gpm_interfaces__srv",  // service namespace
  "ScaraReport",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gpm_interfaces__srv__detail__scara_report__rosidl_typesupport_introspection_c__ScaraReport_Request_message_type_support_handle,
  NULL  // response message
  // gpm_interfaces__srv__detail__scara_report__rosidl_typesupport_introspection_c__ScaraReport_Response_message_type_support_handle
};

static rosidl_service_type_support_t gpm_interfaces__srv__detail__scara_report__rosidl_typesupport_introspection_c__ScaraReport_service_type_support_handle = {
  0,
  &gpm_interfaces__srv__detail__scara_report__rosidl_typesupport_introspection_c__ScaraReport_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ScaraReport_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ScaraReport_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gpm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ScaraReport)() {
  if (!gpm_interfaces__srv__detail__scara_report__rosidl_typesupport_introspection_c__ScaraReport_service_type_support_handle.typesupport_identifier) {
    gpm_interfaces__srv__detail__scara_report__rosidl_typesupport_introspection_c__ScaraReport_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gpm_interfaces__srv__detail__scara_report__rosidl_typesupport_introspection_c__ScaraReport_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ScaraReport_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ScaraReport_Response)()->data;
  }

  return &gpm_interfaces__srv__detail__scara_report__rosidl_typesupport_introspection_c__ScaraReport_service_type_support_handle;
}
