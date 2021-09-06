// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gpm_interfaces:srv/AmmrReport.idl
// generated code does not contain a copyright notice
#include "gpm_interfaces/srv/detail/ammr_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gpm_interfaces/srv/detail/ammr_report__struct.hpp"

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
  const gpm_interfaces::srv::AmmrReport_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: slot1
  cdr << ros_message.slot1;
  // Member: slot2
  cdr << ros_message.slot2;
  // Member: position
  cdr << ros_message.position;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gpm_interfaces::srv::AmmrReport_Request & ros_message)
{
  // Member: slot1
  cdr >> ros_message.slot1;

  // Member: slot2
  cdr >> ros_message.slot2;

  // Member: position
  cdr >> ros_message.position;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
get_serialized_size(
  const gpm_interfaces::srv::AmmrReport_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: slot1
  {
    size_t item_size = sizeof(ros_message.slot1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slot2
  {
    size_t item_size = sizeof(ros_message.slot2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.position.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
max_serialized_size_AmmrReport_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: slot1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: slot2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: position
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

static bool _AmmrReport_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gpm_interfaces::srv::AmmrReport_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AmmrReport_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gpm_interfaces::srv::AmmrReport_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AmmrReport_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gpm_interfaces::srv::AmmrReport_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AmmrReport_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AmmrReport_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _AmmrReport_Request__callbacks = {
  "gpm_interfaces::srv",
  "AmmrReport_Request",
  _AmmrReport_Request__cdr_serialize,
  _AmmrReport_Request__cdr_deserialize,
  _AmmrReport_Request__get_serialized_size,
  _AmmrReport_Request__max_serialized_size
};

static rosidl_message_type_support_t _AmmrReport_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AmmrReport_Request__callbacks,
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
get_message_type_support_handle<gpm_interfaces::srv::AmmrReport_Request>()
{
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_AmmrReport_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, AmmrReport_Request)() {
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_AmmrReport_Request__handle;
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
  const gpm_interfaces::srv::AmmrReport_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: receive
  cdr << (ros_message.receive ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gpm_interfaces::srv::AmmrReport_Response & ros_message)
{
  // Member: receive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.receive = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
get_serialized_size(
  const gpm_interfaces::srv::AmmrReport_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: receive
  {
    size_t item_size = sizeof(ros_message.receive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
max_serialized_size_AmmrReport_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: receive
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AmmrReport_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gpm_interfaces::srv::AmmrReport_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AmmrReport_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gpm_interfaces::srv::AmmrReport_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AmmrReport_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gpm_interfaces::srv::AmmrReport_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AmmrReport_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AmmrReport_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _AmmrReport_Response__callbacks = {
  "gpm_interfaces::srv",
  "AmmrReport_Response",
  _AmmrReport_Response__cdr_serialize,
  _AmmrReport_Response__cdr_deserialize,
  _AmmrReport_Response__get_serialized_size,
  _AmmrReport_Response__max_serialized_size
};

static rosidl_message_type_support_t _AmmrReport_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AmmrReport_Response__callbacks,
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
get_message_type_support_handle<gpm_interfaces::srv::AmmrReport_Response>()
{
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_AmmrReport_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, AmmrReport_Response)() {
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_AmmrReport_Response__handle;
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

static service_type_support_callbacks_t _AmmrReport__callbacks = {
  "gpm_interfaces::srv",
  "AmmrReport",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, AmmrReport_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, AmmrReport_Response)(),
};

static rosidl_service_type_support_t _AmmrReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AmmrReport__callbacks,
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
get_service_type_support_handle<gpm_interfaces::srv::AmmrReport>()
{
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_AmmrReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, AmmrReport)() {
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_AmmrReport__handle;
}

#ifdef __cplusplus
}
#endif
