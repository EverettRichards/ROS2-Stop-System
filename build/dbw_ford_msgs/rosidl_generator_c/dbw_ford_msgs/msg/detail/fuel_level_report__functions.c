// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dbw_ford_msgs:msg/FuelLevelReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/fuel_level_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
dbw_ford_msgs__msg__FuelLevelReport__init(dbw_ford_msgs__msg__FuelLevelReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dbw_ford_msgs__msg__FuelLevelReport__fini(msg);
    return false;
  }
  // fuel_level
  // battery_12v
  // battery_hev
  // odometer
  return true;
}

void
dbw_ford_msgs__msg__FuelLevelReport__fini(dbw_ford_msgs__msg__FuelLevelReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fuel_level
  // battery_12v
  // battery_hev
  // odometer
}

bool
dbw_ford_msgs__msg__FuelLevelReport__are_equal(const dbw_ford_msgs__msg__FuelLevelReport * lhs, const dbw_ford_msgs__msg__FuelLevelReport * rhs)
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
  // fuel_level
  if (lhs->fuel_level != rhs->fuel_level) {
    return false;
  }
  // battery_12v
  if (lhs->battery_12v != rhs->battery_12v) {
    return false;
  }
  // battery_hev
  if (lhs->battery_hev != rhs->battery_hev) {
    return false;
  }
  // odometer
  if (lhs->odometer != rhs->odometer) {
    return false;
  }
  return true;
}

bool
dbw_ford_msgs__msg__FuelLevelReport__copy(
  const dbw_ford_msgs__msg__FuelLevelReport * input,
  dbw_ford_msgs__msg__FuelLevelReport * output)
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
  // fuel_level
  output->fuel_level = input->fuel_level;
  // battery_12v
  output->battery_12v = input->battery_12v;
  // battery_hev
  output->battery_hev = input->battery_hev;
  // odometer
  output->odometer = input->odometer;
  return true;
}

dbw_ford_msgs__msg__FuelLevelReport *
dbw_ford_msgs__msg__FuelLevelReport__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__FuelLevelReport * msg = (dbw_ford_msgs__msg__FuelLevelReport *)allocator.allocate(sizeof(dbw_ford_msgs__msg__FuelLevelReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dbw_ford_msgs__msg__FuelLevelReport));
  bool success = dbw_ford_msgs__msg__FuelLevelReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dbw_ford_msgs__msg__FuelLevelReport__destroy(dbw_ford_msgs__msg__FuelLevelReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dbw_ford_msgs__msg__FuelLevelReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dbw_ford_msgs__msg__FuelLevelReport__Sequence__init(dbw_ford_msgs__msg__FuelLevelReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__FuelLevelReport * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__FuelLevelReport)) {
      return false;
    }
    data = (dbw_ford_msgs__msg__FuelLevelReport *)allocator.zero_allocate(size, sizeof(dbw_ford_msgs__msg__FuelLevelReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dbw_ford_msgs__msg__FuelLevelReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dbw_ford_msgs__msg__FuelLevelReport__fini(&data[i - 1]);
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
dbw_ford_msgs__msg__FuelLevelReport__Sequence__fini(dbw_ford_msgs__msg__FuelLevelReport__Sequence * array)
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
      dbw_ford_msgs__msg__FuelLevelReport__fini(&array->data[i]);
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

dbw_ford_msgs__msg__FuelLevelReport__Sequence *
dbw_ford_msgs__msg__FuelLevelReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__FuelLevelReport__Sequence * array = (dbw_ford_msgs__msg__FuelLevelReport__Sequence *)allocator.allocate(sizeof(dbw_ford_msgs__msg__FuelLevelReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dbw_ford_msgs__msg__FuelLevelReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dbw_ford_msgs__msg__FuelLevelReport__Sequence__destroy(dbw_ford_msgs__msg__FuelLevelReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dbw_ford_msgs__msg__FuelLevelReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dbw_ford_msgs__msg__FuelLevelReport__Sequence__are_equal(const dbw_ford_msgs__msg__FuelLevelReport__Sequence * lhs, const dbw_ford_msgs__msg__FuelLevelReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dbw_ford_msgs__msg__FuelLevelReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__FuelLevelReport__Sequence__copy(
  const dbw_ford_msgs__msg__FuelLevelReport__Sequence * input,
  dbw_ford_msgs__msg__FuelLevelReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__FuelLevelReport)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dbw_ford_msgs__msg__FuelLevelReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dbw_ford_msgs__msg__FuelLevelReport * data =
      (dbw_ford_msgs__msg__FuelLevelReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dbw_ford_msgs__msg__FuelLevelReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dbw_ford_msgs__msg__FuelLevelReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dbw_ford_msgs__msg__FuelLevelReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
