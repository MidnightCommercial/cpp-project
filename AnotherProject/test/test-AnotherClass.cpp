#include "catch.hpp"
#include "../src/AnotherClass.h"

TEST_CASE( "AnotherClass works", "[AnotherClass]" ) {

	AnotherClass hello("Hello Test");

    REQUIRE( hello.saySomething() == "Hello Test" );

}