# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "E:/labs/ListImplementation/build/_deps/catch2-src"
  "E:/labs/ListImplementation/build/_deps/catch2-build"
  "E:/labs/ListImplementation/build/_deps/catch2-subbuild/catch2-populate-prefix"
  "E:/labs/ListImplementation/build/_deps/catch2-subbuild/catch2-populate-prefix/tmp"
  "E:/labs/ListImplementation/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
  "E:/labs/ListImplementation/build/_deps/catch2-subbuild/catch2-populate-prefix/src"
  "E:/labs/ListImplementation/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "E:/labs/ListImplementation/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp/${subDir}")
endforeach()
