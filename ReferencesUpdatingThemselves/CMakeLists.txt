
cmake_minimum_required(VERSION 3.0)

add_executable(ReferencesUpdatingThemselves ${ReferencesUpdatingThemselves_DIR}/source/ReferencesUpdatingThemselves.cpp)
target_sources(
        ReferencesUpdatingThemselves PUBLIC ${ReferencesUpdatingThemselves_DIR}/source/ReferencesUpdatingThemselves.cpp
)

