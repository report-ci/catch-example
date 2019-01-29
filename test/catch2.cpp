#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#define CATCH_CONFIG_RUNTIME_STATIC_REQUIRE
#include <catch2/catch.hpp>
#include <type_traits>

TEST_CASE("STATIC_REQUIRE showcase", "[traits]")
{
    STATIC_REQUIRE( std::is_void<int>::value );
    STATIC_REQUIRE_FALSE( std::is_void<void>::value );
}