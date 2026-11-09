// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dbw_ford_msgs:msg/WheelSpeedReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/wheel_speed_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
dbw_ford_msgs__msg__WheelSpeedReport__init(dbw_ford_msgs__msg__WheelSpeedReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dbw_ford_msgs__msg__WheelSpeedReport__fini(msg);
    return false;
  }
  // front_left
  // front_right
  // rear_left
  // rear_right
  return true;
}

void
dbw_ford_msgs__msg__WheelSpeedReport__fini(dbw_ford_msgs__msg__WheelSpeedReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // front_left
  // front_right
  // rear_left
  // rear_right
}

bool
dbw_ford_msgs__msg__WheelSpeedReport__are_equal(const dbw_ford_msgs__msg__WheelSpeedReport * lhs, const dbw_ford_msgs__msg__WheelSpeedReport * rhs)
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
  // front_left
  if (lhs->front_left != rhs->front_left) {
    return false;
  }
  // front_right
  if (lhs->front_right != rhs->front_right) {
    return false;
  }
  // rear_left
  if (lhs->rear_left != rhs->rear_left) {
    return false;
  }
  // rear_right
  if (lhs->rear_right != rhs->rear_right) {
    return false;
  }
  return true;
}

bool
dbw_ford_msgs__msg__WheelSpeedReport__copy(
  const dbw_ford_msgs__msg__WheelSpeedReport * input,
  dbw_ford_msgs__msg__WheelSpeedReport * output)
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
  // front_left
  output->front_left = input->front_left;
  // front_right
  output->front_right = input->front_right;
  // rear_left
  output->rear_left = input->rear_left;
  // rear_right
  output->rear_right = input->rear_right;
  return true;
}

dbw_ford_msgs__msg__WheelSpeedReport *
dbw_ford_msgs__msg__WheelSpeedReport__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__WheelSpeedReport * msg = (dbw_ford_msgs__msg__WheelSpeedReport *)allocator.allocate(sizeof(dbw_ford_msgs__msg__WheelSpeedReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dbw_ford_msgs__msg__WheelSpeedReport));
  bool success = dbw_ford_msgs__msg__WheelSpeedReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dbw_ford_msgs__msg__WheelSpeedReport__destroy(dbw_ford_msgs__msg__WheelSpeedReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dbw_ford_msgs__msg__WheelSpeedReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dbw_ford_msgs__msg__WheelSpeedReport__Sequence__init(dbw_ford_msgs__msg__WheelSpeedReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__WheelSpeedReport * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__WheelSpeedReport)) {
      return false;
    }
    data = (dbw_ford_msgs__msg__WheelSpeedReport *)allocator.zero_allocate(size, sizeof(dbw_ford_msgs__msg__WheelSpeedReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dbw_ford_msgs__msg__WheelSpeedReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dbw_ford_msgs__msg__WheelSpeedReport__fini(&data[i - 1]);
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
dbw_ford_msgs__msg__WheelSpeedReport__Sequence__fini(dbw_ford_msgs__msg__WheelSpeedReport__Sequence * array)
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
      dbw_ford_msgs__msg__WheelSpeedReport__fini(&array->data[i]);
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

dbw_ford_msgs__msg__WheelSpeedReport__Sequence *
dbw_ford_msgs__msg__WheelSpeedReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__WheelSpeedReport__Sequence * array = (dbw_ford_msgs__msg__WheelSpeedReport__Sequence *)allocator.allocate(sizeof(dbw_ford_msgs__msg__WheelSpeedReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dbw_ford_msgs__msg__WheelSpeedReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dbw_ford_msgs__msg__WheelSpeedReport__Sequence__destroy(dbw_ford_msgs__msg__WheelSpeedReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dbw_ford_msgs__msg__WheelSpeedReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dbw_ford_msgs__msg__WheelSpeedReport__Sequence__are_equal(const dbw_ford_msgs__msg__WheelSpeedReport__Sequence * lhs, const dbw_ford_msgs__msg__WheelSpeedReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dbw_ford_msgs__msg__WheelSpeedReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__WheelSpeedReport__Sequence__copy(
  const dbw_ford_msgs__msg__WheelSpeedReport__Sequence * input,
  dbw_ford_msgs__msg__WheelSpeedReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__WheelSpeedReport)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dbw_ford_msgs__msg__WheelSpeedReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dbw_ford_msgs__msg__WheelSpeedReport * data =
      (dbw_ford_msgs__msg__WheelSpeedReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dbw_ford_msgs__msg__WheelSpeedReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dbw_ford_msgs__msg__WheelSpeedReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dbw_ford_msgs__msg__WheelSpeedReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
