
cmake_minimum_required(VERSION 3.0)

add_executable(ReferencesInForEachLoops ${ReferencesInForEachLoops_DIR}/source/ReferencesInForEachLoops.cpp)
target_sources(
        ReferencesInForEachLoops PUBLIC ${ReferencesInForEachLoops_DIR}/source/ReferencesInForEachLoops.cpp
)

