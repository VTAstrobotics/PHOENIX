# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_micro_controls_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED micro_controls_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(micro_controls_FOUND FALSE)
  elseif(NOT micro_controls_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(micro_controls_FOUND FALSE)
  endif()
  return()
endif()
set(_micro_controls_CONFIG_INCLUDED TRUE)

# output package information
if(NOT micro_controls_FIND_QUIETLY)
  message(STATUS "Found micro_controls: 0.0.0 (${micro_controls_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'micro_controls' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${micro_controls_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(micro_controls_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${micro_controls_DIR}/${_extra}")
endforeach()
