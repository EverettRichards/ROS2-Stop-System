// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dbw_ford_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/surround_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
dbw_ford_msgs__msg__SurroundReport__init(dbw_ford_msgs__msg__SurroundReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dbw_ford_msgs__msg__SurroundReport__fini(msg);
    return false;
  }
  // cta_left_alert
  // cta_right_alert
  // cta_left_enabled
  // cta_right_enabled
  // blis_left_alert
  // blis_right_alert
  // blis_left_enabled
  // blis_right_enabled
  // sonar_enabled
  // sonar_fault
  // sonar
  return true;
}

void
dbw_ford_msgs__msg__SurroundReport__fini(dbw_ford_msgs__msg__SurroundReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cta_left_alert
  // cta_right_alert
  // cta_left_enabled
  // cta_right_enabled
  // blis_left_alert
  // blis_right_alert
  // blis_left_enabled
  // blis_right_enabled
  // sonar_enabled
  // sonar_fault
  // sonar
}

bool
dbw_ford_msgs__msg__SurroundReport__are_equal(const dbw_ford_msgs__msg__SurroundReport * lhs, const dbw_ford_msgs__msg__SurroundReport * rhs)
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
  // cta_left_alert
  if (lhs->cta_left_alert != rhs->cta_left_alert) {
    return false;
  }
  // cta_right_alert
  if (lhs->cta_right_alert != rhs->cta_right_alert) {
    return false;
  }
  // cta_left_enabled
  if (lhs->cta_left_enabled != rhs->cta_left_enabled) {
    return false;
  }
  // cta_right_enabled
  if (lhs->cta_right_enabled != rhs->cta_right_enabled) {
    return false;
  }
  // blis_left_alert
  if (lhs->blis_left_alert != rhs->blis_left_alert) {
    return false;
  }
  // blis_right_alert
  if (lhs->blis_right_alert != rhs->blis_right_alert) {
    return false;
  }
  // blis_left_enabled
  if (lhs->blis_left_enabled != rhs->blis_left_enabled) {
    return false;
  }
  // blis_right_enabled
  if (lhs->blis_right_enabled != rhs->blis_right_enabled) {
    return false;
  }
  // sonar_enabled
  if (lhs->sonar_enabled != rhs->sonar_enabled) {
    return false;
  }
  // sonar_fault
  if (lhs->sonar_fault != rhs->sonar_fault) {
    return false;
  }
  // sonar
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->sonar[i] != rhs->sonar[i]) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__SurroundReport__copy(
  const dbw_ford_msgs__msg__SurroundReport * input,
  dbw_ford_msgs__msg__SurroundReport * output)
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
  // cta_left_alert
  output->cta_left_alert = input->cta_left_alert;
  // cta_right_alert
  output->cta_right_alert = input->cta_right_alert;
  // cta_left_enabled
  output->cta_left_enabled = input->cta_left_enabled;
  // cta_right_enabled
  output->cta_right_enabled = input->cta_right_enabled;
  // blis_left_alert
  output->blis_left_alert = input->blis_left_alert;
  // blis_right_alert
  output->blis_right_alert = input->blis_right_alert;
  // blis_left_enabled
  output->blis_left_enabled = input->blis_left_enabled;
  // blis_right_enabled
  output->blis_right_enabled = input->blis_right_enabled;
  // sonar_enabled
  output->sonar_enabled = input->sonar_enabled;
  // sonar_fault
  output->sonar_fault = input->sonar_fault;
  // sonar
  for (size_t i = 0; i < 12; ++i) {
    output->sonar[i] = input->sonar[i];
  }
  return true;
}

dbw_ford_msgs__msg__SurroundReport *
dbw_ford_msgs__msg__SurroundReport__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__SurroundReport * msg = (dbw_ford_msgs__msg__SurroundReport *)allocator.allocate(sizeof(dbw_ford_msgs__msg__SurroundReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dbw_ford_msgs__msg__SurroundReport));
  bool success = dbw_ford_msgs__msg__SurroundReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dbw_ford_msgs__msg__SurroundReport__destroy(dbw_ford_msgs__msg__SurroundReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dbw_ford_msgs__msg__SurroundReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dbw_ford_msgs__msg__SurroundReport__Sequence__init(dbw_ford_msgs__msg__SurroundReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__SurroundReport * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__SurroundReport)) {
      return false;
    }
    data = (dbw_ford_msgs__msg__SurroundReport *)allocator.zero_allocate(size, sizeof(dbw_ford_msgs__msg__SurroundReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dbw_ford_msgs__msg__SurroundReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dbw_ford_msgs__msg__SurroundReport__fini(&data[i - 1]);
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
dbw_ford_msgs__msg__SurroundReport__Sequence__fini(dbw_ford_msgs__msg__SurroundReport__Sequence * array)
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
      dbw_ford_msgs__msg__SurroundReport__fini(&array->data[i]);
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

dbw_ford_msgs__msg__SurroundReport__Sequence *
dbw_ford_msgs__msg__SurroundReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__SurroundReport__Sequence * array = (dbw_ford_msgs__msg__SurroundReport__Sequence *)allocator.allocate(sizeof(dbw_ford_msgs__msg__SurroundReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dbw_ford_msgs__msg__SurroundReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dbw_ford_msgs__msg__SurroundReport__Sequence__destroy(dbw_ford_msgs__msg__SurroundReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dbw_ford_msgs__msg__SurroundReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dbw_ford_msgs__msg__SurroundReport__Sequence__are_equal(const dbw_ford_msgs__msg__SurroundReport__Sequence * lhs, const dbw_ford_msgs__msg__SurroundReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dbw_ford_msgs__msg__SurroundReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__SurroundReport__Sequence__copy(
  const dbw_ford_msgs__msg__SurroundReport__Sequence * input,
  dbw_ford_msgs__msg__SurroundReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__SurroundReport)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dbw_ford_msgs__msg__SurroundReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dbw_ford_msgs__msg__SurroundReport * data =
      (dbw_ford_msgs__msg__SurroundReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dbw_ford_msgs__msg__SurroundReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dbw_ford_msgs__msg__SurroundReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dbw_ford_msgs__msg__SurroundReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
