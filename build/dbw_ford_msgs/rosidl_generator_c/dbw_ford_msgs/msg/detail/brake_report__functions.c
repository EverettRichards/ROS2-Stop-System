// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dbw_ford_msgs:msg/BrakeReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/brake_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `watchdog_counter`
#include "dbw_ford_msgs/msg/detail/watchdog_counter__functions.h"

bool
dbw_ford_msgs__msg__BrakeReport__init(dbw_ford_msgs__msg__BrakeReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dbw_ford_msgs__msg__BrakeReport__fini(msg);
    return false;
  }
  // pedal_input
  // pedal_cmd
  // pedal_output
  // torque_input
  // torque_cmd
  // torque_output
  // decel_cmd
  // decel_output
  // boo_cmd
  // enabled
  // override
  // driver
  // timeout
  // watchdog_counter
  if (!dbw_ford_msgs__msg__WatchdogCounter__init(&msg->watchdog_counter)) {
    dbw_ford_msgs__msg__BrakeReport__fini(msg);
    return false;
  }
  // watchdog_braking
  // fault_wdc
  // fault_ch1
  // fault_ch2
  // fault_power
  return true;
}

void
dbw_ford_msgs__msg__BrakeReport__fini(dbw_ford_msgs__msg__BrakeReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pedal_input
  // pedal_cmd
  // pedal_output
  // torque_input
  // torque_cmd
  // torque_output
  // decel_cmd
  // decel_output
  // boo_cmd
  // enabled
  // override
  // driver
  // timeout
  // watchdog_counter
  dbw_ford_msgs__msg__WatchdogCounter__fini(&msg->watchdog_counter);
  // watchdog_braking
  // fault_wdc
  // fault_ch1
  // fault_ch2
  // fault_power
}

bool
dbw_ford_msgs__msg__BrakeReport__are_equal(const dbw_ford_msgs__msg__BrakeReport * lhs, const dbw_ford_msgs__msg__BrakeReport * rhs)
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
  // pedal_input
  if (lhs->pedal_input != rhs->pedal_input) {
    return false;
  }
  // pedal_cmd
  if (lhs->pedal_cmd != rhs->pedal_cmd) {
    return false;
  }
  // pedal_output
  if (lhs->pedal_output != rhs->pedal_output) {
    return false;
  }
  // torque_input
  if (lhs->torque_input != rhs->torque_input) {
    return false;
  }
  // torque_cmd
  if (lhs->torque_cmd != rhs->torque_cmd) {
    return false;
  }
  // torque_output
  if (lhs->torque_output != rhs->torque_output) {
    return false;
  }
  // decel_cmd
  if (lhs->decel_cmd != rhs->decel_cmd) {
    return false;
  }
  // decel_output
  if (lhs->decel_output != rhs->decel_output) {
    return false;
  }
  // boo_cmd
  if (lhs->boo_cmd != rhs->boo_cmd) {
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
  // driver
  if (lhs->driver != rhs->driver) {
    return false;
  }
  // timeout
  if (lhs->timeout != rhs->timeout) {
    return false;
  }
  // watchdog_counter
  if (!dbw_ford_msgs__msg__WatchdogCounter__are_equal(
      &(lhs->watchdog_counter), &(rhs->watchdog_counter)))
  {
    return false;
  }
  // watchdog_braking
  if (lhs->watchdog_braking != rhs->watchdog_braking) {
    return false;
  }
  // fault_wdc
  if (lhs->fault_wdc != rhs->fault_wdc) {
    return false;
  }
  // fault_ch1
  if (lhs->fault_ch1 != rhs->fault_ch1) {
    return false;
  }
  // fault_ch2
  if (lhs->fault_ch2 != rhs->fault_ch2) {
    return false;
  }
  // fault_power
  if (lhs->fault_power != rhs->fault_power) {
    return false;
  }
  return true;
}

