#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("default constructor") {
	Matrix matrix;
	REQUIRE(matrix.rows_() == 0);
	REQUIRE(matrix.cols_() == 0);
}

SCENARIO("constructor with params") {
	Matrix matrix(3, 3);
	REQUIRE(matrix.rows_() == 3);
	REQUIRE(matrix.cols_() == 3);
}
