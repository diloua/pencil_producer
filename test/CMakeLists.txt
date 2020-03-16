cmake_minimum_required(VERSION 3.0.0)

include_directories(${CMAKE_SOURCE_DIR}/classes ${CHECK_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR}/app ${CHECK_INCLUDE_DIRS})
link_directories(${CHECK_LIBRARY_DIRS})

add_executable(test-pencil-producer tests.cpp)
target_link_libraries(test-pencil-producer BankBalance Intelligence Wood 
                Graphite APM Pencil Marketing)