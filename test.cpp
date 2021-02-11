#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>

//put unit tests here!

TEST_CASE("Testing MultiplesFilter", "[MultiplesFilter]"){
	std::vector<int> myVec = {1, 2, 5, 10};
	std::vector<int> resultVec = {1, 5};
	REQUIRE(MultiplesFilter(myVec, 2) == )
}
