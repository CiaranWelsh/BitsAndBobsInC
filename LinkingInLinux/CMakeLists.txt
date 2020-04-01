
cmake_minimum_required(VERSION 3.0)

add_executable(LinkingInLinux ${LinkingInLinux_DIR}/source/LinkingInLinux.cpp)
target_sources(
        LinkingInLinux PUBLIC ${LinkingInLinux_DIR}/source/LinkingInLinux.cpp
)
target_compile_options(LinkingInLinux PRIVATE )

