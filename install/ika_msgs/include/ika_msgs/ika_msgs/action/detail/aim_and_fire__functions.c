// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ika_msgs:action/AimAndFire.idl
// generated code does not contain a copyright notice
#include "ika_msgs/action/detail/aim_and_fire__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ika_msgs__action__AimAndFire_Goal__init(ika_msgs__action__AimAndFire_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_x
  // target_y
  // target_distance_m
  // max_attempts
  // aim_timeout_sec
  // fire_duration_sec
  return true;
}

void
ika_msgs__action__AimAndFire_Goal__fini(ika_msgs__action__AimAndFire_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_x
  // target_y
  // target_distance_m
  // max_attempts
  // aim_timeout_sec
  // fire_duration_sec
}

bool
ika_msgs__action__AimAndFire_Goal__are_equal(const ika_msgs__action__AimAndFire_Goal * lhs, const ika_msgs__action__AimAndFire_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_x
  if (lhs->target_x != rhs->target_x) {
    return false;
  }
  // target_y
  if (lhs->target_y != rhs->target_y) {
    return false;
  }
  // target_distance_m
  if (lhs->target_distance_m != rhs->target_distance_m) {
    return false;
  }
  // max_attempts
  if (lhs->max_attempts != rhs->max_attempts) {
    return false;
  }
  // aim_timeout_sec
  if (lhs->aim_timeout_sec != rhs->aim_timeout_sec) {
    return false;
  }
  // fire_duration_sec
  if (lhs->fire_duration_sec != rhs->fire_duration_sec) {
    return false;
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_Goal__copy(
  const ika_msgs__action__AimAndFire_Goal * input,
  ika_msgs__action__AimAndFire_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_x
  output->target_x = input->target_x;
  // target_y
  output->target_y = input->target_y;
  // target_distance_m
  output->target_distance_m = input->target_distance_m;
  // max_attempts
  output->max_attempts = input->max_attempts;
  // aim_timeout_sec
  output->aim_timeout_sec = input->aim_timeout_sec;
  // fire_duration_sec
  output->fire_duration_sec = input->fire_duration_sec;
  return true;
}

ika_msgs__action__AimAndFire_Goal *
ika_msgs__action__AimAndFire_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_Goal * msg = (ika_msgs__action__AimAndFire_Goal *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ika_msgs__action__AimAndFire_Goal));
  bool success = ika_msgs__action__AimAndFire_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ika_msgs__action__AimAndFire_Goal__destroy(ika_msgs__action__AimAndFire_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ika_msgs__action__AimAndFire_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ika_msgs__action__AimAndFire_Goal__Sequence__init(ika_msgs__action__AimAndFire_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_Goal * data = NULL;

  if (size) {
    data = (ika_msgs__action__AimAndFire_Goal *)allocator.zero_allocate(size, sizeof(ika_msgs__action__AimAndFire_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ika_msgs__action__AimAndFire_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ika_msgs__action__AimAndFire_Goal__fini(&data[i - 1]);
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
ika_msgs__action__AimAndFire_Goal__Sequence__fini(ika_msgs__action__AimAndFire_Goal__Sequence * array)
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
      ika_msgs__action__AimAndFire_Goal__fini(&array->data[i]);
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

ika_msgs__action__AimAndFire_Goal__Sequence *
ika_msgs__action__AimAndFire_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_Goal__Sequence * array = (ika_msgs__action__AimAndFire_Goal__Sequence *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ika_msgs__action__AimAndFire_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ika_msgs__action__AimAndFire_Goal__Sequence__destroy(ika_msgs__action__AimAndFire_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ika_msgs__action__AimAndFire_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ika_msgs__action__AimAndFire_Goal__Sequence__are_equal(const ika_msgs__action__AimAndFire_Goal__Sequence * lhs, const ika_msgs__action__AimAndFire_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ika_msgs__action__AimAndFire_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_Goal__Sequence__copy(
  const ika_msgs__action__AimAndFire_Goal__Sequence * input,
  ika_msgs__action__AimAndFire_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ika_msgs__action__AimAndFire_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ika_msgs__action__AimAndFire_Goal * data =
      (ika_msgs__action__AimAndFire_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ika_msgs__action__AimAndFire_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ika_msgs__action__AimAndFire_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ika_msgs__action__AimAndFire_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_message`
#include "rosidl_runtime_c/string_functions.h"

bool
ika_msgs__action__AimAndFire_Result__init(ika_msgs__action__AimAndFire_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // attempts_used
  // final_error_x
  // final_error_y
  // result_message
  if (!rosidl_runtime_c__String__init(&msg->result_message)) {
    ika_msgs__action__AimAndFire_Result__fini(msg);
    return false;
  }
  return true;
}

void
ika_msgs__action__AimAndFire_Result__fini(ika_msgs__action__AimAndFire_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // attempts_used
  // final_error_x
  // final_error_y
  // result_message
  rosidl_runtime_c__String__fini(&msg->result_message);
}

bool
ika_msgs__action__AimAndFire_Result__are_equal(const ika_msgs__action__AimAndFire_Result * lhs, const ika_msgs__action__AimAndFire_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // attempts_used
  if (lhs->attempts_used != rhs->attempts_used) {
    return false;
  }
  // final_error_x
  if (lhs->final_error_x != rhs->final_error_x) {
    return false;
  }
  // final_error_y
  if (lhs->final_error_y != rhs->final_error_y) {
    return false;
  }
  // result_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_message), &(rhs->result_message)))
  {
    return false;
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_Result__copy(
  const ika_msgs__action__AimAndFire_Result * input,
  ika_msgs__action__AimAndFire_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // attempts_used
  output->attempts_used = input->attempts_used;
  // final_error_x
  output->final_error_x = input->final_error_x;
  // final_error_y
  output->final_error_y = input->final_error_y;
  // result_message
  if (!rosidl_runtime_c__String__copy(
      &(input->result_message), &(output->result_message)))
  {
    return false;
  }
  return true;
}

ika_msgs__action__AimAndFire_Result *
ika_msgs__action__AimAndFire_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_Result * msg = (ika_msgs__action__AimAndFire_Result *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ika_msgs__action__AimAndFire_Result));
  bool success = ika_msgs__action__AimAndFire_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ika_msgs__action__AimAndFire_Result__destroy(ika_msgs__action__AimAndFire_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ika_msgs__action__AimAndFire_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ika_msgs__action__AimAndFire_Result__Sequence__init(ika_msgs__action__AimAndFire_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_Result * data = NULL;

  if (size) {
    data = (ika_msgs__action__AimAndFire_Result *)allocator.zero_allocate(size, sizeof(ika_msgs__action__AimAndFire_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ika_msgs__action__AimAndFire_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ika_msgs__action__AimAndFire_Result__fini(&data[i - 1]);
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
ika_msgs__action__AimAndFire_Result__Sequence__fini(ika_msgs__action__AimAndFire_Result__Sequence * array)
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
      ika_msgs__action__AimAndFire_Result__fini(&array->data[i]);
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

ika_msgs__action__AimAndFire_Result__Sequence *
ika_msgs__action__AimAndFire_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_Result__Sequence * array = (ika_msgs__action__AimAndFire_Result__Sequence *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ika_msgs__action__AimAndFire_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ika_msgs__action__AimAndFire_Result__Sequence__destroy(ika_msgs__action__AimAndFire_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ika_msgs__action__AimAndFire_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ika_msgs__action__AimAndFire_Result__Sequence__are_equal(const ika_msgs__action__AimAndFire_Result__Sequence * lhs, const ika_msgs__action__AimAndFire_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ika_msgs__action__AimAndFire_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_Result__Sequence__copy(
  const ika_msgs__action__AimAndFire_Result__Sequence * input,
  ika_msgs__action__AimAndFire_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ika_msgs__action__AimAndFire_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ika_msgs__action__AimAndFire_Result * data =
      (ika_msgs__action__AimAndFire_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ika_msgs__action__AimAndFire_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ika_msgs__action__AimAndFire_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ika_msgs__action__AimAndFire_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ika_msgs__action__AimAndFire_Feedback__init(ika_msgs__action__AimAndFire_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_error_x
  // current_error_y
  // target_locked
  // current_attempt
  // feedback_message
  if (!rosidl_runtime_c__String__init(&msg->feedback_message)) {
    ika_msgs__action__AimAndFire_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
ika_msgs__action__AimAndFire_Feedback__fini(ika_msgs__action__AimAndFire_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_error_x
  // current_error_y
  // target_locked
  // current_attempt
  // feedback_message
  rosidl_runtime_c__String__fini(&msg->feedback_message);
}

bool
ika_msgs__action__AimAndFire_Feedback__are_equal(const ika_msgs__action__AimAndFire_Feedback * lhs, const ika_msgs__action__AimAndFire_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_error_x
  if (lhs->current_error_x != rhs->current_error_x) {
    return false;
  }
  // current_error_y
  if (lhs->current_error_y != rhs->current_error_y) {
    return false;
  }
  // target_locked
  if (lhs->target_locked != rhs->target_locked) {
    return false;
  }
  // current_attempt
  if (lhs->current_attempt != rhs->current_attempt) {
    return false;
  }
  // feedback_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback_message), &(rhs->feedback_message)))
  {
    return false;
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_Feedback__copy(
  const ika_msgs__action__AimAndFire_Feedback * input,
  ika_msgs__action__AimAndFire_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_error_x
  output->current_error_x = input->current_error_x;
  // current_error_y
  output->current_error_y = input->current_error_y;
  // target_locked
  output->target_locked = input->target_locked;
  // current_attempt
  output->current_attempt = input->current_attempt;
  // feedback_message
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback_message), &(output->feedback_message)))
  {
    return false;
  }
  return true;
}

ika_msgs__action__AimAndFire_Feedback *
ika_msgs__action__AimAndFire_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_Feedback * msg = (ika_msgs__action__AimAndFire_Feedback *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ika_msgs__action__AimAndFire_Feedback));
  bool success = ika_msgs__action__AimAndFire_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ika_msgs__action__AimAndFire_Feedback__destroy(ika_msgs__action__AimAndFire_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ika_msgs__action__AimAndFire_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ika_msgs__action__AimAndFire_Feedback__Sequence__init(ika_msgs__action__AimAndFire_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_Feedback * data = NULL;

  if (size) {
    data = (ika_msgs__action__AimAndFire_Feedback *)allocator.zero_allocate(size, sizeof(ika_msgs__action__AimAndFire_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ika_msgs__action__AimAndFire_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ika_msgs__action__AimAndFire_Feedback__fini(&data[i - 1]);
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
ika_msgs__action__AimAndFire_Feedback__Sequence__fini(ika_msgs__action__AimAndFire_Feedback__Sequence * array)
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
      ika_msgs__action__AimAndFire_Feedback__fini(&array->data[i]);
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

ika_msgs__action__AimAndFire_Feedback__Sequence *
ika_msgs__action__AimAndFire_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_Feedback__Sequence * array = (ika_msgs__action__AimAndFire_Feedback__Sequence *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ika_msgs__action__AimAndFire_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ika_msgs__action__AimAndFire_Feedback__Sequence__destroy(ika_msgs__action__AimAndFire_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ika_msgs__action__AimAndFire_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ika_msgs__action__AimAndFire_Feedback__Sequence__are_equal(const ika_msgs__action__AimAndFire_Feedback__Sequence * lhs, const ika_msgs__action__AimAndFire_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ika_msgs__action__AimAndFire_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_Feedback__Sequence__copy(
  const ika_msgs__action__AimAndFire_Feedback__Sequence * input,
  ika_msgs__action__AimAndFire_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ika_msgs__action__AimAndFire_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ika_msgs__action__AimAndFire_Feedback * data =
      (ika_msgs__action__AimAndFire_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ika_msgs__action__AimAndFire_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ika_msgs__action__AimAndFire_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ika_msgs__action__AimAndFire_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__functions.h"

bool
ika_msgs__action__AimAndFire_SendGoal_Request__init(ika_msgs__action__AimAndFire_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ika_msgs__action__AimAndFire_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ika_msgs__action__AimAndFire_Goal__init(&msg->goal)) {
    ika_msgs__action__AimAndFire_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ika_msgs__action__AimAndFire_SendGoal_Request__fini(ika_msgs__action__AimAndFire_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ika_msgs__action__AimAndFire_Goal__fini(&msg->goal);
}

bool
ika_msgs__action__AimAndFire_SendGoal_Request__are_equal(const ika_msgs__action__AimAndFire_SendGoal_Request * lhs, const ika_msgs__action__AimAndFire_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ika_msgs__action__AimAndFire_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_SendGoal_Request__copy(
  const ika_msgs__action__AimAndFire_SendGoal_Request * input,
  ika_msgs__action__AimAndFire_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ika_msgs__action__AimAndFire_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ika_msgs__action__AimAndFire_SendGoal_Request *
ika_msgs__action__AimAndFire_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_SendGoal_Request * msg = (ika_msgs__action__AimAndFire_SendGoal_Request *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ika_msgs__action__AimAndFire_SendGoal_Request));
  bool success = ika_msgs__action__AimAndFire_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ika_msgs__action__AimAndFire_SendGoal_Request__destroy(ika_msgs__action__AimAndFire_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ika_msgs__action__AimAndFire_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ika_msgs__action__AimAndFire_SendGoal_Request__Sequence__init(ika_msgs__action__AimAndFire_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_SendGoal_Request * data = NULL;

  if (size) {
    data = (ika_msgs__action__AimAndFire_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ika_msgs__action__AimAndFire_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ika_msgs__action__AimAndFire_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ika_msgs__action__AimAndFire_SendGoal_Request__fini(&data[i - 1]);
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
ika_msgs__action__AimAndFire_SendGoal_Request__Sequence__fini(ika_msgs__action__AimAndFire_SendGoal_Request__Sequence * array)
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
      ika_msgs__action__AimAndFire_SendGoal_Request__fini(&array->data[i]);
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

ika_msgs__action__AimAndFire_SendGoal_Request__Sequence *
ika_msgs__action__AimAndFire_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_SendGoal_Request__Sequence * array = (ika_msgs__action__AimAndFire_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ika_msgs__action__AimAndFire_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ika_msgs__action__AimAndFire_SendGoal_Request__Sequence__destroy(ika_msgs__action__AimAndFire_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ika_msgs__action__AimAndFire_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ika_msgs__action__AimAndFire_SendGoal_Request__Sequence__are_equal(const ika_msgs__action__AimAndFire_SendGoal_Request__Sequence * lhs, const ika_msgs__action__AimAndFire_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ika_msgs__action__AimAndFire_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_SendGoal_Request__Sequence__copy(
  const ika_msgs__action__AimAndFire_SendGoal_Request__Sequence * input,
  ika_msgs__action__AimAndFire_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ika_msgs__action__AimAndFire_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ika_msgs__action__AimAndFire_SendGoal_Request * data =
      (ika_msgs__action__AimAndFire_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ika_msgs__action__AimAndFire_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ika_msgs__action__AimAndFire_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ika_msgs__action__AimAndFire_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ika_msgs__action__AimAndFire_SendGoal_Response__init(ika_msgs__action__AimAndFire_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ika_msgs__action__AimAndFire_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ika_msgs__action__AimAndFire_SendGoal_Response__fini(ika_msgs__action__AimAndFire_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ika_msgs__action__AimAndFire_SendGoal_Response__are_equal(const ika_msgs__action__AimAndFire_SendGoal_Response * lhs, const ika_msgs__action__AimAndFire_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_SendGoal_Response__copy(
  const ika_msgs__action__AimAndFire_SendGoal_Response * input,
  ika_msgs__action__AimAndFire_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ika_msgs__action__AimAndFire_SendGoal_Response *
ika_msgs__action__AimAndFire_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_SendGoal_Response * msg = (ika_msgs__action__AimAndFire_SendGoal_Response *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ika_msgs__action__AimAndFire_SendGoal_Response));
  bool success = ika_msgs__action__AimAndFire_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ika_msgs__action__AimAndFire_SendGoal_Response__destroy(ika_msgs__action__AimAndFire_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ika_msgs__action__AimAndFire_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ika_msgs__action__AimAndFire_SendGoal_Response__Sequence__init(ika_msgs__action__AimAndFire_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_SendGoal_Response * data = NULL;

  if (size) {
    data = (ika_msgs__action__AimAndFire_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ika_msgs__action__AimAndFire_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ika_msgs__action__AimAndFire_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ika_msgs__action__AimAndFire_SendGoal_Response__fini(&data[i - 1]);
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
ika_msgs__action__AimAndFire_SendGoal_Response__Sequence__fini(ika_msgs__action__AimAndFire_SendGoal_Response__Sequence * array)
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
      ika_msgs__action__AimAndFire_SendGoal_Response__fini(&array->data[i]);
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

ika_msgs__action__AimAndFire_SendGoal_Response__Sequence *
ika_msgs__action__AimAndFire_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_SendGoal_Response__Sequence * array = (ika_msgs__action__AimAndFire_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ika_msgs__action__AimAndFire_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ika_msgs__action__AimAndFire_SendGoal_Response__Sequence__destroy(ika_msgs__action__AimAndFire_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ika_msgs__action__AimAndFire_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ika_msgs__action__AimAndFire_SendGoal_Response__Sequence__are_equal(const ika_msgs__action__AimAndFire_SendGoal_Response__Sequence * lhs, const ika_msgs__action__AimAndFire_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ika_msgs__action__AimAndFire_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_SendGoal_Response__Sequence__copy(
  const ika_msgs__action__AimAndFire_SendGoal_Response__Sequence * input,
  ika_msgs__action__AimAndFire_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ika_msgs__action__AimAndFire_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ika_msgs__action__AimAndFire_SendGoal_Response * data =
      (ika_msgs__action__AimAndFire_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ika_msgs__action__AimAndFire_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ika_msgs__action__AimAndFire_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ika_msgs__action__AimAndFire_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ika_msgs__action__AimAndFire_GetResult_Request__init(ika_msgs__action__AimAndFire_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ika_msgs__action__AimAndFire_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ika_msgs__action__AimAndFire_GetResult_Request__fini(ika_msgs__action__AimAndFire_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ika_msgs__action__AimAndFire_GetResult_Request__are_equal(const ika_msgs__action__AimAndFire_GetResult_Request * lhs, const ika_msgs__action__AimAndFire_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_GetResult_Request__copy(
  const ika_msgs__action__AimAndFire_GetResult_Request * input,
  ika_msgs__action__AimAndFire_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ika_msgs__action__AimAndFire_GetResult_Request *
ika_msgs__action__AimAndFire_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_GetResult_Request * msg = (ika_msgs__action__AimAndFire_GetResult_Request *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ika_msgs__action__AimAndFire_GetResult_Request));
  bool success = ika_msgs__action__AimAndFire_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ika_msgs__action__AimAndFire_GetResult_Request__destroy(ika_msgs__action__AimAndFire_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ika_msgs__action__AimAndFire_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ika_msgs__action__AimAndFire_GetResult_Request__Sequence__init(ika_msgs__action__AimAndFire_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_GetResult_Request * data = NULL;

  if (size) {
    data = (ika_msgs__action__AimAndFire_GetResult_Request *)allocator.zero_allocate(size, sizeof(ika_msgs__action__AimAndFire_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ika_msgs__action__AimAndFire_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ika_msgs__action__AimAndFire_GetResult_Request__fini(&data[i - 1]);
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
ika_msgs__action__AimAndFire_GetResult_Request__Sequence__fini(ika_msgs__action__AimAndFire_GetResult_Request__Sequence * array)
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
      ika_msgs__action__AimAndFire_GetResult_Request__fini(&array->data[i]);
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

ika_msgs__action__AimAndFire_GetResult_Request__Sequence *
ika_msgs__action__AimAndFire_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_GetResult_Request__Sequence * array = (ika_msgs__action__AimAndFire_GetResult_Request__Sequence *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ika_msgs__action__AimAndFire_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ika_msgs__action__AimAndFire_GetResult_Request__Sequence__destroy(ika_msgs__action__AimAndFire_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ika_msgs__action__AimAndFire_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ika_msgs__action__AimAndFire_GetResult_Request__Sequence__are_equal(const ika_msgs__action__AimAndFire_GetResult_Request__Sequence * lhs, const ika_msgs__action__AimAndFire_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ika_msgs__action__AimAndFire_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_GetResult_Request__Sequence__copy(
  const ika_msgs__action__AimAndFire_GetResult_Request__Sequence * input,
  ika_msgs__action__AimAndFire_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ika_msgs__action__AimAndFire_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ika_msgs__action__AimAndFire_GetResult_Request * data =
      (ika_msgs__action__AimAndFire_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ika_msgs__action__AimAndFire_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ika_msgs__action__AimAndFire_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ika_msgs__action__AimAndFire_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__functions.h"

bool
ika_msgs__action__AimAndFire_GetResult_Response__init(ika_msgs__action__AimAndFire_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ika_msgs__action__AimAndFire_Result__init(&msg->result)) {
    ika_msgs__action__AimAndFire_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ika_msgs__action__AimAndFire_GetResult_Response__fini(ika_msgs__action__AimAndFire_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ika_msgs__action__AimAndFire_Result__fini(&msg->result);
}

bool
ika_msgs__action__AimAndFire_GetResult_Response__are_equal(const ika_msgs__action__AimAndFire_GetResult_Response * lhs, const ika_msgs__action__AimAndFire_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ika_msgs__action__AimAndFire_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_GetResult_Response__copy(
  const ika_msgs__action__AimAndFire_GetResult_Response * input,
  ika_msgs__action__AimAndFire_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ika_msgs__action__AimAndFire_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ika_msgs__action__AimAndFire_GetResult_Response *
ika_msgs__action__AimAndFire_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_GetResult_Response * msg = (ika_msgs__action__AimAndFire_GetResult_Response *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ika_msgs__action__AimAndFire_GetResult_Response));
  bool success = ika_msgs__action__AimAndFire_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ika_msgs__action__AimAndFire_GetResult_Response__destroy(ika_msgs__action__AimAndFire_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ika_msgs__action__AimAndFire_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ika_msgs__action__AimAndFire_GetResult_Response__Sequence__init(ika_msgs__action__AimAndFire_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_GetResult_Response * data = NULL;

  if (size) {
    data = (ika_msgs__action__AimAndFire_GetResult_Response *)allocator.zero_allocate(size, sizeof(ika_msgs__action__AimAndFire_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ika_msgs__action__AimAndFire_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ika_msgs__action__AimAndFire_GetResult_Response__fini(&data[i - 1]);
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
ika_msgs__action__AimAndFire_GetResult_Response__Sequence__fini(ika_msgs__action__AimAndFire_GetResult_Response__Sequence * array)
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
      ika_msgs__action__AimAndFire_GetResult_Response__fini(&array->data[i]);
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

ika_msgs__action__AimAndFire_GetResult_Response__Sequence *
ika_msgs__action__AimAndFire_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_GetResult_Response__Sequence * array = (ika_msgs__action__AimAndFire_GetResult_Response__Sequence *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ika_msgs__action__AimAndFire_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ika_msgs__action__AimAndFire_GetResult_Response__Sequence__destroy(ika_msgs__action__AimAndFire_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ika_msgs__action__AimAndFire_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ika_msgs__action__AimAndFire_GetResult_Response__Sequence__are_equal(const ika_msgs__action__AimAndFire_GetResult_Response__Sequence * lhs, const ika_msgs__action__AimAndFire_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ika_msgs__action__AimAndFire_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_GetResult_Response__Sequence__copy(
  const ika_msgs__action__AimAndFire_GetResult_Response__Sequence * input,
  ika_msgs__action__AimAndFire_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ika_msgs__action__AimAndFire_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ika_msgs__action__AimAndFire_GetResult_Response * data =
      (ika_msgs__action__AimAndFire_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ika_msgs__action__AimAndFire_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ika_msgs__action__AimAndFire_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ika_msgs__action__AimAndFire_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ika_msgs/action/detail/aim_and_fire__functions.h"

bool
ika_msgs__action__AimAndFire_FeedbackMessage__init(ika_msgs__action__AimAndFire_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ika_msgs__action__AimAndFire_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ika_msgs__action__AimAndFire_Feedback__init(&msg->feedback)) {
    ika_msgs__action__AimAndFire_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ika_msgs__action__AimAndFire_FeedbackMessage__fini(ika_msgs__action__AimAndFire_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ika_msgs__action__AimAndFire_Feedback__fini(&msg->feedback);
}

bool
ika_msgs__action__AimAndFire_FeedbackMessage__are_equal(const ika_msgs__action__AimAndFire_FeedbackMessage * lhs, const ika_msgs__action__AimAndFire_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ika_msgs__action__AimAndFire_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_FeedbackMessage__copy(
  const ika_msgs__action__AimAndFire_FeedbackMessage * input,
  ika_msgs__action__AimAndFire_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ika_msgs__action__AimAndFire_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ika_msgs__action__AimAndFire_FeedbackMessage *
ika_msgs__action__AimAndFire_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_FeedbackMessage * msg = (ika_msgs__action__AimAndFire_FeedbackMessage *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ika_msgs__action__AimAndFire_FeedbackMessage));
  bool success = ika_msgs__action__AimAndFire_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ika_msgs__action__AimAndFire_FeedbackMessage__destroy(ika_msgs__action__AimAndFire_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ika_msgs__action__AimAndFire_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ika_msgs__action__AimAndFire_FeedbackMessage__Sequence__init(ika_msgs__action__AimAndFire_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_FeedbackMessage * data = NULL;

  if (size) {
    data = (ika_msgs__action__AimAndFire_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ika_msgs__action__AimAndFire_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ika_msgs__action__AimAndFire_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ika_msgs__action__AimAndFire_FeedbackMessage__fini(&data[i - 1]);
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
ika_msgs__action__AimAndFire_FeedbackMessage__Sequence__fini(ika_msgs__action__AimAndFire_FeedbackMessage__Sequence * array)
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
      ika_msgs__action__AimAndFire_FeedbackMessage__fini(&array->data[i]);
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

ika_msgs__action__AimAndFire_FeedbackMessage__Sequence *
ika_msgs__action__AimAndFire_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__action__AimAndFire_FeedbackMessage__Sequence * array = (ika_msgs__action__AimAndFire_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ika_msgs__action__AimAndFire_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ika_msgs__action__AimAndFire_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ika_msgs__action__AimAndFire_FeedbackMessage__Sequence__destroy(ika_msgs__action__AimAndFire_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ika_msgs__action__AimAndFire_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ika_msgs__action__AimAndFire_FeedbackMessage__Sequence__are_equal(const ika_msgs__action__AimAndFire_FeedbackMessage__Sequence * lhs, const ika_msgs__action__AimAndFire_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ika_msgs__action__AimAndFire_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ika_msgs__action__AimAndFire_FeedbackMessage__Sequence__copy(
  const ika_msgs__action__AimAndFire_FeedbackMessage__Sequence * input,
  ika_msgs__action__AimAndFire_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ika_msgs__action__AimAndFire_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ika_msgs__action__AimAndFire_FeedbackMessage * data =
      (ika_msgs__action__AimAndFire_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ika_msgs__action__AimAndFire_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ika_msgs__action__AimAndFire_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ika_msgs__action__AimAndFire_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
