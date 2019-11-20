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


# "Namespaces" project
########################################
set(Namespaces_DIR ${PROJECT_SOURCE_DIR}/Namespaces)
set(Namespaces ON)
message("Namespaces project is:		 ${Namespaces}")
if (${Namespaces})
    add_subdirectory(${Namespaces_DIR})
endif ()

# "ErrorHandling" project
########################################
set(ErrorHandling_DIR ${PROJECT_SOURCE_DIR}/ErrorHandling)
set(ErrorHandling ON)
message("ErrorHandling project is:		 ${ErrorHandling}")
if (${ErrorHandling})
    add_subdirectory(${ErrorHandling_DIR})
endif ()

# "AgentBasedSystemBasic" project
########################################
set(AgentBasedSystemBasic_DIR ${PROJECT_SOURCE_DIR}/AgentBasedSystemBasic)
set(AgentBasedSystemBasic ON)
message("AgentBasedSystemBasic project is:		 ${AgentBasedSystemBasic}")
if (${AgentBasedSystemBasic})
    add_subdirectory(${AgentBasedSystemBasic_DIR})
endif ()

# "CopyAnInt" project
########################################
set(CopyAnInt_DIR ${PROJECT_SOURCE_DIR}/CopyAnInt)
set(CopyAnInt ON)
message("CopyAnInt project is:		 ${CopyAnInt}")
if (${CopyAnInt})
    add_subdirectory(${CopyAnInt_DIR})
endif ()
