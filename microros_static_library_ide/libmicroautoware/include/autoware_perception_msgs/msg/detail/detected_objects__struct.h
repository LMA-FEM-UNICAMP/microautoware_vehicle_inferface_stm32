// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_perception_msgs:msg/DetectedObjects.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS__STRUCT_H_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'objects'
#include "autoware_perception_msgs/msg/detail/detected_object__struct.h"

/// Struct defined in msg/DetectedObjects in the package autoware_perception_msgs.
typedef struct autoware_perception_msgs__msg__DetectedObjects
{
  std_msgs__msg__Header header;
  autoware_perception_msgs__msg__DetectedObject__Sequence objects;
} autoware_perception_msgs__msg__DetectedObjects;

// Struct for a sequence of autoware_perception_msgs__msg__DetectedObjects.
typedef struct autoware_perception_msgs__msg__DetectedObjects__Sequence
{
  autoware_perception_msgs__msg__DetectedObjects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_perception_msgs__msg__DetectedObjects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS__STRUCT_H_
