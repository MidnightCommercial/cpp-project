
file(GLOB TEST_FILES
    "*.cpp"
    "../src/*.cpp"
)

add_executable(unit_tests ${TEST_FILES})
target_link_libraries(unit_tests Catch)

enable_testing()
add_test(NAME ALL_UNIT_TESTS COMMAND unit_tests)
