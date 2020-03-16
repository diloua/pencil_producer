cmake_minimum_required(VERSION 3.0.0)

link_directories(${CHECK_LIBRARY_DIRS})

# libcurl
include_directories(${CURL_INCLUDE_DIR})
find_package(CURL REQUIRED)
set(CURL_LIBRARY "-lcurl")

add_library(CURLHelper curl_helper.cpp)
target_link_libraries(CURLHelper ${CURL_LIBRARIES})