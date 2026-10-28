// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/SteeringCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/steering_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_HPP_

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
# define DEPRECATED__dbw_ford_msgs__msg__SteeringCmd __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__SteeringCmd __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringCmd_
{
  using Type = SteeringCmd_<ContainerAllocator>;

  explicit SteeringCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering_wheel_angle_cmd = 0.0f;
      this->steering_wheel_angle_velocity = 0.0f;
      this->steering_wheel_torque_cmd = 0.0f;
      this->cmd_type = 0;
      this->enable = false;
      this->clear = false;
      this->ignore = false;
      this->quiet = false;
      this->alert = false;
      this->count = 0;
    }
  }

  explicit SteeringCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering_wheel_angle_cmd = 0.0f;
      this->steering_wheel_angle_velocity = 0.0f;
      this->steering_wheel_torque_cmd = 0.0f;
      this->cmd_type = 0;
      this->enable = false;
      this->clear = false;
      this->ignore = false;
      this->quiet = false;
      this->alert = false;
      this->count = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _steering_wheel_angle_cmd_type =
    float;
  _steering_wheel_angle_cmd_type steering_wheel_angle_cmd;
  using _steering_wheel_angle_velocity_type =
    float;
  _steering_wheel_angle_velocity_type steering_wheel_angle_velocity;
  using _steering_wheel_torque_cmd_type =
    float;
  _steering_wheel_torque_cmd_type steering_wheel_torque_cmd;
  using _cmd_type_type =
    uint8_t;
  _cmd_type_type cmd_type;
  using _enable_type =
    bool;
  _enable_type enable;
  using _clear_type =
    bool;
  _clear_type clear;
  using _ignore_type =
    bool;
  _ignore_type ignore;
  using _quiet_type =
    bool;
  _quiet_type quiet;
  using _alert_type =
    bool;
  _alert_type alert;
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
  Type & set__steering_wheel_angle_cmd(
    const float & _arg)
  {
    this->steering_wheel_angle_cmd = _arg;
    return *this;
  }
  Type & set__steering_wheel_angle_velocity(
    const float & _arg)
  {
    this->steering_wheel_angle_velocity = _arg;
    return *this;
  }
  Type & set__steering_wheel_torque_cmd(
    const float & _arg)
  {
    this->steering_wheel_torque_cmd = _arg;
    return *this;
  }
  Type & set__cmd_type(
    const uint8_t & _arg)
  {
    this->cmd_type = _arg;
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
  Type & set__quiet(
    const bool & _arg)
  {
    this->quiet = _arg;
    return *this;
  }
  Type & set__alert(
    const bool & _arg)
  {
    this->alert = _arg;
    return *this;
  }
  Type & set__count(
    const uint8_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CMD_ANGLE =
    0u;
  static constexpr uint8_t CMD_TORQUE =
    1u;
  static constexpr float ANGLE_MAX =
    9.6f;
  static constexpr float VELOCITY_MAX =
    17.5f;
  static constexpr float TORQUE_MAX =
    8.0f;

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::SteeringCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::SteeringCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::SteeringCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::SteeringCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::SteeringCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::SteeringCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::SteeringCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::SteeringCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::SteeringCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::SteeringCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__SteeringCmd
    std::shared_ptr<dbw_ford_msgs::msg::SteeringCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__SteeringCmd
    std::shared_ptr<dbw_ford_msgs::msg::SteeringCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->steering_wheel_angle_cmd != other.steering_wheel_angle_cmd) {
      return false;
    }
    if (this->steering_wheel_angle_velocity != other.steering_wheel_angle_velocity) {
      return false;
    }
    if (this->steering_wheel_torque_cmd != other.steering_wheel_torque_cmd) {
      return false;
    }
    if (this->cmd_type != other.cmd_type) {
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
    if (this->quiet != other.quiet) {
      return false;
    }
    if (this->alert != other.alert) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringCmd_

// alias to use template instance with default allocator
using SteeringCmd =
  dbw_ford_msgs::msg::SteeringCmd_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringCmd_<ContainerAllocator>::CMD_ANGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringCmd_<ContainerAllocator>::CMD_TORQUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr float SteeringCmd_<ContainerAllocator>::ANGLE_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr float SteeringCmd_<ContainerAllocator>::VELOCITY_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr float SteeringCmd_<ContainerAllocator>::TORQUE_MAX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_HPP_
