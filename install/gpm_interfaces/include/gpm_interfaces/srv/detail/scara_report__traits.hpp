// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gpm_interfaces:srv/ScaraReport.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__SCARA_REPORT__TRAITS_HPP_
#define GPM_INTERFACES__SRV__DETAIL__SCARA_REPORT__TRAITS_HPP_

#include "gpm_interfaces/srv/detail/scara_report__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gpm_interfaces::srv::ScaraReport_Request>()
{
  return "gpm_interfaces::srv::ScaraReport_Request";
}

template<>
inline const char * name<gpm_interfaces::srv::ScaraReport_Request>()
{
  return "gpm_interfaces/srv/ScaraReport_Request";
}

template<>
struct has_fixed_size<gpm_interfaces::srv::ScaraReport_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gpm_interfaces::srv::ScaraReport_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gpm_interfaces::srv::ScaraReport_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gpm_interfaces::srv::ScaraReport_Response>()
{
  return "gpm_interfaces::srv::ScaraReport_Response";
}

template<>
inline const char * name<gpm_interfaces::srv::ScaraReport_Response>()
{
  return "gpm_interfaces/srv/ScaraReport_Response";
}

template<>
struct has_fixed_size<gpm_interfaces::srv::ScaraReport_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gpm_interfaces::srv::ScaraReport_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gpm_interfaces::srv::ScaraReport_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gpm_interfaces::srv::ScaraReport>()
{
  return "gpm_interfaces::srv::ScaraReport";
}

template<>
inline const char * name<gpm_interfaces::srv::ScaraReport>()
{
  return "gpm_interfaces/srv/ScaraReport";
}

template<>
struct has_fixed_size<gpm_interfaces::srv::ScaraReport>
  : std::integral_constant<
    bool,
    has_fixed_size<gpm_interfaces::srv::ScaraReport_Request>::value &&
    has_fixed_size<gpm_interfaces::srv::ScaraReport_Response>::value
  >
{
};

template<>
struct has_bounded_size<gpm_interfaces::srv::ScaraReport>
  : std::integral_constant<
    bool,
    has_bounded_size<gpm_interfaces::srv::ScaraReport_Request>::value &&
    has_bounded_size<gpm_interfaces::srv::ScaraReport_Response>::value
  >
{
};

template<>
struct is_service<gpm_interfaces::srv::ScaraReport>
  : std::true_type
{
};

template<>
struct is_service_request<gpm_interfaces::srv::ScaraReport_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gpm_interfaces::srv::ScaraReport_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GPM_INTERFACES__SRV__DETAIL__SCARA_REPORT__TRAITS_HPP_
