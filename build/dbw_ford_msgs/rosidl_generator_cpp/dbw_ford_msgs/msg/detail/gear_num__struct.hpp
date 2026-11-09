// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/GearNum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/gear_num.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__GEAR_NUM__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__GEAR_NUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dbw_ford_msgs__msg__GearNum __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__GearNum __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GearNum_
{
  using Type = GearNum_<ContainerAllocator>;

  explicit GearNum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0;
    }
  }

  explicit GearNum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0;
    }
  }

  // field types and members
  using _num_type =
    uint8_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__num(
    const uint8_t & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t DRIVE_D01 =
    1u;
  static constexpr uint8_t DRIVE_D02 =
    2u;
  static constexpr uint8_t DRIVE_D03 =
    3u;
  static constexpr uint8_t DRIVE_D04 =
    4u;
  static constexpr uint8_t DRIVE_D05 =
    5u;
  static constexpr uint8_t DRIVE_D06 =
    6u;
  static constexpr uint8_t DRIVE_D07 =
    7u;
  static constexpr uint8_t DRIVE_D08 =
    8u;
  static constexpr uint8_t DRIVE_D09 =
    9u;
  static constexpr uint8_t DRIVE_D10 =
    10u;
  static constexpr uint8_t NEUTRAL =
    16u;
  static constexpr uint8_t REVERSE_R01 =
    17u;
  static constexpr uint8_t REVERSE_R02 =
    18u;
  static constexpr uint8_t PARK =
    31u;

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::GearNum_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::GearNum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::GearNum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::GearNum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::GearNum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::GearNum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::GearNum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::GearNum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::GearNum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::GearNum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__GearNum
    std::shared_ptr<dbw_ford_msgs::msg::GearNum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__GearNum
    std::shared_ptr<dbw_ford_msgs::msg::GearNum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GearNum_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const GearNum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GearNum_

// alias to use template instance with default allocator
using GearNum =
  dbw_ford_msgs::msg::GearNum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::DRIVE_D01;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::DRIVE_D02;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::DRIVE_D03;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::DRIVE_D04;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::DRIVE_D05;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::DRIVE_D06;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::DRIVE_D07;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::DRIVE_D08;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::DRIVE_D09;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::DRIVE_D10;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::NEUTRAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::REVERSE_R01;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::REVERSE_R02;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GearNum_<ContainerAllocator>::PARK;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__GEAR_NUM__STRUCT_HPP_
