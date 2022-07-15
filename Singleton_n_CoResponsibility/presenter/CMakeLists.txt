# CMakeList.txt : CMake project for RISCDecoder, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
# project ("Shape_Project")
set (CMAKE_CXX_STANDARD 17)
# Add source to this project's executable.
add_executable (Shape_Project "main.cc" "main.h" "Shapes/Shape.h" "Shapes/Shape.cc" "Shapes/Circle.h" "Shapes/Circle.cc" "Shapes/Rectangle.h" "Shapes/Rectangle.cc" "Shapes/Triangle.h" "Shapes/Triangle.cc" "Singleton.h" "Singleton.cc")

# TODO: Add tests and install targets if needed.
