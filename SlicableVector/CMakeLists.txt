
cmake_minimum_required(VERSION 3.0)

add_executable(SlicableVector ${SlicableVector_DIR}/source/SlicableVector.cpp)
target_sources(
        SlicableVector PUBLIC ${SlicableVector_DIR}/source/SlicableVector.cpp
)

