#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") 
{
	matrix matrix;
	REQUIRE(matrix.rows() == 0);
	REQUIRE(matrix.columns() == 0);
}

SCENARIO("matrix with params", "[init]") {
	matrix matrix(2,3);
	REQUIRE(matrix.rows() == 2);
	REQUIRE(matrix.columns() == 3);
	for (int i = 0; i < matrix.rows(); ++i)
		for (int j = 0; j < matrix.columns(); ++j)
			REQUIRE(matrix[i][j] == 0;
}
