// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dbw_ford_msgs:msg/Misc1Report.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dbw_ford_msgs/msg/misc1_report.hpp"


#ifndef DBW_FORD_MSGS__MSG__DETAIL__MISC1_REPORT__BUILDER_HPP_
#define DBW_FORD_MSGS__MSG__DETAIL__MISC1_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dbw_ford_msgs/msg/detail/misc1_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dbw_ford_msgs
{

namespace msg
{

namespace builder
{

class Init_Misc1Report_buckle_passenger
{
public:
  explicit Init_Misc1Report_buckle_passenger(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  ::dbw_ford_msgs::msg::Misc1Report buckle_passenger(::dbw_ford_msgs::msg::Misc1Report::_buckle_passenger_type arg)
  {
    msg_.buckle_passenger = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_buckle_driver
{
public:
  explicit Init_Misc1Report_buckle_driver(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_buckle_passenger buckle_driver(::dbw_ford_msgs::msg::Misc1Report::_buckle_driver_type arg)
  {
    msg_.buckle_driver = std::move(arg);
    return Init_Misc1Report_buckle_passenger(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_passenger_airbag
{
public:
  explicit Init_Misc1Report_passenger_airbag(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_buckle_driver passenger_airbag(::dbw_ford_msgs::msg::Misc1Report::_passenger_airbag_type arg)
  {
    msg_.passenger_airbag = std::move(arg);
    return Init_Misc1Report_buckle_driver(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_passenger_detect
{
public:
  explicit Init_Misc1Report_passenger_detect(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_passenger_airbag passenger_detect(::dbw_ford_msgs::msg::Misc1Report::_passenger_detect_type arg)
  {
    msg_.passenger_detect = std::move(arg);
    return Init_Misc1Report_passenger_airbag(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_door_trunk
{
public:
  explicit Init_Misc1Report_door_trunk(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_passenger_detect door_trunk(::dbw_ford_msgs::msg::Misc1Report::_door_trunk_type arg)
  {
    msg_.door_trunk = std::move(arg);
    return Init_Misc1Report_passenger_detect(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_door_hood
{
public:
  explicit Init_Misc1Report_door_hood(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_door_trunk door_hood(::dbw_ford_msgs::msg::Misc1Report::_door_hood_type arg)
  {
    msg_.door_hood = std::move(arg);
    return Init_Misc1Report_door_trunk(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_door_rear_right
{
public:
  explicit Init_Misc1Report_door_rear_right(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_door_hood door_rear_right(::dbw_ford_msgs::msg::Misc1Report::_door_rear_right_type arg)
  {
    msg_.door_rear_right = std::move(arg);
    return Init_Misc1Report_door_hood(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_door_rear_left
{
public:
  explicit Init_Misc1Report_door_rear_left(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_door_rear_right door_rear_left(::dbw_ford_msgs::msg::Misc1Report::_door_rear_left_type arg)
  {
    msg_.door_rear_left = std::move(arg);
    return Init_Misc1Report_door_rear_right(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_door_passenger
{
public:
  explicit Init_Misc1Report_door_passenger(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_door_rear_left door_passenger(::dbw_ford_msgs::msg::Misc1Report::_door_passenger_type arg)
  {
    msg_.door_passenger = std::move(arg);
    return Init_Misc1Report_door_rear_left(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_door_driver
{
public:
  explicit Init_Misc1Report_door_driver(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_door_passenger door_driver(::dbw_ford_msgs::msg::Misc1Report::_door_driver_type arg)
  {
    msg_.door_driver = std::move(arg);
    return Init_Misc1Report_door_passenger(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_fault_bus
{
public:
  explicit Init_Misc1Report_fault_bus(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_door_driver fault_bus(::dbw_ford_msgs::msg::Misc1Report::_fault_bus_type arg)
  {
    msg_.fault_bus = std::move(arg);
    return Init_Misc1Report_door_driver(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_call_end
{
public:
  explicit Init_Misc1Report_btn_call_end(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_fault_bus btn_call_end(::dbw_ford_msgs::msg::Misc1Report::_btn_call_end_type arg)
  {
    msg_.btn_call_end = std::move(arg);
    return Init_Misc1Report_fault_bus(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_call_start
{
public:
  explicit Init_Misc1Report_btn_call_start(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_call_end btn_call_start(::dbw_ford_msgs::msg::Misc1Report::_btn_call_start_type arg)
  {
    msg_.btn_call_start = std::move(arg);
    return Init_Misc1Report_btn_call_end(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_speak
{
public:
  explicit Init_Misc1Report_btn_speak(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_call_start btn_speak(::dbw_ford_msgs::msg::Misc1Report::_btn_speak_type arg)
  {
    msg_.btn_speak = std::move(arg);
    return Init_Misc1Report_btn_call_start(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_next
{
public:
  explicit Init_Misc1Report_btn_next(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_speak btn_next(::dbw_ford_msgs::msg::Misc1Report::_btn_next_type arg)
  {
    msg_.btn_next = std::move(arg);
    return Init_Misc1Report_btn_speak(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_prev
{
public:
  explicit Init_Misc1Report_btn_prev(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_next btn_prev(::dbw_ford_msgs::msg::Misc1Report::_btn_prev_type arg)
  {
    msg_.btn_prev = std::move(arg);
    return Init_Misc1Report_btn_next(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_media
{
public:
  explicit Init_Misc1Report_btn_media(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_prev btn_media(::dbw_ford_msgs::msg::Misc1Report::_btn_media_type arg)
  {
    msg_.btn_media = std::move(arg);
    return Init_Misc1Report_btn_prev(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_mute
{
public:
  explicit Init_Misc1Report_btn_mute(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_media btn_mute(::dbw_ford_msgs::msg::Misc1Report::_btn_mute_type arg)
  {
    msg_.btn_mute = std::move(arg);
    return Init_Misc1Report_btn_media(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_vol_dec
{
public:
  explicit Init_Misc1Report_btn_vol_dec(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_mute btn_vol_dec(::dbw_ford_msgs::msg::Misc1Report::_btn_vol_dec_type arg)
  {
    msg_.btn_vol_dec = std::move(arg);
    return Init_Misc1Report_btn_mute(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_vol_inc
{
public:
  explicit Init_Misc1Report_btn_vol_inc(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_vol_dec btn_vol_inc(::dbw_ford_msgs::msg::Misc1Report::_btn_vol_inc_type arg)
  {
    msg_.btn_vol_inc = std::move(arg);
    return Init_Misc1Report_btn_vol_dec(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_rd_right
{
public:
  explicit Init_Misc1Report_btn_rd_right(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_vol_inc btn_rd_right(::dbw_ford_msgs::msg::Misc1Report::_btn_rd_right_type arg)
  {
    msg_.btn_rd_right = std::move(arg);
    return Init_Misc1Report_btn_vol_inc(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_rd_left
{
public:
  explicit Init_Misc1Report_btn_rd_left(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_rd_right btn_rd_left(::dbw_ford_msgs::msg::Misc1Report::_btn_rd_left_type arg)
  {
    msg_.btn_rd_left = std::move(arg);
    return Init_Misc1Report_btn_rd_right(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_rd_down
{
public:
  explicit Init_Misc1Report_btn_rd_down(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_rd_left btn_rd_down(::dbw_ford_msgs::msg::Misc1Report::_btn_rd_down_type arg)
  {
    msg_.btn_rd_down = std::move(arg);
    return Init_Misc1Report_btn_rd_left(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_rd_up
{
public:
  explicit Init_Misc1Report_btn_rd_up(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_rd_down btn_rd_up(::dbw_ford_msgs::msg::Misc1Report::_btn_rd_up_type arg)
  {
    msg_.btn_rd_up = std::move(arg);
    return Init_Misc1Report_btn_rd_down(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_rd_ok
{
public:
  explicit Init_Misc1Report_btn_rd_ok(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_rd_up btn_rd_ok(::dbw_ford_msgs::msg::Misc1Report::_btn_rd_ok_type arg)
  {
    msg_.btn_rd_ok = std::move(arg);
    return Init_Misc1Report_btn_rd_up(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_ld_right
{
public:
  explicit Init_Misc1Report_btn_ld_right(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_rd_ok btn_ld_right(::dbw_ford_msgs::msg::Misc1Report::_btn_ld_right_type arg)
  {
    msg_.btn_ld_right = std::move(arg);
    return Init_Misc1Report_btn_rd_ok(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_ld_left
{
public:
  explicit Init_Misc1Report_btn_ld_left(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_ld_right btn_ld_left(::dbw_ford_msgs::msg::Misc1Report::_btn_ld_left_type arg)
  {
    msg_.btn_ld_left = std::move(arg);
    return Init_Misc1Report_btn_ld_right(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_ld_down
{
public:
  explicit Init_Misc1Report_btn_ld_down(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_ld_left btn_ld_down(::dbw_ford_msgs::msg::Misc1Report::_btn_ld_down_type arg)
  {
    msg_.btn_ld_down = std::move(arg);
    return Init_Misc1Report_btn_ld_left(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_ld_up
{
public:
  explicit Init_Misc1Report_btn_ld_up(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_ld_down btn_ld_up(::dbw_ford_msgs::msg::Misc1Report::_btn_ld_up_type arg)
  {
    msg_.btn_ld_up = std::move(arg);
    return Init_Misc1Report_btn_ld_down(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_ld_ok
{
public:
  explicit Init_Misc1Report_btn_ld_ok(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_ld_up btn_ld_ok(::dbw_ford_msgs::msg::Misc1Report::_btn_ld_ok_type arg)
  {
    msg_.btn_ld_ok = std::move(arg);
    return Init_Misc1Report_btn_ld_up(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_la_on_off
{
public:
  explicit Init_Misc1Report_btn_la_on_off(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_ld_ok btn_la_on_off(::dbw_ford_msgs::msg::Misc1Report::_btn_la_on_off_type arg)
  {
    msg_.btn_la_on_off = std::move(arg);
    return Init_Misc1Report_btn_ld_ok(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_cc_gap_dec
{
public:
  explicit Init_Misc1Report_btn_cc_gap_dec(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_la_on_off btn_cc_gap_dec(::dbw_ford_msgs::msg::Misc1Report::_btn_cc_gap_dec_type arg)
  {
    msg_.btn_cc_gap_dec = std::move(arg);
    return Init_Misc1Report_btn_la_on_off(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_cc_gap_inc
{
public:
  explicit Init_Misc1Report_btn_cc_gap_inc(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_cc_gap_dec btn_cc_gap_inc(::dbw_ford_msgs::msg::Misc1Report::_btn_cc_gap_inc_type arg)
  {
    msg_.btn_cc_gap_inc = std::move(arg);
    return Init_Misc1Report_btn_cc_gap_dec(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_cc_set_dec
{
public:
  explicit Init_Misc1Report_btn_cc_set_dec(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_cc_gap_inc btn_cc_set_dec(::dbw_ford_msgs::msg::Misc1Report::_btn_cc_set_dec_type arg)
  {
    msg_.btn_cc_set_dec = std::move(arg);
    return Init_Misc1Report_btn_cc_gap_inc(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_cc_set_inc
{
public:
  explicit Init_Misc1Report_btn_cc_set_inc(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_cc_set_dec btn_cc_set_inc(::dbw_ford_msgs::msg::Misc1Report::_btn_cc_set_inc_type arg)
  {
    msg_.btn_cc_set_inc = std::move(arg);
    return Init_Misc1Report_btn_cc_set_dec(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_cc_res_dec
{
public:
  explicit Init_Misc1Report_btn_cc_res_dec(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_cc_set_inc btn_cc_res_dec(::dbw_ford_msgs::msg::Misc1Report::_btn_cc_res_dec_type arg)
  {
    msg_.btn_cc_res_dec = std::move(arg);
    return Init_Misc1Report_btn_cc_set_inc(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_cc_res_inc
{
public:
  explicit Init_Misc1Report_btn_cc_res_inc(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_cc_res_dec btn_cc_res_inc(::dbw_ford_msgs::msg::Misc1Report::_btn_cc_res_inc_type arg)
  {
    msg_.btn_cc_res_inc = std::move(arg);
    return Init_Misc1Report_btn_cc_res_dec(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_cc_res_cncl
{
public:
  explicit Init_Misc1Report_btn_cc_res_cncl(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_cc_res_inc btn_cc_res_cncl(::dbw_ford_msgs::msg::Misc1Report::_btn_cc_res_cncl_type arg)
  {
    msg_.btn_cc_res_cncl = std::move(arg);
    return Init_Misc1Report_btn_cc_res_inc(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_cc_cncl
{
public:
  explicit Init_Misc1Report_btn_cc_cncl(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_cc_res_cncl btn_cc_cncl(::dbw_ford_msgs::msg::Misc1Report::_btn_cc_cncl_type arg)
  {
    msg_.btn_cc_cncl = std::move(arg);
    return Init_Misc1Report_btn_cc_res_cncl(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_cc_res
{
public:
  explicit Init_Misc1Report_btn_cc_res(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_cc_cncl btn_cc_res(::dbw_ford_msgs::msg::Misc1Report::_btn_cc_res_type arg)
  {
    msg_.btn_cc_res = std::move(arg);
    return Init_Misc1Report_btn_cc_cncl(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_cc_on_off
{
public:
  explicit Init_Misc1Report_btn_cc_on_off(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_cc_res btn_cc_on_off(::dbw_ford_msgs::msg::Misc1Report::_btn_cc_on_off_type arg)
  {
    msg_.btn_cc_on_off = std::move(arg);
    return Init_Misc1Report_btn_cc_res(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_cc_off
{
public:
  explicit Init_Misc1Report_btn_cc_off(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_cc_on_off btn_cc_off(::dbw_ford_msgs::msg::Misc1Report::_btn_cc_off_type arg)
  {
    msg_.btn_cc_off = std::move(arg);
    return Init_Misc1Report_btn_cc_on_off(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_btn_cc_on
{
public:
  explicit Init_Misc1Report_btn_cc_on(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_cc_off btn_cc_on(::dbw_ford_msgs::msg::Misc1Report::_btn_cc_on_type arg)
  {
    msg_.btn_cc_on = std::move(arg);
    return Init_Misc1Report_btn_cc_off(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_outside_temperature
{
public:
  explicit Init_Misc1Report_outside_temperature(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_btn_cc_on outside_temperature(::dbw_ford_msgs::msg::Misc1Report::_outside_temperature_type arg)
  {
    msg_.outside_temperature = std::move(arg);
    return Init_Misc1Report_btn_cc_on(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_ambient_light
{
public:
  explicit Init_Misc1Report_ambient_light(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_outside_temperature ambient_light(::dbw_ford_msgs::msg::Misc1Report::_ambient_light_type arg)
  {
    msg_.ambient_light = std::move(arg);
    return Init_Misc1Report_outside_temperature(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_wiper
{
public:
  explicit Init_Misc1Report_wiper(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_ambient_light wiper(::dbw_ford_msgs::msg::Misc1Report::_wiper_type arg)
  {
    msg_.wiper = std::move(arg);
    return Init_Misc1Report_ambient_light(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_high_beam_headlights
{
public:
  explicit Init_Misc1Report_high_beam_headlights(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_wiper high_beam_headlights(::dbw_ford_msgs::msg::Misc1Report::_high_beam_headlights_type arg)
  {
    msg_.high_beam_headlights = std::move(arg);
    return Init_Misc1Report_wiper(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_turn_signal
{
public:
  explicit Init_Misc1Report_turn_signal(::dbw_ford_msgs::msg::Misc1Report & msg)
  : msg_(msg)
  {}
  Init_Misc1Report_high_beam_headlights turn_signal(::dbw_ford_msgs::msg::Misc1Report::_turn_signal_type arg)
  {
    msg_.turn_signal = std::move(arg);
    return Init_Misc1Report_high_beam_headlights(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

class Init_Misc1Report_header
{
public:
  Init_Misc1Report_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Misc1Report_turn_signal header(::dbw_ford_msgs::msg::Misc1Report::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Misc1Report_turn_signal(msg_);
  }

private:
  ::dbw_ford_msgs::msg::Misc1Report msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dbw_ford_msgs::msg::Misc1Report>()
{
  return dbw_ford_msgs::msg::builder::Init_Misc1Report_header();
}

}  // namespace dbw_ford_msgs

#endif  // DBW_FORD_MSGS__MSG__DETAIL__MISC1_REPORT__BUILDER_HPP_
