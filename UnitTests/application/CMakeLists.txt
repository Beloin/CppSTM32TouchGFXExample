enable_testing()

add_executable(
        application_tests
        ./inverter_tests.cpp
)

target_link_libraries(application_tests application_lib GTest::gtest_main GTest::gmock_main)

include(GoogleTest)
gtest_discover_tests(application_tests)

