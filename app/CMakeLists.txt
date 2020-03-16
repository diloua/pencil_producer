cmake_minimum_required (VERSION 3.0.0)

include_directories(${CMAKE_SOURCE_DIR}/classes ${CHECK_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR}/helper ${CHECK_INCLUDE_DIRS})
link_directories(${CHECK_LIBRARY_DIRS})

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

# Comment if the environment PATH is already set
set(CMAKE_PREFIX_PATH $ENV{HOME}/Qt/5.12.1/clang_64)

# Find the libraries
find_package(Qt5Widgets CONFIG REQUIRED)

# Populate a CMake variable with the sources
set(SRCS
    welcome.ui
    welcome.cpp
    highscore.ui
    highscore.cpp
    game.ui
    game.cpp
    debugger.ui
    debugger.cpp
    main.cpp
    gameover.cpp
    gameover.ui
    debugmessage.h
    debugmessage.cpp
    debugmessage.ui
  
)

# Tell CMake to create the helloworld executable
add_executable(pencil-producer ${SRCS})
# Use the Widgets module from Qt 5
target_link_libraries(pencil-producer Qt5::Widgets
    BankBalance Intelligence Wood Graphite
    APM Pencil Marketing CURLHelper)
