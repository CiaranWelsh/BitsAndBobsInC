
cmake_minimum_required(VERSION 3.0)

add_executable(CopyConstructor ${CopyConstructor_DIR}/source/CopyConstructor.cpp)
target_sources(
        CopyConstructor PUBLIC ${CopyConstructor_DIR}/source/CopyConstructor.cpp
)

