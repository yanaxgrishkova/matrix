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

SCENARIO("copy constructor") {
	Matrix matrix (3, 3);	
	Matrix copy(matrix);	
	REQUIRE(copy.rows_() == 3);
	REQUIRE(copy.cols_() == 3);
}


SCENARIO("copy constructor") {
	Matrix m1 (3, 3);
	Matrix m2 (3, 3);
	Matrix m3 (3, 3);	
	std::ifstream("m1.txt") >> m1;
	std::ifstream("m2.txt") >> m2;
	std::ifstream("m3.txt") >> m3;
	REQUIRE(m1 + m2 == m3);
}
