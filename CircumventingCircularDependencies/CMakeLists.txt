
cmake_minimum_required(VERSION 3.0)

add_executable(PolymorphismWithMemberVariables ${PolymorphismWithMemberVariables_DIR}/source/PolymorphismWithMemberVariables.cpp)
target_sources(
        PolymorphismWithMemberVariables PUBLIC ${PolymorphismWithMemberVariables_DIR}/source/PolymorphismWithMemberVariables.cpp
)

