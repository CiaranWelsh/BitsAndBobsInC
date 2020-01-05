
cmake_minimum_required(VERSION 3.0)

add_executable(InstantiatingFromPointerInConstructor ${InstantiatingFromPointerInConstructor_DIR}/source/InstantiatingFromPointerInConstructor.cpp)
target_sources(
        InstantiatingFromPointerInConstructor PUBLIC ${InstantiatingFromPointerInConstructor_DIR}/source/InstantiatingFromPointerInConstructor.cpp
)

