// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_map_msgs:msg/LaneletMapMetaData.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_META_DATA__STRUCT_H_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_META_DATA__STRUCT_H_

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
// Member 'metadata_list'
#include "autoware_map_msgs/msg/detail/lanelet_map_cell_meta_data__struct.h"

/// Struct defined in msg/LaneletMapMetaData in the package autoware_map_msgs.
/**
  * Header
 */
typedef struct autoware_map_msgs__msg__LaneletMapMetaData
{
  std_msgs__msg__Header header;
  autoware_map_msgs__msg__LaneletMapCellMetaData__Sequence metadata_list;
} autoware_map_msgs__msg__LaneletMapMetaData;

// Struct for a sequence of autoware_map_msgs__msg__LaneletMapMetaData.
typedef struct autoware_map_msgs__msg__LaneletMapMetaData__Sequence
{
  autoware_map_msgs__msg__LaneletMapMetaData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_map_msgs__msg__LaneletMapMetaData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_META_DATA__STRUCT_H_
