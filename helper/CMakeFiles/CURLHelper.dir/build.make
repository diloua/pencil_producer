# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/PencilProducer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/PencilProducer

# Include any dependencies generated for this target.
include helper/CMakeFiles/CURLHelper.dir/depend.make

# Include the progress variables for this target.
include helper/CMakeFiles/CURLHelper.dir/progress.make

# Include the compile flags for this target's objects.
include helper/CMakeFiles/CURLHelper.dir/flags.make

helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o: helper/CMakeFiles/CURLHelper.dir/flags.make
helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o: helper/curl_helper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/PencilProducer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o"
	cd /home/user/PencilProducer/helper && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CURLHelper.dir/curl_helper.cpp.o -c /home/user/PencilProducer/helper/curl_helper.cpp

helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CURLHelper.dir/curl_helper.cpp.i"
	cd /home/user/PencilProducer/helper && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/PencilProducer/helper/curl_helper.cpp > CMakeFiles/CURLHelper.dir/curl_helper.cpp.i

helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CURLHelper.dir/curl_helper.cpp.s"
	cd /home/user/PencilProducer/helper && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/PencilProducer/helper/curl_helper.cpp -o CMakeFiles/CURLHelper.dir/curl_helper.cpp.s

helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o.requires:

.PHONY : helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o.requires

helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o.provides: helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o.requires
	$(MAKE) -f helper/CMakeFiles/CURLHelper.dir/build.make helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o.provides.build
.PHONY : helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o.provides

helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o.provides.build: helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o


# Object files for target CURLHelper
CURLHelper_OBJECTS = \
"CMakeFiles/CURLHelper.dir/curl_helper.cpp.o"

# External object files for target CURLHelper
CURLHelper_EXTERNAL_OBJECTS =

helper/libCURLHelper.a: helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o
helper/libCURLHelper.a: helper/CMakeFiles/CURLHelper.dir/build.make
helper/libCURLHelper.a: helper/CMakeFiles/CURLHelper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/PencilProducer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libCURLHelper.a"
	cd /home/user/PencilProducer/helper && $(CMAKE_COMMAND) -P CMakeFiles/CURLHelper.dir/cmake_clean_target.cmake
	cd /home/user/PencilProducer/helper && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CURLHelper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
helper/CMakeFiles/CURLHelper.dir/build: helper/libCURLHelper.a

.PHONY : helper/CMakeFiles/CURLHelper.dir/build

helper/CMakeFiles/CURLHelper.dir/requires: helper/CMakeFiles/CURLHelper.dir/curl_helper.cpp.o.requires

.PHONY : helper/CMakeFiles/CURLHelper.dir/requires

helper/CMakeFiles/CURLHelper.dir/clean:
	cd /home/user/PencilProducer/helper && $(CMAKE_COMMAND) -P CMakeFiles/CURLHelper.dir/cmake_clean.cmake
.PHONY : helper/CMakeFiles/CURLHelper.dir/clean

helper/CMakeFiles/CURLHelper.dir/depend:
	cd /home/user/PencilProducer && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/PencilProducer /home/user/PencilProducer/helper /home/user/PencilProducer /home/user/PencilProducer/helper /home/user/PencilProducer/helper/CMakeFiles/CURLHelper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : helper/CMakeFiles/CURLHelper.dir/depend

