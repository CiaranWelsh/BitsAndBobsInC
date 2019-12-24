
cmake_minimum_required(VERSION 3.0)

add_executable(ReturnTypePolymorphism ${ReturnTypePolymorphism_DIR}/source/ReturnTypePolymorphism.cpp)
target_sources(
        ReturnTypePolymorphism PUBLIC ${ReturnTypePolymorphism_DIR}/source/ReturnTypePolymorphism.cpp
)

