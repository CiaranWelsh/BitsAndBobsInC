
cmake_minimum_required(VERSION 3.0)

add_executable(MallocFunctionInC ${MallocFunctionInC_DIR}/source/MallocFunctionInC.c)
target_sources(
        MallocFunctionInC PUBLIC ${MallocFunctionInC_DIR}/source/MallocFunctionInC.c
)

