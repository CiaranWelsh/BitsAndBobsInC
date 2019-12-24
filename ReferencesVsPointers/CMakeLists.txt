
cmake_minimum_required(VERSION 3.0)

add_executable(ReferencesVsPointers ${ReferencesVsPointers_DIR}/source/ReferencesVsPointers.cpp)
target_sources(
        ReferencesVsPointers PUBLIC ${ReferencesVsPointers_DIR}/source/ReferencesVsPointers.cpp
)

