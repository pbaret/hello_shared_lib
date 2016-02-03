cmake_minimum_required(VERSION 2.8)

add_subdirectory(./../shared_lib shared_lib)

include_directories(${SHARED_LIB_INCLUDE_DIR})

set(SRCS main.cpp)
add_executable(exec1 ${SRCS})
target_link_libraries(exec1 shared_lib)
