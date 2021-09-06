// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gpm_interfaces:srv/AmmrReport.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__AMMR_REPORT__STRUCT_HPP_
#define GPM_INTERFACES__SRV__DETAIL__AMMR_REPORT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gpm_interfaces__srv__AmmrReport_Request __attribute__((deprecated))
#else
# define DEPRECATED__gpm_interfaces__srv__AmmrReport_Request __declspec(deprecated)
#endif

namespace gpm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AmmrReport_Request_
{
  using Type = AmmrReport_Request_<ContainerAllocator>;

  explicit AmmrReport_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slot1 = 0ll;
      this->slot2 = 0ll;
      this->position = "";
    }
  }

  explicit AmmrReport_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slot1 = 0ll;
      this->slot2 = 0ll;
      this->position = "";
    }
  }

  // field types and members
  using _slot1_type =
    int64_t;
  _slot1_type slot1;
  using _slot2_type =
    int64_t;
  _slot2_type slot2;
  using _position_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__slot1(
    const int64_t & _arg)
  {
    this->slot1 = _arg;
    return *this;
  }
  Type & set__slot2(
    const int64_t & _arg)
  {
    this->slot2 = _arg;
    return *this;
  }
  Type & set__position(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpm_interfaces::srv::AmmrReport_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpm_interfaces::srv::AmmrReport_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpm_interfaces::srv::AmmrReport_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpm_interfaces::srv::AmmrReport_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::AmmrReport_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::AmmrReport_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::AmmrReport_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::AmmrReport_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpm_interfaces::srv::AmmrReport_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpm_interfaces::srv::AmmrReport_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpm_interfaces__srv__AmmrReport_Request
    std::shared_ptr<gpm_interfaces::srv::AmmrReport_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpm_interfaces__srv__AmmrReport_Request
    std::shared_ptr<gpm_interfaces::srv::AmmrReport_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AmmrReport_Request_ & other) const
  {
    if (this->slot1 != other.slot1) {
      return false;
    }
    if (this->slot2 != other.slot2) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const AmmrReport_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AmmrReport_Request_

// alias to use template instance with default allocator
using AmmrReport_Request =
  gpm_interfaces::srv::AmmrReport_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpm_interfaces


#ifndef _WIN32
# define DEPRECATED__gpm_interfaces__srv__AmmrReport_Response __attribute__((deprecated))
#else
# define DEPRECATED__gpm_interfaces__srv__AmmrReport_Response __declspec(deprecated)
#endif

namespace gpm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AmmrReport_Response_
{
  using Type = AmmrReport_Response_<ContainerAllocator>;

  explicit AmmrReport_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->receive = false;
    }
  }

  explicit AmmrReport_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->receive = false;
    }
  }

  // field types and members
  using _receive_type =
    bool;
  _receive_type receive;

  // setters for named parameter idiom
  Type & set__receive(
    const bool & _arg)
  {
    this->receive = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpm_interfaces::srv::AmmrReport_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpm_interfaces::srv::AmmrReport_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpm_interfaces::srv::AmmrReport_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpm_interfaces::srv::AmmrReport_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::AmmrReport_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::AmmrReport_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::AmmrReport_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::AmmrReport_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpm_interfaces::srv::AmmrReport_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpm_interfaces::srv::AmmrReport_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpm_interfaces__srv__AmmrReport_Response
    std::shared_ptr<gpm_interfaces::srv::AmmrReport_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpm_interfaces__srv__AmmrReport_Response
    std::shared_ptr<gpm_interfaces::srv::AmmrReport_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AmmrReport_Response_ & other) const
  {
    if (this->receive != other.receive) {
      return false;
    }
    return true;
  }
  bool operator!=(const AmmrReport_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AmmrReport_Response_

// alias to use template instance with default allocator
using AmmrReport_Response =
  gpm_interfaces::srv::AmmrReport_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpm_interfaces

namespace gpm_interfaces
{

namespace srv
{

struct AmmrReport
{
  using Request = gpm_interfaces::srv::AmmrReport_Request;
  using Response = gpm_interfaces::srv::AmmrReport_Response;
};

}  // namespace srv

}  // namespace gpm_interfaces

#endif  // GPM_INTERFACES__SRV__DETAIL__AMMR_REPORT__STRUCT_HPP_
