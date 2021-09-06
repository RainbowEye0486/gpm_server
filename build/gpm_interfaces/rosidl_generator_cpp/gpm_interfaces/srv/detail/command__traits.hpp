// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gpm_interfaces:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__COMMAND__TRAITS_HPP_
#define GPM_INTERFACES__SRV__DETAIL__COMMAND__TRAITS_HPP_

#include "gpm_interfaces/srv/detail/command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gpm_interfaces::srv::Command_Request>()
{
  return "gpm_interfaces::srv::Command_Request";
}

template<>
inline const char * name<gpm_interfaces::srv::Command_Request>()
{
  return "gpm_interfaces/srv/Command_Request";
}

template<>
struct has_fixed_size<gpm_interfaces::srv::Command_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gpm_interfaces::srv::Command_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gpm_interfaces::srv::Command_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gpm_interfaces::srv::Command_Response>()
{
  return "gpm_interfaces::srv::Command_Response";
}

template<>
inline const char * name<gpm_interfaces::srv::Command_Response>()
{
  return "gpm_interfaces/srv/Command_Response";
}

template<>
struct has_fixed_size<gpm_interfaces::srv::Command_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gpm_interfaces::srv::Command_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gpm_interfaces::srv::Command_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gpm_interfaces::srv::Command>()
{
  return "gpm_interfaces::srv::Command";
}

template<>
inline const char * name<gpm_interfaces::srv::Command>()
{
  return "gpm_interfaces/srv/Command";
}

template<>
struct has_fixed_size<gpm_interfaces::srv::Command>
  : std::integral_constant<
    bool,
    has_fixed_size<gpm_interfaces::srv::Command_Request>::value &&
    has_fixed_size<gpm_interfaces::srv::Command_Response>::value
  >
{
};

template<>
struct has_bounded_size<gpm_interfaces::srv::Command>
  : std::integral_constant<
    bool,
    has_bounded_size<gpm_interfaces::srv::Command_Request>::value &&
    has_bounded_size<gpm_interfaces::srv::Command_Response>::value
  >
{
};

template<>
struct is_service<gpm_interfaces::srv::Command>
  : std::true_type
{
};

template<>
struct is_service_request<gpm_interfaces::srv::Command_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gpm_interfaces::srv::Command_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GPM_INTERFACES__SRV__DETAIL__COMMAND__TRAITS_HPP_
