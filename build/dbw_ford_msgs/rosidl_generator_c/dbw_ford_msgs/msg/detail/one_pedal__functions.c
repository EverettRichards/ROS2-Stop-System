// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dbw_ford_msgs:msg/OnePedal.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/one_pedal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dbw_ford_msgs__msg__OnePedal__init(dbw_ford_msgs__msg__OnePedal * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
dbw_ford_msgs__msg__OnePedal__fini(dbw_ford_msgs__msg__OnePedal * msg)
{
  if (!msg) {
    return;
  }
  // value
}

bool
dbw_ford_msgs__msg__OnePedal__are_equal(const dbw_ford_msgs__msg__OnePedal * lhs, const dbw_ford_msgs__msg__OnePedal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
dbw_ford_msgs__msg__OnePedal__copy(
  const dbw_ford_msgs__msg__OnePedal * input,
  dbw_ford_msgs__msg__OnePedal * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

dbw_ford_msgs__msg__OnePedal *
dbw_ford_msgs__msg__OnePedal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__OnePedal * msg = (dbw_ford_msgs__msg__OnePedal *)allocator.allocate(sizeof(dbw_ford_msgs__msg__OnePedal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dbw_ford_msgs__msg__OnePedal));
  bool success = dbw_ford_msgs__msg__OnePedal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dbw_ford_msgs__msg__OnePedal__destroy(dbw_ford_msgs__msg__OnePedal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dbw_ford_msgs__msg__OnePedal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dbw_ford_msgs__msg__OnePedal__Sequence__init(dbw_ford_msgs__msg__OnePedal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__OnePedal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__OnePedal)) {
      return false;
    }
    data = (dbw_ford_msgs__msg__OnePedal *)allocator.zero_allocate(size, sizeof(dbw_ford_msgs__msg__OnePedal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dbw_ford_msgs__msg__OnePedal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dbw_ford_msgs__msg__OnePedal__fini(&data[i - 1]);
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
dbw_ford_msgs__msg__OnePedal__Sequence__fini(dbw_ford_msgs__msg__OnePedal__Sequence * array)
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
      dbw_ford_msgs__msg__OnePedal__fini(&array->data[i]);
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

dbw_ford_msgs__msg__OnePedal__Sequence *
dbw_ford_msgs__msg__OnePedal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__OnePedal__Sequence * array = (dbw_ford_msgs__msg__OnePedal__Sequence *)allocator.allocate(sizeof(dbw_ford_msgs__msg__OnePedal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dbw_ford_msgs__msg__OnePedal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dbw_ford_msgs__msg__OnePedal__Sequence__destroy(dbw_ford_msgs__msg__OnePedal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dbw_ford_msgs__msg__OnePedal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dbw_ford_msgs__msg__OnePedal__Sequence__are_equal(const dbw_ford_msgs__msg__OnePedal__Sequence * lhs, const dbw_ford_msgs__msg__OnePedal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dbw_ford_msgs__msg__OnePedal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__OnePedal__Sequence__copy(
  const dbw_ford_msgs__msg__OnePedal__Sequence * input,
  dbw_ford_msgs__msg__OnePedal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__OnePedal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dbw_ford_msgs__msg__OnePedal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dbw_ford_msgs__msg__OnePedal * data =
      (dbw_ford_msgs__msg__OnePedal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dbw_ford_msgs__msg__OnePedal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dbw_ford_msgs__msg__OnePedal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dbw_ford_msgs__msg__OnePedal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
