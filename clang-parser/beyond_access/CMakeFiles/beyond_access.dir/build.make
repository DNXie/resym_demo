# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /share/resym_darpa/clang-parser

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /share/resym_darpa/clang-parser/beyond_access

# Include any dependencies generated for this target.
include CMakeFiles/beyond_access.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/beyond_access.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/beyond_access.dir/flags.make

CMakeFiles/beyond_access.dir/beyond_access_driver.cc.o: CMakeFiles/beyond_access.dir/flags.make
CMakeFiles/beyond_access.dir/beyond_access_driver.cc.o: ../beyond_access_driver.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/share/resym_darpa/clang-parser/beyond_access/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/beyond_access.dir/beyond_access_driver.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/beyond_access.dir/beyond_access_driver.cc.o -c /share/resym_darpa/clang-parser/beyond_access_driver.cc

CMakeFiles/beyond_access.dir/beyond_access_driver.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/beyond_access.dir/beyond_access_driver.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /share/resym_darpa/clang-parser/beyond_access_driver.cc > CMakeFiles/beyond_access.dir/beyond_access_driver.cc.i

CMakeFiles/beyond_access.dir/beyond_access_driver.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/beyond_access.dir/beyond_access_driver.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /share/resym_darpa/clang-parser/beyond_access_driver.cc -o CMakeFiles/beyond_access.dir/beyond_access_driver.cc.s

CMakeFiles/beyond_access.dir/utils/compilerUtils.cc.o: CMakeFiles/beyond_access.dir/flags.make
CMakeFiles/beyond_access.dir/utils/compilerUtils.cc.o: ../utils/compilerUtils.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/share/resym_darpa/clang-parser/beyond_access/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/beyond_access.dir/utils/compilerUtils.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/beyond_access.dir/utils/compilerUtils.cc.o -c /share/resym_darpa/clang-parser/utils/compilerUtils.cc

CMakeFiles/beyond_access.dir/utils/compilerUtils.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/beyond_access.dir/utils/compilerUtils.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /share/resym_darpa/clang-parser/utils/compilerUtils.cc > CMakeFiles/beyond_access.dir/utils/compilerUtils.cc.i

CMakeFiles/beyond_access.dir/utils/compilerUtils.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/beyond_access.dir/utils/compilerUtils.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /share/resym_darpa/clang-parser/utils/compilerUtils.cc -o CMakeFiles/beyond_access.dir/utils/compilerUtils.cc.s

CMakeFiles/beyond_access.dir/utils/configUtils.cc.o: CMakeFiles/beyond_access.dir/flags.make
CMakeFiles/beyond_access.dir/utils/configUtils.cc.o: ../utils/configUtils.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/share/resym_darpa/clang-parser/beyond_access/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/beyond_access.dir/utils/configUtils.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/beyond_access.dir/utils/configUtils.cc.o -c /share/resym_darpa/clang-parser/utils/configUtils.cc

CMakeFiles/beyond_access.dir/utils/configUtils.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/beyond_access.dir/utils/configUtils.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /share/resym_darpa/clang-parser/utils/configUtils.cc > CMakeFiles/beyond_access.dir/utils/configUtils.cc.i

CMakeFiles/beyond_access.dir/utils/configUtils.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/beyond_access.dir/utils/configUtils.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /share/resym_darpa/clang-parser/utils/configUtils.cc -o CMakeFiles/beyond_access.dir/utils/configUtils.cc.s

CMakeFiles/beyond_access.dir/prop_rules/var_renamer.cc.o: CMakeFiles/beyond_access.dir/flags.make
CMakeFiles/beyond_access.dir/prop_rules/var_renamer.cc.o: ../prop_rules/var_renamer.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/share/resym_darpa/clang-parser/beyond_access/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/beyond_access.dir/prop_rules/var_renamer.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/beyond_access.dir/prop_rules/var_renamer.cc.o -c /share/resym_darpa/clang-parser/prop_rules/var_renamer.cc

CMakeFiles/beyond_access.dir/prop_rules/var_renamer.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/beyond_access.dir/prop_rules/var_renamer.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /share/resym_darpa/clang-parser/prop_rules/var_renamer.cc > CMakeFiles/beyond_access.dir/prop_rules/var_renamer.cc.i

CMakeFiles/beyond_access.dir/prop_rules/var_renamer.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/beyond_access.dir/prop_rules/var_renamer.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /share/resym_darpa/clang-parser/prop_rules/var_renamer.cc -o CMakeFiles/beyond_access.dir/prop_rules/var_renamer.cc.s

