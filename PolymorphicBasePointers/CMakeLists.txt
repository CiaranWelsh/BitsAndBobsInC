
cmake_minimum_required(VERSION 3.0)

add_executable(PolymorphicBasePointers ${PolymorphicBasePointers_DIR}/source/PolymorphicBasePointers.cpp)
target_sources(
        PolymorphicBasePointers PUBLIC ${PolymorphicBasePointers_DIR}/source/PolymorphicBasePointers.cpp
)

