
cmake_minimum_required(VERSION 3.0)

add_executable(CopyAnInt ${CopyAnInt_DIR}/source/CopyAnInt.cpp)
target_sources(
        CopyAnInt PUBLIC ${CopyAnInt_DIR}/source/CopyAnInt.cpp
)

