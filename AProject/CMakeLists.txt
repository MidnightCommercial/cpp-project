cmake_minimum_required(VERSION 2.8)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/../cmake) # main (top) cmake dir
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake) # project specific cmake dir
set(CMAKE_CXX_STANDARD 11) 

if( CMAKE_SYSTEM_NAME MATCHES "Darwin" )
	set( APP_TARGET "macosx" )
	set( APP_MACOSX TRUE )
elseif( CMAKE_SYSTEM_NAME MATCHES "Linux" )
	set( APP_TARGET "linux" )
	set( APP_LINUX TRUE )
elseif( CMAKE_SYSTEM_NAME MATCHES "Windows" )
	set( APP_TARGET "msw" )
	set( APP_MSW TRUE )
else()
	message( FATAL_ERROR "APP_TARGET not defined, and no default for platform '${CMAKE_SYSTEM_NAME}.'" )
endif()

message("-- App is set to ${APP_TARGET}.")

project("AProject")

# CMake useful variables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib") 
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/doc/AProject)

set(VERSION_MAJOR "0")
set(VERSION_MINOR "1")
set(VERSION_PATCH "0")
set(VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH})

include_directories(
    ${PROJECT_SOURCE_DIR}/src
)

enable_testing()
add_subdirectory(src)
add_subdirectory(doc)
add_subdirectory(test)
