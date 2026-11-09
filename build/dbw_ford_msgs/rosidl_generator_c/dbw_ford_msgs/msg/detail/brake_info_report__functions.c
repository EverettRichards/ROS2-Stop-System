// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dbw_ford_msgs:msg/BrakeInfoReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/brake_info_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `brake_pedal_qf`
#include "dbw_ford_msgs/msg/detail/quality_factor__functions.h"
// Member `hsa`
#include "dbw_ford_msgs/msg/detail/hill_start_assist__functions.h"
// Member `parking_brake`
#include "dbw_ford_msgs/msg/detail/parking_brake__functions.h"

bool
dbw_ford_msgs__msg__BrakeInfoReport__init(dbw_ford_msgs__msg__BrakeInfoReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dbw_ford_msgs__msg__BrakeInfoReport__fini(msg);
    return false;
  }
  // brake_torque_request
  // brake_torque_actual
  // wheel_torque_actual
  // accel_over_ground
  // brake_pedal_qf
  if (!dbw_ford_msgs__msg__QualityFactor__init(&msg->brake_pedal_qf)) {
    dbw_ford_msgs__msg__BrakeInfoReport__fini(msg);
    return false;
  }
  // hsa
  if (!dbw_ford_msgs__msg__HillStartAssist__init(&msg->hsa)) {
    dbw_ford_msgs__msg__BrakeInfoReport__fini(msg);
    return false;
  }
  // abs_active
  // abs_enabled
  // stab_active
  // stab_enabled
  // trac_active
  // trac_enabled
  // parking_brake
  if (!dbw_ford_msgs__msg__ParkingBrake__init(&msg->parking_brake)) {
    dbw_ford_msgs__msg__BrakeInfoReport__fini(msg);
    return false;
  }
  // stationary
  return true;
}

void
dbw_ford_msgs__msg__BrakeInfoReport__fini(dbw_ford_msgs__msg__BrakeInfoReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // brake_torque_request
  // brake_torque_actual
  // wheel_torque_actual
  // accel_over_ground
  // brake_pedal_qf
  dbw_ford_msgs__msg__QualityFactor__fini(&msg->brake_pedal_qf);
  // hsa
  dbw_ford_msgs__msg__HillStartAssist__fini(&msg->hsa);
  // abs_active
  // abs_enabled
  // stab_active
  // stab_enabled
  // trac_active
  // trac_enabled
  // parking_brake
  dbw_ford_msgs__msg__ParkingBrake__fini(&msg->parking_brake);
  // stationary
}

bool
dbw_ford_msgs__msg__BrakeInfoReport__are_equal(const dbw_ford_msgs__msg__BrakeInfoReport * lhs, const dbw_ford_msgs__msg__BrakeInfoReport * rhs)
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
  // brake_torque_request
  if (lhs->brake_torque_request != rhs->brake_torque_request) {
    return false;
  }
  // brake_torque_actual
  if (lhs->brake_torque_actual != rhs->brake_torque_actual) {
    return false;
  }
  // wheel_torque_actual
  if (lhs->wheel_torque_actual != rhs->wheel_torque_actual) {
    return false;
  }
  // accel_over_ground
  if (lhs->accel_over_ground != rhs->accel_over_ground) {
    return false;
  }
  // brake_pedal_qf
  if (!dbw_ford_msgs__msg__QualityFactor__are_equal(
      &(lhs->brake_pedal_qf), &(rhs->brake_pedal_qf)))
  {
    return false;
  }
  // hsa
  if (!dbw_ford_msgs__msg__HillStartAssist__are_equal(
      &(lhs->hsa), &(rhs->hsa)))
  {
    return false;
  }
  // abs_active
  if (lhs->abs_active != rhs->abs_active) {
    return false;
  }
  // abs_enabled
  if (lhs->abs_enabled != rhs->abs_enabled) {
    return false;
  }
  // stab_active
  if (lhs->stab_active != rhs->stab_active) {
    return false;
  }
  // stab_enabled
  if (lhs->stab_enabled != rhs->stab_enabled) {
    return false;
  }
  // trac_active
  if (lhs->trac_active != rhs->trac_active) {
    return false;
  }
  // trac_enabled
  if (lhs->trac_enabled != rhs->trac_enabled) {
    return false;
  }
  // parking_brake
  if (!dbw_ford_msgs__msg__ParkingBrake__are_equal(
      &(lhs->parking_brake), &(rhs->parking_brake)))
  {
    return false;
  }
  // stationary
  if (lhs->stationary != rhs->stationary) {
    return false;
  }
  return true;
}

