// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gpm_interfaces:srv/ScaraReport.idl
// generated code does not contain a copyright notice
#include "gpm_interfaces/srv/detail/scara_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gpm_interfaces/srv/detail/scara_report__struct.hpp"

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
  const gpm_interfaces::srv::ScaraReport_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: action
  cdr << ros_message.action;
  // Member: dummy_wafer
  cdr << ros_message.dummy_wafer;
  // Member: dummy_cassette
  cdr << ros_message.dummy_cassette;
  // Member: slot_num
  cdr << ros_message.slot_num;
  // Member: faild
  cdr << ros_message.faild;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gpm_interfaces::srv::ScaraReport_Request & ros_message)
{
  // Member: action
  cdr >> ros_message.action;

  // Member: dummy_wafer
  cdr >> ros_message.dummy_wafer;

  // Member: dummy_cassette
  cdr >> ros_message.dummy_cassette;

  // Member: slot_num
  cdr >> ros_message.slot_num;

  // Member: faild
  cdr >> ros_message.faild;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
get_serialized_size(
  const gpm_interfaces::srv::ScaraReport_Request & ros_message,
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
  // Member: dummy_wafer
  {
    size_t item_size = sizeof(ros_message.dummy_wafer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dummy_cassette
  {
    size_t item_size = sizeof(ros_message.dummy_cassette);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slot_num
  {
    size_t item_size = sizeof(ros_message.slot_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: faild
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.faild.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gpm_interfaces
max_serialized_size_ScaraReport_Request(
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

  // Member: dummy_wafer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dummy_cassette
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: slot_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: faild
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

static bool _ScaraReport_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gpm_interfaces::srv::ScaraReport_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScaraReport_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gpm_interfaces::srv::ScaraReport_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScaraReport_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gpm_interfaces::srv::ScaraReport_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScaraReport_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ScaraReport_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ScaraReport_Request__callbacks = {
  "gpm_interfaces::srv",
  "ScaraReport_Request",
  _ScaraReport_Request__cdr_serialize,
  _ScaraReport_Request__cdr_deserialize,
  _ScaraReport_Request__get_serialized_size,
  _ScaraReport_Request__max_serialized_size
};

static rosidl_message_type_support_t _ScaraReport_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScaraReport_Request__callbacks,
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
get_message_type_support_handle<gpm_interfaces::srv::ScaraReport_Request>()
{
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_ScaraReport_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, ScaraReport_Request)() {
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_ScaraReport_Request__handle;
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
  const gpm_interfaces::srv::ScaraReport_Response & ros_message,
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
  gpm_interfaces::srv::ScaraReport_Response & ros_message)
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
  const gpm_interfaces::srv::ScaraReport_Response & ros_message,
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
max_serialized_size_ScaraReport_Response(
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

static bool _ScaraReport_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gpm_interfaces::srv::ScaraReport_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScaraReport_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gpm_interfaces::srv::ScaraReport_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScaraReport_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gpm_interfaces::srv::ScaraReport_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScaraReport_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ScaraReport_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ScaraReport_Response__callbacks = {
  "gpm_interfaces::srv",
  "ScaraReport_Response",
  _ScaraReport_Response__cdr_serialize,
  _ScaraReport_Response__cdr_deserialize,
  _ScaraReport_Response__get_serialized_size,
  _ScaraReport_Response__max_serialized_size
};

static rosidl_message_type_support_t _ScaraReport_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScaraReport_Response__callbacks,
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
get_message_type_support_handle<gpm_interfaces::srv::ScaraReport_Response>()
{
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_ScaraReport_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, ScaraReport_Response)() {
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_ScaraReport_Response__handle;
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

static service_type_support_callbacks_t _ScaraReport__callbacks = {
  "gpm_interfaces::srv",
  "ScaraReport",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, ScaraReport_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, ScaraReport_Response)(),
};

static rosidl_service_type_support_t _ScaraReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScaraReport__callbacks,
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
get_service_type_support_handle<gpm_interfaces::srv::ScaraReport>()
{
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_ScaraReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gpm_interfaces, srv, ScaraReport)() {
  return &gpm_interfaces::srv::typesupport_fastrtps_cpp::_ScaraReport__handle;
}

#ifdef __cplusplus
}
#endif
