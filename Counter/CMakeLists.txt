
cmake_minimum_required(VERSION 3.0)

add_executable(Counter ${Counter_DIR}/source/Counter.cpp)
target_sources(
        Counter PUBLIC ${Counter_DIR}/source/Counter.cpp
)

