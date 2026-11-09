// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/WatchdogCounter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/watchdog_counter.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__WATCHDOG_COUNTER__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__WATCHDOG_COUNTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dbw_ford_msgs__msg__WatchdogCounter __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__WatchdogCounter __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WatchdogCounter_
{
  using Type = WatchdogCounter_<ContainerAllocator>;

  explicit WatchdogCounter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
    }
  }

  explicit WatchdogCounter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
    }
  }

  // field types and members
  using _source_type =
    uint8_t;
  _source_type source;

  // setters for named parameter idiom
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t OTHER_BRAKE =
    1u;
  static constexpr uint8_t OTHER_THROTTLE =
    2u;
  static constexpr uint8_t OTHER_STEERING =
    3u;
  static constexpr uint8_t BRAKE_COUNTER =
    4u;
  static constexpr uint8_t BRAKE_DISABLED =
    5u;
  static constexpr uint8_t BRAKE_COMMAND =
    6u;
  static constexpr uint8_t BRAKE_REPORT =
    7u;
  static constexpr uint8_t THROTTLE_COUNTER =
    8u;
  static constexpr uint8_t THROTTLE_DISABLED =
    9u;
  static constexpr uint8_t THROTTLE_COMMAND =
    10u;
  static constexpr uint8_t THROTTLE_REPORT =
    11u;
  static constexpr uint8_t STEERING_COUNTER =
    12u;
  static constexpr uint8_t STEERING_DISABLED =
    13u;
  static constexpr uint8_t STEERING_COMMAND =
    14u;
  static constexpr uint8_t STEERING_REPORT =
    15u;

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__WatchdogCounter
    std::shared_ptr<dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__WatchdogCounter
    std::shared_ptr<dbw_ford_msgs::msg::WatchdogCounter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WatchdogCounter_ & other) const
  {
    if (this->source != other.source) {
      return false;
    }
    return true;
  }
  bool operator!=(const WatchdogCounter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WatchdogCounter_

// alias to use template instance with default allocator
using WatchdogCounter =
  dbw_ford_msgs::msg::WatchdogCounter_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::OTHER_BRAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::OTHER_THROTTLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::OTHER_STEERING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::BRAKE_COUNTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::BRAKE_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::BRAKE_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::BRAKE_REPORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::THROTTLE_COUNTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::THROTTLE_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::THROTTLE_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::THROTTLE_REPORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::STEERING_COUNTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::STEERING_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::STEERING_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WatchdogCounter_<ContainerAllocator>::STEERING_REPORT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__WATCHDOG_COUNTER__STRUCT_HPP_
