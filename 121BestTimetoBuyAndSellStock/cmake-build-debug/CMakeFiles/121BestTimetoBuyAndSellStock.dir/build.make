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
CMAKE_SOURCE_DIR = /home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/121BestTimetoBuyAndSellStock.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/121BestTimetoBuyAndSellStock.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/121BestTimetoBuyAndSellStock.dir/flags.make

CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o: CMakeFiles/121BestTimetoBuyAndSellStock.dir/flags.make
CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o -c /home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock/main.cpp

CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock/main.cpp > CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.i

CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock/main.cpp -o CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.s

CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o.requires

CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o.provides: CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/121BestTimetoBuyAndSellStock.dir/build.make CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o.provides

CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o.provides.build: CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o


# Object files for target 121BestTimetoBuyAndSellStock
121BestTimetoBuyAndSellStock_OBJECTS = \
"CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o"

# External object files for target 121BestTimetoBuyAndSellStock
121BestTimetoBuyAndSellStock_EXTERNAL_OBJECTS =

121BestTimetoBuyAndSellStock: CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o
121BestTimetoBuyAndSellStock: CMakeFiles/121BestTimetoBuyAndSellStock.dir/build.make
121BestTimetoBuyAndSellStock: CMakeFiles/121BestTimetoBuyAndSellStock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 121BestTimetoBuyAndSellStock"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/121BestTimetoBuyAndSellStock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/121BestTimetoBuyAndSellStock.dir/build: 121BestTimetoBuyAndSellStock

.PHONY : CMakeFiles/121BestTimetoBuyAndSellStock.dir/build

CMakeFiles/121BestTimetoBuyAndSellStock.dir/requires: CMakeFiles/121BestTimetoBuyAndSellStock.dir/main.cpp.o.requires

.PHONY : CMakeFiles/121BestTimetoBuyAndSellStock.dir/requires

CMakeFiles/121BestTimetoBuyAndSellStock.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/121BestTimetoBuyAndSellStock.dir/cmake_clean.cmake
.PHONY : CMakeFiles/121BestTimetoBuyAndSellStock.dir/clean

CMakeFiles/121BestTimetoBuyAndSellStock.dir/depend:
	cd /home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock /home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock /home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock/cmake-build-debug /home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock/cmake-build-debug /home/eric/Desktop/Practice/Cplusplus/121BestTimetoBuyAndSellStock/cmake-build-debug/CMakeFiles/121BestTimetoBuyAndSellStock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/121BestTimetoBuyAndSellStock.dir/depend

