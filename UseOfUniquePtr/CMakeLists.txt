
cmake_minimum_required(VERSION 3.0)

add_executable(UseOfUniquePtr ${UseOfUniquePtr_DIR}/source/UseOfUniquePtr.cpp)
target_sources(
        UseOfUniquePtr PUBLIC ${UseOfUniquePtr_DIR}/source/UseOfUniquePtr.cpp
)

