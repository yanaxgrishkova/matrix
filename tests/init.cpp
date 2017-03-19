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
}
				
SCENARIO("copy", "[init]")
{
	Matrix matrix(2,3);
	Matrix copy(matrix);
	REQUIRE(copy.line_() == 2);
	REQUIRE(copy.column_() == 3);
}
				
SCENARIO("+", "[init]")
{
	Matrix A, B, C;
	ifstream ("A.txt") >> A;
	ifstream ("B.txt") >> B;
	ifstream ("A+B.txt") >> C;
	REQUIRE((A + B) == C);
}

SCENARIO("*", "[init]")
{
	Matrix A, B, D;
	ifstream ("A.txt") >> A;
	ifstream ("B.txt") >> B;
	ifstream ("AB.txt") >> D;
	REQUIRE((A * B) == D);
}
				


