project(opencv_test)

set (CMAKE_CXX_STANDARD 11)
cmake_minimum_required(VERSION 2.8)
find_package( OpenCV 2 REQUIRED )
include_directories(${OpenCV_INCLUDE_DIRS}) 
 
add_executable(test1 test1.cpp  )
target_link_libraries( test1 ${OpenCV_LIBS} )