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
include classes/CMakeFiles/Marketing.dir/depend.make

# Include the progress variables for this target.
include classes/CMakeFiles/Marketing.dir/progress.make

# Include the compile flags for this target's objects.
include classes/CMakeFiles/Marketing.dir/flags.make

classes/CMakeFiles/Marketing.dir/marketing.cpp.o: classes/CMakeFiles/Marketing.dir/flags.make
classes/CMakeFiles/Marketing.dir/marketing.cpp.o: classes/marketing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/PencilProducer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object classes/CMakeFiles/Marketing.dir/marketing.cpp.o"
	cd /home/user/PencilProducer/classes && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Marketing.dir/marketing.cpp.o -c /home/user/PencilProducer/classes/marketing.cpp

classes/CMakeFiles/Marketing.dir/marketing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Marketing.dir/marketing.cpp.i"
	cd /home/user/PencilProducer/classes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/PencilProducer/classes/marketing.cpp > CMakeFiles/Marketing.dir/marketing.cpp.i

classes/CMakeFiles/Marketing.dir/marketing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Marketing.dir/marketing.cpp.s"
	cd /home/user/PencilProducer/classes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/PencilProducer/classes/marketing.cpp -o CMakeFiles/Marketing.dir/marketing.cpp.s

classes/CMakeFiles/Marketing.dir/marketing.cpp.o.requires:

.PHONY : classes/CMakeFiles/Marketing.dir/marketing.cpp.o.requires

classes/CMakeFiles/Marketing.dir/marketing.cpp.o.provides: classes/CMakeFiles/Marketing.dir/marketing.cpp.o.requires
	$(MAKE) -f classes/CMakeFiles/Marketing.dir/build.make classes/CMakeFiles/Marketing.dir/marketing.cpp.o.provides.build
.PHONY : classes/CMakeFiles/Marketing.dir/marketing.cpp.o.provides

classes/CMakeFiles/Marketing.dir/marketing.cpp.o.provides.build: classes/CMakeFiles/Marketing.dir/marketing.cpp.o


# Object files for target Marketing
Marketing_OBJECTS = \
"CMakeFiles/Marketing.dir/marketing.cpp.o"

# External object files for target Marketing
Marketing_EXTERNAL_OBJECTS =

classes/libMarketing.a: classes/CMakeFiles/Marketing.dir/marketing.cpp.o
classes/libMarketing.a: classes/CMakeFiles/Marketing.dir/build.make
classes/libMarketing.a: classes/CMakeFiles/Marketing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/PencilProducer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMarketing.a"
	cd /home/user/PencilProducer/classes && $(CMAKE_COMMAND) -P CMakeFiles/Marketing.dir/cmake_clean_target.cmake
	cd /home/user/PencilProducer/classes && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Marketing.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
classes/CMakeFiles/Marketing.dir/build: classes/libMarketing.a

.PHONY : classes/CMakeFiles/Marketing.dir/build

classes/CMakeFiles/Marketing.dir/requires: classes/CMakeFiles/Marketing.dir/marketing.cpp.o.requires

.PHONY : classes/CMakeFiles/Marketing.dir/requires

classes/CMakeFiles/Marketing.dir/clean:
	cd /home/user/PencilProducer/classes && $(CMAKE_COMMAND) -P CMakeFiles/Marketing.dir/cmake_clean.cmake
.PHONY : classes/CMakeFiles/Marketing.dir/clean

classes/CMakeFiles/Marketing.dir/depend:
	cd /home/user/PencilProducer && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/PencilProducer /home/user/PencilProducer/classes /home/user/PencilProducer /home/user/PencilProducer/classes /home/user/PencilProducer/classes/CMakeFiles/Marketing.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : classes/CMakeFiles/Marketing.dir/depend

