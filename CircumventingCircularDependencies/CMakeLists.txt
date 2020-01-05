
cmake_minimum_required(VERSION 3.0)

add_executable(CircumventingCircularDependencies ${CircumventingCircularDependencies_DIR}/source/CircumventingCircularDependencies.cpp)
target_sources(
        CircumventingCircularDependencies PUBLIC ${CircumventingCircularDependencies_DIR}/source/CircumventingCircularDependencies.cpp
)

