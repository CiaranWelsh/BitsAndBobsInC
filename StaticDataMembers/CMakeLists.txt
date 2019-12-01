
cmake_minimum_required(VERSION 3.0)

add_executable(StaticDataMembers ${StaticDataMembers_DIR}/source/StaticDataMembers.cpp)
target_sources(
        StaticDataMembers PUBLIC ${StaticDataMembers_DIR}/source/StaticDataMembers.cpp
)

