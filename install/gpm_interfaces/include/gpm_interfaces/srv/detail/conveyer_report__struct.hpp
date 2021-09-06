// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gpm_interfaces:srv/ConveyerReport.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__CONVEYER_REPORT__STRUCT_HPP_
#define GPM_INTERFACES__SRV__DETAIL__CONVEYER_REPORT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gpm_interfaces__srv__ConveyerReport_Request __attribute__((deprecated))
#else
# define DEPRECATED__gpm_interfaces__srv__ConveyerReport_Request __declspec(deprecated)
#endif

namespace gpm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConveyerReport_Request_
{
  using Type = ConveyerReport_Request_<ContainerAllocator>;

  explicit ConveyerReport_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->empty = false;
      this->wafer_num = 0;
    }
  }

  explicit ConveyerReport_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->empty = false;
      this->wafer_num = 0;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _empty_type =
    bool;
  _empty_type empty;
  using _wafer_num_type =
    int8_t;
  _wafer_num_type wafer_num;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__empty(
    const bool & _arg)
  {
    this->empty = _arg;
    return *this;
  }
  Type & set__wafer_num(
    const int8_t & _arg)
  {
    this->wafer_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpm_interfaces::srv::ConveyerReport_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpm_interfaces::srv::ConveyerReport_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpm_interfaces::srv::ConveyerReport_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpm_interfaces::srv::ConveyerReport_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::ConveyerReport_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::ConveyerReport_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::ConveyerReport_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::ConveyerReport_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpm_interfaces::srv::ConveyerReport_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpm_interfaces::srv::ConveyerReport_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpm_interfaces__srv__ConveyerReport_Request
    std::shared_ptr<gpm_interfaces::srv::ConveyerReport_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpm_interfaces__srv__ConveyerReport_Request
    std::shared_ptr<gpm_interfaces::srv::ConveyerReport_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConveyerReport_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->empty != other.empty) {
      return false;
    }
    if (this->wafer_num != other.wafer_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConveyerReport_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConveyerReport_Request_

// alias to use template instance with default allocator
using ConveyerReport_Request =
  gpm_interfaces::srv::ConveyerReport_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpm_interfaces


#ifndef _WIN32
# define DEPRECATED__gpm_interfaces__srv__ConveyerReport_Response __attribute__((deprecated))
#else
# define DEPRECATED__gpm_interfaces__srv__ConveyerReport_Response __declspec(deprecated)
#endif

namespace gpm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConveyerReport_Response_
{
  using Type = ConveyerReport_Response_<ContainerAllocator>;

  explicit ConveyerReport_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->receive = false;
    }
  }

  explicit ConveyerReport_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gpm_interfaces::srv::ConveyerReport_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpm_interfaces::srv::ConveyerReport_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpm_interfaces::srv::ConveyerReport_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpm_interfaces::srv::ConveyerReport_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::ConveyerReport_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::ConveyerReport_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::ConveyerReport_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::ConveyerReport_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpm_interfaces::srv::ConveyerReport_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpm_interfaces::srv::ConveyerReport_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpm_interfaces__srv__ConveyerReport_Response
    std::shared_ptr<gpm_interfaces::srv::ConveyerReport_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpm_interfaces__srv__ConveyerReport_Response
    std::shared_ptr<gpm_interfaces::srv::ConveyerReport_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConveyerReport_Response_ & other) const
  {
    if (this->receive != other.receive) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConveyerReport_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConveyerReport_Response_

// alias to use template instance with default allocator
using ConveyerReport_Response =
  gpm_interfaces::srv::ConveyerReport_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpm_interfaces

namespace gpm_interfaces
{

namespace srv
{

struct ConveyerReport
{
  using Request = gpm_interfaces::srv::ConveyerReport_Request;
  using Response = gpm_interfaces::srv::ConveyerReport_Response;
};

}  // namespace srv

}  // namespace gpm_interfaces

#endif  // GPM_INTERFACES__SRV__DETAIL__CONVEYER_REPORT__STRUCT_HPP_
