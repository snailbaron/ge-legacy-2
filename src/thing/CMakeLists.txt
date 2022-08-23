add_library(thing INTERFACE)
target_include_directories(thing INTERFACE include)

add_subdirectory(tests)