CMakeFiles/beyond_access.dir/prop_rules/beyond_access_visitor.cc.o: CMakeFiles/beyond_access.dir/flags.make
CMakeFiles/beyond_access.dir/prop_rules/beyond_access_visitor.cc.o: ../prop_rules/beyond_access_visitor.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/share/resym_darpa/clang-parser/beyond_access/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/beyond_access.dir/prop_rules/beyond_access_visitor.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/beyond_access.dir/prop_rules/beyond_access_visitor.cc.o -c /share/resym_darpa/clang-parser/prop_rules/beyond_access_visitor.cc

CMakeFiles/beyond_access.dir/prop_rules/beyond_access_visitor.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/beyond_access.dir/prop_rules/beyond_access_visitor.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /share/resym_darpa/clang-parser/prop_rules/beyond_access_visitor.cc > CMakeFiles/beyond_access.dir/prop_rules/beyond_access_visitor.cc.i

CMakeFiles/beyond_access.dir/prop_rules/beyond_access_visitor.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/beyond_access.dir/prop_rules/beyond_access_visitor.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /share/resym_darpa/clang-parser/prop_rules/beyond_access_visitor.cc -o CMakeFiles/beyond_access.dir/prop_rules/beyond_access_visitor.cc.s

# Object files for target beyond_access
beyond_access_OBJECTS = \
"CMakeFiles/beyond_access.dir/beyond_access_driver.cc.o" \
"CMakeFiles/beyond_access.dir/utils/compilerUtils.cc.o" \
"CMakeFiles/beyond_access.dir/utils/configUtils.cc.o" \
"CMakeFiles/beyond_access.dir/prop_rules/var_renamer.cc.o" \
"CMakeFiles/beyond_access.dir/prop_rules/beyond_access_visitor.cc.o"

# External object files for target beyond_access
beyond_access_EXTERNAL_OBJECTS =

beyond_access: CMakeFiles/beyond_access.dir/beyond_access_driver.cc.o
beyond_access: CMakeFiles/beyond_access.dir/utils/compilerUtils.cc.o
beyond_access: CMakeFiles/beyond_access.dir/utils/configUtils.cc.o
beyond_access: CMakeFiles/beyond_access.dir/prop_rules/var_renamer.cc.o
beyond_access: CMakeFiles/beyond_access.dir/prop_rules/beyond_access_visitor.cc.o
beyond_access: CMakeFiles/beyond_access.dir/build.make
beyond_access: /usr/lib/llvm-12/lib/libclangTooling.a
beyond_access: /usr/lib/llvm-12/lib/libclangFormat.a
beyond_access: /usr/lib/llvm-12/lib/libclangToolingInclusions.a
beyond_access: /usr/lib/llvm-12/lib/libclangFrontend.a
beyond_access: /usr/lib/llvm-12/lib/libclangDriver.a
beyond_access: /usr/lib/llvm-12/lib/libclangParse.a
beyond_access: /usr/lib/llvm-12/lib/libclangSerialization.a
beyond_access: /usr/lib/llvm-12/lib/libclangSema.a
beyond_access: /usr/lib/llvm-12/lib/libclangEdit.a
beyond_access: /usr/lib/llvm-12/lib/libclangAnalysis.a
beyond_access: /usr/lib/llvm-12/lib/libclangASTMatchers.a
beyond_access: /usr/lib/llvm-12/lib/libclangAST.a
beyond_access: /usr/lib/llvm-12/lib/libclangToolingCore.a
beyond_access: /usr/lib/llvm-12/lib/libclangRewrite.a
beyond_access: /usr/lib/llvm-12/lib/libclangLex.a
beyond_access: /usr/lib/llvm-12/lib/libclangBasic.a
beyond_access: /usr/lib/llvm-12/lib/libLLVM-12.so.1
beyond_access: CMakeFiles/beyond_access.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/share/resym_darpa/clang-parser/beyond_access/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable beyond_access"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/beyond_access.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/beyond_access.dir/build: beyond_access

.PHONY : CMakeFiles/beyond_access.dir/build

CMakeFiles/beyond_access.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/beyond_access.dir/cmake_clean.cmake
.PHONY : CMakeFiles/beyond_access.dir/clean

CMakeFiles/beyond_access.dir/depend:
	cd /share/resym_darpa/clang-parser/beyond_access && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /share/resym_darpa/clang-parser /share/resym_darpa/clang-parser /share/resym_darpa/clang-parser/beyond_access /share/resym_darpa/clang-parser/beyond_access /share/resym_darpa/clang-parser/beyond_access/CMakeFiles/beyond_access.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/beyond_access.dir/depend

