#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Matrix
{
private:
	int cols;
	int rows;
	int **Arr;
public:
	Matrix();

	Matrix(int _cols, int _rows);

	Matrix(const Matrix& result);

	~Matrix();

	int cols_();

	int rows_();

	void scan(string filename);

	bool operator == (const Matrix& m2) const;

	Matrix operator + (const Matrix& m2) const;

	Matrix operator * (const Matrix& m2) const;

	Matrix& operator = (const Matrix& result);

	friend ostream& operator << (ostream& outfile, const Matrix& result);

	friend istream& operator >> (istream& infile, const Matrix& result);
};
