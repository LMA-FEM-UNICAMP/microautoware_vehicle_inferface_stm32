// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_perception_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT__FUNCTIONS_H_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_perception_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_perception_msgs/msg/detail/tracked_object__struct.h"

/// Initialize msg/TrackedObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_perception_msgs__msg__TrackedObject
 * )) before or use
 * autoware_perception_msgs__msg__TrackedObject__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_perception_msgs
bool
autoware_perception_msgs__msg__TrackedObject__init(autoware_perception_msgs__msg__TrackedObject * msg);

/// Finalize msg/TrackedObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_perception_msgs
void
autoware_perception_msgs__msg__TrackedObject__fini(autoware_perception_msgs__msg__TrackedObject * msg);

/// Create msg/TrackedObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_perception_msgs__msg__TrackedObject__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_perception_msgs
autoware_perception_msgs__msg__TrackedObject *
autoware_perception_msgs__msg__TrackedObject__create();

/// Destroy msg/TrackedObject message.
/**
 * It calls
 * autoware_perception_msgs__msg__TrackedObject__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_perception_msgs
void
autoware_perception_msgs__msg__TrackedObject__destroy(autoware_perception_msgs__msg__TrackedObject * msg);

/// Check for msg/TrackedObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_perception_msgs
bool
autoware_perception_msgs__msg__TrackedObject__are_equal(const autoware_perception_msgs__msg__TrackedObject * lhs, const autoware_perception_msgs__msg__TrackedObject * rhs);

/// Copy a msg/TrackedObject message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_perception_msgs
bool
autoware_perception_msgs__msg__TrackedObject__copy(
  const autoware_perception_msgs__msg__TrackedObject * input,
  autoware_perception_msgs__msg__TrackedObject * output);

/// Initialize array of msg/TrackedObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_perception_msgs__msg__TrackedObject__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_perception_msgs
bool
autoware_perception_msgs__msg__TrackedObject__Sequence__init(autoware_perception_msgs__msg__TrackedObject__Sequence * array, size_t size);

/// Finalize array of msg/TrackedObject messages.
/**
 * It calls
 * autoware_perception_msgs__msg__TrackedObject__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_perception_msgs
void
autoware_perception_msgs__msg__TrackedObject__Sequence__fini(autoware_perception_msgs__msg__TrackedObject__Sequence * array);

/// Create array of msg/TrackedObject messages.
/**
 * It allocates the memory for the array and calls
 * autoware_perception_msgs__msg__TrackedObject__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_perception_msgs
autoware_perception_msgs__msg__TrackedObject__Sequence *
autoware_perception_msgs__msg__TrackedObject__Sequence__create(size_t size);

/// Destroy array of msg/TrackedObject messages.
/**
 * It calls
 * autoware_perception_msgs__msg__TrackedObject__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_perception_msgs
void
autoware_perception_msgs__msg__TrackedObject__Sequence__destroy(autoware_perception_msgs__msg__TrackedObject__Sequence * array);

/// Check for msg/TrackedObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_perception_msgs
bool
autoware_perception_msgs__msg__TrackedObject__Sequence__are_equal(const autoware_perception_msgs__msg__TrackedObject__Sequence * lhs, const autoware_perception_msgs__msg__TrackedObject__Sequence * rhs);

/// Copy an array of msg/TrackedObject messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_perception_msgs
bool
autoware_perception_msgs__msg__TrackedObject__Sequence__copy(
  const autoware_perception_msgs__msg__TrackedObject__Sequence * input,
  autoware_perception_msgs__msg__TrackedObject__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT__FUNCTIONS_H_