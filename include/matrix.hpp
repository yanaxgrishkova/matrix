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
	int line_();
	int column_();
	void scan(string filename)const;
	Matrix& operator = (const Matrix &C);
	Matrix operator + (Matrix B)const;
	Matrix operator * (Matrix B)const;
	const bool operator == (const Matrix &C);
	friend ostream& operator << (ostream &out, Matrix &C);
	friend istream& operator >> (istream &in, Matrix &C);
};
