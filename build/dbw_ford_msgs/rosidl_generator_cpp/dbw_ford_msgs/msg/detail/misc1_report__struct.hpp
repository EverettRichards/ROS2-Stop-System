// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dbw_ford_msgs:msg/Misc1Report.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/misc1_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__MISC1_REPORT__STRUCT_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__MISC1_REPORT__STRUCT_HPP_

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
// Member 'turn_signal'
#include "dbw_ford_msgs/msg/detail/turn_signal__struct.hpp"
// Member 'wiper'
#include "dbw_ford_msgs/msg/detail/wiper__struct.hpp"
// Member 'ambient_light'
#include "dbw_ford_msgs/msg/detail/ambient_light__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dbw_ford_msgs__msg__Misc1Report __attribute__((deprecated))
#else
# define DEPRECATED__dbw_ford_msgs__msg__Misc1Report __declspec(deprecated)
#endif

namespace dbw_ford_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Misc1Report_
{
  using Type = Misc1Report_<ContainerAllocator>;

  explicit Misc1Report_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    turn_signal(_init),
    wiper(_init),
    ambient_light(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->high_beam_headlights = false;
      this->outside_temperature = 0.0f;
      this->btn_cc_on = false;
      this->btn_cc_off = false;
      this->btn_cc_on_off = false;
      this->btn_cc_res = false;
      this->btn_cc_cncl = false;
      this->btn_cc_res_cncl = false;
      this->btn_cc_res_inc = false;
      this->btn_cc_res_dec = false;
      this->btn_cc_set_inc = false;
      this->btn_cc_set_dec = false;
      this->btn_cc_gap_inc = false;
      this->btn_cc_gap_dec = false;
      this->btn_la_on_off = false;
      this->btn_ld_ok = false;
      this->btn_ld_up = false;
      this->btn_ld_down = false;
      this->btn_ld_left = false;
      this->btn_ld_right = false;
      this->btn_rd_ok = false;
      this->btn_rd_up = false;
      this->btn_rd_down = false;
      this->btn_rd_left = false;
      this->btn_rd_right = false;
      this->btn_vol_inc = false;
      this->btn_vol_dec = false;
      this->btn_mute = false;
      this->btn_media = false;
      this->btn_prev = false;
      this->btn_next = false;
      this->btn_speak = false;
      this->btn_call_start = false;
      this->btn_call_end = false;
      this->fault_bus = false;
      this->door_driver = false;
      this->door_passenger = false;
      this->door_rear_left = false;
      this->door_rear_right = false;
      this->door_hood = false;
      this->door_trunk = false;
      this->passenger_detect = false;
      this->passenger_airbag = false;
      this->buckle_driver = false;
      this->buckle_passenger = false;
    }
  }

  explicit Misc1Report_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    turn_signal(_alloc, _init),
    wiper(_alloc, _init),
    ambient_light(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->high_beam_headlights = false;
      this->outside_temperature = 0.0f;
      this->btn_cc_on = false;
      this->btn_cc_off = false;
      this->btn_cc_on_off = false;
      this->btn_cc_res = false;
      this->btn_cc_cncl = false;
      this->btn_cc_res_cncl = false;
      this->btn_cc_res_inc = false;
      this->btn_cc_res_dec = false;
      this->btn_cc_set_inc = false;
      this->btn_cc_set_dec = false;
      this->btn_cc_gap_inc = false;
      this->btn_cc_gap_dec = false;
      this->btn_la_on_off = false;
      this->btn_ld_ok = false;
      this->btn_ld_up = false;
      this->btn_ld_down = false;
      this->btn_ld_left = false;
      this->btn_ld_right = false;
      this->btn_rd_ok = false;
      this->btn_rd_up = false;
      this->btn_rd_down = false;
      this->btn_rd_left = false;
      this->btn_rd_right = false;
      this->btn_vol_inc = false;
      this->btn_vol_dec = false;
      this->btn_mute = false;
      this->btn_media = false;
      this->btn_prev = false;
      this->btn_next = false;
      this->btn_speak = false;
      this->btn_call_start = false;
      this->btn_call_end = false;
      this->fault_bus = false;
      this->door_driver = false;
      this->door_passenger = false;
      this->door_rear_left = false;
      this->door_rear_right = false;
      this->door_hood = false;
      this->door_trunk = false;
      this->passenger_detect = false;
      this->passenger_airbag = false;
      this->buckle_driver = false;
      this->buckle_passenger = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _turn_signal_type =
    dbw_ford_msgs::msg::TurnSignal_<ContainerAllocator>;
  _turn_signal_type turn_signal;
  using _high_beam_headlights_type =
    bool;
  _high_beam_headlights_type high_beam_headlights;
  using _wiper_type =
    dbw_ford_msgs::msg::Wiper_<ContainerAllocator>;
  _wiper_type wiper;
  using _ambient_light_type =
    dbw_ford_msgs::msg::AmbientLight_<ContainerAllocator>;
  _ambient_light_type ambient_light;
  using _outside_temperature_type =
    float;
  _outside_temperature_type outside_temperature;
  using _btn_cc_on_type =
    bool;
  _btn_cc_on_type btn_cc_on;
  using _btn_cc_off_type =
    bool;
  _btn_cc_off_type btn_cc_off;
  using _btn_cc_on_off_type =
    bool;
  _btn_cc_on_off_type btn_cc_on_off;
  using _btn_cc_res_type =
    bool;
  _btn_cc_res_type btn_cc_res;
  using _btn_cc_cncl_type =
    bool;
  _btn_cc_cncl_type btn_cc_cncl;
  using _btn_cc_res_cncl_type =
    bool;
  _btn_cc_res_cncl_type btn_cc_res_cncl;
  using _btn_cc_res_inc_type =
    bool;
  _btn_cc_res_inc_type btn_cc_res_inc;
  using _btn_cc_res_dec_type =
    bool;
  _btn_cc_res_dec_type btn_cc_res_dec;
  using _btn_cc_set_inc_type =
    bool;
  _btn_cc_set_inc_type btn_cc_set_inc;
  using _btn_cc_set_dec_type =
    bool;
  _btn_cc_set_dec_type btn_cc_set_dec;
  using _btn_cc_gap_inc_type =
    bool;
  _btn_cc_gap_inc_type btn_cc_gap_inc;
  using _btn_cc_gap_dec_type =
    bool;
  _btn_cc_gap_dec_type btn_cc_gap_dec;
  using _btn_la_on_off_type =
    bool;
  _btn_la_on_off_type btn_la_on_off;
  using _btn_ld_ok_type =
    bool;
  _btn_ld_ok_type btn_ld_ok;
  using _btn_ld_up_type =
    bool;
  _btn_ld_up_type btn_ld_up;
  using _btn_ld_down_type =
    bool;
  _btn_ld_down_type btn_ld_down;
  using _btn_ld_left_type =
    bool;
  _btn_ld_left_type btn_ld_left;
  using _btn_ld_right_type =
    bool;
  _btn_ld_right_type btn_ld_right;
  using _btn_rd_ok_type =
    bool;
  _btn_rd_ok_type btn_rd_ok;
  using _btn_rd_up_type =
    bool;
  _btn_rd_up_type btn_rd_up;
  using _btn_rd_down_type =
    bool;
  _btn_rd_down_type btn_rd_down;
  using _btn_rd_left_type =
    bool;
  _btn_rd_left_type btn_rd_left;
  using _btn_rd_right_type =
    bool;
  _btn_rd_right_type btn_rd_right;
  using _btn_vol_inc_type =
    bool;
  _btn_vol_inc_type btn_vol_inc;
  using _btn_vol_dec_type =
    bool;
  _btn_vol_dec_type btn_vol_dec;
  using _btn_mute_type =
    bool;
  _btn_mute_type btn_mute;
  using _btn_media_type =
    bool;
  _btn_media_type btn_media;
  using _btn_prev_type =
    bool;
  _btn_prev_type btn_prev;
  using _btn_next_type =
    bool;
  _btn_next_type btn_next;
  using _btn_speak_type =
    bool;
  _btn_speak_type btn_speak;
  using _btn_call_start_type =
    bool;
  _btn_call_start_type btn_call_start;
  using _btn_call_end_type =
    bool;
  _btn_call_end_type btn_call_end;
  using _fault_bus_type =
    bool;
  _fault_bus_type fault_bus;
  using _door_driver_type =
    bool;
  _door_driver_type door_driver;
  using _door_passenger_type =
    bool;
  _door_passenger_type door_passenger;
  using _door_rear_left_type =
    bool;
  _door_rear_left_type door_rear_left;
  using _door_rear_right_type =
    bool;
  _door_rear_right_type door_rear_right;
  using _door_hood_type =
    bool;
  _door_hood_type door_hood;
  using _door_trunk_type =
    bool;
  _door_trunk_type door_trunk;
  using _passenger_detect_type =
    bool;
  _passenger_detect_type passenger_detect;
  using _passenger_airbag_type =
    bool;
  _passenger_airbag_type passenger_airbag;
  using _buckle_driver_type =
    bool;
  _buckle_driver_type buckle_driver;
  using _buckle_passenger_type =
    bool;
  _buckle_passenger_type buckle_passenger;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__turn_signal(
    const dbw_ford_msgs::msg::TurnSignal_<ContainerAllocator> & _arg)
  {
    this->turn_signal = _arg;
    return *this;
  }
  Type & set__high_beam_headlights(
    const bool & _arg)
  {
    this->high_beam_headlights = _arg;
    return *this;
  }
  Type & set__wiper(
    const dbw_ford_msgs::msg::Wiper_<ContainerAllocator> & _arg)
  {
    this->wiper = _arg;
    return *this;
  }
  Type & set__ambient_light(
    const dbw_ford_msgs::msg::AmbientLight_<ContainerAllocator> & _arg)
  {
    this->ambient_light = _arg;
    return *this;
  }
  Type & set__outside_temperature(
    const float & _arg)
  {
    this->outside_temperature = _arg;
    return *this;
  }
  Type & set__btn_cc_on(
    const bool & _arg)
  {
    this->btn_cc_on = _arg;
    return *this;
  }
  Type & set__btn_cc_off(
    const bool & _arg)
  {
    this->btn_cc_off = _arg;
    return *this;
  }
  Type & set__btn_cc_on_off(
    const bool & _arg)
  {
    this->btn_cc_on_off = _arg;
    return *this;
  }
  Type & set__btn_cc_res(
    const bool & _arg)
  {
    this->btn_cc_res = _arg;
    return *this;
  }
  Type & set__btn_cc_cncl(
    const bool & _arg)
  {
    this->btn_cc_cncl = _arg;
    return *this;
  }
  Type & set__btn_cc_res_cncl(
    const bool & _arg)
  {
    this->btn_cc_res_cncl = _arg;
    return *this;
  }
  Type & set__btn_cc_res_inc(
    const bool & _arg)
  {
    this->btn_cc_res_inc = _arg;
    return *this;
  }
  Type & set__btn_cc_res_dec(
    const bool & _arg)
  {
    this->btn_cc_res_dec = _arg;
    return *this;
  }
  Type & set__btn_cc_set_inc(
    const bool & _arg)
  {
    this->btn_cc_set_inc = _arg;
    return *this;
  }
  Type & set__btn_cc_set_dec(
    const bool & _arg)
  {
    this->btn_cc_set_dec = _arg;
    return *this;
  }
  Type & set__btn_cc_gap_inc(
    const bool & _arg)
  {
    this->btn_cc_gap_inc = _arg;
    return *this;
  }
  Type & set__btn_cc_gap_dec(
    const bool & _arg)
  {
    this->btn_cc_gap_dec = _arg;
    return *this;
  }
  Type & set__btn_la_on_off(
    const bool & _arg)
  {
    this->btn_la_on_off = _arg;
    return *this;
  }
  Type & set__btn_ld_ok(
    const bool & _arg)
  {
    this->btn_ld_ok = _arg;
    return *this;
  }
  Type & set__btn_ld_up(
    const bool & _arg)
  {
    this->btn_ld_up = _arg;
    return *this;
  }
  Type & set__btn_ld_down(
    const bool & _arg)
  {
    this->btn_ld_down = _arg;
    return *this;
  }
  Type & set__btn_ld_left(
    const bool & _arg)
  {
    this->btn_ld_left = _arg;
    return *this;
  }
  Type & set__btn_ld_right(
    const bool & _arg)
  {
    this->btn_ld_right = _arg;
    return *this;
  }
  Type & set__btn_rd_ok(
    const bool & _arg)
  {
    this->btn_rd_ok = _arg;
    return *this;
  }
  Type & set__btn_rd_up(
    const bool & _arg)
  {
    this->btn_rd_up = _arg;
    return *this;
  }
  Type & set__btn_rd_down(
    const bool & _arg)
  {
    this->btn_rd_down = _arg;
    return *this;
  }
  Type & set__btn_rd_left(
    const bool & _arg)
  {
    this->btn_rd_left = _arg;
    return *this;
  }
  Type & set__btn_rd_right(
    const bool & _arg)
  {
    this->btn_rd_right = _arg;
    return *this;
  }
  Type & set__btn_vol_inc(
    const bool & _arg)
  {
    this->btn_vol_inc = _arg;
    return *this;
  }
  Type & set__btn_vol_dec(
    const bool & _arg)
  {
    this->btn_vol_dec = _arg;
    return *this;
  }
  Type & set__btn_mute(
    const bool & _arg)
  {
    this->btn_mute = _arg;
    return *this;
  }
  Type & set__btn_media(
    const bool & _arg)
  {
    this->btn_media = _arg;
    return *this;
  }
  Type & set__btn_prev(
    const bool & _arg)
  {
    this->btn_prev = _arg;
    return *this;
  }
  Type & set__btn_next(
    const bool & _arg)
  {
    this->btn_next = _arg;
    return *this;
  }
  Type & set__btn_speak(
    const bool & _arg)
  {
    this->btn_speak = _arg;
    return *this;
  }
  Type & set__btn_call_start(
    const bool & _arg)
  {
    this->btn_call_start = _arg;
    return *this;
  }
  Type & set__btn_call_end(
    const bool & _arg)
  {
    this->btn_call_end = _arg;
    return *this;
  }
  Type & set__fault_bus(
    const bool & _arg)
  {
    this->fault_bus = _arg;
    return *this;
  }
  Type & set__door_driver(
    const bool & _arg)
  {
    this->door_driver = _arg;
    return *this;
  }
  Type & set__door_passenger(
    const bool & _arg)
  {
    this->door_passenger = _arg;
    return *this;
  }
  Type & set__door_rear_left(
    const bool & _arg)
  {
    this->door_rear_left = _arg;
    return *this;
  }
  Type & set__door_rear_right(
    const bool & _arg)
  {
    this->door_rear_right = _arg;
    return *this;
  }
  Type & set__door_hood(
    const bool & _arg)
  {
    this->door_hood = _arg;
    return *this;
  }
  Type & set__door_trunk(
    const bool & _arg)
  {
    this->door_trunk = _arg;
    return *this;
  }
  Type & set__passenger_detect(
    const bool & _arg)
  {
    this->passenger_detect = _arg;
    return *this;
  }
  Type & set__passenger_airbag(
    const bool & _arg)
  {
    this->passenger_airbag = _arg;
    return *this;
  }
  Type & set__buckle_driver(
    const bool & _arg)
  {
    this->buckle_driver = _arg;
    return *this;
  }
  Type & set__buckle_passenger(
    const bool & _arg)
  {
    this->buckle_passenger = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dbw_ford_msgs::msg::Misc1Report_<ContainerAllocator> *;
  using ConstRawPtr =
    const dbw_ford_msgs::msg::Misc1Report_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::Misc1Report_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dbw_ford_msgs::msg::Misc1Report_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::Misc1Report_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::Misc1Report_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dbw_ford_msgs::msg::Misc1Report_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dbw_ford_msgs::msg::Misc1Report_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::Misc1Report_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dbw_ford_msgs::msg::Misc1Report_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dbw_ford_msgs__msg__Misc1Report
    std::shared_ptr<dbw_ford_msgs::msg::Misc1Report_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dbw_ford_msgs__msg__Misc1Report
    std::shared_ptr<dbw_ford_msgs::msg::Misc1Report_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Misc1Report_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->turn_signal != other.turn_signal) {
      return false;
    }
    if (this->high_beam_headlights != other.high_beam_headlights) {
      return false;
    }
    if (this->wiper != other.wiper) {
      return false;
    }
    if (this->ambient_light != other.ambient_light) {
      return false;
    }
    if (this->outside_temperature != other.outside_temperature) {
      return false;
    }
    if (this->btn_cc_on != other.btn_cc_on) {
      return false;
    }
    if (this->btn_cc_off != other.btn_cc_off) {
      return false;
    }
    if (this->btn_cc_on_off != other.btn_cc_on_off) {
      return false;
    }
    if (this->btn_cc_res != other.btn_cc_res) {
      return false;
    }
    if (this->btn_cc_cncl != other.btn_cc_cncl) {
      return false;
    }
    if (this->btn_cc_res_cncl != other.btn_cc_res_cncl) {
      return false;
    }
    if (this->btn_cc_res_inc != other.btn_cc_res_inc) {
      return false;
    }
    if (this->btn_cc_res_dec != other.btn_cc_res_dec) {
      return false;
    }
    if (this->btn_cc_set_inc != other.btn_cc_set_inc) {
      return false;
    }
    if (this->btn_cc_set_dec != other.btn_cc_set_dec) {
      return false;
    }
    if (this->btn_cc_gap_inc != other.btn_cc_gap_inc) {
      return false;
    }
    if (this->btn_cc_gap_dec != other.btn_cc_gap_dec) {
      return false;
    }
    if (this->btn_la_on_off != other.btn_la_on_off) {
      return false;
    }
    if (this->btn_ld_ok != other.btn_ld_ok) {
      return false;
    }
    if (this->btn_ld_up != other.btn_ld_up) {
      return false;
    }
    if (this->btn_ld_down != other.btn_ld_down) {
      return false;
    }
    if (this->btn_ld_left != other.btn_ld_left) {
      return false;
    }
    if (this->btn_ld_right != other.btn_ld_right) {
      return false;
    }
    if (this->btn_rd_ok != other.btn_rd_ok) {
      return false;
    }
    if (this->btn_rd_up != other.btn_rd_up) {
      return false;
    }
    if (this->btn_rd_down != other.btn_rd_down) {
      return false;
    }
    if (this->btn_rd_left != other.btn_rd_left) {
      return false;
    }
    if (this->btn_rd_right != other.btn_rd_right) {
      return false;
    }
    if (this->btn_vol_inc != other.btn_vol_inc) {
      return false;
    }
    if (this->btn_vol_dec != other.btn_vol_dec) {
      return false;
    }
    if (this->btn_mute != other.btn_mute) {
      return false;
    }
    if (this->btn_media != other.btn_media) {
      return false;
    }
    if (this->btn_prev != other.btn_prev) {
      return false;
    }
    if (this->btn_next != other.btn_next) {
      return false;
    }
    if (this->btn_speak != other.btn_speak) {
      return false;
    }
    if (this->btn_call_start != other.btn_call_start) {
      return false;
    }
    if (this->btn_call_end != other.btn_call_end) {
      return false;
    }
    if (this->fault_bus != other.fault_bus) {
      return false;
    }
    if (this->door_driver != other.door_driver) {
      return false;
    }
    if (this->door_passenger != other.door_passenger) {
      return false;
    }
    if (this->door_rear_left != other.door_rear_left) {
      return false;
    }
    if (this->door_rear_right != other.door_rear_right) {
      return false;
    }
    if (this->door_hood != other.door_hood) {
      return false;
    }
    if (this->door_trunk != other.door_trunk) {
      return false;
    }
    if (this->passenger_detect != other.passenger_detect) {
      return false;
    }
    if (this->passenger_airbag != other.passenger_airbag) {
      return false;
    }
    if (this->buckle_driver != other.buckle_driver) {
      return false;
    }
    if (this->buckle_passenger != other.buckle_passenger) {
      return false;
    }
    return true;
  }
  bool operator!=(const Misc1Report_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Misc1Report_

// alias to use template instance with default allocator
using Misc1Report =
  dbw_ford_msgs::msg::Misc1Report_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__MISC1_REPORT__STRUCT_HPP_
