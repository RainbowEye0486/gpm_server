// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpm_interfaces:srv/ScaraReport.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__SCARA_REPORT__BUILDER_HPP_
#define GPM_INTERFACES__SRV__DETAIL__SCARA_REPORT__BUILDER_HPP_

#include "gpm_interfaces/srv/detail/scara_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gpm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ScaraReport_Request_faild
{
public:
  explicit Init_ScaraReport_Request_faild(::gpm_interfaces::srv::ScaraReport_Request & msg)
  : msg_(msg)
  {}
  ::gpm_interfaces::srv::ScaraReport_Request faild(::gpm_interfaces::srv::ScaraReport_Request::_faild_type arg)
  {
    msg_.faild = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpm_interfaces::srv::ScaraReport_Request msg_;
};

class Init_ScaraReport_Request_slot_num
{
public:
  explicit Init_ScaraReport_Request_slot_num(::gpm_interfaces::srv::ScaraReport_Request & msg)
  : msg_(msg)
  {}
  Init_ScaraReport_Request_faild slot_num(::gpm_interfaces::srv::ScaraReport_Request::_slot_num_type arg)
  {
    msg_.slot_num = std::move(arg);
    return Init_ScaraReport_Request_faild(msg_);
  }

private:
  ::gpm_interfaces::srv::ScaraReport_Request msg_;
};

class Init_ScaraReport_Request_dummy_cassette
{
public:
  explicit Init_ScaraReport_Request_dummy_cassette(::gpm_interfaces::srv::ScaraReport_Request & msg)
  : msg_(msg)
  {}
  Init_ScaraReport_Request_slot_num dummy_cassette(::gpm_interfaces::srv::ScaraReport_Request::_dummy_cassette_type arg)
  {
    msg_.dummy_cassette = std::move(arg);
    return Init_ScaraReport_Request_slot_num(msg_);
  }

private:
  ::gpm_interfaces::srv::ScaraReport_Request msg_;
};

class Init_ScaraReport_Request_dummy_wafer
{
public:
  explicit Init_ScaraReport_Request_dummy_wafer(::gpm_interfaces::srv::ScaraReport_Request & msg)
  : msg_(msg)
  {}
  Init_ScaraReport_Request_dummy_cassette dummy_wafer(::gpm_interfaces::srv::ScaraReport_Request::_dummy_wafer_type arg)
  {
    msg_.dummy_wafer = std::move(arg);
    return Init_ScaraReport_Request_dummy_cassette(msg_);
  }

private:
  ::gpm_interfaces::srv::ScaraReport_Request msg_;
};

class Init_ScaraReport_Request_action
{
public:
  Init_ScaraReport_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScaraReport_Request_dummy_wafer action(::gpm_interfaces::srv::ScaraReport_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_ScaraReport_Request_dummy_wafer(msg_);
  }

private:
  ::gpm_interfaces::srv::ScaraReport_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpm_interfaces::srv::ScaraReport_Request>()
{
  return gpm_interfaces::srv::builder::Init_ScaraReport_Request_action();
}

}  // namespace gpm_interfaces


namespace gpm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ScaraReport_Response_receive
{
public:
  Init_ScaraReport_Response_receive()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gpm_interfaces::srv::ScaraReport_Response receive(::gpm_interfaces::srv::ScaraReport_Response::_receive_type arg)
  {
    msg_.receive = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpm_interfaces::srv::ScaraReport_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpm_interfaces::srv::ScaraReport_Response>()
{
  return gpm_interfaces::srv::builder::Init_ScaraReport_Response_receive();
}

}  // namespace gpm_interfaces

#endif  // GPM_INTERFACES__SRV__DETAIL__SCARA_REPORT__BUILDER_HPP_
