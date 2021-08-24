// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gpm_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__MSG__DETAIL__STATUS__TRAITS_HPP_
#define GPM_INTERFACES__MSG__DETAIL__STATUS__TRAITS_HPP_

#include "gpm_interfaces/msg/detail/status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gpm_interfaces::msg::Status>()
{
  return "gpm_interfaces::msg::Status";
}

template<>
inline const char * name<gpm_interfaces::msg::Status>()
{
  return "gpm_interfaces/msg/Status";
}

template<>
struct has_fixed_size<gpm_interfaces::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gpm_interfaces::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gpm_interfaces::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GPM_INTERFACES__MSG__DETAIL__STATUS__TRAITS_HPP_
