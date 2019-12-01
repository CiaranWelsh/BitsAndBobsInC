
cmake_minimum_required(VERSION 3.0)

add_executable(CopyInitialisation ${CopyInitialisation_DIR}/source/CopyInitialisation.cpp)
target_sources(
        CopyInitialisation PUBLIC ${CopyInitialisation_DIR}/source/CopyInitialisation.cpp
)

