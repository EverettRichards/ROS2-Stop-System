// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dbw_ford_msgs:msg/Misc1Report.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/misc1_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `turn_signal`
#include "dbw_ford_msgs/msg/detail/turn_signal__functions.h"
// Member `wiper`
#include "dbw_ford_msgs/msg/detail/wiper__functions.h"
// Member `ambient_light`
#include "dbw_ford_msgs/msg/detail/ambient_light__functions.h"

bool
dbw_ford_msgs__msg__Misc1Report__init(dbw_ford_msgs__msg__Misc1Report * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dbw_ford_msgs__msg__Misc1Report__fini(msg);
    return false;
  }
  // turn_signal
  if (!dbw_ford_msgs__msg__TurnSignal__init(&msg->turn_signal)) {
    dbw_ford_msgs__msg__Misc1Report__fini(msg);
    return false;
  }
  // high_beam_headlights
  // wiper
  if (!dbw_ford_msgs__msg__Wiper__init(&msg->wiper)) {
    dbw_ford_msgs__msg__Misc1Report__fini(msg);
    return false;
  }
  // ambient_light
  if (!dbw_ford_msgs__msg__AmbientLight__init(&msg->ambient_light)) {
    dbw_ford_msgs__msg__Misc1Report__fini(msg);
    return false;
  }
  // outside_temperature
  // btn_cc_on
  // btn_cc_off
  // btn_cc_on_off
  // btn_cc_res
  // btn_cc_cncl
  // btn_cc_res_cncl
  // btn_cc_res_inc
  // btn_cc_res_dec
  // btn_cc_set_inc
  // btn_cc_set_dec
  // btn_cc_gap_inc
  // btn_cc_gap_dec
  // btn_la_on_off
  // btn_ld_ok
  // btn_ld_up
  // btn_ld_down
  // btn_ld_left
  // btn_ld_right
  // btn_rd_ok
  // btn_rd_up
  // btn_rd_down
  // btn_rd_left
  // btn_rd_right
  // btn_vol_inc
  // btn_vol_dec
  // btn_mute
  // btn_media
  // btn_prev
  // btn_next
  // btn_speak
  // btn_call_start
  // btn_call_end
  // fault_bus
  // door_driver
  // door_passenger
  // door_rear_left
  // door_rear_right
  // door_hood
  // door_trunk
  // passenger_detect
  // passenger_airbag
  // buckle_driver
  // buckle_passenger
  return true;
}

void
dbw_ford_msgs__msg__Misc1Report__fini(dbw_ford_msgs__msg__Misc1Report * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // turn_signal
  dbw_ford_msgs__msg__TurnSignal__fini(&msg->turn_signal);
  // high_beam_headlights
  // wiper
  dbw_ford_msgs__msg__Wiper__fini(&msg->wiper);
  // ambient_light
  dbw_ford_msgs__msg__AmbientLight__fini(&msg->ambient_light);
  // outside_temperature
  // btn_cc_on
  // btn_cc_off
  // btn_cc_on_off
  // btn_cc_res
  // btn_cc_cncl
  // btn_cc_res_cncl
  // btn_cc_res_inc
  // btn_cc_res_dec
  // btn_cc_set_inc
  // btn_cc_set_dec
  // btn_cc_gap_inc
  // btn_cc_gap_dec
  // btn_la_on_off
  // btn_ld_ok
  // btn_ld_up
  // btn_ld_down
  // btn_ld_left
  // btn_ld_right
  // btn_rd_ok
  // btn_rd_up
  // btn_rd_down
  // btn_rd_left
  // btn_rd_right
  // btn_vol_inc
  // btn_vol_dec
  // btn_mute
  // btn_media
  // btn_prev
  // btn_next
  // btn_speak
  // btn_call_start
  // btn_call_end
  // fault_bus
  // door_driver
  // door_passenger
  // door_rear_left
  // door_rear_right
  // door_hood
  // door_trunk
  // passenger_detect
  // passenger_airbag
  // buckle_driver
  // buckle_passenger
}

