
cmake_minimum_required(VERSION 3.0)

add_executable(SharedPtr ${SharedPtr_DIR}/source/SharedPtr.cpp)
target_sources(
        SharedPtr PUBLIC ${SharedPtr_DIR}/source/SharedPtr.cpp
)

