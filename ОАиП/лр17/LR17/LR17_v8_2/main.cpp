#include <iostream>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -3;
const int MAX_VALUE = 10;


// Находит индекс столбца с отрицательным элементом
int findNegativeColumnIndex(int** matrix, int n, int m) {
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (matrix[i][j] < 0) {
				return j;
			}
		}
	}
	return -1; // Если не найдено отрицательных элементов
}


// Уменьшает элементы столбца вдвое и возвращает новую матрицу 
int** changeColumn(int column_index, int** matrix, int n, int m) {
	int** new_matrix = createEmptyMatrix(n, m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int value = matrix[i][j];
			new_matrix[i][j] = (j == column_index) ? value / 2 : value;
		}
	}

	return new_matrix;
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	int n, m;
	cout << "Введите размеры матрицы: "; cin >> n >> m;

	int** matrix = createEmptyMatrix(n, m);
	generateRandomMatrix(matrix, n, m, MIN_VALUE, MAX_VALUE);

	int column_index = findNegativeColumnIndex(matrix, n, m);

	int** new_matrix = changeColumn(column_index, matrix, n, m);

	cout << "Исходная матрица: "; showMatrix(matrix, n, m);
	cout << "Индекс столбца с отрицательным элементом: " << column_index << endl;
	if (column_index == -1) {
		cout << "В матрице нет отрицательных элементов!" << endl;
	}
	else {
		cout << "Матрица после изменений: "; showMatrix(new_matrix, n, m);
	}

	del(matrix, n);
	del(new_matrix, n);

	return 0;
}