bool
dbw_ford_msgs__msg__Misc1Report__are_equal(const dbw_ford_msgs__msg__Misc1Report * lhs, const dbw_ford_msgs__msg__Misc1Report * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // turn_signal
  if (!dbw_ford_msgs__msg__TurnSignal__are_equal(
      &(lhs->turn_signal), &(rhs->turn_signal)))
  {
    return false;
  }
  // high_beam_headlights
  if (lhs->high_beam_headlights != rhs->high_beam_headlights) {
    return false;
  }
  // wiper
  if (!dbw_ford_msgs__msg__Wiper__are_equal(
      &(lhs->wiper), &(rhs->wiper)))
  {
    return false;
  }
  // ambient_light
  if (!dbw_ford_msgs__msg__AmbientLight__are_equal(
      &(lhs->ambient_light), &(rhs->ambient_light)))
  {
    return false;
  }
  // outside_temperature
  if (lhs->outside_temperature != rhs->outside_temperature) {
    return false;
  }
  // btn_cc_on
  if (lhs->btn_cc_on != rhs->btn_cc_on) {
    return false;
  }
  // btn_cc_off
  if (lhs->btn_cc_off != rhs->btn_cc_off) {
    return false;
  }
  // btn_cc_on_off
  if (lhs->btn_cc_on_off != rhs->btn_cc_on_off) {
    return false;
  }
  // btn_cc_res
  if (lhs->btn_cc_res != rhs->btn_cc_res) {
    return false;
  }
  // btn_cc_cncl
  if (lhs->btn_cc_cncl != rhs->btn_cc_cncl) {
    return false;
  }
  // btn_cc_res_cncl
  if (lhs->btn_cc_res_cncl != rhs->btn_cc_res_cncl) {
    return false;
  }
  // btn_cc_res_inc
  if (lhs->btn_cc_res_inc != rhs->btn_cc_res_inc) {
    return false;
  }
  // btn_cc_res_dec
  if (lhs->btn_cc_res_dec != rhs->btn_cc_res_dec) {
    return false;
  }
  // btn_cc_set_inc
  if (lhs->btn_cc_set_inc != rhs->btn_cc_set_inc) {
    return false;
  }
  // btn_cc_set_dec
  if (lhs->btn_cc_set_dec != rhs->btn_cc_set_dec) {
    return false;
  }
  // btn_cc_gap_inc
  if (lhs->btn_cc_gap_inc != rhs->btn_cc_gap_inc) {
    return false;
  }
  // btn_cc_gap_dec
  if (lhs->btn_cc_gap_dec != rhs->btn_cc_gap_dec) {
    return false;
  }
  // btn_la_on_off
  if (lhs->btn_la_on_off != rhs->btn_la_on_off) {
    return false;
  }
  // btn_ld_ok
  if (lhs->btn_ld_ok != rhs->btn_ld_ok) {
    return false;
  }
  // btn_ld_up
  if (lhs->btn_ld_up != rhs->btn_ld_up) {
    return false;
  }
  // btn_ld_down
  if (lhs->btn_ld_down != rhs->btn_ld_down) {
    return false;
  }
  // btn_ld_left
  if (lhs->btn_ld_left != rhs->btn_ld_left) {
    return false;
  }
  // btn_ld_right
  if (lhs->btn_ld_right != rhs->btn_ld_right) {
    return false;
  }
  // btn_rd_ok
  if (lhs->btn_rd_ok != rhs->btn_rd_ok) {
    return false;
  }
  // btn_rd_up
  if (lhs->btn_rd_up != rhs->btn_rd_up) {
    return false;
  }
  // btn_rd_down
  if (lhs->btn_rd_down != rhs->btn_rd_down) {
    return false;
  }
  // btn_rd_left
  if (lhs->btn_rd_left != rhs->btn_rd_left) {
    return false;
  }
  // btn_rd_right
  if (lhs->btn_rd_right != rhs->btn_rd_right) {
    return false;
  }
  // btn_vol_inc
  if (lhs->btn_vol_inc != rhs->btn_vol_inc) {
    return false;
  }
  // btn_vol_dec
  if (lhs->btn_vol_dec != rhs->btn_vol_dec) {
    return false;
  }
  // btn_mute
  if (lhs->btn_mute != rhs->btn_mute) {
    return false;
  }
  // btn_media
  if (lhs->btn_media != rhs->btn_media) {
    return false;
  }
  // btn_prev
  if (lhs->btn_prev != rhs->btn_prev) {
    return false;
  }
  // btn_next
  if (lhs->btn_next != rhs->btn_next) {
    return false;
  }
  // btn_speak
  if (lhs->btn_speak != rhs->btn_speak) {
    return false;
  }
  // btn_call_start
  if (lhs->btn_call_start != rhs->btn_call_start) {
    return false;
  }
  // btn_call_end
  if (lhs->btn_call_end != rhs->btn_call_end) {
    return false;
  }
  // fault_bus
  if (lhs->fault_bus != rhs->fault_bus) {
    return false;
  }
  // door_driver
  if (lhs->door_driver != rhs->door_driver) {
    return false;
  }
  // door_passenger
  if (lhs->door_passenger != rhs->door_passenger) {
    return false;
  }
  // door_rear_left
  if (lhs->door_rear_left != rhs->door_rear_left) {
    return false;
  }
  // door_rear_right
  if (lhs->door_rear_right != rhs->door_rear_right) {
    return false;
  }
  // door_hood
  if (lhs->door_hood != rhs->door_hood) {
    return false;
  }
  // door_trunk
  if (lhs->door_trunk != rhs->door_trunk) {
    return false;
  }
  // passenger_detect
  if (lhs->passenger_detect != rhs->passenger_detect) {
    return false;
  }
  // passenger_airbag
  if (lhs->passenger_airbag != rhs->passenger_airbag) {
    return false;
  }
  // buckle_driver
  if (lhs->buckle_driver != rhs->buckle_driver) {
    return false;
  }
  // buckle_passenger
  if (lhs->buckle_passenger != rhs->buckle_passenger) {
    return false;
  }
  return true;
}

