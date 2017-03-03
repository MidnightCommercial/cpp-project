#include "catch.hpp"
#include "../src/AClass.h"

TEST_CASE( "AClass works", "[AClass]" ) {

	AClass hello("Hello Test");

    REQUIRE( hello.saySomething() == "Hello Test" );

}