# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "/Users/claudiofacchinetti/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.4127.32/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/claudiofacchinetti/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.4127.32/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/EsamiPrecedenti.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EsamiPrecedenti.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EsamiPrecedenti.dir/flags.make

CMakeFiles/EsamiPrecedenti.dir/main.cpp.o: CMakeFiles/EsamiPrecedenti.dir/flags.make
CMakeFiles/EsamiPrecedenti.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EsamiPrecedenti.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EsamiPrecedenti.dir/main.cpp.o -c /Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti/main.cpp

CMakeFiles/EsamiPrecedenti.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EsamiPrecedenti.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti/main.cpp > CMakeFiles/EsamiPrecedenti.dir/main.cpp.i

CMakeFiles/EsamiPrecedenti.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EsamiPrecedenti.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti/main.cpp -o CMakeFiles/EsamiPrecedenti.dir/main.cpp.s

CMakeFiles/EsamiPrecedenti.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/EsamiPrecedenti.dir/main.cpp.o.requires

CMakeFiles/EsamiPrecedenti.dir/main.cpp.o.provides: CMakeFiles/EsamiPrecedenti.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/EsamiPrecedenti.dir/build.make CMakeFiles/EsamiPrecedenti.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/EsamiPrecedenti.dir/main.cpp.o.provides

CMakeFiles/EsamiPrecedenti.dir/main.cpp.o.provides.build: CMakeFiles/EsamiPrecedenti.dir/main.cpp.o


# Object files for target EsamiPrecedenti
EsamiPrecedenti_OBJECTS = \
"CMakeFiles/EsamiPrecedenti.dir/main.cpp.o"

# External object files for target EsamiPrecedenti
EsamiPrecedenti_EXTERNAL_OBJECTS =

EsamiPrecedenti: CMakeFiles/EsamiPrecedenti.dir/main.cpp.o
EsamiPrecedenti: CMakeFiles/EsamiPrecedenti.dir/build.make
EsamiPrecedenti: CMakeFiles/EsamiPrecedenti.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EsamiPrecedenti"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EsamiPrecedenti.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EsamiPrecedenti.dir/build: EsamiPrecedenti

.PHONY : CMakeFiles/EsamiPrecedenti.dir/build

CMakeFiles/EsamiPrecedenti.dir/requires: CMakeFiles/EsamiPrecedenti.dir/main.cpp.o.requires

.PHONY : CMakeFiles/EsamiPrecedenti.dir/requires

CMakeFiles/EsamiPrecedenti.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EsamiPrecedenti.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EsamiPrecedenti.dir/clean

CMakeFiles/EsamiPrecedenti.dir/depend:
	cd /Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti /Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti /Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti/cmake-build-debug /Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti/cmake-build-debug /Users/claudiofacchinetti/Developer/C++/EsamiPrecedenti/cmake-build-debug/CMakeFiles/EsamiPrecedenti.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EsamiPrecedenti.dir/depend

