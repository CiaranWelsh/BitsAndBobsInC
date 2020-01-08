
cmake_minimum_required(VERSION 3.0)

add_executable(PolymorphismWithSmartPointers ${PolymorphismWithSmartPointers_DIR}/source/PolymorphismWithSmartPointers.cpp)
target_sources(
        PolymorphismWithSmartPointers PUBLIC ${PolymorphismWithSmartPointers_DIR}/source/PolymorphismWithSmartPointers.cpp
)

