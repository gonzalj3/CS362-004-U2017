# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/dominion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dominion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dominion.dir/flags.make

CMakeFiles/dominion.dir/badTestDrawCard.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/badTestDrawCard.c.o: ../badTestDrawCard.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/dominion.dir/badTestDrawCard.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/badTestDrawCard.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/badTestDrawCard.c"

CMakeFiles/dominion.dir/badTestDrawCard.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/badTestDrawCard.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/badTestDrawCard.c" > CMakeFiles/dominion.dir/badTestDrawCard.c.i

CMakeFiles/dominion.dir/badTestDrawCard.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/badTestDrawCard.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/badTestDrawCard.c" -o CMakeFiles/dominion.dir/badTestDrawCard.c.s

CMakeFiles/dominion.dir/badTestDrawCard.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/badTestDrawCard.c.o.requires

CMakeFiles/dominion.dir/badTestDrawCard.c.o.provides: CMakeFiles/dominion.dir/badTestDrawCard.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/badTestDrawCard.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/badTestDrawCard.c.o.provides

CMakeFiles/dominion.dir/badTestDrawCard.c.o.provides.build: CMakeFiles/dominion.dir/badTestDrawCard.c.o


CMakeFiles/dominion.dir/betterTestDrawCard.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/betterTestDrawCard.c.o: ../betterTestDrawCard.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/dominion.dir/betterTestDrawCard.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/betterTestDrawCard.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/betterTestDrawCard.c"

CMakeFiles/dominion.dir/betterTestDrawCard.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/betterTestDrawCard.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/betterTestDrawCard.c" > CMakeFiles/dominion.dir/betterTestDrawCard.c.i

CMakeFiles/dominion.dir/betterTestDrawCard.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/betterTestDrawCard.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/betterTestDrawCard.c" -o CMakeFiles/dominion.dir/betterTestDrawCard.c.s

CMakeFiles/dominion.dir/betterTestDrawCard.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/betterTestDrawCard.c.o.requires

CMakeFiles/dominion.dir/betterTestDrawCard.c.o.provides: CMakeFiles/dominion.dir/betterTestDrawCard.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/betterTestDrawCard.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/betterTestDrawCard.c.o.provides

CMakeFiles/dominion.dir/betterTestDrawCard.c.o.provides.build: CMakeFiles/dominion.dir/betterTestDrawCard.c.o


CMakeFiles/dominion.dir/dominion.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/dominion.c.o: ../dominion.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/dominion.dir/dominion.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/dominion.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/dominion.c"

CMakeFiles/dominion.dir/dominion.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/dominion.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/dominion.c" > CMakeFiles/dominion.dir/dominion.c.i

CMakeFiles/dominion.dir/dominion.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/dominion.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/dominion.c" -o CMakeFiles/dominion.dir/dominion.c.s

CMakeFiles/dominion.dir/dominion.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/dominion.c.o.requires

CMakeFiles/dominion.dir/dominion.c.o.provides: CMakeFiles/dominion.dir/dominion.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/dominion.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/dominion.c.o.provides

CMakeFiles/dominion.dir/dominion.c.o.provides.build: CMakeFiles/dominion.dir/dominion.c.o


CMakeFiles/dominion.dir/interface.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/interface.c.o: ../interface.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/dominion.dir/interface.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/interface.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/interface.c"

CMakeFiles/dominion.dir/interface.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/interface.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/interface.c" > CMakeFiles/dominion.dir/interface.c.i

CMakeFiles/dominion.dir/interface.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/interface.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/interface.c" -o CMakeFiles/dominion.dir/interface.c.s

CMakeFiles/dominion.dir/interface.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/interface.c.o.requires

CMakeFiles/dominion.dir/interface.c.o.provides: CMakeFiles/dominion.dir/interface.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/interface.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/interface.c.o.provides

CMakeFiles/dominion.dir/interface.c.o.provides.build: CMakeFiles/dominion.dir/interface.c.o


CMakeFiles/dominion.dir/playdom.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/playdom.c.o: ../playdom.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/dominion.dir/playdom.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/playdom.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/playdom.c"

CMakeFiles/dominion.dir/playdom.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/playdom.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/playdom.c" > CMakeFiles/dominion.dir/playdom.c.i

CMakeFiles/dominion.dir/playdom.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/playdom.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/playdom.c" -o CMakeFiles/dominion.dir/playdom.c.s

CMakeFiles/dominion.dir/playdom.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/playdom.c.o.requires

CMakeFiles/dominion.dir/playdom.c.o.provides: CMakeFiles/dominion.dir/playdom.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/playdom.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/playdom.c.o.provides

CMakeFiles/dominion.dir/playdom.c.o.provides.build: CMakeFiles/dominion.dir/playdom.c.o


CMakeFiles/dominion.dir/player.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/player.c.o: ../player.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/dominion.dir/player.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/player.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/player.c"

CMakeFiles/dominion.dir/player.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/player.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/player.c" > CMakeFiles/dominion.dir/player.c.i

CMakeFiles/dominion.dir/player.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/player.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/player.c" -o CMakeFiles/dominion.dir/player.c.s

