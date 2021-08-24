cmake_minimum_required(VERSION 3.5)
project(gpm_scara)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(gpm_interfaces REQUIRED)

add_executable(scara_handler src/scara_handler.cpp)
ament_target_dependencies(scara_handler rclcpp gpm_interfaces)

install(TARGETS
  scara_handler
  DESTINATION lib/${PROJECT_NAME})

ament_package()