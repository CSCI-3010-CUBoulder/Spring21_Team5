#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

#include <vector>

//put unit tests here!

std::vector<int> nums1 {1, 2};
std::vector<int> nums2 {3, 9, 1, -4};
std::vector<int> nums3(10, 10);
TEST_CASE("Testing Sums", "[Sum]") {
    REQUIRE( Sum(nums1) == 3 );
    REQUIRE( Sum(nums2) == 9 );
    REQUIRE( Sum(nums3) == 100 );
}

