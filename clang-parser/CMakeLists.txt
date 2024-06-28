cmake_minimum_required(VERSION 3.16)
project(binary)

# find_package(LLVM 10 REQUIRED CONFIG)
find_package(LLVM 12 REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})
message("${LLVM_LIBRARY_DIRS}")
# set(Clang_DIR "/lib/cmake/clang-10")
# set(CMAKE_CXX_FLAGS " -g -O3 --std=c++17 ")
# set(CMAKE_CXX_FLAGS " -g -O0 --std=c++17 -fsanitize=memory -fsanitize-memory-track-origins=2")
set(CMAKE_CXX_FLAGS " -g -O0 --std=c++17 ")

include_directories(include)

find_package(Clang REQUIRED CONFIG PATHS "/lib/cmake/clang-12/ClangConfig.cmake")
# find_package(Clang 12 REQUIRED CONFIG )#PATHS "/lib/cmake/clang-10/ClangConfig.cmake")
find_package(nlohmann_json 3.2.0 REQUIRED)
message("${Clang_LIBRARY_DIRS}")

add_definitions(${Clang_DEFINITIONS})

include_directories(
  ${Clang_INCLUDE_DIRS}
)
# 
# include("/usr/lib/llvm-12/cmake/AddLLVM.cmake")


# add_executable(propagate driver.cc 
# utils/compilerUtils.cc 
# utils/configUtils.cc
# prop_rules/var_renamer.cc 
# prop_rules/beyond_access_visitor.cc)
# target_link_libraries(propagate clangTooling)
# target_link_libraries(propagate protobuf)


# add_executable(beyond_access beyond_access_driver.cc 
# utils/compilerUtils.cc 
# utils/configUtils.cc
# prop_rules/var_renamer.cc 
# prop_rules/beyond_access_visitor.cc)
# target_link_libraries(beyond_access clangTooling)
# target_link_libraries(beyond_access protobuf)

add_executable(call_site beyond_access_driver.cc 
utils/compilerUtils.cc 
utils/configUtils.cc
prop_rules/callsite_visitor.cc)
target_link_libraries(call_site clangTooling)
target_link_libraries(call_site protobuf)

# add_executable(dataflow beyond_access_driver.cc 
# utils/compilerUtils.cc 
# utils/configUtils.cc
# prop_rules/dataflow_visitor.cc)
# target_link_libraries(dataflow clangTooling)
# target_link_libraries(dataflow protobuf)





message(STATUS "${Clang_LIBRARIES}")
