
cmake_minimum_required(VERSION 3.0)

#configure_file(header.h.in header.h)

add_executable(ConfigureFileInCmake ${ConfigureFileInCmake_DIR}/source/ConfigureFileInCmake.cpp header.h.in.h)
target_sources(
        ConfigureFileInCmake PUBLIC ${ConfigureFileInCmake_DIR}/source/ConfigureFileInCmake.cpp
)

