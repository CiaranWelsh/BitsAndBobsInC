
cmake_minimum_required(VERSION 3.0)

add_executable(VectorClass ${VectorClass_DIR}/source/VectorClass.cpp)
target_sources(
        VectorClass PUBLIC ${VectorClass_DIR}/source/VectorClass.cpp
)

