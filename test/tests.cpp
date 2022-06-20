#include <catch2/catch_test_macros.hpp>
#define CATCH_CONFIG_MAIN

#include "listclass.h"

TEST_CASE("Length of an array is correct") {
    List Testing('g');
    REQUIRE(Testing.length() == 1);
}
