// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR_REPORT__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'state'
// Member 'cmd'
#include "dbw_ford_msgs/msg/detail/gear__struct.hpp"
// Member 'reject'
#include "dbw_ford_msgs/msg/detail/gear_reject__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dbw_ford_msgs__msg__GearReport __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__GearReport __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GearReport_
{
  using Type = GearReport_<ContainerAllocator>;

  explicit GearReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    state(_init),
    cmd(_init),
    reject(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ready = false;
      this->override = false;
      this->fault_bus = false;
    }
  }

  explicit GearReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state(_alloc, _init),
    cmd(_alloc, _init),
    reject(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ready = false;
      this->override = false;
      this->fault_bus = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    dbw_ford_msgs::msg::Gear_<ContainerAllocator>;
  _state_type state;
  using _cmd_type =
    dbw_ford_msgs::msg::Gear_<ContainerAllocator>;
  _cmd_type cmd;
  using _reject_type =
    dbw_ford_msgs::msg::GearReject_<ContainerAllocator>;
  _reject_type reject;
  using _ready_type =
    bool;
  _ready_type ready;
  using _override_type =
    bool;
  _override_type override;
  using _fault_bus_type =
    bool;
  _fault_bus_type fault_bus;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const dbw_ford_msgs::msg::Gear_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__cmd(
    const dbw_ford_msgs::msg::Gear_<ContainerAllocator> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__reject(
    const dbw_ford_msgs::msg::GearReject_<ContainerAllocator> & _arg)
  {
    this->reject = _arg;
    return *this;
  }
  Type & set__ready(
    const bool & _arg)
  {
    this->ready = _arg;
    return *this;
  }
  Type & set__override(
    const bool & _arg)
  {
    this->override = _arg;
    return *this;
  }
  Type & set__fault_bus(
    const bool & _arg)
  {
    this->fault_bus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::GearReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::GearReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::GearReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::GearReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::GearReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::GearReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::GearReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::GearReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::GearReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::GearReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__GearReport
    std::shared_ptr<dbw_ford_msgs::msg::GearReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__GearReport
    std::shared_ptr<dbw_ford_msgs::msg::GearReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GearReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->reject != other.reject) {
      return false;
    }
    if (this->ready != other.ready) {
      return false;
    }
    if (this->override != other.override) {
      return false;
    }
    if (this->fault_bus != other.fault_bus) {
      return false;
    }
    return true;
  }
  bool operator!=(const GearReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GearReport_

// alias to use template instance with default allocator
using GearReport =
  dbw_ford_msgs::msg::GearReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR_REPORT__STRUCT_HPP_
