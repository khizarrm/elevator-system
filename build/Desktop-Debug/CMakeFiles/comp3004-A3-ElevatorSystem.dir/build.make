# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/Desktop/comp3004-A3-ElevatorSystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/comp3004-A3-ElevatorSystem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/comp3004-A3-ElevatorSystem.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/comp3004-A3-ElevatorSystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/comp3004-A3-ElevatorSystem.dir/flags.make

comp3004-A3-ElevatorSystem_autogen/timestamp: /usr/lib/qt5/bin/moc
comp3004-A3-ElevatorSystem_autogen/timestamp: /usr/lib/qt5/bin/uic
comp3004-A3-ElevatorSystem_autogen/timestamp: CMakeFiles/comp3004-A3-ElevatorSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target comp3004-A3-ElevatorSystem"
	/usr/bin/cmake -E cmake_autogen /home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/CMakeFiles/comp3004-A3-ElevatorSystem_autogen.dir/AutogenInfo.json Debug
	/usr/bin/cmake -E touch /home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/comp3004-A3-ElevatorSystem_autogen/timestamp

CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.o: CMakeFiles/comp3004-A3-ElevatorSystem.dir/flags.make
CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.o: comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp
CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.o: CMakeFiles/comp3004-A3-ElevatorSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.o -MF CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.o -c /home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp

CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp > CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.i

CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp -o CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.s

CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.o: CMakeFiles/comp3004-A3-ElevatorSystem.dir/flags.make
CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.o: /home/user/Desktop/comp3004-A3-ElevatorSystem/main.cpp
CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.o: CMakeFiles/comp3004-A3-ElevatorSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.o -MF CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.o.d -o CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.o -c /home/user/Desktop/comp3004-A3-ElevatorSystem/main.cpp

CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/comp3004-A3-ElevatorSystem/main.cpp > CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.i

CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/comp3004-A3-ElevatorSystem/main.cpp -o CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.s

CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.o: CMakeFiles/comp3004-A3-ElevatorSystem.dir/flags.make
CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.o: /home/user/Desktop/comp3004-A3-ElevatorSystem/mainwindow.cpp
CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.o: CMakeFiles/comp3004-A3-ElevatorSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.o -MF CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.o.d -o CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.o -c /home/user/Desktop/comp3004-A3-ElevatorSystem/mainwindow.cpp

CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/comp3004-A3-ElevatorSystem/mainwindow.cpp > CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.i

CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/comp3004-A3-ElevatorSystem/mainwindow.cpp -o CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.s

CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.o: CMakeFiles/comp3004-A3-ElevatorSystem.dir/flags.make
CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.o: /home/user/Desktop/comp3004-A3-ElevatorSystem/controlsystem.cpp
CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.o: CMakeFiles/comp3004-A3-ElevatorSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.o -MF CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.o.d -o CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.o -c /home/user/Desktop/comp3004-A3-ElevatorSystem/controlsystem.cpp

CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/comp3004-A3-ElevatorSystem/controlsystem.cpp > CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.i

CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/comp3004-A3-ElevatorSystem/controlsystem.cpp -o CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.s

CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.o: CMakeFiles/comp3004-A3-ElevatorSystem.dir/flags.make
CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.o: /home/user/Desktop/comp3004-A3-ElevatorSystem/elevator.cpp
CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.o: CMakeFiles/comp3004-A3-ElevatorSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.o -MF CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.o.d -o CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.o -c /home/user/Desktop/comp3004-A3-ElevatorSystem/elevator.cpp

CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/comp3004-A3-ElevatorSystem/elevator.cpp > CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.i

CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/comp3004-A3-ElevatorSystem/elevator.cpp -o CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.s

CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.o: CMakeFiles/comp3004-A3-ElevatorSystem.dir/flags.make
CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.o: /home/user/Desktop/comp3004-A3-ElevatorSystem/floor.cpp
CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.o: CMakeFiles/comp3004-A3-ElevatorSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.o -MF CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.o.d -o CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.o -c /home/user/Desktop/comp3004-A3-ElevatorSystem/floor.cpp

CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/comp3004-A3-ElevatorSystem/floor.cpp > CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.i

CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/comp3004-A3-ElevatorSystem/floor.cpp -o CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.s

# Object files for target comp3004-A3-ElevatorSystem
comp3004__A3__ElevatorSystem_OBJECTS = \
"CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.o" \
"CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.o" \
"CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.o" \
"CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.o" \
"CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.o"

# External object files for target comp3004-A3-ElevatorSystem
comp3004__A3__ElevatorSystem_EXTERNAL_OBJECTS =

comp3004-A3-ElevatorSystem: CMakeFiles/comp3004-A3-ElevatorSystem.dir/comp3004-A3-ElevatorSystem_autogen/mocs_compilation.cpp.o
comp3004-A3-ElevatorSystem: CMakeFiles/comp3004-A3-ElevatorSystem.dir/main.cpp.o
comp3004-A3-ElevatorSystem: CMakeFiles/comp3004-A3-ElevatorSystem.dir/mainwindow.cpp.o
comp3004-A3-ElevatorSystem: CMakeFiles/comp3004-A3-ElevatorSystem.dir/controlsystem.cpp.o
comp3004-A3-ElevatorSystem: CMakeFiles/comp3004-A3-ElevatorSystem.dir/elevator.cpp.o
comp3004-A3-ElevatorSystem: CMakeFiles/comp3004-A3-ElevatorSystem.dir/floor.cpp.o
comp3004-A3-ElevatorSystem: CMakeFiles/comp3004-A3-ElevatorSystem.dir/build.make
comp3004-A3-ElevatorSystem: /usr/lib/aarch64-linux-gnu/libQt5Widgets.so.5.15.13
comp3004-A3-ElevatorSystem: /usr/lib/aarch64-linux-gnu/libQt5Gui.so.5.15.13
comp3004-A3-ElevatorSystem: /usr/lib/aarch64-linux-gnu/libQt5Core.so.5.15.13
comp3004-A3-ElevatorSystem: CMakeFiles/comp3004-A3-ElevatorSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable comp3004-A3-ElevatorSystem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/comp3004-A3-ElevatorSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/comp3004-A3-ElevatorSystem.dir/build: comp3004-A3-ElevatorSystem
.PHONY : CMakeFiles/comp3004-A3-ElevatorSystem.dir/build

CMakeFiles/comp3004-A3-ElevatorSystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/comp3004-A3-ElevatorSystem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/comp3004-A3-ElevatorSystem.dir/clean

CMakeFiles/comp3004-A3-ElevatorSystem.dir/depend: comp3004-A3-ElevatorSystem_autogen/timestamp
	cd /home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/comp3004-A3-ElevatorSystem /home/user/Desktop/comp3004-A3-ElevatorSystem /home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug /home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug /home/user/Desktop/comp3004-A3-ElevatorSystem/build/Desktop-Debug/CMakeFiles/comp3004-A3-ElevatorSystem.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/comp3004-A3-ElevatorSystem.dir/depend

