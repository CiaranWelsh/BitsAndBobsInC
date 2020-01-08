
cmake_minimum_required(VERSION 3.0)

add_executable(ExceptionHandling ${ExceptionHandling_DIR}/source/ExceptionHandling.cpp)
target_sources(
        ExceptionHandling PUBLIC ${ExceptionHandling_DIR}/source/ExceptionHandling.cpp
)

