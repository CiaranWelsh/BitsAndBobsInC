
cmake_minimum_required(VERSION 3.0)

add_executable(ConversionOperators ${ConversionOperators_DIR}/source/ConversionOperators.cpp)
target_sources(
        ConversionOperators PUBLIC ${ConversionOperators_DIR}/source/ConversionOperators.cpp
)

