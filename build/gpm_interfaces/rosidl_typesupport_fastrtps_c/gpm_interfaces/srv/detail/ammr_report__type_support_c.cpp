// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gpm_interfaces:srv/AmmrReport.idl
// generated code does not contain a copyright notice
#include "gpm_interfaces/srv/detail/ammr_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gpm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gpm_interfaces/srv/detail/ammr_report__struct.h"
#include "gpm_interfaces/srv/detail/ammr_report__functions.h"
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

#include "rosidl_runtime_c/string.h"  // position
#include "rosidl_runtime_c/string_functions.h"  // position

// forward declare type support functions


using _AmmrReport_Request__ros_msg_type = gpm_interfaces__srv__AmmrReport_Request;

static bool _AmmrReport_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AmmrReport_Request__ros_msg_type * ros_message = static_cast<const _AmmrReport_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: slot1
  {
    cdr << ros_message->slot1;
  }

  // Field name: slot2
  {
    cdr << ros_message->slot2;
  }

  // Field name: position
  {
    const rosidl_runtime_c__String * str = &ros_message->position;
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

static bool _AmmrReport_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AmmrReport_Request__ros_msg_type * ros_message = static_cast<_AmmrReport_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: slot1
  {
    cdr >> ros_message->slot1;
  }

  // Field name: slot2
  {
    cdr >> ros_message->slot2;
  }

  // Field name: position
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->position.data) {
      rosidl_runtime_c__String__init(&ros_message->position);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->position,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'position'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpm_interfaces
size_t get_serialized_size_gpm_interfaces__srv__AmmrReport_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AmmrReport_Request__ros_msg_type * ros_message = static_cast<const _AmmrReport_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name slot1
  {
    size_t item_size = sizeof(ros_message->slot1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slot2
  {
    size_t item_size = sizeof(ros_message->slot2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->position.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AmmrReport_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gpm_interfaces__srv__AmmrReport_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpm_interfaces
size_t max_serialized_size_gpm_interfaces__srv__AmmrReport_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: slot1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: slot2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: position
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

static size_t _AmmrReport_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_gpm_interfaces__srv__AmmrReport_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AmmrReport_Request = {
  "gpm_interfaces::srv",
  "AmmrReport_Request",
  _AmmrReport_Request__cdr_serialize,
  _AmmrReport_Request__cdr_deserialize,
  _AmmrReport_Request__get_serialized_size,
  _AmmrReport_Request__max_serialized_size
};

static rosidl_message_type_support_t _AmmrReport_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AmmrReport_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpm_interfaces, srv, AmmrReport_Request)() {
  return &_AmmrReport_Request__type_support;
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
// #include "gpm_interfaces/srv/detail/ammr_report__struct.h"
// already included above
// #include "gpm_interfaces/srv/detail/ammr_report__functions.h"
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


// forward declare type support functions


using _AmmrReport_Response__ros_msg_type = gpm_interfaces__srv__AmmrReport_Response;

static bool _AmmrReport_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AmmrReport_Response__ros_msg_type * ros_message = static_cast<const _AmmrReport_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: receive
  {
    cdr << (ros_message->receive ? true : false);
  }

  return true;
}

static bool _AmmrReport_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AmmrReport_Response__ros_msg_type * ros_message = static_cast<_AmmrReport_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: receive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->receive = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpm_interfaces
size_t get_serialized_size_gpm_interfaces__srv__AmmrReport_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AmmrReport_Response__ros_msg_type * ros_message = static_cast<const _AmmrReport_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name receive
  {
    size_t item_size = sizeof(ros_message->receive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AmmrReport_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gpm_interfaces__srv__AmmrReport_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpm_interfaces
size_t max_serialized_size_gpm_interfaces__srv__AmmrReport_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: receive
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AmmrReport_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_gpm_interfaces__srv__AmmrReport_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AmmrReport_Response = {
  "gpm_interfaces::srv",
  "AmmrReport_Response",
  _AmmrReport_Response__cdr_serialize,
  _AmmrReport_Response__cdr_deserialize,
  _AmmrReport_Response__get_serialized_size,
  _AmmrReport_Response__max_serialized_size
};

static rosidl_message_type_support_t _AmmrReport_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AmmrReport_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpm_interfaces, srv, AmmrReport_Response)() {
  return &_AmmrReport_Response__type_support;
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
#include "gpm_interfaces/srv/ammr_report.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AmmrReport__callbacks = {
  "gpm_interfaces::srv",
  "AmmrReport",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpm_interfaces, srv, AmmrReport_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpm_interfaces, srv, AmmrReport_Response)(),
};

static rosidl_service_type_support_t AmmrReport__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AmmrReport__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpm_interfaces, srv, AmmrReport)() {
  return &AmmrReport__handle;
}

#if defined(__cplusplus)
}
#endif
