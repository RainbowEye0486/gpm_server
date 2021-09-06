// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gpm_interfaces:srv/Command.idl
// generated code does not contain a copyright notice
#include "gpm_interfaces/srv/detail/command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gpm_interfaces/srv/detail/command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace gpm_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
cdr_serialize(
  const gpm_interfaces::srv::Command_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: action
  cdr << ros_message.action;
  // Member: destination
  cdr << ros_message.destination;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gpm_interfaces::srv::Command_Request & ros_message)
{
  // Member: action
  cdr >> ros_message.action;

  // Member: destination
  cdr >> ros_message.destination;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
get_serialized_size(
  const gpm_interfaces::srv::Command_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.action.size() + 1);
  // Member: destination
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.destination.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
max_serialized_size_Command_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: action
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: destination
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Command_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gpm_interfaces::srv::Command_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Command_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gpm_interfaces::srv::Command_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Command_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gpm_interfaces::srv::Command_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Command_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Command_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Command_Request__callbacks = {
  "gpm_interfaces::srv",
  "Command_Request",
  _Command_Request__cdr_serialize,
  _Command_Request__cdr_deserialize,
  _Command_Request__get_serialized_size,
  _Command_Request__max_serialized_size
};

static rosidl_message_type_support_t _Command_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Command_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace gpm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gpm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<gpm_interfaces::srv::Command_Request>()
{
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_Command_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, Command_Request)() {
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_Command_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace gpm_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
cdr_serialize(
  const gpm_interfaces::srv::Command_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: device
  cdr << ros_message.device;
  // Member: accept
  cdr << (ros_message.accept ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gpm_interfaces::srv::Command_Response & ros_message)
{
  // Member: device
  cdr >> ros_message.device;

  // Member: accept
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accept = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
get_serialized_size(
  const gpm_interfaces::srv::Command_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: device
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.device.size() + 1);
  // Member: accept
  {
    size_t item_size = sizeof(ros_message.accept);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
max_serialized_size_Command_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: device
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: accept
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Command_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gpm_interfaces::srv::Command_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Command_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gpm_interfaces::srv::Command_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Command_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gpm_interfaces::srv::Command_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Command_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Command_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Command_Response__callbacks = {
  "gpm_interfaces::srv",
  "Command_Response",
  _Command_Response__cdr_serialize,
  _Command_Response__cdr_deserialize,
  _Command_Response__get_serialized_size,
  _Command_Response__max_serialized_size
};

static rosidl_message_type_support_t _Command_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Command_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace gpm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gpm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<gpm_interfaces::srv::Command_Response>()
{
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_Command_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, Command_Response)() {
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_Command_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace gpm_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Command__callbacks = {
  "gpm_interfaces::srv",
  "Command",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, Command_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, Command_Response)(),
};

static rosidl_service_type_support_t _Command__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Command__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace gpm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gpm_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<gpm_interfaces::srv::Command>()
{
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_Command__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, Command)() {
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_Command__handle;
}

#ifdef __cplusplus
}
#endif
