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

# "ExplicitConstructors" project
########################################
set(ExplicitConstructors_DIR ${PROJECT_SOURCE_DIR}/ExplicitConstructors)
set(ExplicitConstructors ON)
message("ExplicitConstructors project is:		 ${ExplicitConstructors}")
if (${ExplicitConstructors})
    add_subdirectory(${ExplicitConstructors_DIR})
endif ()

# "ConversionOperators" project
########################################
set(ConversionOperators_DIR ${PROJECT_SOURCE_DIR}/ConversionOperators)
set(ConversionOperators ON)
message("ConversionOperators project is:		 ${ConversionOperators}")
if (${ConversionOperators})
    add_subdirectory(${ConversionOperators_DIR})
endif ()

# "CopyInitialisation" project
########################################
set(CopyInitialisation_DIR ${PROJECT_SOURCE_DIR}/CopyInitialisation)
set(CopyInitialisation ON)
message("CopyInitialisation project is:		 ${CopyInitialisation}")
if (${CopyInitialisation})
    add_subdirectory(${CopyInitialisation_DIR})
endif ()

# "StaticDataMembers" project
########################################
set(StaticDataMembers_DIR ${PROJECT_SOURCE_DIR}/StaticDataMembers)
set(StaticDataMembers ON)
message("StaticDataMembers project is:		 ${StaticDataMembers}")
if (${StaticDataMembers})
    add_subdirectory(${StaticDataMembers_DIR})
endif ()

# "ScoreResolutionOperator" project
########################################
set(ScoreResolutionOperator_DIR ${PROJECT_SOURCE_DIR}/ScoreResolutionOperator)
set(ScoreResolutionOperator ON)
message("ScoreResolutionOperator project is:		 ${ScoreResolutionOperator}")
if (${ScoreResolutionOperator})
    add_subdirectory(${ScoreResolutionOperator_DIR})
endif ()

# "ReferencesinCpp" project
########################################
set(ReferencesinCpp_DIR ${PROJECT_SOURCE_DIR}/ReferencesinCpp)
set(ReferencesinCpp ON)
message("ReferencesinCpp project is:		 ${ReferencesinCpp}")
if (${ReferencesinCpp})
    add_subdirectory(${ReferencesinCpp_DIR})
endif ()

# "ReferencesinFunction" project
########################################
set(ReferencesinFunction_DIR ${PROJECT_SOURCE_DIR}/ReferencesinFunction)
set(ReferencesinFunction ON)
message("ReferencesinFunction project is:		 ${ReferencesinFunction}")
if (${ReferencesinFunction})
    add_subdirectory(${ReferencesinFunction_DIR})
endif ()

# "ReferencesAvoidCopyingLargeData" project
########################################
set(ReferencesAvoidCopyingLargeData_DIR ${PROJECT_SOURCE_DIR}/ReferencesAvoidCopyingLargeData)
set(ReferencesAvoidCopyingLargeData ON)
message("ReferencesAvoidCopyingLargeData project is:		 ${ReferencesAvoidCopyingLargeData}")
if (${ReferencesAvoidCopyingLargeData})
    add_subdirectory(${ReferencesAvoidCopyingLargeData_DIR})
endif ()

# "ReferencesInForEachLoops" project
########################################
set(ReferencesInForEachLoops_DIR ${PROJECT_SOURCE_DIR}/ReferencesInForEachLoops)
set(ReferencesInForEachLoops ON)
message("ReferencesInForEachLoops project is:		 ${ReferencesInForEachLoops}")
if (${ReferencesInForEachLoops})
    add_subdirectory(${ReferencesInForEachLoops_DIR})
endif ()
