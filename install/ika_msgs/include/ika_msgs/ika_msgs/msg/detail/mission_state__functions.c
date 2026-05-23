// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ika_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice
#include "ika_msgs/msg/detail/mission_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `stage_name`
// Member `status_text`
#include "rosidl_runtime_c/string_functions.h"

bool
ika_msgs__msg__MissionState__init(ika_msgs__msg__MissionState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ika_msgs__msg__MissionState__fini(msg);
    return false;
  }
  // mission_mode
  // current_stage
  // mission_status
  // stage_name
  if (!rosidl_runtime_c__String__init(&msg->stage_name)) {
    ika_msgs__msg__MissionState__fini(msg);
    return false;
  }
  // status_text
  if (!rosidl_runtime_c__String__init(&msg->status_text)) {
    ika_msgs__msg__MissionState__fini(msg);
    return false;
  }
  // autonomous_enabled
  // emergency_stop_active
  // elapsed_time_sec
  return true;
}

void
ika_msgs__msg__MissionState__fini(ika_msgs__msg__MissionState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mission_mode
  // current_stage
  // mission_status
  // stage_name
  rosidl_runtime_c__String__fini(&msg->stage_name);
  // status_text
  rosidl_runtime_c__String__fini(&msg->status_text);
  // autonomous_enabled
  // emergency_stop_active
  // elapsed_time_sec
}

bool
ika_msgs__msg__MissionState__are_equal(const ika_msgs__msg__MissionState * lhs, const ika_msgs__msg__MissionState * rhs)
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
  // mission_mode
  if (lhs->mission_mode != rhs->mission_mode) {
    return false;
  }
  // current_stage
  if (lhs->current_stage != rhs->current_stage) {
    return false;
  }
  // mission_status
  if (lhs->mission_status != rhs->mission_status) {
    return false;
  }
  // stage_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->stage_name), &(rhs->stage_name)))
  {
    return false;
  }
  // status_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_text), &(rhs->status_text)))
  {
    return false;
  }
  // autonomous_enabled
  if (lhs->autonomous_enabled != rhs->autonomous_enabled) {
    return false;
  }
  // emergency_stop_active
  if (lhs->emergency_stop_active != rhs->emergency_stop_active) {
    return false;
  }
  // elapsed_time_sec
  if (lhs->elapsed_time_sec != rhs->elapsed_time_sec) {
    return false;
  }
  return true;
}

bool
ika_msgs__msg__MissionState__copy(
  const ika_msgs__msg__MissionState * input,
  ika_msgs__msg__MissionState * output)
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
  // mission_mode
  output->mission_mode = input->mission_mode;
  // current_stage
  output->current_stage = input->current_stage;
  // mission_status
  output->mission_status = input->mission_status;
  // stage_name
  if (!rosidl_runtime_c__String__copy(
      &(input->stage_name), &(output->stage_name)))
  {
    return false;
  }
  // status_text
  if (!rosidl_runtime_c__String__copy(
      &(input->status_text), &(output->status_text)))
  {
    return false;
  }
  // autonomous_enabled
  output->autonomous_enabled = input->autonomous_enabled;
  // emergency_stop_active
  output->emergency_stop_active = input->emergency_stop_active;
  // elapsed_time_sec
  output->elapsed_time_sec = input->elapsed_time_sec;
  return true;
}

ika_msgs__msg__MissionState *
ika_msgs__msg__MissionState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__msg__MissionState * msg = (ika_msgs__msg__MissionState *)allocator.allocate(sizeof(ika_msgs__msg__MissionState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ika_msgs__msg__MissionState));
  bool success = ika_msgs__msg__MissionState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ika_msgs__msg__MissionState__destroy(ika_msgs__msg__MissionState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ika_msgs__msg__MissionState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ika_msgs__msg__MissionState__Sequence__init(ika_msgs__msg__MissionState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__msg__MissionState * data = NULL;

  if (size) {
    data = (ika_msgs__msg__MissionState *)allocator.zero_allocate(size, sizeof(ika_msgs__msg__MissionState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ika_msgs__msg__MissionState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ika_msgs__msg__MissionState__fini(&data[i - 1]);
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
ika_msgs__msg__MissionState__Sequence__fini(ika_msgs__msg__MissionState__Sequence * array)
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
      ika_msgs__msg__MissionState__fini(&array->data[i]);
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

ika_msgs__msg__MissionState__Sequence *
ika_msgs__msg__MissionState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__msg__MissionState__Sequence * array = (ika_msgs__msg__MissionState__Sequence *)allocator.allocate(sizeof(ika_msgs__msg__MissionState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ika_msgs__msg__MissionState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ika_msgs__msg__MissionState__Sequence__destroy(ika_msgs__msg__MissionState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ika_msgs__msg__MissionState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ika_msgs__msg__MissionState__Sequence__are_equal(const ika_msgs__msg__MissionState__Sequence * lhs, const ika_msgs__msg__MissionState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ika_msgs__msg__MissionState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ika_msgs__msg__MissionState__Sequence__copy(
  const ika_msgs__msg__MissionState__Sequence * input,
  ika_msgs__msg__MissionState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ika_msgs__msg__MissionState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ika_msgs__msg__MissionState * data =
      (ika_msgs__msg__MissionState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ika_msgs__msg__MissionState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ika_msgs__msg__MissionState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ika_msgs__msg__MissionState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
