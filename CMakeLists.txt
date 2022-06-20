cmake_minimum_required(VERSION 3.0.0)
project(ListImplementation VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "../../bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "../../bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../../bin")
enable_testing()

add_subdirectory(ListImplementation/lib)
add_subdirectory(test)

add_executable(ListImplementation main.cpp)

target_link_libraries(ListImplementation listlib)
include_directories(ListImplementation/lib)



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)