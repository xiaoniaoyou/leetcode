# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /home/eric/Desktop/Software/clion-2018.1.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/eric/Desktop/Software/clion-2018.1.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eric/Desktop/Practice/Cplusplus/ValidParentheses

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eric/Desktop/Practice/Cplusplus/ValidParentheses/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ValidParentheses.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ValidParentheses.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ValidParentheses.dir/flags.make

CMakeFiles/ValidParentheses.dir/main.cpp.o: CMakeFiles/ValidParentheses.dir/flags.make
CMakeFiles/ValidParentheses.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Desktop/Practice/Cplusplus/ValidParentheses/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ValidParentheses.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ValidParentheses.dir/main.cpp.o -c /home/eric/Desktop/Practice/Cplusplus/ValidParentheses/main.cpp

CMakeFiles/ValidParentheses.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ValidParentheses.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Desktop/Practice/Cplusplus/ValidParentheses/main.cpp > CMakeFiles/ValidParentheses.dir/main.cpp.i

CMakeFiles/ValidParentheses.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ValidParentheses.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Desktop/Practice/Cplusplus/ValidParentheses/main.cpp -o CMakeFiles/ValidParentheses.dir/main.cpp.s

CMakeFiles/ValidParentheses.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ValidParentheses.dir/main.cpp.o.requires

CMakeFiles/ValidParentheses.dir/main.cpp.o.provides: CMakeFiles/ValidParentheses.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ValidParentheses.dir/build.make CMakeFiles/ValidParentheses.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ValidParentheses.dir/main.cpp.o.provides

CMakeFiles/ValidParentheses.dir/main.cpp.o.provides.build: CMakeFiles/ValidParentheses.dir/main.cpp.o


# Object files for target ValidParentheses
ValidParentheses_OBJECTS = \
"CMakeFiles/ValidParentheses.dir/main.cpp.o"

# External object files for target ValidParentheses
ValidParentheses_EXTERNAL_OBJECTS =

ValidParentheses: CMakeFiles/ValidParentheses.dir/main.cpp.o
ValidParentheses: CMakeFiles/ValidParentheses.dir/build.make
ValidParentheses: CMakeFiles/ValidParentheses.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eric/Desktop/Practice/Cplusplus/ValidParentheses/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ValidParentheses"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ValidParentheses.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ValidParentheses.dir/build: ValidParentheses

.PHONY : CMakeFiles/ValidParentheses.dir/build

CMakeFiles/ValidParentheses.dir/requires: CMakeFiles/ValidParentheses.dir/main.cpp.o.requires

.PHONY : CMakeFiles/ValidParentheses.dir/requires

CMakeFiles/ValidParentheses.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ValidParentheses.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ValidParentheses.dir/clean

CMakeFiles/ValidParentheses.dir/depend:
	cd /home/eric/Desktop/Practice/Cplusplus/ValidParentheses/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eric/Desktop/Practice/Cplusplus/ValidParentheses /home/eric/Desktop/Practice/Cplusplus/ValidParentheses /home/eric/Desktop/Practice/Cplusplus/ValidParentheses/cmake-build-debug /home/eric/Desktop/Practice/Cplusplus/ValidParentheses/cmake-build-debug /home/eric/Desktop/Practice/Cplusplus/ValidParentheses/cmake-build-debug/CMakeFiles/ValidParentheses.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ValidParentheses.dir/depend

