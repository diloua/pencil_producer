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
include classes/CMakeFiles/Graphite.dir/depend.make

# Include the progress variables for this target.
include classes/CMakeFiles/Graphite.dir/progress.make

# Include the compile flags for this target's objects.
include classes/CMakeFiles/Graphite.dir/flags.make

classes/CMakeFiles/Graphite.dir/graphite.cpp.o: classes/CMakeFiles/Graphite.dir/flags.make
classes/CMakeFiles/Graphite.dir/graphite.cpp.o: classes/graphite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/PencilProducer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object classes/CMakeFiles/Graphite.dir/graphite.cpp.o"
	cd /home/user/PencilProducer/classes && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Graphite.dir/graphite.cpp.o -c /home/user/PencilProducer/classes/graphite.cpp

classes/CMakeFiles/Graphite.dir/graphite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Graphite.dir/graphite.cpp.i"
	cd /home/user/PencilProducer/classes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/PencilProducer/classes/graphite.cpp > CMakeFiles/Graphite.dir/graphite.cpp.i

classes/CMakeFiles/Graphite.dir/graphite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Graphite.dir/graphite.cpp.s"
	cd /home/user/PencilProducer/classes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/PencilProducer/classes/graphite.cpp -o CMakeFiles/Graphite.dir/graphite.cpp.s

classes/CMakeFiles/Graphite.dir/graphite.cpp.o.requires:

.PHONY : classes/CMakeFiles/Graphite.dir/graphite.cpp.o.requires

classes/CMakeFiles/Graphite.dir/graphite.cpp.o.provides: classes/CMakeFiles/Graphite.dir/graphite.cpp.o.requires
	$(MAKE) -f classes/CMakeFiles/Graphite.dir/build.make classes/CMakeFiles/Graphite.dir/graphite.cpp.o.provides.build
.PHONY : classes/CMakeFiles/Graphite.dir/graphite.cpp.o.provides

classes/CMakeFiles/Graphite.dir/graphite.cpp.o.provides.build: classes/CMakeFiles/Graphite.dir/graphite.cpp.o


# Object files for target Graphite
Graphite_OBJECTS = \
"CMakeFiles/Graphite.dir/graphite.cpp.o"

# External object files for target Graphite
Graphite_EXTERNAL_OBJECTS =

classes/libGraphite.a: classes/CMakeFiles/Graphite.dir/graphite.cpp.o
classes/libGraphite.a: classes/CMakeFiles/Graphite.dir/build.make
classes/libGraphite.a: classes/CMakeFiles/Graphite.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/PencilProducer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libGraphite.a"
	cd /home/user/PencilProducer/classes && $(CMAKE_COMMAND) -P CMakeFiles/Graphite.dir/cmake_clean_target.cmake
	cd /home/user/PencilProducer/classes && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Graphite.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
classes/CMakeFiles/Graphite.dir/build: classes/libGraphite.a

.PHONY : classes/CMakeFiles/Graphite.dir/build

classes/CMakeFiles/Graphite.dir/requires: classes/CMakeFiles/Graphite.dir/graphite.cpp.o.requires

.PHONY : classes/CMakeFiles/Graphite.dir/requires

classes/CMakeFiles/Graphite.dir/clean:
	cd /home/user/PencilProducer/classes && $(CMAKE_COMMAND) -P CMakeFiles/Graphite.dir/cmake_clean.cmake
.PHONY : classes/CMakeFiles/Graphite.dir/clean

classes/CMakeFiles/Graphite.dir/depend:
	cd /home/user/PencilProducer && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/PencilProducer /home/user/PencilProducer/classes /home/user/PencilProducer /home/user/PencilProducer/classes /home/user/PencilProducer/classes/CMakeFiles/Graphite.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : classes/CMakeFiles/Graphite.dir/depend

