add_library(arg INTERFACE)
target_include_directories(arg INTERFACE include)

add_subdirectory(examples)
add_subdirectory(tests)