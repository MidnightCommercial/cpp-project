cmake_minimum_required(VERSION 3.0)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/../../cmake)

set( CMAKE_VERBOSE_MAKEFILE ON )

project("MyCinderProject")

get_filename_component( CINDER_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../../dependencies/cinder" ABSOLUTE )
get_filename_component( APP_PATH "${CMAKE_CURRENT_SOURCE_DIR}/src/app" ABSOLUTE )

include( "${CINDER_PATH}/proj/cmake/modules/cinderMakeApp.cmake" )

# binary output
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/${PROJECT_NAME}")

set(VERSION_MAJOR "0")
set(VERSION_MINOR "1")
set(VERSION_PATCH "0")
set(VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH})

file(GLOB PROJ_INCLUDE
    "src/*.h"
    "src/*.hpp"
)

file(GLOB PROJ_SRC
    "src/*.cpp"
)

ci_make_app(
    APP_NAME    "MyCinderApp"
    CINDER_PATH ${CINDER_PATH}
    SOURCES     ${PROJ_INCLUDE} ${PROJ_SRC} ${APP_PATH}/Resources.h ${APP_PATH}/main.cpp
    INCLUDES    src/ 
)

add_subdirectory(doc)
add_subdirectory(test)
