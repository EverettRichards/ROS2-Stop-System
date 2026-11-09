// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/BrakeCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/brake_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__BRAKE_CMD__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__BRAKE_CMD__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__dbw_ford_msgs__msg__BrakeCmd __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__BrakeCmd __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BrakeCmd_
{
  using Type = BrakeCmd_<ContainerAllocator>;

  explicit BrakeCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_cmd = 0.0f;
      this->pedal_cmd_type = 0;
      this->enable = false;
      this->clear = false;
      this->ignore = false;
      this->count = 0;
    }
  }

  explicit BrakeCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_cmd = 0.0f;
      this->pedal_cmd_type = 0;
      this->enable = false;
      this->clear = false;
      this->ignore = false;
      this->count = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pedal_cmd_type =
    float;
  _pedal_cmd_type pedal_cmd;
  using _pedal_cmd_type_type =
    uint8_t;
  _pedal_cmd_type_type pedal_cmd_type;
  using _enable_type =
    bool;
  _enable_type enable;
  using _clear_type =
    bool;
  _clear_type clear;
  using _ignore_type =
    bool;
  _ignore_type ignore;
  using _count_type =
    uint8_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pedal_cmd(
    const float & _arg)
  {
    this->pedal_cmd = _arg;
    return *this;
  }
  Type & set__pedal_cmd_type(
    const uint8_t & _arg)
  {
    this->pedal_cmd_type = _arg;
    return *this;
  }
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__clear(
    const bool & _arg)
  {
    this->clear = _arg;
    return *this;
  }
  Type & set__ignore(
    const bool & _arg)
  {
    this->ignore = _arg;
    return *this;
  }
  Type & set__count(
    const uint8_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CMD_NONE =
    0u;
  static constexpr uint8_t CMD_PEDAL =
    1u;
  static constexpr uint8_t CMD_PERCENT =
    2u;
  static constexpr uint8_t CMD_TORQUE =
    3u;
  static constexpr uint8_t CMD_TORQUE_RQ =
    4u;
  static constexpr uint8_t CMD_DECEL =
    6u;
  static constexpr float TORQUE_BOO =
    520.0f;
  static constexpr float TORQUE_MAX =
    3412.0f;

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::BrakeCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::BrakeCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::BrakeCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::BrakeCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::BrakeCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::BrakeCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::BrakeCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::BrakeCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::BrakeCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::BrakeCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__BrakeCmd
    std::shared_ptr<dbw_ford_msgs::msg::BrakeCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__BrakeCmd
    std::shared_ptr<dbw_ford_msgs::msg::BrakeCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BrakeCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pedal_cmd != other.pedal_cmd) {
      return false;
    }
    if (this->pedal_cmd_type != other.pedal_cmd_type) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    if (this->clear != other.clear) {
      return false;
    }
    if (this->ignore != other.ignore) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const BrakeCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BrakeCmd_

// alias to use template instance with default allocator
using BrakeCmd =
  dbw_ford_msgs::msg::BrakeCmd_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BrakeCmd_<ContainerAllocator>::CMD_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BrakeCmd_<ContainerAllocator>::CMD_PEDAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BrakeCmd_<ContainerAllocator>::CMD_PERCENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BrakeCmd_<ContainerAllocator>::CMD_TORQUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BrakeCmd_<ContainerAllocator>::CMD_TORQUE_RQ;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BrakeCmd_<ContainerAllocator>::CMD_DECEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr float BrakeCmd_<ContainerAllocator>::TORQUE_BOO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr float BrakeCmd_<ContainerAllocator>::TORQUE_MAX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__BRAKE_CMD__STRUCT_HPP_
