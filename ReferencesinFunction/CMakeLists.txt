
cmake_minimum_required(VERSION 3.0)

add_executable(ReferencesinFunction ${ReferencesinFunction_DIR}/source/ReferencesinFunction.cpp)
target_sources(
        ReferencesinFunction PUBLIC ${ReferencesinFunction_DIR}/source/ReferencesinFunction.cpp
)

