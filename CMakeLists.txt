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

# "ReferencesVsPointers" project
########################################
set(ReferencesVsPointers_DIR ${PROJECT_SOURCE_DIR}/ReferencesVsPointers)
set(ReferencesVsPointers ON)
message("ReferencesVsPointers project is:		 ${ReferencesVsPointers}")
if (${ReferencesVsPointers})
    add_subdirectory(${ReferencesVsPointers_DIR})
endif ()

# "CopyConstructor" project
########################################
set(CopyConstructor_DIR ${PROJECT_SOURCE_DIR}/CopyConstructor)
set(CopyConstructor ON)
message("CopyConstructor project is:		 ${CopyConstructor}")
if (${CopyConstructor})
    add_subdirectory(${CopyConstructor_DIR})
endif ()

# "Templates" project
########################################
set(Templates_DIR ${PROJECT_SOURCE_DIR}/Templates)
set(Templates ON)
message("Templates project is:		 ${Templates}")
if (${Templates})
    add_subdirectory(${Templates_DIR})
endif ()

# "SlicableVector" project
########################################
set(SlicableVector_DIR ${PROJECT_SOURCE_DIR}/SlicableVector)
set(SlicableVector ON)
message("SlicableVector project is:		 ${SlicableVector}")
if (${SlicableVector})
    add_subdirectory(${SlicableVector_DIR})
endif ()

# "VehicleFactory" project
########################################
set(VehicleFactory_DIR ${PROJECT_SOURCE_DIR}/VehicleFactory)
set(VehicleFactory ON)
message("VehicleFactory project is:		 ${VehicleFactory}")
if (${VehicleFactory})
    add_subdirectory(${VehicleFactory_DIR})
endif ()

# "ReturnTypePolymorphism" project
########################################
set(ReturnTypePolymorphism_DIR ${PROJECT_SOURCE_DIR}/ReturnTypePolymorphism)
set(ReturnTypePolymorphism ON)
message("ReturnTypePolymorphism project is:		 ${ReturnTypePolymorphism}")
if (${ReturnTypePolymorphism})
    add_subdirectory(${ReturnTypePolymorphism_DIR})
endif ()

# "Counter" project
########################################
set(Counter_DIR ${PROJECT_SOURCE_DIR}/Counter)
set(Counter ON)
message("Counter project is:		 ${Counter}")
if (${Counter})
    add_subdirectory(${Counter_DIR})
endif ()

# "UseOfUniquePtr" project
########################################
set(UseOfUniquePtr_DIR ${PROJECT_SOURCE_DIR}/UseOfUniquePtr)
set(UseOfUniquePtr ON)
message("UseOfUniquePtr project is:		 ${UseOfUniquePtr}")
if (${UseOfUniquePtr})
    add_subdirectory(${UseOfUniquePtr_DIR})
endif ()

# "SharedPtr" project
########################################
set(SharedPtr_DIR ${PROJECT_SOURCE_DIR}/SharedPtr)
set(SharedPtr ON)
message("SharedPtr project is:		 ${SharedPtr}")
if (${SharedPtr})
    add_subdirectory(${SharedPtr_DIR})
endif ()

# "PolymorphicBasePointers" project
########################################
set(PolymorphicBasePointers_DIR ${PROJECT_SOURCE_DIR}/PolymorphicBasePointers)
set(PolymorphicBasePointers ON)
message("PolymorphicBasePointers project is:		 ${PolymorphicBasePointers}")
if (${PolymorphicBasePointers})
    add_subdirectory(${PolymorphicBasePointers_DIR})
endif ()

# "UninstantiatedClassAsVariable" project
########################################
set(UninstantiatedClassAsVariable_DIR ${PROJECT_SOURCE_DIR}/UninstantiatedClassAsVariable)
set(UninstantiatedClassAsVariable ON)
message("UninstantiatedClassAsVariable project is:		 ${UninstantiatedClassAsVariable}")
if (${UninstantiatedClassAsVariable})
    add_subdirectory(${UninstantiatedClassAsVariable_DIR})
endif ()

# "ConstructorInheritance" project
########################################
set(ConstructorInheritance_DIR ${PROJECT_SOURCE_DIR}/ConstructorInheritance)
set(ConstructorInheritance ON)
message("ConstructorInheritance project is:		 ${ConstructorInheritance}")
if (${ConstructorInheritance})
    add_subdirectory(${ConstructorInheritance_DIR})
endif ()

# "InstantiatingFromPointerInConstructor" project
########################################
set(InstantiatingFromPointerInConstructor_DIR ${PROJECT_SOURCE_DIR}/InstantiatingFromPointerInConstructor)
set(InstantiatingFromPointerInConstructor ON)
message("InstantiatingFromPointerInConstructor project is:		 ${InstantiatingFromPointerInConstructor}")
if (${InstantiatingFromPointerInConstructor})
    add_subdirectory(${InstantiatingFromPointerInConstructor_DIR})
endif ()

# "CircumventingCircularDependencies" project
########################################
set(PolymorphismWithMemberVariables_DIR ${PROJECT_SOURCE_DIR}/PolymorphismWithMemberVariables)
set(CircumventingCircularDependencies ON)
message("PolymorphismWithMemberVariables project is:		 ${PolymorphismWithMemberVariables}")
if (${PolymorphismWithMemberVariables})
    add_subdirectory(${PolymorphismWithMemberVariables_DIR})
endif ()

# "ReferencesUpdatingThemselves" project
########################################
set(ReferencesUpdatingThemselves_DIR ${PROJECT_SOURCE_DIR}/ReferencesUpdatingThemselves)
set(ReferencesUpdatingThemselves ON)
message("ReferencesUpdatingThemselves project is:		 ${ReferencesUpdatingThemselves}")
if (${ReferencesUpdatingThemselves})
    add_subdirectory(${ReferencesUpdatingThemselves_DIR})
endif ()

# "PolymorphismWithSmartPointers" project
########################################
set(PolymorphismWithSmartPointers_DIR ${PROJECT_SOURCE_DIR}/PolymorphismWithSmartPointers)
set(PolymorphismWithSmartPointers ON)
message("PolymorphismWithSmartPointers project is:		 ${PolymorphismWithSmartPointers}")
if (${PolymorphismWithSmartPointers})
    add_subdirectory(${PolymorphismWithSmartPointers_DIR})
endif ()

# "PolymorphismWithRegularPointers" project
########################################
set(PolymorphismWithRegularPointers_DIR ${PROJECT_SOURCE_DIR}/PolymorphismWithRegularPointers)
set(PolymorphismWithRegularPointers ON)
message("PolymorphismWithRegularPointers project is:		 ${PolymorphismWithRegularPointers}")
if (${PolymorphismWithRegularPointers})
    add_subdirectory(${PolymorphismWithRegularPointers_DIR})
endif ()

# "ExceptionHandling" project
########################################
set(ExceptionHandling_DIR ${PROJECT_SOURCE_DIR}/ExceptionHandling)
set(ExceptionHandling ON)
message("ExceptionHandling project is:		 ${ExceptionHandling}")
if (${ExceptionHandling})
    add_subdirectory(${ExceptionHandling_DIR})
endif ()
