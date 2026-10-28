// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dbw_ford_msgs:msg/ThrottleInfoReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/throttle_info_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `throttle_pedal_qf`
#include "dbw_ford_msgs/msg/detail/quality_factor__functions.h"
// Member `one_pedal`
#include "dbw_ford_msgs/msg/detail/one_pedal__functions.h"
// Member `gear_num`
#include "dbw_ford_msgs/msg/detail/gear_num__functions.h"
// Member `ignition`
#include "dbw_ford_msgs/msg/detail/ignition__functions.h"

bool
dbw_ford_msgs__msg__ThrottleInfoReport__init(dbw_ford_msgs__msg__ThrottleInfoReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dbw_ford_msgs__msg__ThrottleInfoReport__fini(msg);
    return false;
  }
  // throttle_pc
  // throttle_rate
  // throttle_pedal_qf
  if (!dbw_ford_msgs__msg__QualityFactor__init(&msg->throttle_pedal_qf)) {
    dbw_ford_msgs__msg__ThrottleInfoReport__fini(msg);
    return false;
  }
  // one_pedal
  if (!dbw_ford_msgs__msg__OnePedal__init(&msg->one_pedal)) {
    dbw_ford_msgs__msg__ThrottleInfoReport__fini(msg);
    return false;
  }
  // engine_rpm
  // gear_num
  if (!dbw_ford_msgs__msg__GearNum__init(&msg->gear_num)) {
    dbw_ford_msgs__msg__ThrottleInfoReport__fini(msg);
    return false;
  }
  // ignition
  if (!dbw_ford_msgs__msg__Ignition__init(&msg->ignition)) {
    dbw_ford_msgs__msg__ThrottleInfoReport__fini(msg);
    return false;
  }
  // batt_curr
  return true;
}

void
dbw_ford_msgs__msg__ThrottleInfoReport__fini(dbw_ford_msgs__msg__ThrottleInfoReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // throttle_pc
  // throttle_rate
  // throttle_pedal_qf
  dbw_ford_msgs__msg__QualityFactor__fini(&msg->throttle_pedal_qf);
  // one_pedal
  dbw_ford_msgs__msg__OnePedal__fini(&msg->one_pedal);
  // engine_rpm
  // gear_num
  dbw_ford_msgs__msg__GearNum__fini(&msg->gear_num);
  // ignition
  dbw_ford_msgs__msg__Ignition__fini(&msg->ignition);
  // batt_curr
}

bool
dbw_ford_msgs__msg__ThrottleInfoReport__are_equal(const dbw_ford_msgs__msg__ThrottleInfoReport * lhs, const dbw_ford_msgs__msg__ThrottleInfoReport * rhs)
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
  // throttle_pc
  if (lhs->throttle_pc != rhs->throttle_pc) {
    return false;
  }
  // throttle_rate
  if (lhs->throttle_rate != rhs->throttle_rate) {
    return false;
  }
  // throttle_pedal_qf
  if (!dbw_ford_msgs__msg__QualityFactor__are_equal(
      &(lhs->throttle_pedal_qf), &(rhs->throttle_pedal_qf)))
  {
    return false;
  }
  // one_pedal
  if (!dbw_ford_msgs__msg__OnePedal__are_equal(
      &(lhs->one_pedal), &(rhs->one_pedal)))
  {
    return false;
  }
  // engine_rpm
  if (lhs->engine_rpm != rhs->engine_rpm) {
    return false;
  }
  // gear_num
  if (!dbw_ford_msgs__msg__GearNum__are_equal(
      &(lhs->gear_num), &(rhs->gear_num)))
  {
    return false;
  }
  // ignition
  if (!dbw_ford_msgs__msg__Ignition__are_equal(
      &(lhs->ignition), &(rhs->ignition)))
  {
    return false;
  }
  // batt_curr
  if (lhs->batt_curr != rhs->batt_curr) {
    return false;
  }
  return true;
}

bool
dbw_ford_msgs__msg__ThrottleInfoReport__copy(
  const dbw_ford_msgs__msg__ThrottleInfoReport * input,
  dbw_ford_msgs__msg__ThrottleInfoReport * output)
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
  // throttle_pc
  output->throttle_pc = input->throttle_pc;
  // throttle_rate
  output->throttle_rate = input->throttle_rate;
  // throttle_pedal_qf
  if (!dbw_ford_msgs__msg__QualityFactor__copy(
      &(input->throttle_pedal_qf), &(output->throttle_pedal_qf)))
  {
    return false;
  }
  // one_pedal
  if (!dbw_ford_msgs__msg__OnePedal__copy(
      &(input->one_pedal), &(output->one_pedal)))
  {
    return false;
  }
  // engine_rpm
  output->engine_rpm = input->engine_rpm;
  // gear_num
  if (!dbw_ford_msgs__msg__GearNum__copy(
      &(input->gear_num), &(output->gear_num)))
  {
    return false;
  }
  // ignition
  if (!dbw_ford_msgs__msg__Ignition__copy(
      &(input->ignition), &(output->ignition)))
  {
    return false;
  }
  // batt_curr
  output->batt_curr = input->batt_curr;
  return true;
}

dbw_ford_msgs__msg__ThrottleInfoReport *
dbw_ford_msgs__msg__ThrottleInfoReport__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__ThrottleInfoReport * msg = (dbw_ford_msgs__msg__ThrottleInfoReport *)allocator.allocate(sizeof(dbw_ford_msgs__msg__ThrottleInfoReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dbw_ford_msgs__msg__ThrottleInfoReport));
  bool success = dbw_ford_msgs__msg__ThrottleInfoReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dbw_ford_msgs__msg__ThrottleInfoReport__destroy(dbw_ford_msgs__msg__ThrottleInfoReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dbw_ford_msgs__msg__ThrottleInfoReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__init(dbw_ford_msgs__msg__ThrottleInfoReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__ThrottleInfoReport * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__ThrottleInfoReport)) {
      return false;
    }
    data = (dbw_ford_msgs__msg__ThrottleInfoReport *)allocator.zero_allocate(size, sizeof(dbw_ford_msgs__msg__ThrottleInfoReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dbw_ford_msgs__msg__ThrottleInfoReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dbw_ford_msgs__msg__ThrottleInfoReport__fini(&data[i - 1]);
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
dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__fini(dbw_ford_msgs__msg__ThrottleInfoReport__Sequence * array)
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
      dbw_ford_msgs__msg__ThrottleInfoReport__fini(&array->data[i]);
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

dbw_ford_msgs__msg__ThrottleInfoReport__Sequence *
dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__ThrottleInfoReport__Sequence * array = (dbw_ford_msgs__msg__ThrottleInfoReport__Sequence *)allocator.allocate(sizeof(dbw_ford_msgs__msg__ThrottleInfoReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__destroy(dbw_ford_msgs__msg__ThrottleInfoReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__are_equal(const dbw_ford_msgs__msg__ThrottleInfoReport__Sequence * lhs, const dbw_ford_msgs__msg__ThrottleInfoReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dbw_ford_msgs__msg__ThrottleInfoReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__copy(
  const dbw_ford_msgs__msg__ThrottleInfoReport__Sequence * input,
  dbw_ford_msgs__msg__ThrottleInfoReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__ThrottleInfoReport)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dbw_ford_msgs__msg__ThrottleInfoReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dbw_ford_msgs__msg__ThrottleInfoReport * data =
      (dbw_ford_msgs__msg__ThrottleInfoReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dbw_ford_msgs__msg__ThrottleInfoReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dbw_ford_msgs__msg__ThrottleInfoReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dbw_ford_msgs__msg__ThrottleInfoReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
