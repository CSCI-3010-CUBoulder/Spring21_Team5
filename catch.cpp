#define CATCH_CONFIG_MAIN
#include "catch.hpp"

//put unit tests here!
TEST_CASE("Products are computed", "[products]"){
	REQUIRE(Product(std::vector <int>={1,2,3,4}) == 24); 
	REQUIRE(Product(std::vector <int>={1,1,1,1}) == 1);
	REQUIRE(Product(std::vector <int>={5,6,2}) == 60);
	REQUIRE(Product(std::vector <int>={9,9,10,1,2) == 1620);
}
