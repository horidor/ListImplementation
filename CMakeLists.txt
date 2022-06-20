cmake_minimum_required(VERSION 3.0.0)
project(ListImplementation VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
enable_testing()

add_subdirectory(ListImplementation/lib)
add_subdirectory(test)

add_executable(ListImplementation main.cpp)

target_link_libraries(ListImplementation listlib)
include_directories(ListImplementation/lib)

add_custom_command(TARGET ListImplementation POST_BUILD        # Adds a post-build event to MyTest
    COMMAND ${CMAKE_COMMAND} -E copy_if_different  # which executes "cmake - E copy_if_different..."
        "${PROJECT_SOURCE_DIR}/build/bin/"      # <--this is in-file
        "${PROJECT_SOURCE_DIR}/bin/")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)