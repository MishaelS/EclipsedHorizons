# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Dev\projectsCpp\EclipsedHorizons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Dev\projectsCpp\EclipsedHorizons\build

# Include any dependencies generated for this target.
include CMakeFiles/EclipsedHorizons.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/EclipsedHorizons.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/EclipsedHorizons.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EclipsedHorizons.dir/flags.make

CMakeFiles/EclipsedHorizons.dir/source/core/game_engine.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/core/game_engine.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/core/game_engine.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/core/game_engine.cpp
CMakeFiles/EclipsedHorizons.dir/source/core/game_engine.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/core/game_engine.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/core/game_engine.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\core\game_engine.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\core\game_engine.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\core\game_engine.cpp

CMakeFiles/EclipsedHorizons.dir/source/core/game_engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/core/game_engine.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\core\game_engine.cpp > CMakeFiles\EclipsedHorizons.dir\source\core\game_engine.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/core/game_engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/core/game_engine.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\core\game_engine.cpp -o CMakeFiles\EclipsedHorizons.dir\source\core\game_engine.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/core/game_state_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/core/game_state_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/core/game_state_manager.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/core/game_state_manager.cpp
CMakeFiles/EclipsedHorizons.dir/source/core/game_state_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/core/game_state_manager.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/core/game_state_manager.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\core\game_state_manager.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\core\game_state_manager.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\core\game_state_manager.cpp

CMakeFiles/EclipsedHorizons.dir/source/core/game_state_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/core/game_state_manager.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\core\game_state_manager.cpp > CMakeFiles\EclipsedHorizons.dir\source\core\game_state_manager.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/core/game_state_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/core/game_state_manager.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\core\game_state_manager.cpp -o CMakeFiles\EclipsedHorizons.dir\source\core\game_state_manager.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/core/scene.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/core/scene.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/core/scene.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/core/scene.cpp
CMakeFiles/EclipsedHorizons.dir/source/core/scene.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/core/scene.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/core/scene.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\core\scene.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\core\scene.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\core\scene.cpp

CMakeFiles/EclipsedHorizons.dir/source/core/scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/core/scene.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\core\scene.cpp > CMakeFiles\EclipsedHorizons.dir\source\core\scene.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/core/scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/core/scene.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\core\scene.cpp -o CMakeFiles\EclipsedHorizons.dir\source\core\scene.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/core/world.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/core/world.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/core/world.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/core/world.cpp
CMakeFiles/EclipsedHorizons.dir/source/core/world.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/core/world.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/core/world.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\core\world.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\core\world.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\core\world.cpp

CMakeFiles/EclipsedHorizons.dir/source/core/world.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/core/world.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\core\world.cpp > CMakeFiles\EclipsedHorizons.dir\source\core\world.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/core/world.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/core/world.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\core\world.cpp -o CMakeFiles\EclipsedHorizons.dir\source\core\world.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/entities/collision_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/entities/collision_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/entities/collision_manager.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/entities/collision_manager.cpp
CMakeFiles/EclipsedHorizons.dir/source/entities/collision_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/entities/collision_manager.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/entities/collision_manager.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\entities\collision_manager.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\entities\collision_manager.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\entities\collision_manager.cpp

CMakeFiles/EclipsedHorizons.dir/source/entities/collision_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/entities/collision_manager.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\entities\collision_manager.cpp > CMakeFiles\EclipsedHorizons.dir\source\entities\collision_manager.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/entities/collision_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/entities/collision_manager.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\entities\collision_manager.cpp -o CMakeFiles\EclipsedHorizons.dir\source\entities\collision_manager.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/entities/entity.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/entities/entity.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/entities/entity.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/entities/entity.cpp
CMakeFiles/EclipsedHorizons.dir/source/entities/entity.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/entities/entity.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/entities/entity.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\entities\entity.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\entities\entity.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\entities\entity.cpp

CMakeFiles/EclipsedHorizons.dir/source/entities/entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/entities/entity.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\entities\entity.cpp > CMakeFiles\EclipsedHorizons.dir\source\entities\entity.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/entities/entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/entities/entity.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\entities\entity.cpp -o CMakeFiles\EclipsedHorizons.dir\source\entities\entity.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/entities/player.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/entities/player.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/entities/player.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/entities/player.cpp
CMakeFiles/EclipsedHorizons.dir/source/entities/player.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/entities/player.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/entities/player.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\entities\player.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\entities\player.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\entities\player.cpp

