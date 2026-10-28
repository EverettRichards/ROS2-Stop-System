// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/TwistCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/twist_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__TWIST_CMD__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__TWIST_CMD__STRUCT_HPP_

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
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dbw_ford_msgs__msg__TwistCmd __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__TwistCmd __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TwistCmd_
{
  using Type = TwistCmd_<ContainerAllocator>;

  explicit TwistCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    twist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel_limit = 0.0f;
      this->decel_limit = 0.0f;
    }
  }

  explicit TwistCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    twist(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel_limit = 0.0f;
      this->decel_limit = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _accel_limit_type =
    float;
  _accel_limit_type accel_limit;
  using _decel_limit_type =
    float;
  _decel_limit_type decel_limit;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__accel_limit(
    const float & _arg)
  {
    this->accel_limit = _arg;
    return *this;
  }
  Type & set__decel_limit(
    const float & _arg)
  {
    this->decel_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::TwistCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::TwistCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::TwistCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::TwistCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::TwistCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::TwistCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::TwistCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::TwistCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::TwistCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::TwistCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__TwistCmd
    std::shared_ptr<dbw_ford_msgs::msg::TwistCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__TwistCmd
    std::shared_ptr<dbw_ford_msgs::msg::TwistCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwistCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->accel_limit != other.accel_limit) {
      return false;
    }
    if (this->decel_limit != other.decel_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwistCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TwistCmd_

// alias to use template instance with default allocator
using TwistCmd =
  dbw_ford_msgs::msg::TwistCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__TWIST_CMD__STRUCT_HPP_
