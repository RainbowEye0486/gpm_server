// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gpm_interfaces:srv/Command.idl
// generated code does not contain a copyright notice
#include "gpm_interfaces/srv/detail/command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gpm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gpm_interfaces/srv/detail/command__struct.h"
#include "gpm_interfaces/srv/detail/command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // action, destination
#include "rosidl_runtime_c/string_functions.h"  // action, destination

// forward declare type support functions


using _Command_Request__ros_msg_type = gpm_interfaces__srv__Command_Request;

static bool _Command_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Command_Request__ros_msg_type * ros_message = static_cast<const _Command_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: action
  {
    const rosidl_runtime_c__String * str = &ros_message->action;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: destination
  {
    const rosidl_runtime_c__String * str = &ros_message->destination;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Command_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Command_Request__ros_msg_type * ros_message = static_cast<_Command_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: action
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->action.data) {
      rosidl_runtime_c__String__init(&ros_message->action);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->action,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'action'\n");
      return false;
    }
  }

  // Field name: destination
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->destination.data) {
      rosidl_runtime_c__String__init(&ros_message->destination);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->destination,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'destination'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpm_interfaces
size_t get_serialized_size_gpm_interfaces__srv__Command_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Command_Request__ros_msg_type * ros_message = static_cast<const _Command_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->action.size + 1);
  // field.name destination
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->destination.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Command_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gpm_interfaces__srv__Command_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpm_interfaces
size_t max_serialized_size_gpm_interfaces__srv__Command_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: action
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: destination
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

static size_t _Command_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_gpm_interfaces__srv__Command_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Command_Request = {
  "gpm_interfaces::srv",
  "Command_Request",
  _Command_Request__cdr_serialize,
  _Command_Request__cdr_deserialize,
  _Command_Request__get_serialized_size,
  _Command_Request__max_serialized_size
};

static rosidl_message_type_support_t _Command_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Command_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpm_interfaces, srv, Command_Request)() {
  return &_Command_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "gpm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "gpm_interfaces/srv/detail/command__struct.h"
// already included above
// #include "gpm_interfaces/srv/detail/command__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // device
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // device

// forward declare type support functions


using _Command_Response__ros_msg_type = gpm_interfaces__srv__Command_Response;

static bool _Command_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Command_Response__ros_msg_type * ros_message = static_cast<const _Command_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: device
  {
    const rosidl_runtime_c__String * str = &ros_message->device;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: accept
  {
    cdr << (ros_message->accept ? true : false);
  }

  return true;
}

static bool _Command_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Command_Response__ros_msg_type * ros_message = static_cast<_Command_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: device
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->device.data) {
      rosidl_runtime_c__String__init(&ros_message->device);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->device,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'device'\n");
      return false;
    }
  }

  // Field name: accept
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accept = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpm_interfaces
size_t get_serialized_size_gpm_interfaces__srv__Command_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Command_Response__ros_msg_type * ros_message = static_cast<const _Command_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name device
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->device.size + 1);
  // field.name accept
  {
    size_t item_size = sizeof(ros_message->accept);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Command_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gpm_interfaces__srv__Command_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpm_interfaces
size_t max_serialized_size_gpm_interfaces__srv__Command_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: device
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: accept
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Command_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_gpm_interfaces__srv__Command_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Command_Response = {
  "gpm_interfaces::srv",
  "Command_Response",
  _Command_Response__cdr_serialize,
  _Command_Response__cdr_deserialize,
  _Command_Response__get_serialized_size,
  _Command_Response__max_serialized_size
};

static rosidl_message_type_support_t _Command_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Command_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpm_interfaces, srv, Command_Response)() {
  return &_Command_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "gpm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gpm_interfaces/srv/command.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Command__callbacks = {
  "gpm_interfaces::srv",
  "Command",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpm_interfaces, srv, Command_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpm_interfaces, srv, Command_Response)(),
};

static rosidl_service_type_support_t Command__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Command__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpm_interfaces, srv, Command)() {
  return &Command__handle;
}

#if defined(__cplusplus)
}
#endif
