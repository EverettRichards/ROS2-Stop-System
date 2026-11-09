// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/surround_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__SURROUND_REPORT__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__SURROUND_REPORT__STRUCT_HPP_

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
# define DEPRECATED__dbw_ford_msgs__msg__SurroundReport __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__SurroundReport __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SurroundReport_
{
  using Type = SurroundReport_<ContainerAllocator>;

  explicit SurroundReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cta_left_alert = false;
      this->cta_right_alert = false;
      this->cta_left_enabled = false;
      this->cta_right_enabled = false;
      this->blis_left_alert = false;
      this->blis_right_alert = false;
      this->blis_left_enabled = false;
      this->blis_right_enabled = false;
      this->sonar_enabled = false;
      this->sonar_fault = false;
      std::fill<typename std::array<float, 12>::iterator, float>(this->sonar.begin(), this->sonar.end(), 0.0f);
    }
  }

  explicit SurroundReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sonar(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cta_left_alert = false;
      this->cta_right_alert = false;
      this->cta_left_enabled = false;
      this->cta_right_enabled = false;
      this->blis_left_alert = false;
      this->blis_right_alert = false;
      this->blis_left_enabled = false;
      this->blis_right_enabled = false;
      this->sonar_enabled = false;
      this->sonar_fault = false;
      std::fill<typename std::array<float, 12>::iterator, float>(this->sonar.begin(), this->sonar.end(), 0.0f);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cta_left_alert_type =
    bool;
  _cta_left_alert_type cta_left_alert;
  using _cta_right_alert_type =
    bool;
  _cta_right_alert_type cta_right_alert;
  using _cta_left_enabled_type =
    bool;
  _cta_left_enabled_type cta_left_enabled;
  using _cta_right_enabled_type =
    bool;
  _cta_right_enabled_type cta_right_enabled;
  using _blis_left_alert_type =
    bool;
  _blis_left_alert_type blis_left_alert;
  using _blis_right_alert_type =
    bool;
  _blis_right_alert_type blis_right_alert;
  using _blis_left_enabled_type =
    bool;
  _blis_left_enabled_type blis_left_enabled;
  using _blis_right_enabled_type =
    bool;
  _blis_right_enabled_type blis_right_enabled;
  using _sonar_enabled_type =
    bool;
  _sonar_enabled_type sonar_enabled;
  using _sonar_fault_type =
    bool;
  _sonar_fault_type sonar_fault;
  using _sonar_type =
    std::array<float, 12>;
  _sonar_type sonar;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cta_left_alert(
    const bool & _arg)
  {
    this->cta_left_alert = _arg;
    return *this;
  }
  Type & set__cta_right_alert(
    const bool & _arg)
  {
    this->cta_right_alert = _arg;
    return *this;
  }
  Type & set__cta_left_enabled(
    const bool & _arg)
  {
    this->cta_left_enabled = _arg;
    return *this;
  }
  Type & set__cta_right_enabled(
    const bool & _arg)
  {
    this->cta_right_enabled = _arg;
    return *this;
  }
  Type & set__blis_left_alert(
    const bool & _arg)
  {
    this->blis_left_alert = _arg;
    return *this;
  }
  Type & set__blis_right_alert(
    const bool & _arg)
  {
    this->blis_right_alert = _arg;
    return *this;
  }
  Type & set__blis_left_enabled(
    const bool & _arg)
  {
    this->blis_left_enabled = _arg;
    return *this;
  }
  Type & set__blis_right_enabled(
    const bool & _arg)
  {
    this->blis_right_enabled = _arg;
    return *this;
  }
  Type & set__sonar_enabled(
    const bool & _arg)
  {
    this->sonar_enabled = _arg;
    return *this;
  }
  Type & set__sonar_fault(
    const bool & _arg)
  {
    this->sonar_fault = _arg;
    return *this;
  }
  Type & set__sonar(
    const std::array<float, 12> & _arg)
  {
    this->sonar = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FRONT_LEFT_SIDE =
    0u;
  static constexpr uint8_t FRONT_LEFT_CORNER =
    1u;
  static constexpr uint8_t FRONT_LEFT_CENTER =
    2u;
  static constexpr uint8_t FRONT_RIGHT_CENTER =
    3u;
  static constexpr uint8_t FRONT_RIGHT_CORNER =
    4u;
  static constexpr uint8_t FRONT_RIGHT_SIDE =
    5u;
  static constexpr uint8_t REAR_LEFT_SIDE =
    6u;
  static constexpr uint8_t REAR_LEFT_CORNER =
    7u;
  static constexpr uint8_t REAR_LEFT_CENTER =
    8u;
  static constexpr uint8_t REAR_RIGHT_CENTER =
    9u;
  static constexpr uint8_t REAR_RIGHT_CORNER =
    10u;
  static constexpr uint8_t REAR_RIGHT_SIDE =
    11u;

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::SurroundReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::SurroundReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::SurroundReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::SurroundReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::SurroundReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::SurroundReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::SurroundReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::SurroundReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::SurroundReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::SurroundReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__SurroundReport
    std::shared_ptr<dbw_ford_msgs::msg::SurroundReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__SurroundReport
    std::shared_ptr<dbw_ford_msgs::msg::SurroundReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SurroundReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cta_left_alert != other.cta_left_alert) {
      return false;
    }
    if (this->cta_right_alert != other.cta_right_alert) {
      return false;
    }
    if (this->cta_left_enabled != other.cta_left_enabled) {
      return false;
    }
    if (this->cta_right_enabled != other.cta_right_enabled) {
      return false;
    }
    if (this->blis_left_alert != other.blis_left_alert) {
      return false;
    }
    if (this->blis_right_alert != other.blis_right_alert) {
      return false;
    }
    if (this->blis_left_enabled != other.blis_left_enabled) {
      return false;
    }
    if (this->blis_right_enabled != other.blis_right_enabled) {
      return false;
    }
    if (this->sonar_enabled != other.sonar_enabled) {
      return false;
    }
    if (this->sonar_fault != other.sonar_fault) {
      return false;
    }
    if (this->sonar != other.sonar) {
      return false;
    }
    return true;
  }
  bool operator!=(const SurroundReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SurroundReport_

// alias to use template instance with default allocator
using SurroundReport =
  dbw_ford_msgs::msg::SurroundReport_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SurroundReport_<ContainerAllocator>::FRONT_LEFT_SIDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SurroundReport_<ContainerAllocator>::FRONT_LEFT_CORNER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SurroundReport_<ContainerAllocator>::FRONT_LEFT_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SurroundReport_<ContainerAllocator>::FRONT_RIGHT_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SurroundReport_<ContainerAllocator>::FRONT_RIGHT_CORNER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SurroundReport_<ContainerAllocator>::FRONT_RIGHT_SIDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SurroundReport_<ContainerAllocator>::REAR_LEFT_SIDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SurroundReport_<ContainerAllocator>::REAR_LEFT_CORNER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SurroundReport_<ContainerAllocator>::REAR_LEFT_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SurroundReport_<ContainerAllocator>::REAR_RIGHT_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SurroundReport_<ContainerAllocator>::REAR_RIGHT_CORNER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SurroundReport_<ContainerAllocator>::REAR_RIGHT_SIDE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__SURROUND_REPORT__STRUCT_HPP_
