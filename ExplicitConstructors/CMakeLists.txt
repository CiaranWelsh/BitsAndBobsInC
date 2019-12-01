
cmake_minimum_required(VERSION 3.0)

add_executable(ExplicitConstructors ${ExplicitConstructors_DIR}/source/ExplicitConstructors.cpp)
target_sources(
        ExplicitConstructors PUBLIC ${ExplicitConstructors_DIR}/source/ExplicitConstructors.cpp
)