CMakeFiles/dominion.dir/player.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/player.c.o.requires

CMakeFiles/dominion.dir/player.c.o.provides: CMakeFiles/dominion.dir/player.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/player.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/player.c.o.provides

CMakeFiles/dominion.dir/player.c.o.provides.build: CMakeFiles/dominion.dir/player.c.o


CMakeFiles/dominion.dir/rngs.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/rngs.c.o: ../rngs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/dominion.dir/rngs.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/rngs.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/rngs.c"

CMakeFiles/dominion.dir/rngs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/rngs.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/rngs.c" > CMakeFiles/dominion.dir/rngs.c.i

CMakeFiles/dominion.dir/rngs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/rngs.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/rngs.c" -o CMakeFiles/dominion.dir/rngs.c.s

CMakeFiles/dominion.dir/rngs.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/rngs.c.o.requires

CMakeFiles/dominion.dir/rngs.c.o.provides: CMakeFiles/dominion.dir/rngs.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/rngs.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/rngs.c.o.provides

CMakeFiles/dominion.dir/rngs.c.o.provides.build: CMakeFiles/dominion.dir/rngs.c.o


CMakeFiles/dominion.dir/rt.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/rt.c.o: ../rt.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/dominion.dir/rt.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/rt.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/rt.c"

CMakeFiles/dominion.dir/rt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/rt.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/rt.c" > CMakeFiles/dominion.dir/rt.c.i

CMakeFiles/dominion.dir/rt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/rt.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/rt.c" -o CMakeFiles/dominion.dir/rt.c.s

CMakeFiles/dominion.dir/rt.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/rt.c.o.requires

CMakeFiles/dominion.dir/rt.c.o.provides: CMakeFiles/dominion.dir/rt.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/rt.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/rt.c.o.provides

CMakeFiles/dominion.dir/rt.c.o.provides.build: CMakeFiles/dominion.dir/rt.c.o


CMakeFiles/dominion.dir/supplyTest.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/supplyTest.c.o: ../supplyTest.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/dominion.dir/supplyTest.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/supplyTest.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/supplyTest.c"

CMakeFiles/dominion.dir/supplyTest.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/supplyTest.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/supplyTest.c" > CMakeFiles/dominion.dir/supplyTest.c.i

CMakeFiles/dominion.dir/supplyTest.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/supplyTest.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/supplyTest.c" -o CMakeFiles/dominion.dir/supplyTest.c.s

CMakeFiles/dominion.dir/supplyTest.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/supplyTest.c.o.requires

CMakeFiles/dominion.dir/supplyTest.c.o.provides: CMakeFiles/dominion.dir/supplyTest.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/supplyTest.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/supplyTest.c.o.provides

CMakeFiles/dominion.dir/supplyTest.c.o.provides.build: CMakeFiles/dominion.dir/supplyTest.c.o


CMakeFiles/dominion.dir/testBuyCard.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/testBuyCard.c.o: ../testBuyCard.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/dominion.dir/testBuyCard.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/testBuyCard.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/testBuyCard.c"

CMakeFiles/dominion.dir/testBuyCard.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/testBuyCard.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/testBuyCard.c" > CMakeFiles/dominion.dir/testBuyCard.c.i

CMakeFiles/dominion.dir/testBuyCard.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/testBuyCard.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/testBuyCard.c" -o CMakeFiles/dominion.dir/testBuyCard.c.s

CMakeFiles/dominion.dir/testBuyCard.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/testBuyCard.c.o.requires

CMakeFiles/dominion.dir/testBuyCard.c.o.provides: CMakeFiles/dominion.dir/testBuyCard.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/testBuyCard.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/testBuyCard.c.o.provides

CMakeFiles/dominion.dir/testBuyCard.c.o.provides.build: CMakeFiles/dominion.dir/testBuyCard.c.o


CMakeFiles/dominion.dir/testDrawCard.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/testDrawCard.c.o: ../testDrawCard.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/dominion.dir/testDrawCard.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/testDrawCard.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/testDrawCard.c"

CMakeFiles/dominion.dir/testDrawCard.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/testDrawCard.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/testDrawCard.c" > CMakeFiles/dominion.dir/testDrawCard.c.i

CMakeFiles/dominion.dir/testDrawCard.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/testDrawCard.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/testDrawCard.c" -o CMakeFiles/dominion.dir/testDrawCard.c.s

CMakeFiles/dominion.dir/testDrawCard.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/testDrawCard.c.o.requires

CMakeFiles/dominion.dir/testDrawCard.c.o.provides: CMakeFiles/dominion.dir/testDrawCard.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/testDrawCard.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/testDrawCard.c.o.provides

CMakeFiles/dominion.dir/testDrawCard.c.o.provides.build: CMakeFiles/dominion.dir/testDrawCard.c.o


CMakeFiles/dominion.dir/testInit.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/testInit.c.o: ../testInit.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/dominion.dir/testInit.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/testInit.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/testInit.c"

CMakeFiles/dominion.dir/testInit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/testInit.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/testInit.c" > CMakeFiles/dominion.dir/testInit.c.i

