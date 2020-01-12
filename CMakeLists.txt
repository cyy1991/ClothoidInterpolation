cmake_minimum_required(VERSION 3.1)
project(Clothoid_Path_Planning)

set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_BUILD_TYPE Debug)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

#############################
#Dependencies
#############################
#set(PYTHON_INCLUDE_DIR /usr/local/anaconda3/include/python3.7m)
#set(PYTHON_LIBRARIES /usr/local/anaconda3/lib)
find_package(Eigen3 REQUIRED)
find_package(PythonLibs 3.5)
# find_package(OpenCV REQUIRED)

include_directories(${EIGEN3_INCLUDE_DIR})
include_directories(./include)
include_directories(${PYTHON_INCLUDE_DIRS})

##############################
#PathTracking
##############################

add_executable(clothoid_path_planning src/Clothoid.cc src/CubicRootsFlocke.cc src/Triangle2D.cc src/main.cpp)
target_link_libraries(clothoid_path_planning ${PYTHON_LIBRARIES})
