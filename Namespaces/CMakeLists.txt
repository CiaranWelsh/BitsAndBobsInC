
cmake_minimum_required(VERSION 3.0)

add_executable(Namespaces ${Namespaces_DIR}/source/Namespaces.cpp)
target_sources(
        Namespaces PUBLIC ${Namespaces_DIR}/source/Namespaces.cpp
)

