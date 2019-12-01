
cmake_minimum_required(VERSION 3.0)

add_executable(ScoreResolutionOperator ${ScoreResolutionOperator_DIR}/source/ScoreResolutionOperator.cpp)
target_sources(
        ScoreResolutionOperator PUBLIC ${ScoreResolutionOperator_DIR}/source/ScoreResolutionOperator.cpp
)

