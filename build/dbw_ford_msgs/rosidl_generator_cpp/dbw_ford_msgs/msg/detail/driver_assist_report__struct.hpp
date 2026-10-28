// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/DriverAssistReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/driver_assist_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__STRUCT_HPP_

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
# define DEPRECATED__dbw_ford_msgs__msg__DriverAssistReport __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__DriverAssistReport __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DriverAssistReport_
{
  using Type = DriverAssistReport_<ContainerAllocator>;

  explicit DriverAssistReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->decel = 0.0f;
      this->decel_src = 0;
      this->fcw_enabled = false;
      this->fcw_active = false;
      this->aeb_enabled = false;
      this->aeb_precharge = false;
      this->aeb_braking = false;
      this->acc_enabled = false;
      this->acc_braking = false;
    }
  }

  explicit DriverAssistReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->decel = 0.0f;
      this->decel_src = 0;
      this->fcw_enabled = false;
      this->fcw_active = false;
      this->aeb_enabled = false;
      this->aeb_precharge = false;
      this->aeb_braking = false;
      this->acc_enabled = false;
      this->acc_braking = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _decel_type =
    float;
  _decel_type decel;
  using _decel_src_type =
    uint8_t;
  _decel_src_type decel_src;
  using _fcw_enabled_type =
    bool;
  _fcw_enabled_type fcw_enabled;
  using _fcw_active_type =
    bool;
  _fcw_active_type fcw_active;
  using _aeb_enabled_type =
    bool;
  _aeb_enabled_type aeb_enabled;
  using _aeb_precharge_type =
    bool;
  _aeb_precharge_type aeb_precharge;
  using _aeb_braking_type =
    bool;
  _aeb_braking_type aeb_braking;
  using _acc_enabled_type =
    bool;
  _acc_enabled_type acc_enabled;
  using _acc_braking_type =
    bool;
  _acc_braking_type acc_braking;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__decel(
    const float & _arg)
  {
    this->decel = _arg;
    return *this;
  }
  Type & set__decel_src(
    const uint8_t & _arg)
  {
    this->decel_src = _arg;
    return *this;
  }
  Type & set__fcw_enabled(
    const bool & _arg)
  {
    this->fcw_enabled = _arg;
    return *this;
  }
  Type & set__fcw_active(
    const bool & _arg)
  {
    this->fcw_active = _arg;
    return *this;
  }
  Type & set__aeb_enabled(
    const bool & _arg)
  {
    this->aeb_enabled = _arg;
    return *this;
  }
  Type & set__aeb_precharge(
    const bool & _arg)
  {
    this->aeb_precharge = _arg;
    return *this;
  }
  Type & set__aeb_braking(
    const bool & _arg)
  {
    this->aeb_braking = _arg;
    return *this;
  }
  Type & set__acc_enabled(
    const bool & _arg)
  {
    this->acc_enabled = _arg;
    return *this;
  }
  Type & set__acc_braking(
    const bool & _arg)
  {
    this->acc_braking = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DECEL_NONE =
    0u;
  static constexpr uint8_t DECEL_AEB =
    1u;
  static constexpr uint8_t DECEL_ACC =
    2u;

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::DriverAssistReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::DriverAssistReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::DriverAssistReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::DriverAssistReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::DriverAssistReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::DriverAssistReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::DriverAssistReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::DriverAssistReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::DriverAssistReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::DriverAssistReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__DriverAssistReport
    std::shared_ptr<dbw_ford_msgs::msg::DriverAssistReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__DriverAssistReport
    std::shared_ptr<dbw_ford_msgs::msg::DriverAssistReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriverAssistReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->decel != other.decel) {
      return false;
    }
    if (this->decel_src != other.decel_src) {
      return false;
    }
    if (this->fcw_enabled != other.fcw_enabled) {
      return false;
    }
    if (this->fcw_active != other.fcw_active) {
      return false;
    }
    if (this->aeb_enabled != other.aeb_enabled) {
      return false;
    }
    if (this->aeb_precharge != other.aeb_precharge) {
      return false;
    }
    if (this->aeb_braking != other.aeb_braking) {
      return false;
    }
    if (this->acc_enabled != other.acc_enabled) {
      return false;
    }
    if (this->acc_braking != other.acc_braking) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriverAssistReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriverAssistReport_

// alias to use template instance with default allocator
using DriverAssistReport =
  dbw_ford_msgs::msg::DriverAssistReport_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DriverAssistReport_<ContainerAllocator>::DECEL_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DriverAssistReport_<ContainerAllocator>::DECEL_AEB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DriverAssistReport_<ContainerAllocator>::DECEL_ACC;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__DRIVER_ASSIST_REPORT__STRUCT_HPP_
