set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/test")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/test")

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)

add_executable(testing tests.cpp)

target_link_libraries(testing PUBLIC Catch2::Catch2WithMain listlib)
include_directories("${CMAKE_SOURCE_DIR}/ListImplementation/lib")

include(Catch)
include(CTest)

catch_discover_tests(testing REPORTER junit)