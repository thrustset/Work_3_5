# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /home/polina/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7717.62/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/polina/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7717.62/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Work_3_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Work_3_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Work_3_5.dir/flags.make

CMakeFiles/Work_3_5.dir/main.cpp.o: CMakeFiles/Work_3_5.dir/flags.make
CMakeFiles/Work_3_5.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Work_3_5.dir/main.cpp.o"
	/sbin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Work_3_5.dir/main.cpp.o -c "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/main.cpp"

CMakeFiles/Work_3_5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Work_3_5.dir/main.cpp.i"
	/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/main.cpp" > CMakeFiles/Work_3_5.dir/main.cpp.i

CMakeFiles/Work_3_5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Work_3_5.dir/main.cpp.s"
	/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/main.cpp" -o CMakeFiles/Work_3_5.dir/main.cpp.s

CMakeFiles/Work_3_5.dir/vec.cpp.o: CMakeFiles/Work_3_5.dir/flags.make
CMakeFiles/Work_3_5.dir/vec.cpp.o: ../vec.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Work_3_5.dir/vec.cpp.o"
	/sbin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Work_3_5.dir/vec.cpp.o -c "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/vec.cpp"

CMakeFiles/Work_3_5.dir/vec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Work_3_5.dir/vec.cpp.i"
	/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/vec.cpp" > CMakeFiles/Work_3_5.dir/vec.cpp.i

CMakeFiles/Work_3_5.dir/vec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Work_3_5.dir/vec.cpp.s"
	/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/vec.cpp" -o CMakeFiles/Work_3_5.dir/vec.cpp.s

# Object files for target Work_3_5
Work_3_5_OBJECTS = \
"CMakeFiles/Work_3_5.dir/main.cpp.o" \
"CMakeFiles/Work_3_5.dir/vec.cpp.o"

# External object files for target Work_3_5
Work_3_5_EXTERNAL_OBJECTS =

Work_3_5: CMakeFiles/Work_3_5.dir/main.cpp.o
Work_3_5: CMakeFiles/Work_3_5.dir/vec.cpp.o
Work_3_5: CMakeFiles/Work_3_5.dir/build.make
Work_3_5: CMakeFiles/Work_3_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Work_3_5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Work_3_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Work_3_5.dir/build: Work_3_5

.PHONY : CMakeFiles/Work_3_5.dir/build

CMakeFiles/Work_3_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Work_3_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Work_3_5.dir/clean

CMakeFiles/Work_3_5.dir/depend:
	cd "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5" "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5" "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/cmake-build-debug" "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/cmake-build-debug" "/home/polina/Документы/GIMP Projects/11/MIPT/Programs/2 семестр/Work_3_5/cmake-build-debug/CMakeFiles/Work_3_5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Work_3_5.dir/depend
