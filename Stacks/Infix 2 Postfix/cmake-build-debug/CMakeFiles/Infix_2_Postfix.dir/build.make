# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Infix_2_Postfix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Infix_2_Postfix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Infix_2_Postfix.dir/flags.make

CMakeFiles/Infix_2_Postfix.dir/main.cpp.o: CMakeFiles/Infix_2_Postfix.dir/flags.make
CMakeFiles/Infix_2_Postfix.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Infix_2_Postfix.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Infix_2_Postfix.dir/main.cpp.o -c "/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix/main.cpp"

CMakeFiles/Infix_2_Postfix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Infix_2_Postfix.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix/main.cpp" > CMakeFiles/Infix_2_Postfix.dir/main.cpp.i

CMakeFiles/Infix_2_Postfix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Infix_2_Postfix.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix/main.cpp" -o CMakeFiles/Infix_2_Postfix.dir/main.cpp.s

# Object files for target Infix_2_Postfix
Infix_2_Postfix_OBJECTS = \
"CMakeFiles/Infix_2_Postfix.dir/main.cpp.o"

# External object files for target Infix_2_Postfix
Infix_2_Postfix_EXTERNAL_OBJECTS =

Infix_2_Postfix: CMakeFiles/Infix_2_Postfix.dir/main.cpp.o
Infix_2_Postfix: CMakeFiles/Infix_2_Postfix.dir/build.make
Infix_2_Postfix: CMakeFiles/Infix_2_Postfix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Infix_2_Postfix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Infix_2_Postfix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Infix_2_Postfix.dir/build: Infix_2_Postfix

.PHONY : CMakeFiles/Infix_2_Postfix.dir/build

CMakeFiles/Infix_2_Postfix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Infix_2_Postfix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Infix_2_Postfix.dir/clean

CMakeFiles/Infix_2_Postfix.dir/depend:
	cd "/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix" "/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix" "/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix/cmake-build-debug" "/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix/cmake-build-debug" "/Users/Chandravanshi/Documents/Codes/Infix 2 Postfix/cmake-build-debug/CMakeFiles/Infix_2_Postfix.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Infix_2_Postfix.dir/depend
