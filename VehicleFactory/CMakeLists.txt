
cmake_minimum_required(VERSION 3.0)

add_executable(VehicleFactory ${VehicleFactory_DIR}/source/VehicleFactory.cpp)
target_sources(
        VehicleFactory PUBLIC ${VehicleFactory_DIR}/source/VehicleFactory.cpp
)

