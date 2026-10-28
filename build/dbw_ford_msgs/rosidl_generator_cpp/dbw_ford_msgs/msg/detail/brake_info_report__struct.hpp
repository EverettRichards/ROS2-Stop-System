// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/BrakeInfoReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/brake_info_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__BRAKE_INFO_REPORT__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__BRAKE_INFO_REPORT__STRUCT_HPP_

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
// Member 'brake_pedal_qf'
#include "dbw_ford_msgs/msg/detail/quality_factor__struct.hpp"
// Member 'hsa'
#include "dbw_ford_msgs/msg/detail/hill_start_assist__struct.hpp"
// Member 'parking_brake'
#include "dbw_ford_msgs/msg/detail/parking_brake__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dbw_ford_msgs__msg__BrakeInfoReport __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__BrakeInfoReport __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BrakeInfoReport_
{
  using Type = BrakeInfoReport_<ContainerAllocator>;

  explicit BrakeInfoReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    brake_pedal_qf(_init),
    hsa(_init),
    parking_brake(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake_torque_request = 0.0f;
      this->brake_torque_actual = 0.0f;
      this->wheel_torque_actual = 0.0f;
      this->accel_over_ground = 0.0f;
      this->abs_active = false;
      this->abs_enabled = false;
      this->stab_active = false;
      this->stab_enabled = false;
      this->trac_active = false;
      this->trac_enabled = false;
      this->stationary = false;
    }
  }

  explicit BrakeInfoReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    brake_pedal_qf(_alloc, _init),
    hsa(_alloc, _init),
    parking_brake(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake_torque_request = 0.0f;
      this->brake_torque_actual = 0.0f;
      this->wheel_torque_actual = 0.0f;
      this->accel_over_ground = 0.0f;
      this->abs_active = false;
      this->abs_enabled = false;
      this->stab_active = false;
      this->stab_enabled = false;
      this->trac_active = false;
      this->trac_enabled = false;
      this->stationary = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _brake_torque_request_type =
    float;
  _brake_torque_request_type brake_torque_request;
  using _brake_torque_actual_type =
    float;
  _brake_torque_actual_type brake_torque_actual;
  using _wheel_torque_actual_type =
    float;
  _wheel_torque_actual_type wheel_torque_actual;
  using _accel_over_ground_type =
    float;
  _accel_over_ground_type accel_over_ground;
  using _brake_pedal_qf_type =
    dbw_ford_msgs::msg::QualityFactor_<ContainerAllocator>;
  _brake_pedal_qf_type brake_pedal_qf;
  using _hsa_type =
    dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator>;
  _hsa_type hsa;
  using _abs_active_type =
    bool;
  _abs_active_type abs_active;
  using _abs_enabled_type =
    bool;
  _abs_enabled_type abs_enabled;
  using _stab_active_type =
    bool;
  _stab_active_type stab_active;
  using _stab_enabled_type =
    bool;
  _stab_enabled_type stab_enabled;
  using _trac_active_type =
    bool;
  _trac_active_type trac_active;
  using _trac_enabled_type =
    bool;
  _trac_enabled_type trac_enabled;
  using _parking_brake_type =
    dbw_ford_msgs::msg::ParkingBrake_<ContainerAllocator>;
  _parking_brake_type parking_brake;
  using _stationary_type =
    bool;
  _stationary_type stationary;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__brake_torque_request(
    const float & _arg)
  {
    this->brake_torque_request = _arg;
    return *this;
  }
  Type & set__brake_torque_actual(
    const float & _arg)
  {
    this->brake_torque_actual = _arg;
    return *this;
  }
  Type & set__wheel_torque_actual(
    const float & _arg)
  {
    this->wheel_torque_actual = _arg;
    return *this;
  }
  Type & set__accel_over_ground(
    const float & _arg)
  {
    this->accel_over_ground = _arg;
    return *this;
  }
  Type & set__brake_pedal_qf(
    const dbw_ford_msgs::msg::QualityFactor_<ContainerAllocator> & _arg)
  {
    this->brake_pedal_qf = _arg;
    return *this;
  }
  Type & set__hsa(
    const dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator> & _arg)
  {
    this->hsa = _arg;
    return *this;
  }
  Type & set__abs_active(
    const bool & _arg)
  {
    this->abs_active = _arg;
    return *this;
  }
  Type & set__abs_enabled(
    const bool & _arg)
  {
    this->abs_enabled = _arg;
    return *this;
  }
  Type & set__stab_active(
    const bool & _arg)
  {
    this->stab_active = _arg;
    return *this;
  }
  Type & set__stab_enabled(
    const bool & _arg)
  {
    this->stab_enabled = _arg;
    return *this;
  }
  Type & set__trac_active(
    const bool & _arg)
  {
    this->trac_active = _arg;
    return *this;
  }
  Type & set__trac_enabled(
    const bool & _arg)
  {
    this->trac_enabled = _arg;
    return *this;
  }
  Type & set__parking_brake(
    const dbw_ford_msgs::msg::ParkingBrake_<ContainerAllocator> & _arg)
  {
    this->parking_brake = _arg;
    return *this;
  }
  Type & set__stationary(
    const bool & _arg)
  {
    this->stationary = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::BrakeInfoReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::BrakeInfoReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::BrakeInfoReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::BrakeInfoReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::BrakeInfoReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::BrakeInfoReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::BrakeInfoReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::BrakeInfoReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::BrakeInfoReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::BrakeInfoReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__BrakeInfoReport
    std::shared_ptr<dbw_ford_msgs::msg::BrakeInfoReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__BrakeInfoReport
    std::shared_ptr<dbw_ford_msgs::msg::BrakeInfoReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BrakeInfoReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->brake_torque_request != other.brake_torque_request) {
      return false;
    }
    if (this->brake_torque_actual != other.brake_torque_actual) {
      return false;
    }
    if (this->wheel_torque_actual != other.wheel_torque_actual) {
      return false;
    }
    if (this->accel_over_ground != other.accel_over_ground) {
      return false;
    }
    if (this->brake_pedal_qf != other.brake_pedal_qf) {
      return false;
    }
    if (this->hsa != other.hsa) {
      return false;
    }
    if (this->abs_active != other.abs_active) {
      return false;
    }
    if (this->abs_enabled != other.abs_enabled) {
      return false;
    }
    if (this->stab_active != other.stab_active) {
      return false;
    }
    if (this->stab_enabled != other.stab_enabled) {
      return false;
    }
    if (this->trac_active != other.trac_active) {
      return false;
    }
    if (this->trac_enabled != other.trac_enabled) {
      return false;
    }
    if (this->parking_brake != other.parking_brake) {
      return false;
    }
    if (this->stationary != other.stationary) {
      return false;
    }
    return true;
  }
  bool operator!=(const BrakeInfoReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BrakeInfoReport_

// alias to use template instance with default allocator
using BrakeInfoReport =
  dbw_ford_msgs::msg::BrakeInfoReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__BRAKE_INFO_REPORT__STRUCT_HPP_
