// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/HillStartAssist.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/hill_start_assist.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__HILL_START_ASSIST__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__HILL_START_ASSIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dbw_ford_msgs__msg__HillStartAssist __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__HillStartAssist __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HillStartAssist_
{
  using Type = HillStartAssist_<ContainerAllocator>;

  explicit HillStartAssist_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->mode = 0;
    }
  }

  explicit HillStartAssist_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->mode = 0;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STAT_INACTIVE =
    0u;
  static constexpr uint8_t STAT_FINDING_GRADIENT =
    1u;
  static constexpr uint8_t STAT_ACTIVE_PRESSED =
    2u;
  static constexpr uint8_t STAT_ACTIVE_RELEASED =
    3u;
  static constexpr uint8_t STAT_FAST_RELEASE =
    4u;
  static constexpr uint8_t STAT_SLOW_RELEASE =
    5u;
  static constexpr uint8_t STAT_FAILED =
    6u;
  static constexpr uint8_t STAT_UNDEFINED =
    7u;
  static constexpr uint8_t MODE_OFF =
    0u;
  static constexpr uint8_t MODE_AUTO =
    1u;
  static constexpr uint8_t MODE_MANUAL =
    2u;
  static constexpr uint8_t MODE_UNDEFINED =
    3u;

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__HillStartAssist
    std::shared_ptr<dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__HillStartAssist
    std::shared_ptr<dbw_ford_msgs::msg::HillStartAssist_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HillStartAssist_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const HillStartAssist_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HillStartAssist_

// alias to use template instance with default allocator
using HillStartAssist =
  dbw_ford_msgs::msg::HillStartAssist_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HillStartAssist_<ContainerAllocator>::STAT_INACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HillStartAssist_<ContainerAllocator>::STAT_FINDING_GRADIENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HillStartAssist_<ContainerAllocator>::STAT_ACTIVE_PRESSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HillStartAssist_<ContainerAllocator>::STAT_ACTIVE_RELEASED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HillStartAssist_<ContainerAllocator>::STAT_FAST_RELEASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HillStartAssist_<ContainerAllocator>::STAT_SLOW_RELEASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HillStartAssist_<ContainerAllocator>::STAT_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HillStartAssist_<ContainerAllocator>::STAT_UNDEFINED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HillStartAssist_<ContainerAllocator>::MODE_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HillStartAssist_<ContainerAllocator>::MODE_AUTO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HillStartAssist_<ContainerAllocator>::MODE_MANUAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HillStartAssist_<ContainerAllocator>::MODE_UNDEFINED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__HILL_START_ASSIST__STRUCT_HPP_
