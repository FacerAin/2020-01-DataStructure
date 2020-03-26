#include <iostream>
using namespace std;

#define MAX_ROWS  50
#define MAX_COLS  50
class SquareMatrix
{
private:
	int matrix[MAX_ROWS][MAX_COLS];
	int size;

public:
	void MakeEmpty(int n);
	void StoreValue(int i, int value, int j);
	SquareMatrix Add(SquareMatrix& matrix);
	SquareMatrix Sub(SquareMatrix& matrix);
	void Copy(SquareMatrix & matrix);
};

void SquareMatrix::MakeEmpty(int n) {
	size = n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matrix[i][j] = 0;
		}
	}
}

void SquareMatrix::StoreValue(int i, int value, int j) {
	matrix[i][j] = value;
}

SquareMatrix SquareMatrix::Add(SquareMatrix& matrix) {
	SquareMatrix result_mat;
	result_mat.MakeEmpty(size);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result_mat.matrix[i][j] = this->matrix[i][j] + matrix.matrix[i][j];
		}
	}

	return result_mat;
}

SquareMatrix SquareMatrix::Sub(SquareMatrix& matrix) {
	SquareMatrix result_mat;
	result_mat.MakeEmpty(size);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result_mat.matrix[i][j] = this->matrix[i][j] - matrix.matrix[i][j];
		}
	}

	return result_mat;
}

void SquareMatrix::Copy(SquareMatrix& matrix) {


	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			this->matrix[i][j] = matrix.matrix[i][j];
		}
	}

}