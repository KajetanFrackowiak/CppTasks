# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "C:\Users\kajte\AppData\Local\Programs\CLion Nova\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\kajte\AppData\Local\Programs\CLion Nova\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\kajte\Documents\CppTasks\note

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kajte\Documents\CppTasks\note\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/note.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/note.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/note.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/note.dir/flags.make

CMakeFiles/note.dir/main.cpp.obj: CMakeFiles/note.dir/flags.make
CMakeFiles/note.dir/main.cpp.obj: C:/Users/kajte/Documents/CppTasks/note/main.cpp
CMakeFiles/note.dir/main.cpp.obj: CMakeFiles/note.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\kajte\Documents\CppTasks\note\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/note.dir/main.cpp.obj"
	C:\Users\kajte\AppData\Local\Programs\CLIONN~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/note.dir/main.cpp.obj -MF CMakeFiles\note.dir\main.cpp.obj.d -o CMakeFiles\note.dir\main.cpp.obj -c C:\Users\kajte\Documents\CppTasks\note\main.cpp

CMakeFiles/note.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/note.dir/main.cpp.i"
	C:\Users\kajte\AppData\Local\Programs\CLIONN~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kajte\Documents\CppTasks\note\main.cpp > CMakeFiles\note.dir\main.cpp.i

CMakeFiles/note.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/note.dir/main.cpp.s"
	C:\Users\kajte\AppData\Local\Programs\CLIONN~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kajte\Documents\CppTasks\note\main.cpp -o CMakeFiles\note.dir\main.cpp.s

# Object files for target note
note_OBJECTS = \
"CMakeFiles/note.dir/main.cpp.obj"

# External object files for target note
note_EXTERNAL_OBJECTS =

note.exe: CMakeFiles/note.dir/main.cpp.obj
note.exe: CMakeFiles/note.dir/build.make
note.exe: CMakeFiles/note.dir/linkLibs.rsp
note.exe: CMakeFiles/note.dir/objects1.rsp
note.exe: CMakeFiles/note.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\kajte\Documents\CppTasks\note\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable note.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\note.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/note.dir/build: note.exe
.PHONY : CMakeFiles/note.dir/build

CMakeFiles/note.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\note.dir\cmake_clean.cmake
.PHONY : CMakeFiles/note.dir/clean

CMakeFiles/note.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kajte\Documents\CppTasks\note C:\Users\kajte\Documents\CppTasks\note C:\Users\kajte\Documents\CppTasks\note\cmake-build-debug C:\Users\kajte\Documents\CppTasks\note\cmake-build-debug C:\Users\kajte\Documents\CppTasks\note\cmake-build-debug\CMakeFiles\note.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/note.dir/depend