CMakeFiles/EclipsedHorizons.dir/source/entities/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/entities/player.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\entities\player.cpp > CMakeFiles\EclipsedHorizons.dir\source\entities\player.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/entities/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/entities/player.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\entities\player.cpp -o CMakeFiles\EclipsedHorizons.dir\source\entities\player.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/globals.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/globals.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/globals.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/globals.cpp
CMakeFiles/EclipsedHorizons.dir/source/globals.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/globals.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/globals.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\globals.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\globals.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\globals.cpp

CMakeFiles/EclipsedHorizons.dir/source/globals.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/globals.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\globals.cpp > CMakeFiles\EclipsedHorizons.dir\source\globals.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/globals.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/globals.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\globals.cpp -o CMakeFiles\EclipsedHorizons.dir\source\globals.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/graphics/animation_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/graphics/animation_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/graphics/animation_manager.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/graphics/animation_manager.cpp
CMakeFiles/EclipsedHorizons.dir/source/graphics/animation_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/graphics/animation_manager.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/graphics/animation_manager.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\graphics\animation_manager.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\graphics\animation_manager.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\animation_manager.cpp

CMakeFiles/EclipsedHorizons.dir/source/graphics/animation_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/graphics/animation_manager.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\animation_manager.cpp > CMakeFiles\EclipsedHorizons.dir\source\graphics\animation_manager.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/graphics/animation_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/graphics/animation_manager.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\animation_manager.cpp -o CMakeFiles\EclipsedHorizons.dir\source\graphics\animation_manager.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/graphics/audio_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/graphics/audio_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/graphics/audio_manager.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/graphics/audio_manager.cpp
CMakeFiles/EclipsedHorizons.dir/source/graphics/audio_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/graphics/audio_manager.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/graphics/audio_manager.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\graphics\audio_manager.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\graphics\audio_manager.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\audio_manager.cpp

CMakeFiles/EclipsedHorizons.dir/source/graphics/audio_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/graphics/audio_manager.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\audio_manager.cpp > CMakeFiles\EclipsedHorizons.dir\source\graphics\audio_manager.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/graphics/audio_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/graphics/audio_manager.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\audio_manager.cpp -o CMakeFiles\EclipsedHorizons.dir\source\graphics\audio_manager.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/graphics/camera_controller.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/graphics/camera_controller.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/graphics/camera_controller.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/graphics/camera_controller.cpp
CMakeFiles/EclipsedHorizons.dir/source/graphics/camera_controller.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/graphics/camera_controller.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/graphics/camera_controller.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\graphics\camera_controller.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\graphics\camera_controller.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\camera_controller.cpp

CMakeFiles/EclipsedHorizons.dir/source/graphics/camera_controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/graphics/camera_controller.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\camera_controller.cpp > CMakeFiles\EclipsedHorizons.dir\source\graphics\camera_controller.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/graphics/camera_controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/graphics/camera_controller.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\camera_controller.cpp -o CMakeFiles\EclipsedHorizons.dir\source\graphics\camera_controller.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/graphics/entity_layer_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/graphics/entity_layer_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/graphics/entity_layer_manager.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/graphics/entity_layer_manager.cpp
CMakeFiles/EclipsedHorizons.dir/source/graphics/entity_layer_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/graphics/entity_layer_manager.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/graphics/entity_layer_manager.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\graphics\entity_layer_manager.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\graphics\entity_layer_manager.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\entity_layer_manager.cpp

CMakeFiles/EclipsedHorizons.dir/source/graphics/entity_layer_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/graphics/entity_layer_manager.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\entity_layer_manager.cpp > CMakeFiles\EclipsedHorizons.dir\source\graphics\entity_layer_manager.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/graphics/entity_layer_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/graphics/entity_layer_manager.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\entity_layer_manager.cpp -o CMakeFiles\EclipsedHorizons.dir\source\graphics\entity_layer_manager.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/graphics/texture_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/graphics/texture_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/graphics/texture_manager.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/graphics/texture_manager.cpp
CMakeFiles/EclipsedHorizons.dir/source/graphics/texture_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/graphics/texture_manager.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/graphics/texture_manager.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\graphics\texture_manager.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\graphics\texture_manager.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\texture_manager.cpp

CMakeFiles/EclipsedHorizons.dir/source/graphics/texture_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/graphics/texture_manager.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\texture_manager.cpp > CMakeFiles\EclipsedHorizons.dir\source\graphics\texture_manager.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/graphics/texture_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/graphics/texture_manager.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\texture_manager.cpp -o CMakeFiles\EclipsedHorizons.dir\source\graphics\texture_manager.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/graphics/time_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/graphics/time_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/graphics/time_manager.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/graphics/time_manager.cpp
CMakeFiles/EclipsedHorizons.dir/source/graphics/time_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/graphics/time_manager.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/graphics/time_manager.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\graphics\time_manager.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\graphics\time_manager.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\time_manager.cpp

