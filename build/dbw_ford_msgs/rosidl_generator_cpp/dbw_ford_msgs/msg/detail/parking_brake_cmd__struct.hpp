// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/ParkingBrakeCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/parking_brake_cmd.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE_CMD__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dbw_ford_msgs__msg__ParkingBrakeCmd __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__ParkingBrakeCmd __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParkingBrakeCmd_
{
  using Type = ParkingBrakeCmd_<ContainerAllocator>;

  explicit ParkingBrakeCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0;
    }
  }

  explicit ParkingBrakeCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0;
    }
  }

  // field types and members
  using _cmd_type =
    uint8_t;
  _cmd_type cmd;

  // setters for named parameter idiom
  Type & set__cmd(
    const uint8_t & _arg)
  {
    this->cmd = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t ON =
    1u;
  static constexpr uint8_t OFF =
    2u;

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__ParkingBrakeCmd
    std::shared_ptr<dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__ParkingBrakeCmd
    std::shared_ptr<dbw_ford_msgs::msg::ParkingBrakeCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParkingBrakeCmd_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParkingBrakeCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParkingBrakeCmd_

// alias to use template instance with default allocator
using ParkingBrakeCmd =
  dbw_ford_msgs::msg::ParkingBrakeCmd_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ParkingBrakeCmd_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ParkingBrakeCmd_<ContainerAllocator>::ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ParkingBrakeCmd_<ContainerAllocator>::OFF;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__PARKING_BRAKE_CMD__STRUCT_HPP_
