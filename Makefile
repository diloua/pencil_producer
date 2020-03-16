# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/user/PencilProducer/CMakeFiles /home/user/PencilProducer/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/user/PencilProducer/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named pencil-producer

# Build rule for target.
pencil-producer: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 pencil-producer
.PHONY : pencil-producer

# fast build rule for target.
pencil-producer/fast:
	$(MAKE) -f app/CMakeFiles/pencil-producer.dir/build.make app/CMakeFiles/pencil-producer.dir/build
.PHONY : pencil-producer/fast

#=============================================================================
# Target rules for targets named pencil-producer_automoc

# Build rule for target.
pencil-producer_automoc: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 pencil-producer_automoc
.PHONY : pencil-producer_automoc

# fast build rule for target.
pencil-producer_automoc/fast:
	$(MAKE) -f app/CMakeFiles/pencil-producer_automoc.dir/build.make app/CMakeFiles/pencil-producer_automoc.dir/build
.PHONY : pencil-producer_automoc/fast

#=============================================================================
# Target rules for targets named Marketing

# Build rule for target.
Marketing: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Marketing
.PHONY : Marketing

# fast build rule for target.
Marketing/fast:
	$(MAKE) -f classes/CMakeFiles/Marketing.dir/build.make classes/CMakeFiles/Marketing.dir/build
.PHONY : Marketing/fast

#=============================================================================
# Target rules for targets named Pencil

# Build rule for target.
Pencil: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Pencil
.PHONY : Pencil

# fast build rule for target.
Pencil/fast:
	$(MAKE) -f classes/CMakeFiles/Pencil.dir/build.make classes/CMakeFiles/Pencil.dir/build
.PHONY : Pencil/fast

#=============================================================================
# Target rules for targets named BankBalance

# Build rule for target.
BankBalance: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 BankBalance
.PHONY : BankBalance

# fast build rule for target.
BankBalance/fast:
	$(MAKE) -f classes/CMakeFiles/BankBalance.dir/build.make classes/CMakeFiles/BankBalance.dir/build
.PHONY : BankBalance/fast

#=============================================================================
# Target rules for targets named APM

# Build rule for target.
APM: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 APM
.PHONY : APM

# fast build rule for target.
APM/fast:
	$(MAKE) -f classes/CMakeFiles/APM.dir/build.make classes/CMakeFiles/APM.dir/build
.PHONY : APM/fast

#=============================================================================
# Target rules for targets named Graphite

# Build rule for target.
Graphite: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Graphite
.PHONY : Graphite

# fast build rule for target.
Graphite/fast:
	$(MAKE) -f classes/CMakeFiles/Graphite.dir/build.make classes/CMakeFiles/Graphite.dir/build
.PHONY : Graphite/fast

#=============================================================================
# Target rules for targets named Intelligence

# Build rule for target.
Intelligence: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Intelligence
.PHONY : Intelligence

# fast build rule for target.
Intelligence/fast:
	$(MAKE) -f classes/CMakeFiles/Intelligence.dir/build.make classes/CMakeFiles/Intelligence.dir/build
.PHONY : Intelligence/fast

#=============================================================================
# Target rules for targets named Wood

# Build rule for target.
Wood: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Wood
.PHONY : Wood

# fast build rule for target.
Wood/fast:
	$(MAKE) -f classes/CMakeFiles/Wood.dir/build.make classes/CMakeFiles/Wood.dir/build
.PHONY : Wood/fast

#=============================================================================
# Target rules for targets named CURLHelper

# Build rule for target.
CURLHelper: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 CURLHelper
.PHONY : CURLHelper

# fast build rule for target.
CURLHelper/fast:
	$(MAKE) -f helper/CMakeFiles/CURLHelper.dir/build.make helper/CMakeFiles/CURLHelper.dir/build
.PHONY : CURLHelper/fast

#=============================================================================
# Target rules for targets named test-pencil-producer

# Build rule for target.
test-pencil-producer: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 test-pencil-producer
.PHONY : test-pencil-producer

# fast build rule for target.
test-pencil-producer/fast:
	$(MAKE) -f test/CMakeFiles/test-pencil-producer.dir/build.make test/CMakeFiles/test-pencil-producer.dir/build
.PHONY : test-pencil-producer/fast

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... pencil-producer"
	@echo "... pencil-producer_automoc"
	@echo "... Marketing"
	@echo "... Pencil"
	@echo "... BankBalance"
	@echo "... APM"
	@echo "... Graphite"
	@echo "... Intelligence"
	@echo "... Wood"
	@echo "... CURLHelper"
	@echo "... test-pencil-producer"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