CMakeFiles/EclipsedHorizons.dir/source/graphics/time_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/graphics/time_manager.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\time_manager.cpp > CMakeFiles\EclipsedHorizons.dir\source\graphics\time_manager.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/graphics/time_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/graphics/time_manager.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\graphics\time_manager.cpp -o CMakeFiles\EclipsedHorizons.dir\source\graphics\time_manager.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/main.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/main.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/main.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/main.cpp
CMakeFiles/EclipsedHorizons.dir/source/main.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/main.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/main.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\main.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\main.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\main.cpp

CMakeFiles/EclipsedHorizons.dir/source/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/main.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\main.cpp > CMakeFiles\EclipsedHorizons.dir\source\main.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/main.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\main.cpp -o CMakeFiles\EclipsedHorizons.dir\source\main.cpp.s

CMakeFiles/EclipsedHorizons.dir/source/ui/ui_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/flags.make
CMakeFiles/EclipsedHorizons.dir/source/ui/ui_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/includes_CXX.rsp
CMakeFiles/EclipsedHorizons.dir/source/ui/ui_manager.cpp.obj: C:/Dev/projectsCpp/EclipsedHorizons/source/ui/ui_manager.cpp
CMakeFiles/EclipsedHorizons.dir/source/ui/ui_manager.cpp.obj: CMakeFiles/EclipsedHorizons.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/EclipsedHorizons.dir/source/ui/ui_manager.cpp.obj"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EclipsedHorizons.dir/source/ui/ui_manager.cpp.obj -MF CMakeFiles\EclipsedHorizons.dir\source\ui\ui_manager.cpp.obj.d -o CMakeFiles\EclipsedHorizons.dir\source\ui\ui_manager.cpp.obj -c C:\Dev\projectsCpp\EclipsedHorizons\source\ui\ui_manager.cpp

CMakeFiles/EclipsedHorizons.dir/source/ui/ui_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EclipsedHorizons.dir/source/ui/ui_manager.cpp.i"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\projectsCpp\EclipsedHorizons\source\ui\ui_manager.cpp > CMakeFiles\EclipsedHorizons.dir\source\ui\ui_manager.cpp.i

CMakeFiles/EclipsedHorizons.dir/source/ui/ui_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EclipsedHorizons.dir/source/ui/ui_manager.cpp.s"
	C:\Dev\projectsCpp\EclipsedHorizons\lib\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\projectsCpp\EclipsedHorizons\source\ui\ui_manager.cpp -o CMakeFiles\EclipsedHorizons.dir\source\ui\ui_manager.cpp.s

# Object files for target EclipsedHorizons
EclipsedHorizons_OBJECTS = \
"CMakeFiles/EclipsedHorizons.dir/source/core/game_engine.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/core/game_state_manager.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/core/scene.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/core/world.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/entities/collision_manager.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/entities/entity.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/entities/player.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/globals.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/graphics/animation_manager.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/graphics/audio_manager.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/graphics/camera_controller.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/graphics/entity_layer_manager.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/graphics/texture_manager.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/graphics/time_manager.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/main.cpp.obj" \
"CMakeFiles/EclipsedHorizons.dir/source/ui/ui_manager.cpp.obj"

# External object files for target EclipsedHorizons
EclipsedHorizons_EXTERNAL_OBJECTS =

bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/core/game_engine.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/core/game_state_manager.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/core/scene.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/core/world.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/entities/collision_manager.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/entities/entity.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/entities/player.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/globals.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/graphics/animation_manager.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/graphics/audio_manager.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/graphics/camera_controller.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/graphics/entity_layer_manager.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/graphics/texture_manager.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/graphics/time_manager.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/main.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/source/ui/ui_manager.cpp.obj
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/build.make
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/linkLibs.rsp
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/objects1.rsp
bin/EclipsedHorizons.exe: CMakeFiles/EclipsedHorizons.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable bin\EclipsedHorizons.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EclipsedHorizons.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EclipsedHorizons.dir/build: bin/EclipsedHorizons.exe
.PHONY : CMakeFiles/EclipsedHorizons.dir/build

CMakeFiles/EclipsedHorizons.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EclipsedHorizons.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EclipsedHorizons.dir/clean

CMakeFiles/EclipsedHorizons.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Dev\projectsCpp\EclipsedHorizons C:\Dev\projectsCpp\EclipsedHorizons C:\Dev\projectsCpp\EclipsedHorizons\build C:\Dev\projectsCpp\EclipsedHorizons\build C:\Dev\projectsCpp\EclipsedHorizons\build\CMakeFiles\EclipsedHorizons.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EclipsedHorizons.dir/depend

