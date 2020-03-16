cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(PencilProducer)

add_subdirectory(app)
add_subdirectory(classes)
add_subdirectory(helper)
add_subdirectory(test)

# Copy default.sav file
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/default.sav DESTINATION ${CMAKE_CURRENT_BINARY_DIR})