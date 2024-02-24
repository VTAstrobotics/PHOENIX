cmake_minimum_required(VERSION 3.8)
project(controls)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(controls_msgs REQUIRED)

# dependencies to run unit tests
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

add_executable(drivetrain src/drivetrain.cpp)
ament_target_dependencies(drivetrain rclcpp controls_msgs)
add_executable(dig src/dig.cpp)
ament_target_dependencies(dig rclcpp controls_msgs)
add_executable(dump src/dump.cpp)
ament_target_dependencies(dump rclcpp controls_msgs)


install(TARGETS drivetrain dig dump DESTINATION lib/${PROJECT_NAME})
install(DIRECTORY include/ DESTINATION include)

ament_export_include_directories(include)

ament_package()
