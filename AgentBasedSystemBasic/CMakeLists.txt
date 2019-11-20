
cmake_minimum_required(VERSION 3.0)

add_executable(AgentBasedSystemBasic ${AgentBasedSystemBasic_DIR}/source/AgentBasedSystemBasic.cpp source/Grid2D.cpp source/Grid2D.h source/Position.cpp source/Position.h source/Agent.cpp source/Agent.h source/Component.cpp source/Component.h source/Patch.cpp source/Patch.h source/IDGen.cpp source/IDGen.h)
target_sources(
        AgentBasedSystemBasic PUBLIC ${AgentBasedSystemBasic_DIR}/source/AgentBasedSystemBasic.cpp
)

