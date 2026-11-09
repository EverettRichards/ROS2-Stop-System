// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dbw_ford_msgs:msg/SteeringReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/steering_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
dbw_ford_msgs__msg__SteeringReport__init(dbw_ford_msgs__msg__SteeringReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dbw_ford_msgs__msg__SteeringReport__fini(msg);
    return false;
  }
  // steering_wheel_angle
  // steering_wheel_cmd
  // steering_wheel_torque
  // steering_wheel_cmd_type
  // speed
  // enabled
  // override
  // timeout
  // fault_wdc
  // fault_bus1
  // fault_bus2
  // fault_calibration
  // fault_power
  return true;
}

void
dbw_ford_msgs__msg__SteeringReport__fini(dbw_ford_msgs__msg__SteeringReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // steering_wheel_angle
  // steering_wheel_cmd
  // steering_wheel_torque
  // steering_wheel_cmd_type
  // speed
  // enabled
  // override
  // timeout
  // fault_wdc
  // fault_bus1
  // fault_bus2
  // fault_calibration
  // fault_power
}

bool
dbw_ford_msgs__msg__SteeringReport__are_equal(const dbw_ford_msgs__msg__SteeringReport * lhs, const dbw_ford_msgs__msg__SteeringReport * rhs)
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
  // steering_wheel_angle
  if (lhs->steering_wheel_angle != rhs->steering_wheel_angle) {
    return false;
  }
  // steering_wheel_cmd
  if (lhs->steering_wheel_cmd != rhs->steering_wheel_cmd) {
    return false;
  }
  // steering_wheel_torque
  if (lhs->steering_wheel_torque != rhs->steering_wheel_torque) {
    return false;
  }
  // steering_wheel_cmd_type
  if (lhs->steering_wheel_cmd_type != rhs->steering_wheel_cmd_type) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // override
  if (lhs->override != rhs->override) {
    return false;
  }
  // timeout
  if (lhs->timeout != rhs->timeout) {
    return false;
  }
  // fault_wdc
  if (lhs->fault_wdc != rhs->fault_wdc) {
    return false;
  }
  // fault_bus1
  if (lhs->fault_bus1 != rhs->fault_bus1) {
    return false;
  }
  // fault_bus2
  if (lhs->fault_bus2 != rhs->fault_bus2) {
    return false;
  }
  // fault_calibration
  if (lhs->fault_calibration != rhs->fault_calibration) {
    return false;
  }
  // fault_power
  if (lhs->fault_power != rhs->fault_power) {
    return false;
  }
  return true;
}

bool
dbw_ford_msgs__msg__SteeringReport__copy(
  const dbw_ford_msgs__msg__SteeringReport * input,
  dbw_ford_msgs__msg__SteeringReport * output)
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
  // steering_wheel_angle
  output->steering_wheel_angle = input->steering_wheel_angle;
  // steering_wheel_cmd
  output->steering_wheel_cmd = input->steering_wheel_cmd;
  // steering_wheel_torque
  output->steering_wheel_torque = input->steering_wheel_torque;
  // steering_wheel_cmd_type
  output->steering_wheel_cmd_type = input->steering_wheel_cmd_type;
  // speed
  output->speed = input->speed;
  // enabled
  output->enabled = input->enabled;
  // override
  output->override = input->override;
  // timeout
  output->timeout = input->timeout;
  // fault_wdc
  output->fault_wdc = input->fault_wdc;
  // fault_bus1
  output->fault_bus1 = input->fault_bus1;
  // fault_bus2
  output->fault_bus2 = input->fault_bus2;
  // fault_calibration
  output->fault_calibration = input->fault_calibration;
  // fault_power
  output->fault_power = input->fault_power;
  return true;
}

dbw_ford_msgs__msg__SteeringReport *
dbw_ford_msgs__msg__SteeringReport__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__SteeringReport * msg = (dbw_ford_msgs__msg__SteeringReport *)allocator.allocate(sizeof(dbw_ford_msgs__msg__SteeringReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dbw_ford_msgs__msg__SteeringReport));
  bool success = dbw_ford_msgs__msg__SteeringReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dbw_ford_msgs__msg__SteeringReport__destroy(dbw_ford_msgs__msg__SteeringReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dbw_ford_msgs__msg__SteeringReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dbw_ford_msgs__msg__SteeringReport__Sequence__init(dbw_ford_msgs__msg__SteeringReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__SteeringReport * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__SteeringReport)) {
      return false;
    }
    data = (dbw_ford_msgs__msg__SteeringReport *)allocator.zero_allocate(size, sizeof(dbw_ford_msgs__msg__SteeringReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dbw_ford_msgs__msg__SteeringReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dbw_ford_msgs__msg__SteeringReport__fini(&data[i - 1]);
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
dbw_ford_msgs__msg__SteeringReport__Sequence__fini(dbw_ford_msgs__msg__SteeringReport__Sequence * array)
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
      dbw_ford_msgs__msg__SteeringReport__fini(&array->data[i]);
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

dbw_ford_msgs__msg__SteeringReport__Sequence *
dbw_ford_msgs__msg__SteeringReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__SteeringReport__Sequence * array = (dbw_ford_msgs__msg__SteeringReport__Sequence *)allocator.allocate(sizeof(dbw_ford_msgs__msg__SteeringReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dbw_ford_msgs__msg__SteeringReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dbw_ford_msgs__msg__SteeringReport__Sequence__destroy(dbw_ford_msgs__msg__SteeringReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dbw_ford_msgs__msg__SteeringReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dbw_ford_msgs__msg__SteeringReport__Sequence__are_equal(const dbw_ford_msgs__msg__SteeringReport__Sequence * lhs, const dbw_ford_msgs__msg__SteeringReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dbw_ford_msgs__msg__SteeringReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__SteeringReport__Sequence__copy(
  const dbw_ford_msgs__msg__SteeringReport__Sequence * input,
  dbw_ford_msgs__msg__SteeringReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__SteeringReport)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dbw_ford_msgs__msg__SteeringReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dbw_ford_msgs__msg__SteeringReport * data =
      (dbw_ford_msgs__msg__SteeringReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dbw_ford_msgs__msg__SteeringReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dbw_ford_msgs__msg__SteeringReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dbw_ford_msgs__msg__SteeringReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
