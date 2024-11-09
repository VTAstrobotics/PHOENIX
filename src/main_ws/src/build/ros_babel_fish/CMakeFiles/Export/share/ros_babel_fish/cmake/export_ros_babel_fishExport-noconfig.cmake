#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ros_babel_fish::ros_babel_fish" for configuration ""
set_property(TARGET ros_babel_fish::ros_babel_fish APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ros_babel_fish::ros_babel_fish PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libros_babel_fish.so"
  IMPORTED_SONAME_NOCONFIG "libros_babel_fish.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ros_babel_fish::ros_babel_fish )
list(APPEND _IMPORT_CHECK_FILES_FOR_ros_babel_fish::ros_babel_fish "${_IMPORT_PREFIX}/lib/libros_babel_fish.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
