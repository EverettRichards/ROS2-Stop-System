// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/misc_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__MISC_CMD__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__MISC_CMD__STRUCT_HPP_

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
// Member 'cmd'
#include "dbw_ford_msgs/msg/detail/turn_signal__struct.hpp"
// Member 'pbrk'
#include "dbw_ford_msgs/msg/detail/parking_brake_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dbw_ford_msgs__msg__MiscCmd __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__MiscCmd __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MiscCmd_
{
  using Type = MiscCmd_<ContainerAllocator>;

  explicit MiscCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    cmd(_init),
    pbrk(_init)
  {
    (void)_init;
  }

  explicit MiscCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    cmd(_alloc, _init),
    pbrk(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cmd_type =
    dbw_ford_msgs::msg::TurnSignal_<ContainerAllocator>;
  _cmd_type cmd;
  using _pbrk_type =
    dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator>;
  _pbrk_type pbrk;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cmd(
    const dbw_ford_msgs::msg::TurnSignal_<ContainerAllocator> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__pbrk(
    const dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator> & _arg)
  {
    this->pbrk = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::MiscCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::MiscCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::MiscCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::MiscCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::MiscCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::MiscCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::MiscCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::MiscCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::MiscCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::MiscCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__MiscCmd
    std::shared_ptr<dbw_ford_msgs::msg::MiscCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__MiscCmd
    std::shared_ptr<dbw_ford_msgs::msg::MiscCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MiscCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->pbrk != other.pbrk) {
      return false;
    }
    return true;
  }
  bool operator!=(const MiscCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MiscCmd_

// alias to use template instance with default allocator
using MiscCmd =
  dbw_ford_msgs::msg::MiscCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__MISC_CMD__STRUCT_HPP_
