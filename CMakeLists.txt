cmake_minimum_required(VERSION 3.0.0)
project(ListImplementation VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/output")
enable_testing()

add_subdirectory(ListImplementation/lib)
add_subdirectory(test)

add_executable(listDemo main.cpp)

target_link_libraries(listDemo listlib)
include_directories(ListImplementation/lib)

link_libraries(listlib)

if (WIN32)
    add_custom_command(TARGET listDemo POST_BUILD       
        COMMAND ${CMAKE_COMMAND} -E copy  
            "${PROJECT_SOURCE_DIR}/bin/output/liblistlib.dll"      
            "${PROJECT_SOURCE_DIR}/bin/test")
endif()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)