bool
dbw_ford_msgs__msg__Misc1Report__copy(
  const dbw_ford_msgs__msg__Misc1Report * input,
  dbw_ford_msgs__msg__Misc1Report * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // turn_signal
  if (!dbw_ford_msgs__msg__TurnSignal__copy(
      &(input->turn_signal), &(output->turn_signal)))
  {
    return false;
  }
  // high_beam_headlights
  output->high_beam_headlights = input->high_beam_headlights;
  // wiper
  if (!dbw_ford_msgs__msg__Wiper__copy(
      &(input->wiper), &(output->wiper)))
  {
    return false;
  }
  // ambient_light
  if (!dbw_ford_msgs__msg__AmbientLight__copy(
      &(input->ambient_light), &(output->ambient_light)))
  {
    return false;
  }
  // outside_temperature
  output->outside_temperature = input->outside_temperature;
  // btn_cc_on
  output->btn_cc_on = input->btn_cc_on;
  // btn_cc_off
  output->btn_cc_off = input->btn_cc_off;
  // btn_cc_on_off
  output->btn_cc_on_off = input->btn_cc_on_off;
  // btn_cc_res
  output->btn_cc_res = input->btn_cc_res;
  // btn_cc_cncl
  output->btn_cc_cncl = input->btn_cc_cncl;
  // btn_cc_res_cncl
  output->btn_cc_res_cncl = input->btn_cc_res_cncl;
  // btn_cc_res_inc
  output->btn_cc_res_inc = input->btn_cc_res_inc;
  // btn_cc_res_dec
  output->btn_cc_res_dec = input->btn_cc_res_dec;
  // btn_cc_set_inc
  output->btn_cc_set_inc = input->btn_cc_set_inc;
  // btn_cc_set_dec
  output->btn_cc_set_dec = input->btn_cc_set_dec;
  // btn_cc_gap_inc
  output->btn_cc_gap_inc = input->btn_cc_gap_inc;
  // btn_cc_gap_dec
  output->btn_cc_gap_dec = input->btn_cc_gap_dec;
  // btn_la_on_off
  output->btn_la_on_off = input->btn_la_on_off;
  // btn_ld_ok
  output->btn_ld_ok = input->btn_ld_ok;
  // btn_ld_up
  output->btn_ld_up = input->btn_ld_up;
  // btn_ld_down
  output->btn_ld_down = input->btn_ld_down;
  // btn_ld_left
  output->btn_ld_left = input->btn_ld_left;
  // btn_ld_right
  output->btn_ld_right = input->btn_ld_right;
  // btn_rd_ok
  output->btn_rd_ok = input->btn_rd_ok;
  // btn_rd_up
  output->btn_rd_up = input->btn_rd_up;
  // btn_rd_down
  output->btn_rd_down = input->btn_rd_down;
  // btn_rd_left
  output->btn_rd_left = input->btn_rd_left;
  // btn_rd_right
  output->btn_rd_right = input->btn_rd_right;
  // btn_vol_inc
  output->btn_vol_inc = input->btn_vol_inc;
  // btn_vol_dec
  output->btn_vol_dec = input->btn_vol_dec;
  // btn_mute
  output->btn_mute = input->btn_mute;
  // btn_media
  output->btn_media = input->btn_media;
  // btn_prev
  output->btn_prev = input->btn_prev;
  // btn_next
  output->btn_next = input->btn_next;
  // btn_speak
  output->btn_speak = input->btn_speak;
  // btn_call_start
  output->btn_call_start = input->btn_call_start;
  // btn_call_end
  output->btn_call_end = input->btn_call_end;
  // fault_bus
  output->fault_bus = input->fault_bus;
  // door_driver
  output->door_driver = input->door_driver;
  // door_passenger
  output->door_passenger = input->door_passenger;
  // door_rear_left
  output->door_rear_left = input->door_rear_left;
  // door_rear_right
  output->door_rear_right = input->door_rear_right;
  // door_hood
  output->door_hood = input->door_hood;
  // door_trunk
  output->door_trunk = input->door_trunk;
  // passenger_detect
  output->passenger_detect = input->passenger_detect;
  // passenger_airbag
  output->passenger_airbag = input->passenger_airbag;
  // buckle_driver
  output->buckle_driver = input->buckle_driver;
  // buckle_passenger
  output->buckle_passenger = input->buckle_passenger;
  return true;
}

