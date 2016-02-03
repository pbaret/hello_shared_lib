cmake_minimum_required(VERSION 2.8)

set(SHARED_LIB_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/inc) # directory containing .h files 

set(SHARED_LIB_INCLUDE_DIR ${SHARED_LIB_INCLUDE_DIR} PARENT_SCOPE)

if(TARGET shared_lib)

    message("shared_lib is already defined")

else()

#    # Find opencv package
#    find_package( OpenCV REQUIRED )

    include_directories(${SHARED_LIB_INCLUDE_DIR})

    set(LIB_HDRS ./inc/foo.h)
    set(LIB_SRCS ./src/foo.cpp)

    add_library(shared_lib STATIC ${LIB_SRCS} ${LIB_HDRS})

#    target_link_libraries(shared_lib ${OpenCV_LIBS})     # Use OpenCV
endif()
