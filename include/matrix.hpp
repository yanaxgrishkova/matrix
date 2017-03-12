#include <iostream>

using namespace std;

class Matrix
{
private:
	int line, column;
	int**A;

public:
	Matrix();
	Matrix(int a, int b);
	Matrix(const Matrix &C);
	~Matrix();
	void scan(string filename)const;
	void print(ostream&steam)const;
	Matrix& operator= (const Matrix &C);
	Matrix operator+ (Matrix B)const;
	Matrix operator * (Matrix B)const;
	const bool operator==(const Matrix &C);
};
