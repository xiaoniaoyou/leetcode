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
CMAKE_SOURCE_DIR = /home/eric/Desktop/Practice/Cplusplus/202HappyNumber

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eric/Desktop/Practice/Cplusplus/202HappyNumber/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/202HappyNumber.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/202HappyNumber.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/202HappyNumber.dir/flags.make

CMakeFiles/202HappyNumber.dir/main.cpp.o: CMakeFiles/202HappyNumber.dir/flags.make
CMakeFiles/202HappyNumber.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Desktop/Practice/Cplusplus/202HappyNumber/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/202HappyNumber.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/202HappyNumber.dir/main.cpp.o -c /home/eric/Desktop/Practice/Cplusplus/202HappyNumber/main.cpp

CMakeFiles/202HappyNumber.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/202HappyNumber.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Desktop/Practice/Cplusplus/202HappyNumber/main.cpp > CMakeFiles/202HappyNumber.dir/main.cpp.i

CMakeFiles/202HappyNumber.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/202HappyNumber.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Desktop/Practice/Cplusplus/202HappyNumber/main.cpp -o CMakeFiles/202HappyNumber.dir/main.cpp.s

CMakeFiles/202HappyNumber.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/202HappyNumber.dir/main.cpp.o.requires

CMakeFiles/202HappyNumber.dir/main.cpp.o.provides: CMakeFiles/202HappyNumber.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/202HappyNumber.dir/build.make CMakeFiles/202HappyNumber.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/202HappyNumber.dir/main.cpp.o.provides

CMakeFiles/202HappyNumber.dir/main.cpp.o.provides.build: CMakeFiles/202HappyNumber.dir/main.cpp.o


# Object files for target 202HappyNumber
202HappyNumber_OBJECTS = \
"CMakeFiles/202HappyNumber.dir/main.cpp.o"

# External object files for target 202HappyNumber
202HappyNumber_EXTERNAL_OBJECTS =

202HappyNumber: CMakeFiles/202HappyNumber.dir/main.cpp.o
202HappyNumber: CMakeFiles/202HappyNumber.dir/build.make
202HappyNumber: CMakeFiles/202HappyNumber.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eric/Desktop/Practice/Cplusplus/202HappyNumber/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 202HappyNumber"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/202HappyNumber.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/202HappyNumber.dir/build: 202HappyNumber

.PHONY : CMakeFiles/202HappyNumber.dir/build

CMakeFiles/202HappyNumber.dir/requires: CMakeFiles/202HappyNumber.dir/main.cpp.o.requires

.PHONY : CMakeFiles/202HappyNumber.dir/requires

CMakeFiles/202HappyNumber.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/202HappyNumber.dir/cmake_clean.cmake
.PHONY : CMakeFiles/202HappyNumber.dir/clean

CMakeFiles/202HappyNumber.dir/depend:
	cd /home/eric/Desktop/Practice/Cplusplus/202HappyNumber/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eric/Desktop/Practice/Cplusplus/202HappyNumber /home/eric/Desktop/Practice/Cplusplus/202HappyNumber /home/eric/Desktop/Practice/Cplusplus/202HappyNumber/cmake-build-debug /home/eric/Desktop/Practice/Cplusplus/202HappyNumber/cmake-build-debug /home/eric/Desktop/Practice/Cplusplus/202HappyNumber/cmake-build-debug/CMakeFiles/202HappyNumber.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/202HappyNumber.dir/depend

