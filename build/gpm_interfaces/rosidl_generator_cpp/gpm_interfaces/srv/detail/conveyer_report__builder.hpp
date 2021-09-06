// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpm_interfaces:srv/ConveyerReport.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__CONVEYER_REPORT__BUILDER_HPP_
#define GPM_INTERFACES__SRV__DETAIL__CONVEYER_REPORT__BUILDER_HPP_

#include "gpm_interfaces/srv/detail/conveyer_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gpm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConveyerReport_Request_wafer_num
{
public:
  explicit Init_ConveyerReport_Request_wafer_num(::gpm_interfaces::srv::ConveyerReport_Request & msg)
  : msg_(msg)
  {}
  ::gpm_interfaces::srv::ConveyerReport_Request wafer_num(::gpm_interfaces::srv::ConveyerReport_Request::_wafer_num_type arg)
  {
    msg_.wafer_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpm_interfaces::srv::ConveyerReport_Request msg_;
};

class Init_ConveyerReport_Request_empty
{
public:
  explicit Init_ConveyerReport_Request_empty(::gpm_interfaces::srv::ConveyerReport_Request & msg)
  : msg_(msg)
  {}
  Init_ConveyerReport_Request_wafer_num empty(::gpm_interfaces::srv::ConveyerReport_Request::_empty_type arg)
  {
    msg_.empty = std::move(arg);
    return Init_ConveyerReport_Request_wafer_num(msg_);
  }

private:
  ::gpm_interfaces::srv::ConveyerReport_Request msg_;
};

class Init_ConveyerReport_Request_id
{
public:
  Init_ConveyerReport_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConveyerReport_Request_empty id(::gpm_interfaces::srv::ConveyerReport_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ConveyerReport_Request_empty(msg_);
  }

private:
  ::gpm_interfaces::srv::ConveyerReport_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpm_interfaces::srv::ConveyerReport_Request>()
{
  return gpm_interfaces::srv::builder::Init_ConveyerReport_Request_id();
}

}  // namespace gpm_interfaces


namespace gpm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConveyerReport_Response_receive
{
public:
  Init_ConveyerReport_Response_receive()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gpm_interfaces::srv::ConveyerReport_Response receive(::gpm_interfaces::srv::ConveyerReport_Response::_receive_type arg)
  {
    msg_.receive = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpm_interfaces::srv::ConveyerReport_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpm_interfaces::srv::ConveyerReport_Response>()
{
  return gpm_interfaces::srv::builder::Init_ConveyerReport_Response_receive();
}

}  // namespace gpm_interfaces

#endif  // GPM_INTERFACES__SRV__DETAIL__CONVEYER_REPORT__BUILDER_HPP_
