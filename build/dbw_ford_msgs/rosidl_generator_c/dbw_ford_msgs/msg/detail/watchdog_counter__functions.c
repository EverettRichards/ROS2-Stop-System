// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dbw_ford_msgs:msg/WatchdogCounter.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/watchdog_counter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dbw_ford_msgs__msg__WatchdogCounter__init(dbw_ford_msgs__msg__WatchdogCounter * msg)
{
  if (!msg) {
    return false;
  }
  // source
  return true;
}

void
dbw_ford_msgs__msg__WatchdogCounter__fini(dbw_ford_msgs__msg__WatchdogCounter * msg)
{
  if (!msg) {
    return;
  }
  // source
}

bool
dbw_ford_msgs__msg__WatchdogCounter__are_equal(const dbw_ford_msgs__msg__WatchdogCounter * lhs, const dbw_ford_msgs__msg__WatchdogCounter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // source
  if (lhs->source != rhs->source) {
    return false;
  }
  return true;
}

bool
dbw_ford_msgs__msg__WatchdogCounter__copy(
  const dbw_ford_msgs__msg__WatchdogCounter * input,
  dbw_ford_msgs__msg__WatchdogCounter * output)
{
  if (!input || !output) {
    return false;
  }
  // source
  output->source = input->source;
  return true;
}

dbw_ford_msgs__msg__WatchdogCounter *
dbw_ford_msgs__msg__WatchdogCounter__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__WatchdogCounter * msg = (dbw_ford_msgs__msg__WatchdogCounter *)allocator.allocate(sizeof(dbw_ford_msgs__msg__WatchdogCounter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dbw_ford_msgs__msg__WatchdogCounter));
  bool success = dbw_ford_msgs__msg__WatchdogCounter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dbw_ford_msgs__msg__WatchdogCounter__destroy(dbw_ford_msgs__msg__WatchdogCounter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dbw_ford_msgs__msg__WatchdogCounter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dbw_ford_msgs__msg__WatchdogCounter__Sequence__init(dbw_ford_msgs__msg__WatchdogCounter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__WatchdogCounter * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__WatchdogCounter)) {
      return false;
    }
    data = (dbw_ford_msgs__msg__WatchdogCounter *)allocator.zero_allocate(size, sizeof(dbw_ford_msgs__msg__WatchdogCounter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dbw_ford_msgs__msg__WatchdogCounter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dbw_ford_msgs__msg__WatchdogCounter__fini(&data[i - 1]);
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
dbw_ford_msgs__msg__WatchdogCounter__Sequence__fini(dbw_ford_msgs__msg__WatchdogCounter__Sequence * array)
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
      dbw_ford_msgs__msg__WatchdogCounter__fini(&array->data[i]);
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

dbw_ford_msgs__msg__WatchdogCounter__Sequence *
dbw_ford_msgs__msg__WatchdogCounter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__WatchdogCounter__Sequence * array = (dbw_ford_msgs__msg__WatchdogCounter__Sequence *)allocator.allocate(sizeof(dbw_ford_msgs__msg__WatchdogCounter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dbw_ford_msgs__msg__WatchdogCounter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dbw_ford_msgs__msg__WatchdogCounter__Sequence__destroy(dbw_ford_msgs__msg__WatchdogCounter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dbw_ford_msgs__msg__WatchdogCounter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dbw_ford_msgs__msg__WatchdogCounter__Sequence__are_equal(const dbw_ford_msgs__msg__WatchdogCounter__Sequence * lhs, const dbw_ford_msgs__msg__WatchdogCounter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dbw_ford_msgs__msg__WatchdogCounter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__WatchdogCounter__Sequence__copy(
  const dbw_ford_msgs__msg__WatchdogCounter__Sequence * input,
  dbw_ford_msgs__msg__WatchdogCounter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__WatchdogCounter)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dbw_ford_msgs__msg__WatchdogCounter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dbw_ford_msgs__msg__WatchdogCounter * data =
      (dbw_ford_msgs__msg__WatchdogCounter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dbw_ford_msgs__msg__WatchdogCounter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dbw_ford_msgs__msg__WatchdogCounter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dbw_ford_msgs__msg__WatchdogCounter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
