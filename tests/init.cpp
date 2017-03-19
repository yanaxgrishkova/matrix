#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") 
{
	Matrix matrix;
	REQUIRE(matrix.line_() == 0);
	REQUIRE(matrix.column_() == 0);
}

SCENARIO("matrix with params", "[init]")
{
	Matrix matrix(2,3);
	REQUIRE(matrix.line_() == 2);
	REQUIRE(matrix.column_() == 3);
	for (int i = 0; i < matrix.line_(); ++i)
		for (int j = 0; j < matrix.column_(); ++j)
			REQUIRE(matrix[i][j] == 0;
}
				
SCENARIO("+", "[init]")
{
	Matrix A(2, 3);
	Matrix B(2, 3);
	Matrix C(2, 3);
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 3; ++j)
		{
			A[i][j] = B[i][j] = 2;
			C[i][j] = 4;
		}
	REQUIRE((A + B) == C);
}

SCENARIO("*", "[init]")
{
	Matrix A(2, 3);
	Matrix B(3, 2);
	Matrix C(2, 2);
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 3; ++j)
			A[i][j]  = 2;
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 2; ++j)
			B[i][j] = 3;
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 2; ++j)
			C[i][j] = 24;
	REQUIRE((A * B) == C);
}
				


