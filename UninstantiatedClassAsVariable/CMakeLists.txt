
cmake_minimum_required(VERSION 3.0)

add_executable(UninstantiatedClassAsVariable ${UninstantiatedClassAsVariable_DIR}/source/UninstantiatedClassAsVariable.cpp)
target_sources(
        UninstantiatedClassAsVariable PUBLIC ${UninstantiatedClassAsVariable_DIR}/source/UninstantiatedClassAsVariable.cpp
)

