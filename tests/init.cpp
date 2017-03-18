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
	for (unsigned int i = 0; i < matrix.rows(); ++i) 
	{
		for (unsigned int j = 0; j < matrix.rows(); ++j)
		{
			
			REQUIRE(matrix[i][j] == 0);
	}
}
