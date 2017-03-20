#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("default constructor") {
	Matrix matrix;
	REQUIRE(matrix.rows_() == 0);
	REQUIRE(matrix.cols_() == 0);
}
