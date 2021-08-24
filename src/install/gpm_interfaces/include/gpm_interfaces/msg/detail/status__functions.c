// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gpm_interfaces:msg/Status.idl
// generated code does not contain a copyright notice
#include "gpm_interfaces/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `device`
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"

bool
gpm_interfaces__msg__Status__init(gpm_interfaces__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // device
  if (!rosidl_runtime_c__String__init(&msg->device)) {
    gpm_interfaces__msg__Status__fini(msg);
    return false;
  }
  // error
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    gpm_interfaces__msg__Status__fini(msg);
    return false;
  }
  return true;
}

void
gpm_interfaces__msg__Status__fini(gpm_interfaces__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // device
  rosidl_runtime_c__String__fini(&msg->device);
  // error
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
}

gpm_interfaces__msg__Status *
gpm_interfaces__msg__Status__create()
{
  gpm_interfaces__msg__Status * msg = (gpm_interfaces__msg__Status *)malloc(sizeof(gpm_interfaces__msg__Status));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpm_interfaces__msg__Status));
  bool success = gpm_interfaces__msg__Status__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gpm_interfaces__msg__Status__destroy(gpm_interfaces__msg__Status * msg)
{
  if (msg) {
    gpm_interfaces__msg__Status__fini(msg);
  }
  free(msg);
}


bool
gpm_interfaces__msg__Status__Sequence__init(gpm_interfaces__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gpm_interfaces__msg__Status * data = NULL;
  if (size) {
    data = (gpm_interfaces__msg__Status *)calloc(size, sizeof(gpm_interfaces__msg__Status));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpm_interfaces__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpm_interfaces__msg__Status__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gpm_interfaces__msg__Status__Sequence__fini(gpm_interfaces__msg__Status__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gpm_interfaces__msg__Status__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gpm_interfaces__msg__Status__Sequence *
gpm_interfaces__msg__Status__Sequence__create(size_t size)
{
  gpm_interfaces__msg__Status__Sequence * array = (gpm_interfaces__msg__Status__Sequence *)malloc(sizeof(gpm_interfaces__msg__Status__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gpm_interfaces__msg__Status__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gpm_interfaces__msg__Status__Sequence__destroy(gpm_interfaces__msg__Status__Sequence * array)
{
  if (array) {
    gpm_interfaces__msg__Status__Sequence__fini(array);
  }
  free(array);
}
