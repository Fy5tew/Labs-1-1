#include <iostream>
#include "utils.h"
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MIN_VALUE = -5;
	const int MAX_VALUE = 11;

	int n, m;
	int** matrix;

	cout << "Введите размер матрицы: "; cin >> n >> m;

	matrix = createEmptyMatrix(n, m);
	generateRandomMatrix(matrix, n, m, MIN_VALUE, MAX_VALUE);
	cout << "Исходная матрица:"; showMatrix(matrix, n, m);

	int all_positive_column_index = -1;
	for (int j = 0; j < m; j++) {
		bool all_positive = true;
		for (int i = 0; i < n; i++) {
			if (matrix[i][j] < 0) {
				all_positive = false;
				break;
			}
		}
		if (all_positive) {
			all_positive_column_index = j;
			break;
		}
	}

	if (all_positive_column_index < 0) {
		cout << "В матрице нет столбцов, все элементы которых положительные!" << endl;
		del(matrix, n);
		return 0;
	}

	// Если все элементы первого стобца положительные, то меняем знаки в последнем столбце
	int prev_column_index = ((all_positive_column_index == 0) ? m : all_positive_column_index) - 1;
	for (int i = 0; i < n; i++) {
		int value = matrix[i][prev_column_index];
		matrix[i][prev_column_index] = -value;
	}

	cout << "Номер первого столбца, все элементы которого положительны: " << all_positive_column_index + 1 << endl;
	cout << "Матрица после изменений:"; showMatrix(matrix, n, m);

	del(matrix, n);

	return 0;
}
