// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from assignment1:action/Pos.idl
// generated code does not contain a copyright notice
#include "assignment1/action/detail/pos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
assignment1__action__Pos_Goal__init(assignment1__action__Pos_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
assignment1__action__Pos_Goal__fini(assignment1__action__Pos_Goal * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

bool
assignment1__action__Pos_Goal__are_equal(const assignment1__action__Pos_Goal * lhs, const assignment1__action__Pos_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
assignment1__action__Pos_Goal__copy(
  const assignment1__action__Pos_Goal * input,
  assignment1__action__Pos_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

assignment1__action__Pos_Goal *
assignment1__action__Pos_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_Goal * msg = (assignment1__action__Pos_Goal *)allocator.allocate(sizeof(assignment1__action__Pos_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment1__action__Pos_Goal));
  bool success = assignment1__action__Pos_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assignment1__action__Pos_Goal__destroy(assignment1__action__Pos_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assignment1__action__Pos_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assignment1__action__Pos_Goal__Sequence__init(assignment1__action__Pos_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_Goal * data = NULL;

  if (size) {
    data = (assignment1__action__Pos_Goal *)allocator.zero_allocate(size, sizeof(assignment1__action__Pos_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment1__action__Pos_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment1__action__Pos_Goal__fini(&data[i - 1]);
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
assignment1__action__Pos_Goal__Sequence__fini(assignment1__action__Pos_Goal__Sequence * array)
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
      assignment1__action__Pos_Goal__fini(&array->data[i]);
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

assignment1__action__Pos_Goal__Sequence *
assignment1__action__Pos_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_Goal__Sequence * array = (assignment1__action__Pos_Goal__Sequence *)allocator.allocate(sizeof(assignment1__action__Pos_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assignment1__action__Pos_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assignment1__action__Pos_Goal__Sequence__destroy(assignment1__action__Pos_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assignment1__action__Pos_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assignment1__action__Pos_Goal__Sequence__are_equal(const assignment1__action__Pos_Goal__Sequence * lhs, const assignment1__action__Pos_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment1__action__Pos_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment1__action__Pos_Goal__Sequence__copy(
  const assignment1__action__Pos_Goal__Sequence * input,
  assignment1__action__Pos_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment1__action__Pos_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assignment1__action__Pos_Goal * data =
      (assignment1__action__Pos_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment1__action__Pos_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assignment1__action__Pos_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment1__action__Pos_Goal__copy(
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
assignment1__action__Pos_Result__init(assignment1__action__Pos_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result_message
  if (!rosidl_runtime_c__String__init(&msg->result_message)) {
    assignment1__action__Pos_Result__fini(msg);
    return false;
  }
  return true;
}

void
assignment1__action__Pos_Result__fini(assignment1__action__Pos_Result * msg)
{
  if (!msg) {
    return;
  }
  // result_message
  rosidl_runtime_c__String__fini(&msg->result_message);
}

bool
assignment1__action__Pos_Result__are_equal(const assignment1__action__Pos_Result * lhs, const assignment1__action__Pos_Result * rhs)
{
  if (!lhs || !rhs) {
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
assignment1__action__Pos_Result__copy(
  const assignment1__action__Pos_Result * input,
  assignment1__action__Pos_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result_message
  if (!rosidl_runtime_c__String__copy(
      &(input->result_message), &(output->result_message)))
  {
    return false;
  }
  return true;
}

assignment1__action__Pos_Result *
assignment1__action__Pos_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_Result * msg = (assignment1__action__Pos_Result *)allocator.allocate(sizeof(assignment1__action__Pos_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment1__action__Pos_Result));
  bool success = assignment1__action__Pos_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assignment1__action__Pos_Result__destroy(assignment1__action__Pos_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assignment1__action__Pos_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assignment1__action__Pos_Result__Sequence__init(assignment1__action__Pos_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_Result * data = NULL;

  if (size) {
    data = (assignment1__action__Pos_Result *)allocator.zero_allocate(size, sizeof(assignment1__action__Pos_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment1__action__Pos_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment1__action__Pos_Result__fini(&data[i - 1]);
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
assignment1__action__Pos_Result__Sequence__fini(assignment1__action__Pos_Result__Sequence * array)
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
      assignment1__action__Pos_Result__fini(&array->data[i]);
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

assignment1__action__Pos_Result__Sequence *
assignment1__action__Pos_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_Result__Sequence * array = (assignment1__action__Pos_Result__Sequence *)allocator.allocate(sizeof(assignment1__action__Pos_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assignment1__action__Pos_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assignment1__action__Pos_Result__Sequence__destroy(assignment1__action__Pos_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assignment1__action__Pos_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assignment1__action__Pos_Result__Sequence__are_equal(const assignment1__action__Pos_Result__Sequence * lhs, const assignment1__action__Pos_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment1__action__Pos_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment1__action__Pos_Result__Sequence__copy(
  const assignment1__action__Pos_Result__Sequence * input,
  assignment1__action__Pos_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment1__action__Pos_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assignment1__action__Pos_Result * data =
      (assignment1__action__Pos_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment1__action__Pos_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assignment1__action__Pos_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment1__action__Pos_Result__copy(
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
assignment1__action__Pos_Feedback__init(assignment1__action__Pos_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback_message
  if (!rosidl_runtime_c__String__init(&msg->feedback_message)) {
    assignment1__action__Pos_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
assignment1__action__Pos_Feedback__fini(assignment1__action__Pos_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback_message
  rosidl_runtime_c__String__fini(&msg->feedback_message);
}

bool
assignment1__action__Pos_Feedback__are_equal(const assignment1__action__Pos_Feedback * lhs, const assignment1__action__Pos_Feedback * rhs)
{
  if (!lhs || !rhs) {
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
assignment1__action__Pos_Feedback__copy(
  const assignment1__action__Pos_Feedback * input,
  assignment1__action__Pos_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback_message
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback_message), &(output->feedback_message)))
  {
    return false;
  }
  return true;
}

assignment1__action__Pos_Feedback *
assignment1__action__Pos_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_Feedback * msg = (assignment1__action__Pos_Feedback *)allocator.allocate(sizeof(assignment1__action__Pos_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment1__action__Pos_Feedback));
  bool success = assignment1__action__Pos_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assignment1__action__Pos_Feedback__destroy(assignment1__action__Pos_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assignment1__action__Pos_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assignment1__action__Pos_Feedback__Sequence__init(assignment1__action__Pos_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_Feedback * data = NULL;

  if (size) {
    data = (assignment1__action__Pos_Feedback *)allocator.zero_allocate(size, sizeof(assignment1__action__Pos_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment1__action__Pos_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment1__action__Pos_Feedback__fini(&data[i - 1]);
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
assignment1__action__Pos_Feedback__Sequence__fini(assignment1__action__Pos_Feedback__Sequence * array)
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
      assignment1__action__Pos_Feedback__fini(&array->data[i]);
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

assignment1__action__Pos_Feedback__Sequence *
assignment1__action__Pos_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_Feedback__Sequence * array = (assignment1__action__Pos_Feedback__Sequence *)allocator.allocate(sizeof(assignment1__action__Pos_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assignment1__action__Pos_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assignment1__action__Pos_Feedback__Sequence__destroy(assignment1__action__Pos_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assignment1__action__Pos_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assignment1__action__Pos_Feedback__Sequence__are_equal(const assignment1__action__Pos_Feedback__Sequence * lhs, const assignment1__action__Pos_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment1__action__Pos_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment1__action__Pos_Feedback__Sequence__copy(
  const assignment1__action__Pos_Feedback__Sequence * input,
  assignment1__action__Pos_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment1__action__Pos_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assignment1__action__Pos_Feedback * data =
      (assignment1__action__Pos_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment1__action__Pos_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assignment1__action__Pos_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment1__action__Pos_Feedback__copy(
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
// #include "assignment1/action/detail/pos__functions.h"

bool
assignment1__action__Pos_SendGoal_Request__init(assignment1__action__Pos_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    assignment1__action__Pos_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!assignment1__action__Pos_Goal__init(&msg->goal)) {
    assignment1__action__Pos_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
assignment1__action__Pos_SendGoal_Request__fini(assignment1__action__Pos_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  assignment1__action__Pos_Goal__fini(&msg->goal);
}

bool
assignment1__action__Pos_SendGoal_Request__are_equal(const assignment1__action__Pos_SendGoal_Request * lhs, const assignment1__action__Pos_SendGoal_Request * rhs)
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
  if (!assignment1__action__Pos_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
assignment1__action__Pos_SendGoal_Request__copy(
  const assignment1__action__Pos_SendGoal_Request * input,
  assignment1__action__Pos_SendGoal_Request * output)
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
  if (!assignment1__action__Pos_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

assignment1__action__Pos_SendGoal_Request *
assignment1__action__Pos_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_SendGoal_Request * msg = (assignment1__action__Pos_SendGoal_Request *)allocator.allocate(sizeof(assignment1__action__Pos_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment1__action__Pos_SendGoal_Request));
  bool success = assignment1__action__Pos_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assignment1__action__Pos_SendGoal_Request__destroy(assignment1__action__Pos_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assignment1__action__Pos_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assignment1__action__Pos_SendGoal_Request__Sequence__init(assignment1__action__Pos_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_SendGoal_Request * data = NULL;

  if (size) {
    data = (assignment1__action__Pos_SendGoal_Request *)allocator.zero_allocate(size, sizeof(assignment1__action__Pos_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment1__action__Pos_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment1__action__Pos_SendGoal_Request__fini(&data[i - 1]);
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
assignment1__action__Pos_SendGoal_Request__Sequence__fini(assignment1__action__Pos_SendGoal_Request__Sequence * array)
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
      assignment1__action__Pos_SendGoal_Request__fini(&array->data[i]);
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

assignment1__action__Pos_SendGoal_Request__Sequence *
assignment1__action__Pos_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_SendGoal_Request__Sequence * array = (assignment1__action__Pos_SendGoal_Request__Sequence *)allocator.allocate(sizeof(assignment1__action__Pos_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assignment1__action__Pos_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assignment1__action__Pos_SendGoal_Request__Sequence__destroy(assignment1__action__Pos_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assignment1__action__Pos_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assignment1__action__Pos_SendGoal_Request__Sequence__are_equal(const assignment1__action__Pos_SendGoal_Request__Sequence * lhs, const assignment1__action__Pos_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment1__action__Pos_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment1__action__Pos_SendGoal_Request__Sequence__copy(
  const assignment1__action__Pos_SendGoal_Request__Sequence * input,
  assignment1__action__Pos_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment1__action__Pos_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assignment1__action__Pos_SendGoal_Request * data =
      (assignment1__action__Pos_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment1__action__Pos_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assignment1__action__Pos_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment1__action__Pos_SendGoal_Request__copy(
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
assignment1__action__Pos_SendGoal_Response__init(assignment1__action__Pos_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    assignment1__action__Pos_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
assignment1__action__Pos_SendGoal_Response__fini(assignment1__action__Pos_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
assignment1__action__Pos_SendGoal_Response__are_equal(const assignment1__action__Pos_SendGoal_Response * lhs, const assignment1__action__Pos_SendGoal_Response * rhs)
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
assignment1__action__Pos_SendGoal_Response__copy(
  const assignment1__action__Pos_SendGoal_Response * input,
  assignment1__action__Pos_SendGoal_Response * output)
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

assignment1__action__Pos_SendGoal_Response *
assignment1__action__Pos_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_SendGoal_Response * msg = (assignment1__action__Pos_SendGoal_Response *)allocator.allocate(sizeof(assignment1__action__Pos_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment1__action__Pos_SendGoal_Response));
  bool success = assignment1__action__Pos_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assignment1__action__Pos_SendGoal_Response__destroy(assignment1__action__Pos_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assignment1__action__Pos_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assignment1__action__Pos_SendGoal_Response__Sequence__init(assignment1__action__Pos_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_SendGoal_Response * data = NULL;

  if (size) {
    data = (assignment1__action__Pos_SendGoal_Response *)allocator.zero_allocate(size, sizeof(assignment1__action__Pos_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment1__action__Pos_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment1__action__Pos_SendGoal_Response__fini(&data[i - 1]);
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
assignment1__action__Pos_SendGoal_Response__Sequence__fini(assignment1__action__Pos_SendGoal_Response__Sequence * array)
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
      assignment1__action__Pos_SendGoal_Response__fini(&array->data[i]);
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

assignment1__action__Pos_SendGoal_Response__Sequence *
assignment1__action__Pos_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_SendGoal_Response__Sequence * array = (assignment1__action__Pos_SendGoal_Response__Sequence *)allocator.allocate(sizeof(assignment1__action__Pos_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assignment1__action__Pos_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assignment1__action__Pos_SendGoal_Response__Sequence__destroy(assignment1__action__Pos_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assignment1__action__Pos_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assignment1__action__Pos_SendGoal_Response__Sequence__are_equal(const assignment1__action__Pos_SendGoal_Response__Sequence * lhs, const assignment1__action__Pos_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment1__action__Pos_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment1__action__Pos_SendGoal_Response__Sequence__copy(
  const assignment1__action__Pos_SendGoal_Response__Sequence * input,
  assignment1__action__Pos_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment1__action__Pos_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assignment1__action__Pos_SendGoal_Response * data =
      (assignment1__action__Pos_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment1__action__Pos_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assignment1__action__Pos_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment1__action__Pos_SendGoal_Response__copy(
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
assignment1__action__Pos_GetResult_Request__init(assignment1__action__Pos_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    assignment1__action__Pos_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
assignment1__action__Pos_GetResult_Request__fini(assignment1__action__Pos_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
assignment1__action__Pos_GetResult_Request__are_equal(const assignment1__action__Pos_GetResult_Request * lhs, const assignment1__action__Pos_GetResult_Request * rhs)
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
assignment1__action__Pos_GetResult_Request__copy(
  const assignment1__action__Pos_GetResult_Request * input,
  assignment1__action__Pos_GetResult_Request * output)
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

assignment1__action__Pos_GetResult_Request *
assignment1__action__Pos_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_GetResult_Request * msg = (assignment1__action__Pos_GetResult_Request *)allocator.allocate(sizeof(assignment1__action__Pos_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment1__action__Pos_GetResult_Request));
  bool success = assignment1__action__Pos_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assignment1__action__Pos_GetResult_Request__destroy(assignment1__action__Pos_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assignment1__action__Pos_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assignment1__action__Pos_GetResult_Request__Sequence__init(assignment1__action__Pos_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_GetResult_Request * data = NULL;

  if (size) {
    data = (assignment1__action__Pos_GetResult_Request *)allocator.zero_allocate(size, sizeof(assignment1__action__Pos_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment1__action__Pos_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment1__action__Pos_GetResult_Request__fini(&data[i - 1]);
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
assignment1__action__Pos_GetResult_Request__Sequence__fini(assignment1__action__Pos_GetResult_Request__Sequence * array)
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
      assignment1__action__Pos_GetResult_Request__fini(&array->data[i]);
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

assignment1__action__Pos_GetResult_Request__Sequence *
assignment1__action__Pos_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_GetResult_Request__Sequence * array = (assignment1__action__Pos_GetResult_Request__Sequence *)allocator.allocate(sizeof(assignment1__action__Pos_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assignment1__action__Pos_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assignment1__action__Pos_GetResult_Request__Sequence__destroy(assignment1__action__Pos_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assignment1__action__Pos_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assignment1__action__Pos_GetResult_Request__Sequence__are_equal(const assignment1__action__Pos_GetResult_Request__Sequence * lhs, const assignment1__action__Pos_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment1__action__Pos_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment1__action__Pos_GetResult_Request__Sequence__copy(
  const assignment1__action__Pos_GetResult_Request__Sequence * input,
  assignment1__action__Pos_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment1__action__Pos_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assignment1__action__Pos_GetResult_Request * data =
      (assignment1__action__Pos_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment1__action__Pos_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assignment1__action__Pos_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment1__action__Pos_GetResult_Request__copy(
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
// #include "assignment1/action/detail/pos__functions.h"

bool
assignment1__action__Pos_GetResult_Response__init(assignment1__action__Pos_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!assignment1__action__Pos_Result__init(&msg->result)) {
    assignment1__action__Pos_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
assignment1__action__Pos_GetResult_Response__fini(assignment1__action__Pos_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  assignment1__action__Pos_Result__fini(&msg->result);
}

bool
assignment1__action__Pos_GetResult_Response__are_equal(const assignment1__action__Pos_GetResult_Response * lhs, const assignment1__action__Pos_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!assignment1__action__Pos_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
assignment1__action__Pos_GetResult_Response__copy(
  const assignment1__action__Pos_GetResult_Response * input,
  assignment1__action__Pos_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!assignment1__action__Pos_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

assignment1__action__Pos_GetResult_Response *
assignment1__action__Pos_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_GetResult_Response * msg = (assignment1__action__Pos_GetResult_Response *)allocator.allocate(sizeof(assignment1__action__Pos_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment1__action__Pos_GetResult_Response));
  bool success = assignment1__action__Pos_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assignment1__action__Pos_GetResult_Response__destroy(assignment1__action__Pos_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assignment1__action__Pos_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assignment1__action__Pos_GetResult_Response__Sequence__init(assignment1__action__Pos_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_GetResult_Response * data = NULL;

  if (size) {
    data = (assignment1__action__Pos_GetResult_Response *)allocator.zero_allocate(size, sizeof(assignment1__action__Pos_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment1__action__Pos_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment1__action__Pos_GetResult_Response__fini(&data[i - 1]);
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
assignment1__action__Pos_GetResult_Response__Sequence__fini(assignment1__action__Pos_GetResult_Response__Sequence * array)
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
      assignment1__action__Pos_GetResult_Response__fini(&array->data[i]);
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

assignment1__action__Pos_GetResult_Response__Sequence *
assignment1__action__Pos_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_GetResult_Response__Sequence * array = (assignment1__action__Pos_GetResult_Response__Sequence *)allocator.allocate(sizeof(assignment1__action__Pos_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assignment1__action__Pos_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assignment1__action__Pos_GetResult_Response__Sequence__destroy(assignment1__action__Pos_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assignment1__action__Pos_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assignment1__action__Pos_GetResult_Response__Sequence__are_equal(const assignment1__action__Pos_GetResult_Response__Sequence * lhs, const assignment1__action__Pos_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment1__action__Pos_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment1__action__Pos_GetResult_Response__Sequence__copy(
  const assignment1__action__Pos_GetResult_Response__Sequence * input,
  assignment1__action__Pos_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment1__action__Pos_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assignment1__action__Pos_GetResult_Response * data =
      (assignment1__action__Pos_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment1__action__Pos_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assignment1__action__Pos_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment1__action__Pos_GetResult_Response__copy(
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
// #include "assignment1/action/detail/pos__functions.h"

bool
assignment1__action__Pos_FeedbackMessage__init(assignment1__action__Pos_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    assignment1__action__Pos_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!assignment1__action__Pos_Feedback__init(&msg->feedback)) {
    assignment1__action__Pos_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
assignment1__action__Pos_FeedbackMessage__fini(assignment1__action__Pos_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  assignment1__action__Pos_Feedback__fini(&msg->feedback);
}

bool
assignment1__action__Pos_FeedbackMessage__are_equal(const assignment1__action__Pos_FeedbackMessage * lhs, const assignment1__action__Pos_FeedbackMessage * rhs)
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
  if (!assignment1__action__Pos_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
assignment1__action__Pos_FeedbackMessage__copy(
  const assignment1__action__Pos_FeedbackMessage * input,
  assignment1__action__Pos_FeedbackMessage * output)
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
  if (!assignment1__action__Pos_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

assignment1__action__Pos_FeedbackMessage *
assignment1__action__Pos_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_FeedbackMessage * msg = (assignment1__action__Pos_FeedbackMessage *)allocator.allocate(sizeof(assignment1__action__Pos_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment1__action__Pos_FeedbackMessage));
  bool success = assignment1__action__Pos_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
assignment1__action__Pos_FeedbackMessage__destroy(assignment1__action__Pos_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    assignment1__action__Pos_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
assignment1__action__Pos_FeedbackMessage__Sequence__init(assignment1__action__Pos_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_FeedbackMessage * data = NULL;

  if (size) {
    data = (assignment1__action__Pos_FeedbackMessage *)allocator.zero_allocate(size, sizeof(assignment1__action__Pos_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment1__action__Pos_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment1__action__Pos_FeedbackMessage__fini(&data[i - 1]);
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
assignment1__action__Pos_FeedbackMessage__Sequence__fini(assignment1__action__Pos_FeedbackMessage__Sequence * array)
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
      assignment1__action__Pos_FeedbackMessage__fini(&array->data[i]);
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

assignment1__action__Pos_FeedbackMessage__Sequence *
assignment1__action__Pos_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  assignment1__action__Pos_FeedbackMessage__Sequence * array = (assignment1__action__Pos_FeedbackMessage__Sequence *)allocator.allocate(sizeof(assignment1__action__Pos_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = assignment1__action__Pos_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
assignment1__action__Pos_FeedbackMessage__Sequence__destroy(assignment1__action__Pos_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    assignment1__action__Pos_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
assignment1__action__Pos_FeedbackMessage__Sequence__are_equal(const assignment1__action__Pos_FeedbackMessage__Sequence * lhs, const assignment1__action__Pos_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment1__action__Pos_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment1__action__Pos_FeedbackMessage__Sequence__copy(
  const assignment1__action__Pos_FeedbackMessage__Sequence * input,
  assignment1__action__Pos_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment1__action__Pos_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    assignment1__action__Pos_FeedbackMessage * data =
      (assignment1__action__Pos_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment1__action__Pos_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          assignment1__action__Pos_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment1__action__Pos_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
