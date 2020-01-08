
cmake_minimum_required(VERSION 3.0)

add_executable(PolymorphismWithRegularPointers ${PolymorphismWithRegularPointers_DIR}/source/PolymorphismWithRegularPointers.cpp)
target_sources(
        PolymorphismWithRegularPointers PUBLIC ${PolymorphismWithRegularPointers_DIR}/source/PolymorphismWithRegularPointers.cpp
)

