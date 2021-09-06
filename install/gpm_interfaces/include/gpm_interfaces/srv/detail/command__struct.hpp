// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gpm_interfaces:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__COMMAND__STRUCT_HPP_
#define GPM_INTERFACES__SRV__DETAIL__COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gpm_interfaces__srv__Command_Request __attribute__((deprecated))
#else
# define DEPRECATED__gpm_interfaces__srv__Command_Request __declspec(deprecated)
#endif

namespace gpm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Command_Request_
{
  using Type = Command_Request_<ContainerAllocator>;

  explicit Command_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->destination = "";
    }
  }

  explicit Command_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc),
    destination(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->destination = "";
    }
  }

  // field types and members
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _action_type action;
  using _destination_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _destination_type destination;

  // setters for named parameter idiom
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__destination(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->destination = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpm_interfaces::srv::Command_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpm_interfaces::srv::Command_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpm_interfaces::srv::Command_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpm_interfaces::srv::Command_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::Command_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::Command_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::Command_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::Command_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpm_interfaces::srv::Command_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpm_interfaces::srv::Command_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpm_interfaces__srv__Command_Request
    std::shared_ptr<gpm_interfaces::srv::Command_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpm_interfaces__srv__Command_Request
    std::shared_ptr<gpm_interfaces::srv::Command_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_Request_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->destination != other.destination) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_Request_

// alias to use template instance with default allocator
using Command_Request =
  gpm_interfaces::srv::Command_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpm_interfaces


#ifndef _WIN32
# define DEPRECATED__gpm_interfaces__srv__Command_Response __attribute__((deprecated))
#else
# define DEPRECATED__gpm_interfaces__srv__Command_Response __declspec(deprecated)
#endif

namespace gpm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Command_Response_
{
  using Type = Command_Response_<ContainerAllocator>;

  explicit Command_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device = "";
      this->accept = false;
    }
  }

  explicit Command_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : device(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device = "";
      this->accept = false;
    }
  }

  // field types and members
  using _device_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _device_type device;
  using _accept_type =
    bool;
  _accept_type accept;

  // setters for named parameter idiom
  Type & set__device(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->device = _arg;
    return *this;
  }
  Type & set__accept(
    const bool & _arg)
  {
    this->accept = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpm_interfaces::srv::Command_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpm_interfaces::srv::Command_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpm_interfaces::srv::Command_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpm_interfaces::srv::Command_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::Command_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::Command_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::Command_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::Command_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpm_interfaces::srv::Command_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpm_interfaces::srv::Command_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpm_interfaces__srv__Command_Response
    std::shared_ptr<gpm_interfaces::srv::Command_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpm_interfaces__srv__Command_Response
    std::shared_ptr<gpm_interfaces::srv::Command_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_Response_ & other) const
  {
    if (this->device != other.device) {
      return false;
    }
    if (this->accept != other.accept) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_Response_

// alias to use template instance with default allocator
using Command_Response =
  gpm_interfaces::srv::Command_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpm_interfaces

namespace gpm_interfaces
{

namespace srv
{

struct Command
{
  using Request = gpm_interfaces::srv::Command_Request;
  using Response = gpm_interfaces::srv::Command_Response;
};

}  // namespace srv

}  // namespace gpm_interfaces

#endif  // GPM_INTERFACES__SRV__DETAIL__COMMAND__STRUCT_HPP_
