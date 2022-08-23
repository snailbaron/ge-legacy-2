add_executable (evening_tests
    container.cpp
    subscriber.cpp
    subscription.cpp
)
target_link_libraries (evening_tests evening Catch2::Catch2WithMain)
add_test (NAME evening_tests COMMAND evening_tests)