// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controls_msgs:msg/Dump.idl
// generated code does not contain a copyright notice

#ifndef CONTROLS_MSGS__MSG__DETAIL__DUMP__STRUCT_H_
#define CONTROLS_MSGS__MSG__DETAIL__DUMP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Dump in the package controls_msgs.
typedef struct controls_msgs__msg__Dump
{
  double lins;
} controls_msgs__msg__Dump;

// Struct for a sequence of controls_msgs__msg__Dump.
typedef struct controls_msgs__msg__Dump__Sequence
{
  controls_msgs__msg__Dump * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controls_msgs__msg__Dump__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLS_MSGS__MSG__DETAIL__DUMP__STRUCT_H_
