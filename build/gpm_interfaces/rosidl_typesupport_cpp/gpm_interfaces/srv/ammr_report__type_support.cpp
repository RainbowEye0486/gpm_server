// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from gpm_interfaces:srv/AmmrReport.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gpm_interfaces/srv/detail/ammr_report__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gpm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AmmrReport_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AmmrReport_Request_type_support_ids_t;

static const _AmmrReport_Request_type_support_ids_t _AmmrReport_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AmmrReport_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AmmrReport_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AmmrReport_Request_type_support_symbol_names_t _AmmrReport_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, AmmrReport_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gpm_interfaces, srv, AmmrReport_Request)),
  }
};

typedef struct _AmmrReport_Request_type_support_data_t
{
  void * data[2];
} _AmmrReport_Request_type_support_data_t;

static _AmmrReport_Request_type_support_data_t _AmmrReport_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AmmrReport_Request_message_typesupport_map = {
  2,
  "gpm_interfaces",
  &_AmmrReport_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AmmrReport_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AmmrReport_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AmmrReport_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AmmrReport_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gpm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gpm_interfaces::srv::AmmrReport_Request>()
{
  return &::gpm_interfaces::srv::rosidl_typesupport_cpp::AmmrReport_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gpm_interfaces, srv, AmmrReport_Request)() {
  return get_message_type_support_handle<gpm_interfaces::srv::AmmrReport_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gpm_interfaces/srv/detail/ammr_report__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gpm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AmmrReport_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AmmrReport_Response_type_support_ids_t;

static const _AmmrReport_Response_type_support_ids_t _AmmrReport_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AmmrReport_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AmmrReport_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AmmrReport_Response_type_support_symbol_names_t _AmmrReport_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, AmmrReport_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gpm_interfaces, srv, AmmrReport_Response)),
  }
};

typedef struct _AmmrReport_Response_type_support_data_t
{
  void * data[2];
} _AmmrReport_Response_type_support_data_t;

static _AmmrReport_Response_type_support_data_t _AmmrReport_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AmmrReport_Response_message_typesupport_map = {
  2,
  "gpm_interfaces",
  &_AmmrReport_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AmmrReport_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AmmrReport_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AmmrReport_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AmmrReport_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gpm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gpm_interfaces::srv::AmmrReport_Response>()
{
  return &::gpm_interfaces::srv::rosidl_typesupport_cpp::AmmrReport_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gpm_interfaces, srv, AmmrReport_Response)() {
  return get_message_type_support_handle<gpm_interfaces::srv::AmmrReport_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gpm_interfaces/srv/detail/ammr_report__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gpm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AmmrReport_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AmmrReport_type_support_ids_t;

static const _AmmrReport_type_support_ids_t _AmmrReport_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AmmrReport_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AmmrReport_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AmmrReport_type_support_symbol_names_t _AmmrReport_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, AmmrReport)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gpm_interfaces, srv, AmmrReport)),
  }
};

typedef struct _AmmrReport_type_support_data_t
{
  void * data[2];
} _AmmrReport_type_support_data_t;

static _AmmrReport_type_support_data_t _AmmrReport_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AmmrReport_service_typesupport_map = {
  2,
  "gpm_interfaces",
  &_AmmrReport_service_typesupport_ids.typesupport_identifier[0],
  &_AmmrReport_service_typesupport_symbol_names.symbol_name[0],
  &_AmmrReport_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AmmrReport_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AmmrReport_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gpm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gpm_interfaces::srv::AmmrReport>()
{
  return &::gpm_interfaces::srv::rosidl_typesupport_cpp::AmmrReport_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
