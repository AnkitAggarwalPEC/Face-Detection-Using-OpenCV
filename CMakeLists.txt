cmake_minimum_required(VERSION 2.8)
project( DetectFace )
find_package( OpenCV REQUIRED )
add_executable( DetectFace detectFace.cpp )
target_link_libraries( DetectFace ${OpenCV_LIBS} )

