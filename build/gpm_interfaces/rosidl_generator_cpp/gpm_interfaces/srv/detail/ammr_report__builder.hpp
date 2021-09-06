// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpm_interfaces:srv/AmmrReport.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__AMMR_REPORT__BUILDER_HPP_
#define GPM_INTERFACES__SRV__DETAIL__AMMR_REPORT__BUILDER_HPP_

#include "gpm_interfaces/srv/detail/ammr_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gpm_interfaces
{

namespace srv
{

namespace builder
{

class Init_AmmrReport_Request_position
{
public:
  explicit Init_AmmrReport_Request_position(::gpm_interfaces::srv::AmmrReport_Request & msg)
  : msg_(msg)
  {}
  ::gpm_interfaces::srv::AmmrReport_Request position(::gpm_interfaces::srv::AmmrReport_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpm_interfaces::srv::AmmrReport_Request msg_;
};

class Init_AmmrReport_Request_slot2
{
public:
  explicit Init_AmmrReport_Request_slot2(::gpm_interfaces::srv::AmmrReport_Request & msg)
  : msg_(msg)
  {}
  Init_AmmrReport_Request_position slot2(::gpm_interfaces::srv::AmmrReport_Request::_slot2_type arg)
  {
    msg_.slot2 = std::move(arg);
    return Init_AmmrReport_Request_position(msg_);
  }

private:
  ::gpm_interfaces::srv::AmmrReport_Request msg_;
};

class Init_AmmrReport_Request_slot1
{
public:
  Init_AmmrReport_Request_slot1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AmmrReport_Request_slot2 slot1(::gpm_interfaces::srv::AmmrReport_Request::_slot1_type arg)
  {
    msg_.slot1 = std::move(arg);
    return Init_AmmrReport_Request_slot2(msg_);
  }

private:
  ::gpm_interfaces::srv::AmmrReport_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpm_interfaces::srv::AmmrReport_Request>()
{
  return gpm_interfaces::srv::builder::Init_AmmrReport_Request_slot1();
}

}  // namespace gpm_interfaces


namespace gpm_interfaces
{

namespace srv
{

namespace builder
{

class Init_AmmrReport_Response_receive
{
public:
  Init_AmmrReport_Response_receive()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gpm_interfaces::srv::AmmrReport_Response receive(::gpm_interfaces::srv::AmmrReport_Response::_receive_type arg)
  {
    msg_.receive = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpm_interfaces::srv::AmmrReport_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpm_interfaces::srv::AmmrReport_Response>()
{
  return gpm_interfaces::srv::builder::Init_AmmrReport_Response_receive();
}

}  // namespace gpm_interfaces

#endif  // GPM_INTERFACES__SRV__DETAIL__AMMR_REPORT__BUILDER_HPP_
