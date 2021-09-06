// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gpm_interfaces:srv/ScaraReport.idl
// generated code does not contain a copyright notice

#ifndef GPM_INTERFACES__SRV__DETAIL__SCARA_REPORT__STRUCT_HPP_
#define GPM_INTERFACES__SRV__DETAIL__SCARA_REPORT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gpm_interfaces__srv__ScaraReport_Request __attribute__((deprecated))
#else
# define DEPRECATED__gpm_interfaces__srv__ScaraReport_Request __declspec(deprecated)
#endif

namespace gpm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ScaraReport_Request_
{
  using Type = ScaraReport_Request_<ContainerAllocator>;

  explicit ScaraReport_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->dummy_wafer = 0ll;
      this->dummy_cassette = 0ll;
      this->slot_num = 0ll;
      this->faild = "";
    }
  }

  explicit ScaraReport_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc),
    faild(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->dummy_wafer = 0ll;
      this->dummy_cassette = 0ll;
      this->slot_num = 0ll;
      this->faild = "";
    }
  }

  // field types and members
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _action_type action;
  using _dummy_wafer_type =
    int64_t;
  _dummy_wafer_type dummy_wafer;
  using _dummy_cassette_type =
    int64_t;
  _dummy_cassette_type dummy_cassette;
  using _slot_num_type =
    int64_t;
  _slot_num_type slot_num;
  using _faild_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _faild_type faild;

  // setters for named parameter idiom
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__dummy_wafer(
    const int64_t & _arg)
  {
    this->dummy_wafer = _arg;
    return *this;
  }
  Type & set__dummy_cassette(
    const int64_t & _arg)
  {
    this->dummy_cassette = _arg;
    return *this;
  }
  Type & set__slot_num(
    const int64_t & _arg)
  {
    this->slot_num = _arg;
    return *this;
  }
  Type & set__faild(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->faild = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpm_interfaces::srv::ScaraReport_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpm_interfaces::srv::ScaraReport_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpm_interfaces::srv::ScaraReport_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpm_interfaces::srv::ScaraReport_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::ScaraReport_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::ScaraReport_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::ScaraReport_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::ScaraReport_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpm_interfaces::srv::ScaraReport_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpm_interfaces::srv::ScaraReport_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpm_interfaces__srv__ScaraReport_Request
    std::shared_ptr<gpm_interfaces::srv::ScaraReport_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpm_interfaces__srv__ScaraReport_Request
    std::shared_ptr<gpm_interfaces::srv::ScaraReport_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScaraReport_Request_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->dummy_wafer != other.dummy_wafer) {
      return false;
    }
    if (this->dummy_cassette != other.dummy_cassette) {
      return false;
    }
    if (this->slot_num != other.slot_num) {
      return false;
    }
    if (this->faild != other.faild) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScaraReport_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScaraReport_Request_

// alias to use template instance with default allocator
using ScaraReport_Request =
  gpm_interfaces::srv::ScaraReport_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpm_interfaces


#ifndef _WIN32
# define DEPRECATED__gpm_interfaces__srv__ScaraReport_Response __attribute__((deprecated))
#else
# define DEPRECATED__gpm_interfaces__srv__ScaraReport_Response __declspec(deprecated)
#endif

namespace gpm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ScaraReport_Response_
{
  using Type = ScaraReport_Response_<ContainerAllocator>;

  explicit ScaraReport_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->receive = false;
    }
  }

  explicit ScaraReport_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gpm_interfaces::srv::ScaraReport_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpm_interfaces::srv::ScaraReport_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpm_interfaces::srv::ScaraReport_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpm_interfaces::srv::ScaraReport_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::ScaraReport_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::ScaraReport_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpm_interfaces::srv::ScaraReport_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpm_interfaces::srv::ScaraReport_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpm_interfaces::srv::ScaraReport_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpm_interfaces::srv::ScaraReport_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpm_interfaces__srv__ScaraReport_Response
    std::shared_ptr<gpm_interfaces::srv::ScaraReport_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpm_interfaces__srv__ScaraReport_Response
    std::shared_ptr<gpm_interfaces::srv::ScaraReport_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScaraReport_Response_ & other) const
  {
    if (this->receive != other.receive) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScaraReport_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScaraReport_Response_

// alias to use template instance with default allocator
using ScaraReport_Response =
  gpm_interfaces::srv::ScaraReport_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpm_interfaces

namespace gpm_interfaces
{

namespace srv
{

struct ScaraReport
{
  using Request = gpm_interfaces::srv::ScaraReport_Request;
  using Response = gpm_interfaces::srv::ScaraReport_Response;
};

}  // namespace srv

}  // namespace gpm_interfaces

#endif  // GPM_INTERFACES__SRV__DETAIL__SCARA_REPORT__STRUCT_HPP_