bool
dbw_ford_msgs__msg__BrakeInfoReport__copy(
  const dbw_ford_msgs__msg__BrakeInfoReport * input,
  dbw_ford_msgs__msg__BrakeInfoReport * output)
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
  // brake_torque_request
  output->brake_torque_request = input->brake_torque_request;
  // brake_torque_actual
  output->brake_torque_actual = input->brake_torque_actual;
  // wheel_torque_actual
  output->wheel_torque_actual = input->wheel_torque_actual;
  // accel_over_ground
  output->accel_over_ground = input->accel_over_ground;
  // brake_pedal_qf
  if (!dbw_ford_msgs__msg__QualityFactor__copy(
      &(input->brake_pedal_qf), &(output->brake_pedal_qf)))
  {
    return false;
  }
  // hsa
  if (!dbw_ford_msgs__msg__HillStartAssist__copy(
      &(input->hsa), &(output->hsa)))
  {
    return false;
  }
  // abs_active
  output->abs_active = input->abs_active;
  // abs_enabled
  output->abs_enabled = input->abs_enabled;
  // stab_active
  output->stab_active = input->stab_active;
  // stab_enabled
  output->stab_enabled = input->stab_enabled;
  // trac_active
  output->trac_active = input->trac_active;
  // trac_enabled
  output->trac_enabled = input->trac_enabled;
  // parking_brake
  if (!dbw_ford_msgs__msg__ParkingBrake__copy(
      &(input->parking_brake), &(output->parking_brake)))
  {
    return false;
  }
  // stationary
  output->stationary = input->stationary;
  return true;
}

dbw_ford_msgs__msg__BrakeInfoReport *
dbw_ford_msgs__msg__BrakeInfoReport__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__BrakeInfoReport * msg = (dbw_ford_msgs__msg__BrakeInfoReport *)allocator.allocate(sizeof(dbw_ford_msgs__msg__BrakeInfoReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dbw_ford_msgs__msg__BrakeInfoReport));
  bool success = dbw_ford_msgs__msg__BrakeInfoReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dbw_ford_msgs__msg__BrakeInfoReport__destroy(dbw_ford_msgs__msg__BrakeInfoReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dbw_ford_msgs__msg__BrakeInfoReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dbw_ford_msgs__msg__BrakeInfoReport__Sequence__init(dbw_ford_msgs__msg__BrakeInfoReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__BrakeInfoReport * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__BrakeInfoReport)) {
      return false;
    }
    data = (dbw_ford_msgs__msg__BrakeInfoReport *)allocator.zero_allocate(size, sizeof(dbw_ford_msgs__msg__BrakeInfoReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dbw_ford_msgs__msg__BrakeInfoReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dbw_ford_msgs__msg__BrakeInfoReport__fini(&data[i - 1]);
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
dbw_ford_msgs__msg__BrakeInfoReport__Sequence__fini(dbw_ford_msgs__msg__BrakeInfoReport__Sequence * array)
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
      dbw_ford_msgs__msg__BrakeInfoReport__fini(&array->data[i]);
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

dbw_ford_msgs__msg__BrakeInfoReport__Sequence *
dbw_ford_msgs__msg__BrakeInfoReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__BrakeInfoReport__Sequence * array = (dbw_ford_msgs__msg__BrakeInfoReport__Sequence *)allocator.allocate(sizeof(dbw_ford_msgs__msg__BrakeInfoReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dbw_ford_msgs__msg__BrakeInfoReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dbw_ford_msgs__msg__BrakeInfoReport__Sequence__destroy(dbw_ford_msgs__msg__BrakeInfoReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dbw_ford_msgs__msg__BrakeInfoReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dbw_ford_msgs__msg__BrakeInfoReport__Sequence__are_equal(const dbw_ford_msgs__msg__BrakeInfoReport__Sequence * lhs, const dbw_ford_msgs__msg__BrakeInfoReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dbw_ford_msgs__msg__BrakeInfoReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__BrakeInfoReport__Sequence__copy(
  const dbw_ford_msgs__msg__BrakeInfoReport__Sequence * input,
  dbw_ford_msgs__msg__BrakeInfoReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__BrakeInfoReport)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dbw_ford_msgs__msg__BrakeInfoReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dbw_ford_msgs__msg__BrakeInfoReport * data =
      (dbw_ford_msgs__msg__BrakeInfoReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dbw_ford_msgs__msg__BrakeInfoReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dbw_ford_msgs__msg__BrakeInfoReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dbw_ford_msgs__msg__BrakeInfoReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
