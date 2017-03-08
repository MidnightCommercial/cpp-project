
file(GLOB TEST_FILES
    "*.cpp"
    "../src/*.cpp"
)

#becasue cinder adds the app name in ci_make_app :/
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${APP_NAME} )

set(TESTS_APP_NAME ${APP_NAME}-tests)
add_executable(${TESTS_APP_NAME} ${TEST_FILES})
target_link_libraries(${TESTS_APP_NAME} Catch)

if(NOT APP_MSW)
	enable_testing()
	add_test(NAME ALL_UNIT_TESTS COMMAND ${TESTS_APP_NAME})
endif()