// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/SteeringReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/steering_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__STEERING_REPORT__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__STEERING_REPORT__STRUCT_HPP_

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
# define DEPRECATED__dbw_ford_msgs__msg__SteeringReport __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__SteeringReport __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringReport_
{
  using Type = SteeringReport_<ContainerAllocator>;

  explicit SteeringReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering_wheel_angle = 0.0f;
      this->steering_wheel_cmd = 0.0f;
      this->steering_wheel_torque = 0.0f;
      this->steering_wheel_cmd_type = 0;
      this->speed = 0.0f;
      this->enabled = false;
      this->override = false;
      this->timeout = false;
      this->fault_wdc = false;
      this->fault_bus1 = false;
      this->fault_bus2 = false;
      this->fault_calibration = false;
      this->fault_power = false;
    }
  }

  explicit SteeringReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering_wheel_angle = 0.0f;
      this->steering_wheel_cmd = 0.0f;
      this->steering_wheel_torque = 0.0f;
      this->steering_wheel_cmd_type = 0;
      this->speed = 0.0f;
      this->enabled = false;
      this->override = false;
      this->timeout = false;
      this->fault_wdc = false;
      this->fault_bus1 = false;
      this->fault_bus2 = false;
      this->fault_calibration = false;
      this->fault_power = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _steering_wheel_angle_type =
    float;
  _steering_wheel_angle_type steering_wheel_angle;
  using _steering_wheel_cmd_type =
    float;
  _steering_wheel_cmd_type steering_wheel_cmd;
  using _steering_wheel_torque_type =
    float;
  _steering_wheel_torque_type steering_wheel_torque;
  using _steering_wheel_cmd_type_type =
    uint8_t;
  _steering_wheel_cmd_type_type steering_wheel_cmd_type;
  using _speed_type =
    float;
  _speed_type speed;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _override_type =
    bool;
  _override_type override;
  using _timeout_type =
    bool;
  _timeout_type timeout;
  using _fault_wdc_type =
    bool;
  _fault_wdc_type fault_wdc;
  using _fault_bus1_type =
    bool;
  _fault_bus1_type fault_bus1;
  using _fault_bus2_type =
    bool;
  _fault_bus2_type fault_bus2;
  using _fault_calibration_type =
    bool;
  _fault_calibration_type fault_calibration;
  using _fault_power_type =
    bool;
  _fault_power_type fault_power;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__steering_wheel_angle(
    const float & _arg)
  {
    this->steering_wheel_angle = _arg;
    return *this;
  }
  Type & set__steering_wheel_cmd(
    const float & _arg)
  {
    this->steering_wheel_cmd = _arg;
    return *this;
  }
  Type & set__steering_wheel_torque(
    const float & _arg)
  {
    this->steering_wheel_torque = _arg;
    return *this;
  }
  Type & set__steering_wheel_cmd_type(
    const uint8_t & _arg)
  {
    this->steering_wheel_cmd_type = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__override(
    const bool & _arg)
  {
    this->override = _arg;
    return *this;
  }
  Type & set__timeout(
    const bool & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__fault_wdc(
    const bool & _arg)
  {
    this->fault_wdc = _arg;
    return *this;
  }
  Type & set__fault_bus1(
    const bool & _arg)
  {
    this->fault_bus1 = _arg;
    return *this;
  }
  Type & set__fault_bus2(
    const bool & _arg)
  {
    this->fault_bus2 = _arg;
    return *this;
  }
  Type & set__fault_calibration(
    const bool & _arg)
  {
    this->fault_calibration = _arg;
    return *this;
  }
  Type & set__fault_power(
    const bool & _arg)
  {
    this->fault_power = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CMD_ANGLE =
    0u;
  static constexpr uint8_t CMD_TORQUE =
    1u;

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::SteeringReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::SteeringReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::SteeringReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::SteeringReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::SteeringReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::SteeringReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::SteeringReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::SteeringReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::SteeringReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::SteeringReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__SteeringReport
    std::shared_ptr<dbw_ford_msgs::msg::SteeringReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__SteeringReport
    std::shared_ptr<dbw_ford_msgs::msg::SteeringReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->steering_wheel_angle != other.steering_wheel_angle) {
      return false;
    }
    if (this->steering_wheel_cmd != other.steering_wheel_cmd) {
      return false;
    }
    if (this->steering_wheel_torque != other.steering_wheel_torque) {
      return false;
    }
    if (this->steering_wheel_cmd_type != other.steering_wheel_cmd_type) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->override != other.override) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->fault_wdc != other.fault_wdc) {
      return false;
    }
    if (this->fault_bus1 != other.fault_bus1) {
      return false;
    }
    if (this->fault_bus2 != other.fault_bus2) {
      return false;
    }
    if (this->fault_calibration != other.fault_calibration) {
      return false;
    }
    if (this->fault_power != other.fault_power) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringReport_

// alias to use template instance with default allocator
using SteeringReport =
  dbw_ford_msgs::msg::SteeringReport_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringReport_<ContainerAllocator>::CMD_ANGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringReport_<ContainerAllocator>::CMD_TORQUE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__STEERING_REPORT__STRUCT_HPP_
