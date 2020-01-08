
cmake_minimum_required(VERSION 3.0)

add_executable(AllElementsOfAVectorEqual ${AllElementsOfAVectorEqual_DIR}/source/AllElementsOfAVectorEqual.cpp)
target_sources(
        AllElementsOfAVectorEqual PUBLIC ${AllElementsOfAVectorEqual_DIR}/source/AllElementsOfAVectorEqual.cpp
)