CMakeFiles/dominion.dir/testInit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/testInit.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/testInit.c" -o CMakeFiles/dominion.dir/testInit.c.s

CMakeFiles/dominion.dir/testInit.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/testInit.c.o.requires

CMakeFiles/dominion.dir/testInit.c.o.provides: CMakeFiles/dominion.dir/testInit.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/testInit.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/testInit.c.o.provides

CMakeFiles/dominion.dir/testInit.c.o.provides.build: CMakeFiles/dominion.dir/testInit.c.o


CMakeFiles/dominion.dir/testShuffle.c.o: CMakeFiles/dominion.dir/flags.make
CMakeFiles/dominion.dir/testShuffle.c.o: ../testShuffle.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/dominion.dir/testShuffle.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/dominion.dir/testShuffle.c.o   -c "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/testShuffle.c"

CMakeFiles/dominion.dir/testShuffle.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dominion.dir/testShuffle.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/testShuffle.c" > CMakeFiles/dominion.dir/testShuffle.c.i

CMakeFiles/dominion.dir/testShuffle.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dominion.dir/testShuffle.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/testShuffle.c" -o CMakeFiles/dominion.dir/testShuffle.c.s

CMakeFiles/dominion.dir/testShuffle.c.o.requires:

.PHONY : CMakeFiles/dominion.dir/testShuffle.c.o.requires

CMakeFiles/dominion.dir/testShuffle.c.o.provides: CMakeFiles/dominion.dir/testShuffle.c.o.requires
	$(MAKE) -f CMakeFiles/dominion.dir/build.make CMakeFiles/dominion.dir/testShuffle.c.o.provides.build
.PHONY : CMakeFiles/dominion.dir/testShuffle.c.o.provides

CMakeFiles/dominion.dir/testShuffle.c.o.provides.build: CMakeFiles/dominion.dir/testShuffle.c.o


# Object files for target dominion
dominion_OBJECTS = \
"CMakeFiles/dominion.dir/badTestDrawCard.c.o" \
"CMakeFiles/dominion.dir/betterTestDrawCard.c.o" \
"CMakeFiles/dominion.dir/dominion.c.o" \
"CMakeFiles/dominion.dir/interface.c.o" \
"CMakeFiles/dominion.dir/playdom.c.o" \
"CMakeFiles/dominion.dir/player.c.o" \
"CMakeFiles/dominion.dir/rngs.c.o" \
"CMakeFiles/dominion.dir/rt.c.o" \
"CMakeFiles/dominion.dir/supplyTest.c.o" \
"CMakeFiles/dominion.dir/testBuyCard.c.o" \
"CMakeFiles/dominion.dir/testDrawCard.c.o" \
"CMakeFiles/dominion.dir/testInit.c.o" \
"CMakeFiles/dominion.dir/testShuffle.c.o"

# External object files for target dominion
dominion_EXTERNAL_OBJECTS =

dominion: CMakeFiles/dominion.dir/badTestDrawCard.c.o
dominion: CMakeFiles/dominion.dir/betterTestDrawCard.c.o
dominion: CMakeFiles/dominion.dir/dominion.c.o
dominion: CMakeFiles/dominion.dir/interface.c.o
dominion: CMakeFiles/dominion.dir/playdom.c.o
dominion: CMakeFiles/dominion.dir/player.c.o
dominion: CMakeFiles/dominion.dir/rngs.c.o
dominion: CMakeFiles/dominion.dir/rt.c.o
dominion: CMakeFiles/dominion.dir/supplyTest.c.o
dominion: CMakeFiles/dominion.dir/testBuyCard.c.o
dominion: CMakeFiles/dominion.dir/testDrawCard.c.o
dominion: CMakeFiles/dominion.dir/testInit.c.o
dominion: CMakeFiles/dominion.dir/testShuffle.c.o
dominion: CMakeFiles/dominion.dir/build.make
dominion: CMakeFiles/dominion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_14) "Linking C executable dominion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dominion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dominion.dir/build: dominion

.PHONY : CMakeFiles/dominion.dir/build

CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/badTestDrawCard.c.o.requires
CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/betterTestDrawCard.c.o.requires
CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/dominion.c.o.requires
CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/interface.c.o.requires
CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/playdom.c.o.requires
CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/player.c.o.requires
CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/rngs.c.o.requires
CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/rt.c.o.requires
CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/supplyTest.c.o.requires
CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/testBuyCard.c.o.requires
CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/testDrawCard.c.o.requires
CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/testInit.c.o.requires
CMakeFiles/dominion.dir/requires: CMakeFiles/dominion.dir/testShuffle.c.o.requires

.PHONY : CMakeFiles/dominion.dir/requires

CMakeFiles/dominion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dominion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dominion.dir/clean

CMakeFiles/dominion.dir/depend:
	cd "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion" "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion" "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug" "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug" "/Users/jmg/OSU/362 Software Engineering 2/git/CS362-004-SP17/projects/gonzalj3/dominion/cmake-build-debug/CMakeFiles/dominion.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/dominion.dir/depend
