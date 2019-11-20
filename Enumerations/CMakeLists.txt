
cmake_minimum_required(VERSION 3.0)

add_executable(Enumerations ${Enumerations_DIR}/source/Enumerations.cpp)
target_sources(
        Enumerations PUBLIC ${Enumerations_DIR}/source/Enumerations.cpp
)

