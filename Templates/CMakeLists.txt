
cmake_minimum_required(VERSION 3.0)

add_executable(Templates ${Templates_DIR}/source/Templates.cpp)
target_sources(
        Templates PUBLIC ${Templates_DIR}/source/Templates.cpp
)

