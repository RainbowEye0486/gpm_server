// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpm_interfaces:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__COMMAND__BUILDER_HPP_
#define GPM_INTERFACES__SRV__DETAIL__COMMAND__BUILDER_HPP_

#include "gpm_interfaces/srv/detail/command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gpm_interfaces
{

namespace srv
{

namespace builder
{

class Init_Command_Request_destination
{
public:
  explicit Init_Command_Request_destination(::gpm_interfaces::srv::Command_Request & msg)
  : msg_(msg)
  {}
  ::gpm_interfaces::srv::Command_Request destination(::gpm_interfaces::srv::Command_Request::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpm_interfaces::srv::Command_Request msg_;
};

class Init_Command_Request_action
{
public:
  Init_Command_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_Request_destination action(::gpm_interfaces::srv::Command_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Command_Request_destination(msg_);
  }

private:
  ::gpm_interfaces::srv::Command_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpm_interfaces::srv::Command_Request>()
{
  return gpm_interfaces::srv::builder::Init_Command_Request_action();
}

}  // namespace gpm_interfaces


namespace gpm_interfaces
{

namespace srv
{

namespace builder
{

class Init_Command_Response_accept
{
public:
  explicit Init_Command_Response_accept(::gpm_interfaces::srv::Command_Response & msg)
  : msg_(msg)
  {}
  ::gpm_interfaces::srv::Command_Response accept(::gpm_interfaces::srv::Command_Response::_accept_type arg)
  {
    msg_.accept = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpm_interfaces::srv::Command_Response msg_;
};

class Init_Command_Response_device
{
public:
  Init_Command_Response_device()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_Response_accept device(::gpm_interfaces::srv::Command_Response::_device_type arg)
  {
    msg_.device = std::move(arg);
    return Init_Command_Response_accept(msg_);
  }

private:
  ::gpm_interfaces::srv::Command_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpm_interfaces::srv::Command_Response>()
{
  return gpm_interfaces::srv::builder::Init_Command_Response_device();
}

}  // namespace gpm_interfaces

#endif  // GPM_INTERFACES__SRV__DETAIL__COMMAND__BUILDER_HPP_
