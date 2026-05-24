cmake_minimum_required(VERSION 3.8)
project(ika_gazebo)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(ika_description REQUIRED)

install(
  DIRECTORY launch models worlds
  DESTINATION share/${PROJECT_NAME}
)

install(
  PROGRAMS
    scripts/sliding_obstacle_controller.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
