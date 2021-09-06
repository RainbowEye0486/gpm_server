// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gpm_interfaces:srv/ConveyerReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gpm_interfaces/srv/detail/conveyer_report__rosidl_typesupport_introspection_c.h"
#include "gpm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gpm_interfaces/srv/detail/conveyer_report__functions.h"
#include "gpm_interfaces/srv/detail/conveyer_report__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ConveyerReport_Request__rosidl_typesupport_introspection_c__ConveyerReport_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gpm_interfaces__srv__ConveyerReport_Request__init(message_memory);
}

void ConveyerReport_Request__rosidl_typesupport_introspection_c__ConveyerReport_Request_fini_function(void * message_memory)
{
  gpm_interfaces__srv__ConveyerReport_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConveyerReport_Request__rosidl_typesupport_introspection_c__ConveyerReport_Request_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__srv__ConveyerReport_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "empty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__srv__ConveyerReport_Request, empty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wafer_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__srv__ConveyerReport_Request, wafer_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConveyerReport_Request__rosidl_typesupport_introspection_c__ConveyerReport_Request_message_members = {
  "gpm_interfaces__srv",  // message namespace
  "ConveyerReport_Request",  // message name
  3,  // number of fields
  sizeof(gpm_interfaces__srv__ConveyerReport_Request),
  ConveyerReport_Request__rosidl_typesupport_introspection_c__ConveyerReport_Request_message_member_array,  // message members
  ConveyerReport_Request__rosidl_typesupport_introspection_c__ConveyerReport_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ConveyerReport_Request__rosidl_typesupport_introspection_c__ConveyerReport_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConveyerReport_Request__rosidl_typesupport_introspection_c__ConveyerReport_Request_message_type_support_handle = {
  0,
  &ConveyerReport_Request__rosidl_typesupport_introspection_c__ConveyerReport_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gpm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ConveyerReport_Request)() {
  if (!ConveyerReport_Request__rosidl_typesupport_introspection_c__ConveyerReport_Request_message_type_support_handle.typesupport_identifier) {
    ConveyerReport_Request__rosidl_typesupport_introspection_c__ConveyerReport_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConveyerReport_Request__rosidl_typesupport_introspection_c__ConveyerReport_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gpm_interfaces/srv/detail/conveyer_report__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gpm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gpm_interfaces/srv/detail/conveyer_report__functions.h"
// already included above
// #include "gpm_interfaces/srv/detail/conveyer_report__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ConveyerReport_Response__rosidl_typesupport_introspection_c__ConveyerReport_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gpm_interfaces__srv__ConveyerReport_Response__init(message_memory);
}

void ConveyerReport_Response__rosidl_typesupport_introspection_c__ConveyerReport_Response_fini_function(void * message_memory)
{
  gpm_interfaces__srv__ConveyerReport_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConveyerReport_Response__rosidl_typesupport_introspection_c__ConveyerReport_Response_message_member_array[1] = {
  {
    "receive",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpm_interfaces__srv__ConveyerReport_Response, receive),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConveyerReport_Response__rosidl_typesupport_introspection_c__ConveyerReport_Response_message_members = {
  "gpm_interfaces__srv",  // message namespace
  "ConveyerReport_Response",  // message name
  1,  // number of fields
  sizeof(gpm_interfaces__srv__ConveyerReport_Response),
  ConveyerReport_Response__rosidl_typesupport_introspection_c__ConveyerReport_Response_message_member_array,  // message members
  ConveyerReport_Response__rosidl_typesupport_introspection_c__ConveyerReport_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ConveyerReport_Response__rosidl_typesupport_introspection_c__ConveyerReport_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConveyerReport_Response__rosidl_typesupport_introspection_c__ConveyerReport_Response_message_type_support_handle = {
  0,
  &ConveyerReport_Response__rosidl_typesupport_introspection_c__ConveyerReport_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gpm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ConveyerReport_Response)() {
  if (!ConveyerReport_Response__rosidl_typesupport_introspection_c__ConveyerReport_Response_message_type_support_handle.typesupport_identifier) {
    ConveyerReport_Response__rosidl_typesupport_introspection_c__ConveyerReport_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConveyerReport_Response__rosidl_typesupport_introspection_c__ConveyerReport_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gpm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gpm_interfaces/srv/detail/conveyer_report__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gpm_interfaces__srv__detail__conveyer_report__rosidl_typesupport_introspection_c__ConveyerReport_service_members = {
  "gpm_interfaces__srv",  // service namespace
  "ConveyerReport",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gpm_interfaces__srv__detail__conveyer_report__rosidl_typesupport_introspection_c__ConveyerReport_Request_message_type_support_handle,
  NULL  // response message
  // gpm_interfaces__srv__detail__conveyer_report__rosidl_typesupport_introspection_c__ConveyerReport_Response_message_type_support_handle
};

static rosidl_service_type_support_t gpm_interfaces__srv__detail__conveyer_report__rosidl_typesupport_introspection_c__ConveyerReport_service_type_support_handle = {
  0,
  &gpm_interfaces__srv__detail__conveyer_report__rosidl_typesupport_introspection_c__ConveyerReport_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ConveyerReport_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ConveyerReport_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gpm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ConveyerReport)() {
  if (!gpm_interfaces__srv__detail__conveyer_report__rosidl_typesupport_introspection_c__ConveyerReport_service_type_support_handle.typesupport_identifier) {
    gpm_interfaces__srv__detail__conveyer_report__rosidl_typesupport_introspection_c__ConveyerReport_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gpm_interfaces__srv__detail__conveyer_report__rosidl_typesupport_introspection_c__ConveyerReport_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ConveyerReport_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpm_interfaces, srv, ConveyerReport_Response)()->data;
  }

  return &gpm_interfaces__srv__detail__conveyer_report__rosidl_typesupport_introspection_c__ConveyerReport_service_type_support_handle;
}
