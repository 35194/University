# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\plane\CLionProjects\WORKSPACE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\plane\CLionProjects\WORKSPACE\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/WORKSPACE.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/WORKSPACE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/WORKSPACE.dir/flags.make

CMakeFiles/WORKSPACE.dir/main.c.obj: CMakeFiles/WORKSPACE.dir/flags.make
CMakeFiles/WORKSPACE.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\plane\CLionProjects\WORKSPACE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/WORKSPACE.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\WORKSPACE.dir\main.c.obj   -c C:\Users\plane\CLionProjects\WORKSPACE\main.c

CMakeFiles/WORKSPACE.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/WORKSPACE.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\plane\CLionProjects\WORKSPACE\main.c > CMakeFiles\WORKSPACE.dir\main.c.i

CMakeFiles/WORKSPACE.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/WORKSPACE.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\plane\CLionProjects\WORKSPACE\main.c -o CMakeFiles\WORKSPACE.dir\main.c.s

# Object files for target WORKSPACE
WORKSPACE_OBJECTS = \
"CMakeFiles/WORKSPACE.dir/main.c.obj"

# External object files for target WORKSPACE
WORKSPACE_EXTERNAL_OBJECTS =

WORKSPACE.exe: CMakeFiles/WORKSPACE.dir/main.c.obj
WORKSPACE.exe: CMakeFiles/WORKSPACE.dir/build.make
WORKSPACE.exe: CMakeFiles/WORKSPACE.dir/linklibs.rsp
WORKSPACE.exe: CMakeFiles/WORKSPACE.dir/objects1.rsp
WORKSPACE.exe: CMakeFiles/WORKSPACE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\plane\CLionProjects\WORKSPACE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable WORKSPACE.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\WORKSPACE.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/WORKSPACE.dir/build: WORKSPACE.exe

.PHONY : CMakeFiles/WORKSPACE.dir/build

CMakeFiles/WORKSPACE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\WORKSPACE.dir\cmake_clean.cmake
.PHONY : CMakeFiles/WORKSPACE.dir/clean

CMakeFiles/WORKSPACE.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\plane\CLionProjects\WORKSPACE C:\Users\plane\CLionProjects\WORKSPACE C:\Users\plane\CLionProjects\WORKSPACE\cmake-build-debug C:\Users\plane\CLionProjects\WORKSPACE\cmake-build-debug C:\Users\plane\CLionProjects\WORKSPACE\cmake-build-debug\CMakeFiles\WORKSPACE.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/WORKSPACE.dir/depend

