cmake_minimum_required(VERSION 2.8.12)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

project("CppProject")

enable_testing() 

#Catch cpp testing framework
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE dependencies/catch)

add_subdirectory(AProject)
