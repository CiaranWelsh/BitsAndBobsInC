
cmake_minimum_required(VERSION 3.0)

add_executable(ReferencesinCpp ${ReferencesinCpp_DIR}/source/ReferencesinCpp.cpp)
target_sources(
        ReferencesinCpp PUBLIC ${ReferencesinCpp_DIR}/source/ReferencesinCpp.cpp
)

