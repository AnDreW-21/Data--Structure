# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\andre\CLionProjects\Doubble_linkedList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\andre\CLionProjects\Doubble_linkedList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Doubble_linkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Doubble_linkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Doubble_linkedList.dir/flags.make

CMakeFiles/Doubble_linkedList.dir/main.cpp.obj: CMakeFiles/Doubble_linkedList.dir/flags.make
CMakeFiles/Doubble_linkedList.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\andre\CLionProjects\Doubble_linkedList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Doubble_linkedList.dir/main.cpp.obj"
	C:\Users\andre\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Doubble_linkedList.dir\main.cpp.obj -c C:\Users\andre\CLionProjects\Doubble_linkedList\main.cpp

CMakeFiles/Doubble_linkedList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Doubble_linkedList.dir/main.cpp.i"
	C:\Users\andre\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\andre\CLionProjects\Doubble_linkedList\main.cpp > CMakeFiles\Doubble_linkedList.dir\main.cpp.i

CMakeFiles/Doubble_linkedList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Doubble_linkedList.dir/main.cpp.s"
	C:\Users\andre\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\andre\CLionProjects\Doubble_linkedList\main.cpp -o CMakeFiles\Doubble_linkedList.dir\main.cpp.s

# Object files for target Doubble_linkedList
Doubble_linkedList_OBJECTS = \
"CMakeFiles/Doubble_linkedList.dir/main.cpp.obj"

# External object files for target Doubble_linkedList
Doubble_linkedList_EXTERNAL_OBJECTS =

Doubble_linkedList.exe: CMakeFiles/Doubble_linkedList.dir/main.cpp.obj
Doubble_linkedList.exe: CMakeFiles/Doubble_linkedList.dir/build.make
Doubble_linkedList.exe: CMakeFiles/Doubble_linkedList.dir/linklibs.rsp
Doubble_linkedList.exe: CMakeFiles/Doubble_linkedList.dir/objects1.rsp
Doubble_linkedList.exe: CMakeFiles/Doubble_linkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\andre\CLionProjects\Doubble_linkedList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Doubble_linkedList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Doubble_linkedList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Doubble_linkedList.dir/build: Doubble_linkedList.exe

.PHONY : CMakeFiles/Doubble_linkedList.dir/build

CMakeFiles/Doubble_linkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Doubble_linkedList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Doubble_linkedList.dir/clean

CMakeFiles/Doubble_linkedList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\andre\CLionProjects\Doubble_linkedList C:\Users\andre\CLionProjects\Doubble_linkedList C:\Users\andre\CLionProjects\Doubble_linkedList\cmake-build-debug C:\Users\andre\CLionProjects\Doubble_linkedList\cmake-build-debug C:\Users\andre\CLionProjects\Doubble_linkedList\cmake-build-debug\CMakeFiles\Doubble_linkedList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Doubble_linkedList.dir/depend
