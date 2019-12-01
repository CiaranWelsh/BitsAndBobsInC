
cmake_minimum_required(VERSION 3.0)

add_executable(ReferencesAvoidCopyingLargeData ${ReferencesAvoidCopyingLargeData_DIR}/source/ReferencesAvoidCopyingLargeData.cpp)
target_sources(
        ReferencesAvoidCopyingLargeData PUBLIC ${ReferencesAvoidCopyingLargeData_DIR}/source/ReferencesAvoidCopyingLargeData.cpp
)

