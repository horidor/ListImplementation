#include <catch2/catch_test_macros.hpp>
#define CATCH_CONFIG_MAIN

#include "listclass.h"

TEST_CASE("length method testing") {
    
    SECTION("checking list with an element"){
    List Testing('g');
    REQUIRE(Testing.length() == 1);
    }

    SECTION("checking empty list"){
        List Testing;
        REQUIRE(Testing.length() == 0);
    }
}

TEST_CASE("get method testing") {
    List Testing('g');

    SECTION("checking get") {
        
        REQUIRE_THROWS(Testing.get(0));
        REQUIRE(Testing.get(0) == 'g');
    }

    SECTION("checking get throw on negative"){
        REQUIRE_THROWS(Testing.get(-1));
    }

    SECTION("checking get throw on out of range"){
        REQUIRE_THROWS(Testing.get(-1));
    }

}

TEST_CASE("append method testing") {
    List Testing('g');
    Testing.append('c');
    
    SECTION("checking append-length") {
        
        REQUIRE(Testing.length() == 2);
    }

    SECTION("checking append-get") {
        
        REQUIRE(Testing.get(1) == 'c');
    }

}