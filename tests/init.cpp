#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") 
{
	matrix_t matrix;
	REQUIRE(matrix.rows() == 0);
	REQUIRE(matrix.columns() == 0);
}

SCENARIO("matrix with params", "[init]") {
	matrix_t matrix(2,3);
	REQUIRE(matrix.rows() == 2);
	REQUIRE(matrix.columns() == 3);
}