dbw_ford_msgs__msg__Misc1Report *
dbw_ford_msgs__msg__Misc1Report__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__Misc1Report * msg = (dbw_ford_msgs__msg__Misc1Report *)allocator.allocate(sizeof(dbw_ford_msgs__msg__Misc1Report), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dbw_ford_msgs__msg__Misc1Report));
  bool success = dbw_ford_msgs__msg__Misc1Report__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dbw_ford_msgs__msg__Misc1Report__destroy(dbw_ford_msgs__msg__Misc1Report * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dbw_ford_msgs__msg__Misc1Report__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dbw_ford_msgs__msg__Misc1Report__Sequence__init(dbw_ford_msgs__msg__Misc1Report__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__Misc1Report * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__Misc1Report)) {
      return false;
    }
    data = (dbw_ford_msgs__msg__Misc1Report *)allocator.zero_allocate(size, sizeof(dbw_ford_msgs__msg__Misc1Report), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dbw_ford_msgs__msg__Misc1Report__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dbw_ford_msgs__msg__Misc1Report__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dbw_ford_msgs__msg__Misc1Report__Sequence__fini(dbw_ford_msgs__msg__Misc1Report__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dbw_ford_msgs__msg__Misc1Report__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dbw_ford_msgs__msg__Misc1Report__Sequence *
dbw_ford_msgs__msg__Misc1Report__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__Misc1Report__Sequence * array = (dbw_ford_msgs__msg__Misc1Report__Sequence *)allocator.allocate(sizeof(dbw_ford_msgs__msg__Misc1Report__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dbw_ford_msgs__msg__Misc1Report__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dbw_ford_msgs__msg__Misc1Report__Sequence__destroy(dbw_ford_msgs__msg__Misc1Report__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dbw_ford_msgs__msg__Misc1Report__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dbw_ford_msgs__msg__Misc1Report__Sequence__are_equal(const dbw_ford_msgs__msg__Misc1Report__Sequence * lhs, const dbw_ford_msgs__msg__Misc1Report__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dbw_ford_msgs__msg__Misc1Report__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__Misc1Report__Sequence__copy(
  const dbw_ford_msgs__msg__Misc1Report__Sequence * input,
  dbw_ford_msgs__msg__Misc1Report__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__Misc1Report)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dbw_ford_msgs__msg__Misc1Report);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dbw_ford_msgs__msg__Misc1Report * data =
      (dbw_ford_msgs__msg__Misc1Report *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dbw_ford_msgs__msg__Misc1Report__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dbw_ford_msgs__msg__Misc1Report__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dbw_ford_msgs__msg__Misc1Report__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
