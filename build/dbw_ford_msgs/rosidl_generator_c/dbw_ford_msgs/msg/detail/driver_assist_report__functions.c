// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dbw_ford_msgs:msg/DriverAssistReport.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/driver_assist_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
dbw_ford_msgs__msg__DriverAssistReport__init(dbw_ford_msgs__msg__DriverAssistReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dbw_ford_msgs__msg__DriverAssistReport__fini(msg);
    return false;
  }
  // decel
  // decel_src
  // fcw_enabled
  // fcw_active
  // aeb_enabled
  // aeb_precharge
  // aeb_braking
  // acc_enabled
  // acc_braking
  return true;
}

void
dbw_ford_msgs__msg__DriverAssistReport__fini(dbw_ford_msgs__msg__DriverAssistReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // decel
  // decel_src
  // fcw_enabled
  // fcw_active
  // aeb_enabled
  // aeb_precharge
  // aeb_braking
  // acc_enabled
  // acc_braking
}

bool
dbw_ford_msgs__msg__DriverAssistReport__are_equal(const dbw_ford_msgs__msg__DriverAssistReport * lhs, const dbw_ford_msgs__msg__DriverAssistReport * rhs)
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
  // decel
  if (lhs->decel != rhs->decel) {
    return false;
  }
  // decel_src
  if (lhs->decel_src != rhs->decel_src) {
    return false;
  }
  // fcw_enabled
  if (lhs->fcw_enabled != rhs->fcw_enabled) {
    return false;
  }
  // fcw_active
  if (lhs->fcw_active != rhs->fcw_active) {
    return false;
  }
  // aeb_enabled
  if (lhs->aeb_enabled != rhs->aeb_enabled) {
    return false;
  }
  // aeb_precharge
  if (lhs->aeb_precharge != rhs->aeb_precharge) {
    return false;
  }
  // aeb_braking
  if (lhs->aeb_braking != rhs->aeb_braking) {
    return false;
  }
  // acc_enabled
  if (lhs->acc_enabled != rhs->acc_enabled) {
    return false;
  }
  // acc_braking
  if (lhs->acc_braking != rhs->acc_braking) {
    return false;
  }
  return true;
}

bool
dbw_ford_msgs__msg__DriverAssistReport__copy(
  const dbw_ford_msgs__msg__DriverAssistReport * input,
  dbw_ford_msgs__msg__DriverAssistReport * output)
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
  // decel
  output->decel = input->decel;
  // decel_src
  output->decel_src = input->decel_src;
  // fcw_enabled
  output->fcw_enabled = input->fcw_enabled;
  // fcw_active
  output->fcw_active = input->fcw_active;
  // aeb_enabled
  output->aeb_enabled = input->aeb_enabled;
  // aeb_precharge
  output->aeb_precharge = input->aeb_precharge;
  // aeb_braking
  output->aeb_braking = input->aeb_braking;
  // acc_enabled
  output->acc_enabled = input->acc_enabled;
  // acc_braking
  output->acc_braking = input->acc_braking;
  return true;
}

dbw_ford_msgs__msg__DriverAssistReport *
dbw_ford_msgs__msg__DriverAssistReport__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__DriverAssistReport * msg = (dbw_ford_msgs__msg__DriverAssistReport *)allocator.allocate(sizeof(dbw_ford_msgs__msg__DriverAssistReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dbw_ford_msgs__msg__DriverAssistReport));
  bool success = dbw_ford_msgs__msg__DriverAssistReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dbw_ford_msgs__msg__DriverAssistReport__destroy(dbw_ford_msgs__msg__DriverAssistReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dbw_ford_msgs__msg__DriverAssistReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dbw_ford_msgs__msg__DriverAssistReport__Sequence__init(dbw_ford_msgs__msg__DriverAssistReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__DriverAssistReport * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__DriverAssistReport)) {
      return false;
    }
    data = (dbw_ford_msgs__msg__DriverAssistReport *)allocator.zero_allocate(size, sizeof(dbw_ford_msgs__msg__DriverAssistReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dbw_ford_msgs__msg__DriverAssistReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dbw_ford_msgs__msg__DriverAssistReport__fini(&data[i - 1]);
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
dbw_ford_msgs__msg__DriverAssistReport__Sequence__fini(dbw_ford_msgs__msg__DriverAssistReport__Sequence * array)
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
      dbw_ford_msgs__msg__DriverAssistReport__fini(&array->data[i]);
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

dbw_ford_msgs__msg__DriverAssistReport__Sequence *
dbw_ford_msgs__msg__DriverAssistReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__DriverAssistReport__Sequence * array = (dbw_ford_msgs__msg__DriverAssistReport__Sequence *)allocator.allocate(sizeof(dbw_ford_msgs__msg__DriverAssistReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dbw_ford_msgs__msg__DriverAssistReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dbw_ford_msgs__msg__DriverAssistReport__Sequence__destroy(dbw_ford_msgs__msg__DriverAssistReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dbw_ford_msgs__msg__DriverAssistReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dbw_ford_msgs__msg__DriverAssistReport__Sequence__are_equal(const dbw_ford_msgs__msg__DriverAssistReport__Sequence * lhs, const dbw_ford_msgs__msg__DriverAssistReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dbw_ford_msgs__msg__DriverAssistReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__DriverAssistReport__Sequence__copy(
  const dbw_ford_msgs__msg__DriverAssistReport__Sequence * input,
  dbw_ford_msgs__msg__DriverAssistReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__DriverAssistReport)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dbw_ford_msgs__msg__DriverAssistReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dbw_ford_msgs__msg__DriverAssistReport * data =
      (dbw_ford_msgs__msg__DriverAssistReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dbw_ford_msgs__msg__DriverAssistReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dbw_ford_msgs__msg__DriverAssistReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dbw_ford_msgs__msg__DriverAssistReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
