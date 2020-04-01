
cmake_minimum_required(VERSION 3.0)

add_executable(PutToOperatorOverloading ${PutToOperatorOverloading_DIR}/source/PutToOperatorOverloading.cpp)
target_sources(
        PutToOperatorOverloading PUBLIC ${PutToOperatorOverloading_DIR}/source/PutToOperatorOverloading.cpp
)

