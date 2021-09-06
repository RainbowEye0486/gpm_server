// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gpm_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__MSG__DETAIL__STATUS__STRUCT_HPP_
#define GPM_INTERFACES__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gpm_interfaces__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__gpm_interfaces__msg__Status __declspec(deprecated)
#endif

namespace gpm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device = "";
      this->error = false;
      this->status = "";
      this->msg = "";
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : device(_alloc),
    status(_alloc),
    msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device = "";
      this->error = false;
      this->status = "";
      this->msg = "";
    }
  }

  // field types and members
  using _device_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _device_type device;
  using _error_type =
    bool;
  _error_type error;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _status_type status;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _msg_type msg;

  // setters for named parameter idiom
  Type & set__device(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->device = _arg;
    return *this;
  }
  Type & set__error(
    const bool & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpm_interfaces::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpm_interfaces::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpm_interfaces::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpm_interfaces::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpm_interfaces::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpm_interfaces::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpm_interfaces__msg__Status
    std::shared_ptr<gpm_interfaces::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpm_interfaces__msg__Status
    std::shared_ptr<gpm_interfaces::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->device != other.device) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  gpm_interfaces::msg::Status_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gpm_interfaces

#endif  // GPM_INTERFACES__MSG__DETAIL__STATUS__STRUCT_HPP_