bool
dbw_ford_msgs__msg__BrakeReport__copy(
  const dbw_ford_msgs__msg__BrakeReport * input,
  dbw_ford_msgs__msg__BrakeReport * output)
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
  // pedal_input
  output->pedal_input = input->pedal_input;
  // pedal_cmd
  output->pedal_cmd = input->pedal_cmd;
  // pedal_output
  output->pedal_output = input->pedal_output;
  // torque_input
  output->torque_input = input->torque_input;
  // torque_cmd
  output->torque_cmd = input->torque_cmd;
  // torque_output
  output->torque_output = input->torque_output;
  // decel_cmd
  output->decel_cmd = input->decel_cmd;
  // decel_output
  output->decel_output = input->decel_output;
  // boo_cmd
  output->boo_cmd = input->boo_cmd;
  // enabled
  output->enabled = input->enabled;
  // override
  output->override = input->override;
  // driver
  output->driver = input->driver;
  // timeout
  output->timeout = input->timeout;
  // watchdog_counter
  if (!dbw_ford_msgs__msg__WatchdogCounter__copy(
      &(input->watchdog_counter), &(output->watchdog_counter)))
  {
    return false;
  }
  // watchdog_braking
  output->watchdog_braking = input->watchdog_braking;
  // fault_wdc
  output->fault_wdc = input->fault_wdc;
  // fault_ch1
  output->fault_ch1 = input->fault_ch1;
  // fault_ch2
  output->fault_ch2 = input->fault_ch2;
  // fault_power
  output->fault_power = input->fault_power;
  return true;
}

dbw_ford_msgs__msg__BrakeReport *
dbw_ford_msgs__msg__BrakeReport__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__BrakeReport * msg = (dbw_ford_msgs__msg__BrakeReport *)allocator.allocate(sizeof(dbw_ford_msgs__msg__BrakeReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dbw_ford_msgs__msg__BrakeReport));
  bool success = dbw_ford_msgs__msg__BrakeReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dbw_ford_msgs__msg__BrakeReport__destroy(dbw_ford_msgs__msg__BrakeReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dbw_ford_msgs__msg__BrakeReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dbw_ford_msgs__msg__BrakeReport__Sequence__init(dbw_ford_msgs__msg__BrakeReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__BrakeReport * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__BrakeReport)) {
      return false;
    }
    data = (dbw_ford_msgs__msg__BrakeReport *)allocator.zero_allocate(size, sizeof(dbw_ford_msgs__msg__BrakeReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dbw_ford_msgs__msg__BrakeReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dbw_ford_msgs__msg__BrakeReport__fini(&data[i - 1]);
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
dbw_ford_msgs__msg__BrakeReport__Sequence__fini(dbw_ford_msgs__msg__BrakeReport__Sequence * array)
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
      dbw_ford_msgs__msg__BrakeReport__fini(&array->data[i]);
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

dbw_ford_msgs__msg__BrakeReport__Sequence *
dbw_ford_msgs__msg__BrakeReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__BrakeReport__Sequence * array = (dbw_ford_msgs__msg__BrakeReport__Sequence *)allocator.allocate(sizeof(dbw_ford_msgs__msg__BrakeReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dbw_ford_msgs__msg__BrakeReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dbw_ford_msgs__msg__BrakeReport__Sequence__destroy(dbw_ford_msgs__msg__BrakeReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dbw_ford_msgs__msg__BrakeReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dbw_ford_msgs__msg__BrakeReport__Sequence__are_equal(const dbw_ford_msgs__msg__BrakeReport__Sequence * lhs, const dbw_ford_msgs__msg__BrakeReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dbw_ford_msgs__msg__BrakeReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__BrakeReport__Sequence__copy(
  const dbw_ford_msgs__msg__BrakeReport__Sequence * input,
  dbw_ford_msgs__msg__BrakeReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__BrakeReport)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dbw_ford_msgs__msg__BrakeReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dbw_ford_msgs__msg__BrakeReport * data =
      (dbw_ford_msgs__msg__BrakeReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dbw_ford_msgs__msg__BrakeReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dbw_ford_msgs__msg__BrakeReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dbw_ford_msgs__msg__BrakeReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
