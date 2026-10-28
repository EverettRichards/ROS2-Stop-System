// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/FuelLevelReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/fuel_level_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__FUEL_LEVEL_REPORT__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__FUEL_LEVEL_REPORT__STRUCT_HPP_

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
# define DEPRECATED__dbw_ford_msgs__msg__FuelLevelReport __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__FuelLevelReport __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FuelLevelReport_
{
  using Type = FuelLevelReport_<ContainerAllocator>;

  explicit FuelLevelReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fuel_level = 0.0f;
      this->battery_12v = 0.0f;
      this->battery_hev = 0.0f;
      this->odometer = 0.0f;
    }
  }

  explicit FuelLevelReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fuel_level = 0.0f;
      this->battery_12v = 0.0f;
      this->battery_hev = 0.0f;
      this->odometer = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fuel_level_type =
    float;
  _fuel_level_type fuel_level;
  using _battery_12v_type =
    float;
  _battery_12v_type battery_12v;
  using _battery_hev_type =
    float;
  _battery_hev_type battery_hev;
  using _odometer_type =
    float;
  _odometer_type odometer;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fuel_level(
    const float & _arg)
  {
    this->fuel_level = _arg;
    return *this;
  }
  Type & set__battery_12v(
    const float & _arg)
  {
    this->battery_12v = _arg;
    return *this;
  }
  Type & set__battery_hev(
    const float & _arg)
  {
    this->battery_hev = _arg;
    return *this;
  }
  Type & set__odometer(
    const float & _arg)
  {
    this->odometer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::FuelLevelReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::FuelLevelReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::FuelLevelReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::FuelLevelReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::FuelLevelReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::FuelLevelReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::FuelLevelReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::FuelLevelReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::FuelLevelReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::FuelLevelReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__FuelLevelReport
    std::shared_ptr<dbw_ford_msgs::msg::FuelLevelReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__FuelLevelReport
    std::shared_ptr<dbw_ford_msgs::msg::FuelLevelReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FuelLevelReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fuel_level != other.fuel_level) {
      return false;
    }
    if (this->battery_12v != other.battery_12v) {
      return false;
    }
    if (this->battery_hev != other.battery_hev) {
      return false;
    }
    if (this->odometer != other.odometer) {
      return false;
    }
    return true;
  }
  bool operator!=(const FuelLevelReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FuelLevelReport_

// alias to use template instance with default allocator
using FuelLevelReport =
  dbw_ford_msgs::msg::FuelLevelReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__FUEL_LEVEL_REPORT__STRUCT_HPP_
