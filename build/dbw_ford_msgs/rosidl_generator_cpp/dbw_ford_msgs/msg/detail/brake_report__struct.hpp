// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/BrakeReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/brake_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__BRAKE_REPORT__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__BRAKE_REPORT__STRUCT_HPP_

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
// Member 'watchdog_counter'
#include "dbw_ford_msgs/msg/detail/watchdog_counter__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dbw_ford_msgs__msg__BrakeReport __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__BrakeReport __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BrakeReport_
{
  using Type = BrakeReport_<ContainerAllocator>;

  explicit BrakeReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    watchdog_counter(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_input = 0.0f;
      this->pedal_cmd = 0.0f;
      this->pedal_output = 0.0f;
      this->torque_input = 0.0f;
      this->torque_cmd = 0.0f;
      this->torque_output = 0.0f;
      this->decel_cmd = 0.0f;
      this->decel_output = 0.0f;
      this->boo_cmd = false;
      this->enabled = false;
      this->override = false;
      this->driver = false;
      this->timeout = false;
      this->watchdog_braking = false;
      this->fault_wdc = false;
      this->fault_ch1 = false;
      this->fault_ch2 = false;
      this->fault_power = false;
    }
  }

  explicit BrakeReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    watchdog_counter(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_input = 0.0f;
      this->pedal_cmd = 0.0f;
      this->pedal_output = 0.0f;
      this->torque_input = 0.0f;
      this->torque_cmd = 0.0f;
      this->torque_output = 0.0f;
      this->decel_cmd = 0.0f;
      this->decel_output = 0.0f;
      this->boo_cmd = false;
      this->enabled = false;
      this->override = false;
      this->driver = false;
      this->timeout = false;
      this->watchdog_braking = false;
      this->fault_wdc = false;
      this->fault_ch1 = false;
      this->fault_ch2 = false;
      this->fault_power = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pedal_input_type =
    float;
  _pedal_input_type pedal_input;
  using _pedal_cmd_type =
    float;
  _pedal_cmd_type pedal_cmd;
  using _pedal_output_type =
    float;
  _pedal_output_type pedal_output;
  using _torque_input_type =
    float;
  _torque_input_type torque_input;
  using _torque_cmd_type =
    float;
  _torque_cmd_type torque_cmd;
  using _torque_output_type =
    float;
  _torque_output_type torque_output;
  using _decel_cmd_type =
    float;
  _decel_cmd_type decel_cmd;
  using _decel_output_type =
    float;
  _decel_output_type decel_output;
  using _boo_cmd_type =
    bool;
  _boo_cmd_type boo_cmd;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _override_type =
    bool;
  _override_type override;
  using _driver_type =
    bool;
  _driver_type driver;
  using _timeout_type =
    bool;
  _timeout_type timeout;
  using _watchdog_counter_type =
    dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator>;
  _watchdog_counter_type watchdog_counter;
  using _watchdog_braking_type =
    bool;
  _watchdog_braking_type watchdog_braking;
  using _fault_wdc_type =
    bool;
  _fault_wdc_type fault_wdc;
  using _fault_ch1_type =
    bool;
  _fault_ch1_type fault_ch1;
  using _fault_ch2_type =
    bool;
  _fault_ch2_type fault_ch2;
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
  Type & set__pedal_input(
    const float & _arg)
  {
    this->pedal_input = _arg;
    return *this;
  }
  Type & set__pedal_cmd(
    const float & _arg)
  {
    this->pedal_cmd = _arg;
    return *this;
  }
  Type & set__pedal_output(
    const float & _arg)
  {
    this->pedal_output = _arg;
    return *this;
  }
  Type & set__torque_input(
    const float & _arg)
  {
    this->torque_input = _arg;
    return *this;
  }
  Type & set__torque_cmd(
    const float & _arg)
  {
    this->torque_cmd = _arg;
    return *this;
  }
  Type & set__torque_output(
    const float & _arg)
  {
    this->torque_output = _arg;
    return *this;
  }
  Type & set__decel_cmd(
    const float & _arg)
  {
    this->decel_cmd = _arg;
    return *this;
  }
  Type & set__decel_output(
    const float & _arg)
  {
    this->decel_output = _arg;
    return *this;
  }
  Type & set__boo_cmd(
    const bool & _arg)
  {
    this->boo_cmd = _arg;
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
  Type & set__driver(
    const bool & _arg)
  {
    this->driver = _arg;
    return *this;
  }
  Type & set__timeout(
    const bool & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__watchdog_counter(
    const dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator> & _arg)
  {
    this->watchdog_counter = _arg;
    return *this;
  }
  Type & set__watchdog_braking(
    const bool & _arg)
  {
    this->watchdog_braking = _arg;
    return *this;
  }
  Type & set__fault_wdc(
    const bool & _arg)
  {
    this->fault_wdc = _arg;
    return *this;
  }
  Type & set__fault_ch1(
    const bool & _arg)
  {
    this->fault_ch1 = _arg;
    return *this;
  }
  Type & set__fault_ch2(
    const bool & _arg)
  {
    this->fault_ch2 = _arg;
    return *this;
  }
  Type & set__fault_power(
    const bool & _arg)
  {
    this->fault_power = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::BrakeReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::BrakeReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::BrakeReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::BrakeReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::BrakeReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::BrakeReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::BrakeReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::BrakeReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::BrakeReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::BrakeReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__BrakeReport
    std::shared_ptr<dbw_ford_msgs::msg::BrakeReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__BrakeReport
    std::shared_ptr<dbw_ford_msgs::msg::BrakeReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BrakeReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pedal_input != other.pedal_input) {
      return false;
    }
    if (this->pedal_cmd != other.pedal_cmd) {
      return false;
    }
    if (this->pedal_output != other.pedal_output) {
      return false;
    }
    if (this->torque_input != other.torque_input) {
      return false;
    }
    if (this->torque_cmd != other.torque_cmd) {
      return false;
    }
    if (this->torque_output != other.torque_output) {
      return false;
    }
    if (this->decel_cmd != other.decel_cmd) {
      return false;
    }
    if (this->decel_output != other.decel_output) {
      return false;
    }
    if (this->boo_cmd != other.boo_cmd) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->override != other.override) {
      return false;
    }
    if (this->driver != other.driver) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->watchdog_counter != other.watchdog_counter) {
      return false;
    }
    if (this->watchdog_braking != other.watchdog_braking) {
      return false;
    }
    if (this->fault_wdc != other.fault_wdc) {
      return false;
    }
    if (this->fault_ch1 != other.fault_ch1) {
      return false;
    }
    if (this->fault_ch2 != other.fault_ch2) {
      return false;
    }
    if (this->fault_power != other.fault_power) {
      return false;
    }
    return true;
  }
  bool operator!=(const BrakeReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BrakeReport_

// alias to use template instance with default allocator
using BrakeReport =
  dbw_ford_msgs::msg::BrakeReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__BRAKE_REPORT__STRUCT_HPP_
