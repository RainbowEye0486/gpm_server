// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpm_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__MSG__DETAIL__STATUS__BUILDER_HPP_
#define GPM_INTERFACES__MSG__DETAIL__STATUS__BUILDER_HPP_

#include "gpm_interfaces/msg/detail/status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gpm_interfaces
{

namespace msg
{

namespace builder
{

class Init_Status_msg
{
public:
  explicit Init_Status_msg(::gpm_interfaces::msg::Status & msg)
  : msg_(msg)
  {}
  ::gpm_interfaces::msg::Status msg(::gpm_interfaces::msg::Status::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpm_interfaces::msg::Status msg_;
};

class Init_Status_status
{
public:
  explicit Init_Status_status(::gpm_interfaces::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_msg status(::gpm_interfaces::msg::Status::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Status_msg(msg_);
  }

private:
  ::gpm_interfaces::msg::Status msg_;
};

class Init_Status_error
{
public:
  explicit Init_Status_error(::gpm_interfaces::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_status error(::gpm_interfaces::msg::Status::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_Status_status(msg_);
  }

private:
  ::gpm_interfaces::msg::Status msg_;
};

class Init_Status_device
{
public:
  Init_Status_device()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_error device(::gpm_interfaces::msg::Status::_device_type arg)
  {
    msg_.device = std::move(arg);
    return Init_Status_error(msg_);
  }

private:
  ::gpm_interfaces::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpm_interfaces::msg::Status>()
{
  return gpm_interfaces::msg::builder::Init_Status_device();
}

}  // namespace gpm_interfaces

#endif  // GPM_INTERFACES__MSG__DETAIL__STATUS__BUILDER_HPP_
