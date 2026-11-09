// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dbw_ford_msgs:msg/SteeringCmd.idl
// generated code does not contain a copyright notice
#include "dbw_ford_msgs/msg/detail/steering_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
dbw_ford_msgs__msg__SteeringCmd__init(dbw_ford_msgs__msg__SteeringCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dbw_ford_msgs__msg__SteeringCmd__fini(msg);
    return false;
  }
  // steering_wheel_angle_cmd
  // steering_wheel_angle_velocity
  // steering_wheel_torque_cmd
  // cmd_type
  // enable
  // clear
  // ignore
  // quiet
  // alert
  // count
  return true;
}

void
dbw_ford_msgs__msg__SteeringCmd__fini(dbw_ford_msgs__msg__SteeringCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // steering_wheel_angle_cmd
  // steering_wheel_angle_velocity
  // steering_wheel_torque_cmd
  // cmd_type
  // enable
  // clear
  // ignore
  // quiet
  // alert
  // count
}

bool
dbw_ford_msgs__msg__SteeringCmd__are_equal(const dbw_ford_msgs__msg__SteeringCmd * lhs, const dbw_ford_msgs__msg__SteeringCmd * rhs)
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
  // steering_wheel_angle_cmd
  if (lhs->steering_wheel_angle_cmd != rhs->steering_wheel_angle_cmd) {
    return false;
  }
  // steering_wheel_angle_velocity
  if (lhs->steering_wheel_angle_velocity != rhs->steering_wheel_angle_velocity) {
    return false;
  }
  // steering_wheel_torque_cmd
  if (lhs->steering_wheel_torque_cmd != rhs->steering_wheel_torque_cmd) {
    return false;
  }
  // cmd_type
  if (lhs->cmd_type != rhs->cmd_type) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  // clear
  if (lhs->clear != rhs->clear) {
    return false;
  }
  // ignore
  if (lhs->ignore != rhs->ignore) {
    return false;
  }
  // quiet
  if (lhs->quiet != rhs->quiet) {
    return false;
  }
  // alert
  if (lhs->alert != rhs->alert) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  return true;
}

bool
dbw_ford_msgs__msg__SteeringCmd__copy(
  const dbw_ford_msgs__msg__SteeringCmd * input,
  dbw_ford_msgs__msg__SteeringCmd * output)
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
  // steering_wheel_angle_cmd
  output->steering_wheel_angle_cmd = input->steering_wheel_angle_cmd;
  // steering_wheel_angle_velocity
  output->steering_wheel_angle_velocity = input->steering_wheel_angle_velocity;
  // steering_wheel_torque_cmd
  output->steering_wheel_torque_cmd = input->steering_wheel_torque_cmd;
  // cmd_type
  output->cmd_type = input->cmd_type;
  // enable
  output->enable = input->enable;
  // clear
  output->clear = input->clear;
  // ignore
  output->ignore = input->ignore;
  // quiet
  output->quiet = input->quiet;
  // alert
  output->alert = input->alert;
  // count
  output->count = input->count;
  return true;
}

dbw_ford_msgs__msg__SteeringCmd *
dbw_ford_msgs__msg__SteeringCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__SteeringCmd * msg = (dbw_ford_msgs__msg__SteeringCmd *)allocator.allocate(sizeof(dbw_ford_msgs__msg__SteeringCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dbw_ford_msgs__msg__SteeringCmd));
  bool success = dbw_ford_msgs__msg__SteeringCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dbw_ford_msgs__msg__SteeringCmd__destroy(dbw_ford_msgs__msg__SteeringCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dbw_ford_msgs__msg__SteeringCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dbw_ford_msgs__msg__SteeringCmd__Sequence__init(dbw_ford_msgs__msg__SteeringCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__SteeringCmd * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__SteeringCmd)) {
      return false;
    }
    data = (dbw_ford_msgs__msg__SteeringCmd *)allocator.zero_allocate(size, sizeof(dbw_ford_msgs__msg__SteeringCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dbw_ford_msgs__msg__SteeringCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dbw_ford_msgs__msg__SteeringCmd__fini(&data[i - 1]);
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
dbw_ford_msgs__msg__SteeringCmd__Sequence__fini(dbw_ford_msgs__msg__SteeringCmd__Sequence * array)
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
      dbw_ford_msgs__msg__SteeringCmd__fini(&array->data[i]);
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

dbw_ford_msgs__msg__SteeringCmd__Sequence *
dbw_ford_msgs__msg__SteeringCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dbw_ford_msgs__msg__SteeringCmd__Sequence * array = (dbw_ford_msgs__msg__SteeringCmd__Sequence *)allocator.allocate(sizeof(dbw_ford_msgs__msg__SteeringCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dbw_ford_msgs__msg__SteeringCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dbw_ford_msgs__msg__SteeringCmd__Sequence__destroy(dbw_ford_msgs__msg__SteeringCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dbw_ford_msgs__msg__SteeringCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dbw_ford_msgs__msg__SteeringCmd__Sequence__are_equal(const dbw_ford_msgs__msg__SteeringCmd__Sequence * lhs, const dbw_ford_msgs__msg__SteeringCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dbw_ford_msgs__msg__SteeringCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dbw_ford_msgs__msg__SteeringCmd__Sequence__copy(
  const dbw_ford_msgs__msg__SteeringCmd__Sequence * input,
  dbw_ford_msgs__msg__SteeringCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dbw_ford_msgs__msg__SteeringCmd)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dbw_ford_msgs__msg__SteeringCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dbw_ford_msgs__msg__SteeringCmd * data =
      (dbw_ford_msgs__msg__SteeringCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dbw_ford_msgs__msg__SteeringCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dbw_ford_msgs__msg__SteeringCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dbw_ford_msgs__msg__SteeringCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
