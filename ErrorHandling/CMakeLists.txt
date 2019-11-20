
cmake_minimum_required(VERSION 3.0)

add_executable(ErrorHandling ${ErrorHandling_DIR}/source/ErrorHandling.cpp)
target_sources(
        ErrorHandling PUBLIC ${ErrorHandling_DIR}/source/ErrorHandling.cpp
)

