
cmake_minimum_required(VERSION 3.0)

add_executable(ConstructorInheritance ${ConstructorInheritance_DIR}/source/ConstructorInheritance.cpp)
target_sources(
        ConstructorInheritance PUBLIC ${ConstructorInheritance_DIR}/source/ConstructorInheritance.cpp
)

