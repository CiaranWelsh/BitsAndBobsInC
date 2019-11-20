cmake_minimum_required(VERSION 3.0)

project(BitsAndBobsInC++)



# "VectorClass" project
########################################
set(VectorClass_DIR ${PROJECT_SOURCE_DIR}/VectorClass)
set(VectorClass ON)
message("VectorClass project is:		 ${VectorClass}")
if (${VectorClass})
    add_subdirectory(${VectorClass_DIR})
endif ()

# "Enumerations" project
########################################
set(Enumerations_DIR ${PROJECT_SOURCE_DIR}/Enumerations)
set(Enumerations ON)
message("Enumerations project is:		 ${Enumerations}")
if (${Enumerations})
    add_subdirectory(${Enumerations_DIR})
endif ()
