// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/ThrottleInfoReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/throttle_info_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_INFO_REPORT__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_INFO_REPORT__STRUCT_HPP_

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
// Member 'throttle_pedal_qf'
#include "dbw_ford_msgs/msg/detail/quality_factor__struct.hpp"
// Member 'one_pedal'
#include "dbw_ford_msgs/msg/detail/one_pedal__struct.hpp"
// Member 'gear_num'
#include "dbw_ford_msgs/msg/detail/gear_num__struct.hpp"
// Member 'ignition'
#include "dbw_ford_msgs/msg/detail/ignition__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dbw_ford_msgs__msg__ThrottleInfoReport __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__ThrottleInfoReport __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ThrottleInfoReport_
{
  using Type = ThrottleInfoReport_<ContainerAllocator>;

  explicit ThrottleInfoReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    throttle_pedal_qf(_init),
    one_pedal(_init),
    gear_num(_init),
    ignition(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle_pc = 0.0f;
      this->throttle_rate = 0.0f;
      this->engine_rpm = 0.0f;
      this->batt_curr = 0.0f;
    }
  }

  explicit ThrottleInfoReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    throttle_pedal_qf(_alloc, _init),
    one_pedal(_alloc, _init),
    gear_num(_alloc, _init),
    ignition(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle_pc = 0.0f;
      this->throttle_rate = 0.0f;
      this->engine_rpm = 0.0f;
      this->batt_curr = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _throttle_pc_type =
    float;
  _throttle_pc_type throttle_pc;
  using _throttle_rate_type =
    float;
  _throttle_rate_type throttle_rate;
  using _throttle_pedal_qf_type =
    dbw_ford_msgs::msg::QualityFactor_<ContainerAllocator>;
  _throttle_pedal_qf_type throttle_pedal_qf;
  using _one_pedal_type =
    dbw_ford_msgs::msg::OnePedal_<ContainerAllocator>;
  _one_pedal_type one_pedal;
  using _engine_rpm_type =
    float;
  _engine_rpm_type engine_rpm;
  using _gear_num_type =
    dbw_ford_msgs::msg::GearNum_<ContainerAllocator>;
  _gear_num_type gear_num;
  using _ignition_type =
    dbw_ford_msgs::msg::Ignition_<ContainerAllocator>;
  _ignition_type ignition;
  using _batt_curr_type =
    float;
  _batt_curr_type batt_curr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__throttle_pc(
    const float & _arg)
  {
    this->throttle_pc = _arg;
    return *this;
  }
  Type & set__throttle_rate(
    const float & _arg)
  {
    this->throttle_rate = _arg;
    return *this;
  }
  Type & set__throttle_pedal_qf(
    const dbw_ford_msgs::msg::QualityFactor_<ContainerAllocator> & _arg)
  {
    this->throttle_pedal_qf = _arg;
    return *this;
  }
  Type & set__one_pedal(
    const dbw_ford_msgs::msg::OnePedal_<ContainerAllocator> & _arg)
  {
    this->one_pedal = _arg;
    return *this;
  }
  Type & set__engine_rpm(
    const float & _arg)
  {
    this->engine_rpm = _arg;
    return *this;
  }
  Type & set__gear_num(
    const dbw_ford_msgs::msg::GearNum_<ContainerAllocator> & _arg)
  {
    this->gear_num = _arg;
    return *this;
  }
  Type & set__ignition(
    const dbw_ford_msgs::msg::Ignition_<ContainerAllocator> & _arg)
  {
    this->ignition = _arg;
    return *this;
  }
  Type & set__batt_curr(
    const float & _arg)
  {
    this->batt_curr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::ThrottleInfoReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::ThrottleInfoReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::ThrottleInfoReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::ThrottleInfoReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::ThrottleInfoReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::ThrottleInfoReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::ThrottleInfoReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::ThrottleInfoReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::ThrottleInfoReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::ThrottleInfoReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__ThrottleInfoReport
    std::shared_ptr<dbw_ford_msgs::msg::ThrottleInfoReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__ThrottleInfoReport
    std::shared_ptr<dbw_ford_msgs::msg::ThrottleInfoReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThrottleInfoReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->throttle_pc != other.throttle_pc) {
      return false;
    }
    if (this->throttle_rate != other.throttle_rate) {
      return false;
    }
    if (this->throttle_pedal_qf != other.throttle_pedal_qf) {
      return false;
    }
    if (this->one_pedal != other.one_pedal) {
      return false;
    }
    if (this->engine_rpm != other.engine_rpm) {
      return false;
    }
    if (this->gear_num != other.gear_num) {
      return false;
    }
    if (this->ignition != other.ignition) {
      return false;
    }
    if (this->batt_curr != other.batt_curr) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThrottleInfoReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThrottleInfoReport_

// alias to use template instance with default allocator
using ThrottleInfoReport =
  dbw_ford_msgs::msg::ThrottleInfoReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__THROTTLE_INFO_REPORT__STRUCT_HPP_
