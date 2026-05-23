// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ika_msgs:msg/EnvironmentData.idl
// generated code does not contain a copyright notice
#include "ika_msgs/msg/detail/environment_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sensor_status`
#include "rosidl_runtime_c/string_functions.h"

bool
ika_msgs__msg__EnvironmentData__init(ika_msgs__msg__EnvironmentData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ika_msgs__msg__EnvironmentData__fini(msg);
    return false;
  }
  // temperature_celsius
  // relative_humidity_percent
  // pressure_pa
  // altitude_m
  // rain_detected
  // water_detected
  // sensor_status
  if (!rosidl_runtime_c__String__init(&msg->sensor_status)) {
    ika_msgs__msg__EnvironmentData__fini(msg);
    return false;
  }
  return true;
}

void
ika_msgs__msg__EnvironmentData__fini(ika_msgs__msg__EnvironmentData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // temperature_celsius
  // relative_humidity_percent
  // pressure_pa
  // altitude_m
  // rain_detected
  // water_detected
  // sensor_status
  rosidl_runtime_c__String__fini(&msg->sensor_status);
}

bool
ika_msgs__msg__EnvironmentData__are_equal(const ika_msgs__msg__EnvironmentData * lhs, const ika_msgs__msg__EnvironmentData * rhs)
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
  // temperature_celsius
  if (lhs->temperature_celsius != rhs->temperature_celsius) {
    return false;
  }
  // relative_humidity_percent
  if (lhs->relative_humidity_percent != rhs->relative_humidity_percent) {
    return false;
  }
  // pressure_pa
  if (lhs->pressure_pa != rhs->pressure_pa) {
    return false;
  }
  // altitude_m
  if (lhs->altitude_m != rhs->altitude_m) {
    return false;
  }
  // rain_detected
  if (lhs->rain_detected != rhs->rain_detected) {
    return false;
  }
  // water_detected
  if (lhs->water_detected != rhs->water_detected) {
    return false;
  }
  // sensor_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sensor_status), &(rhs->sensor_status)))
  {
    return false;
  }
  return true;
}

bool
ika_msgs__msg__EnvironmentData__copy(
  const ika_msgs__msg__EnvironmentData * input,
  ika_msgs__msg__EnvironmentData * output)
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
  // temperature_celsius
  output->temperature_celsius = input->temperature_celsius;
  // relative_humidity_percent
  output->relative_humidity_percent = input->relative_humidity_percent;
  // pressure_pa
  output->pressure_pa = input->pressure_pa;
  // altitude_m
  output->altitude_m = input->altitude_m;
  // rain_detected
  output->rain_detected = input->rain_detected;
  // water_detected
  output->water_detected = input->water_detected;
  // sensor_status
  if (!rosidl_runtime_c__String__copy(
      &(input->sensor_status), &(output->sensor_status)))
  {
    return false;
  }
  return true;
}

ika_msgs__msg__EnvironmentData *
ika_msgs__msg__EnvironmentData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__msg__EnvironmentData * msg = (ika_msgs__msg__EnvironmentData *)allocator.allocate(sizeof(ika_msgs__msg__EnvironmentData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ika_msgs__msg__EnvironmentData));
  bool success = ika_msgs__msg__EnvironmentData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ika_msgs__msg__EnvironmentData__destroy(ika_msgs__msg__EnvironmentData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ika_msgs__msg__EnvironmentData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ika_msgs__msg__EnvironmentData__Sequence__init(ika_msgs__msg__EnvironmentData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__msg__EnvironmentData * data = NULL;

  if (size) {
    data = (ika_msgs__msg__EnvironmentData *)allocator.zero_allocate(size, sizeof(ika_msgs__msg__EnvironmentData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ika_msgs__msg__EnvironmentData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ika_msgs__msg__EnvironmentData__fini(&data[i - 1]);
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
ika_msgs__msg__EnvironmentData__Sequence__fini(ika_msgs__msg__EnvironmentData__Sequence * array)
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
      ika_msgs__msg__EnvironmentData__fini(&array->data[i]);
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

ika_msgs__msg__EnvironmentData__Sequence *
ika_msgs__msg__EnvironmentData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ika_msgs__msg__EnvironmentData__Sequence * array = (ika_msgs__msg__EnvironmentData__Sequence *)allocator.allocate(sizeof(ika_msgs__msg__EnvironmentData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ika_msgs__msg__EnvironmentData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ika_msgs__msg__EnvironmentData__Sequence__destroy(ika_msgs__msg__EnvironmentData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ika_msgs__msg__EnvironmentData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ika_msgs__msg__EnvironmentData__Sequence__are_equal(const ika_msgs__msg__EnvironmentData__Sequence * lhs, const ika_msgs__msg__EnvironmentData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ika_msgs__msg__EnvironmentData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ika_msgs__msg__EnvironmentData__Sequence__copy(
  const ika_msgs__msg__EnvironmentData__Sequence * input,
  ika_msgs__msg__EnvironmentData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ika_msgs__msg__EnvironmentData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ika_msgs__msg__EnvironmentData * data =
      (ika_msgs__msg__EnvironmentData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ika_msgs__msg__EnvironmentData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ika_msgs__msg__EnvironmentData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ika_msgs__msg__EnvironmentData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
