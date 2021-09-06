// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gpm_interfaces:srv/ConveyerReport.idl
// generated code does not contain a copyright notice
#include "gpm_interfaces/srv/detail/conveyer_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
gpm_interfaces__srv__ConveyerReport_Request__init(gpm_interfaces__srv__ConveyerReport_Request * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // empty
  // wafer_num
  return true;
}

void
gpm_interfaces__srv__ConveyerReport_Request__fini(gpm_interfaces__srv__ConveyerReport_Request * msg)
{
  if (!msg) {
    return;
  }
  // id
  // empty
  // wafer_num
}

gpm_interfaces__srv__ConveyerReport_Request *
gpm_interfaces__srv__ConveyerReport_Request__create()
{
  gpm_interfaces__srv__ConveyerReport_Request * msg = (gpm_interfaces__srv__ConveyerReport_Request *)malloc(sizeof(gpm_interfaces__srv__ConveyerReport_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpm_interfaces__srv__ConveyerReport_Request));
  bool success = gpm_interfaces__srv__ConveyerReport_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gpm_interfaces__srv__ConveyerReport_Request__destroy(gpm_interfaces__srv__ConveyerReport_Request * msg)
{
  if (msg) {
    gpm_interfaces__srv__ConveyerReport_Request__fini(msg);
  }
  free(msg);
}


bool
gpm_interfaces__srv__ConveyerReport_Request__Sequence__init(gpm_interfaces__srv__ConveyerReport_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gpm_interfaces__srv__ConveyerReport_Request * data = NULL;
  if (size) {
    data = (gpm_interfaces__srv__ConveyerReport_Request *)calloc(size, sizeof(gpm_interfaces__srv__ConveyerReport_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpm_interfaces__srv__ConveyerReport_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpm_interfaces__srv__ConveyerReport_Request__fini(&data[i - 1]);
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
gpm_interfaces__srv__ConveyerReport_Request__Sequence__fini(gpm_interfaces__srv__ConveyerReport_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gpm_interfaces__srv__ConveyerReport_Request__fini(&array->data[i]);
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

gpm_interfaces__srv__ConveyerReport_Request__Sequence *
gpm_interfaces__srv__ConveyerReport_Request__Sequence__create(size_t size)
{
  gpm_interfaces__srv__ConveyerReport_Request__Sequence * array = (gpm_interfaces__srv__ConveyerReport_Request__Sequence *)malloc(sizeof(gpm_interfaces__srv__ConveyerReport_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gpm_interfaces__srv__ConveyerReport_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gpm_interfaces__srv__ConveyerReport_Request__Sequence__destroy(gpm_interfaces__srv__ConveyerReport_Request__Sequence * array)
{
  if (array) {
    gpm_interfaces__srv__ConveyerReport_Request__Sequence__fini(array);
  }
  free(array);
}


bool
gpm_interfaces__srv__ConveyerReport_Response__init(gpm_interfaces__srv__ConveyerReport_Response * msg)
{
  if (!msg) {
    return false;
  }
  // receive
  return true;
}

void
gpm_interfaces__srv__ConveyerReport_Response__fini(gpm_interfaces__srv__ConveyerReport_Response * msg)
{
  if (!msg) {
    return;
  }
  // receive
}

gpm_interfaces__srv__ConveyerReport_Response *
gpm_interfaces__srv__ConveyerReport_Response__create()
{
  gpm_interfaces__srv__ConveyerReport_Response * msg = (gpm_interfaces__srv__ConveyerReport_Response *)malloc(sizeof(gpm_interfaces__srv__ConveyerReport_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpm_interfaces__srv__ConveyerReport_Response));
  bool success = gpm_interfaces__srv__ConveyerReport_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gpm_interfaces__srv__ConveyerReport_Response__destroy(gpm_interfaces__srv__ConveyerReport_Response * msg)
{
  if (msg) {
    gpm_interfaces__srv__ConveyerReport_Response__fini(msg);
  }
  free(msg);
}


bool
gpm_interfaces__srv__ConveyerReport_Response__Sequence__init(gpm_interfaces__srv__ConveyerReport_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gpm_interfaces__srv__ConveyerReport_Response * data = NULL;
  if (size) {
    data = (gpm_interfaces__srv__ConveyerReport_Response *)calloc(size, sizeof(gpm_interfaces__srv__ConveyerReport_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpm_interfaces__srv__ConveyerReport_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpm_interfaces__srv__ConveyerReport_Response__fini(&data[i - 1]);
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
gpm_interfaces__srv__ConveyerReport_Response__Sequence__fini(gpm_interfaces__srv__ConveyerReport_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gpm_interfaces__srv__ConveyerReport_Response__fini(&array->data[i]);
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

gpm_interfaces__srv__ConveyerReport_Response__Sequence *
gpm_interfaces__srv__ConveyerReport_Response__Sequence__create(size_t size)
{
  gpm_interfaces__srv__ConveyerReport_Response__Sequence * array = (gpm_interfaces__srv__ConveyerReport_Response__Sequence *)malloc(sizeof(gpm_interfaces__srv__ConveyerReport_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gpm_interfaces__srv__ConveyerReport_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gpm_interfaces__srv__ConveyerReport_Response__Sequence__destroy(gpm_interfaces__srv__ConveyerReport_Response__Sequence * array)
{
  if (array) {
    gpm_interfaces__srv__ConveyerReport_Response__Sequence__fini(array);
  }
  free(array);
}
