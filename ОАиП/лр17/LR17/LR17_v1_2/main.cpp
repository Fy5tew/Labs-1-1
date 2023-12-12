#include <iostream>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -2;
const int MAX_VALUE = 10;


// Проверяет, все ли элементы матрицы являются положительными
bool isAllPositiveElements(int** matrix, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] < 0) {
				return false;
			}
		}
	}
	return true;
}


// Перемножает матрицы порядка n и возвращает результат
int** mult(int** lhs, int** rhs, int n) {
	int** mult_matrix = createEmptyMatrix(n, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int el = 0;
			for (int k = 0; k < n; k++) {
				el += lhs[i][k] * rhs[k][j];
			}
			mult_matrix[i][j] = el;
		}
	}
	return mult_matrix;
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	int n;
	cout << "Введите порядок матриц: "; cin >> n;

	int** first_matrix = createEmptyMatrix(n, n);
	int** second_matrix = createEmptyMatrix(n, n);
	generateRandomMatrix(first_matrix, n, n, MIN_VALUE, MAX_VALUE);
	generateRandomMatrix(second_matrix, n, n, MIN_VALUE, MAX_VALUE);

	cout << "Первая матрица: "; showMatrix(first_matrix, n, n);
	cout << "Вторая матрица: "; showMatrix(second_matrix, n, n);

	if (!isAllPositiveElements(first_matrix, n, n) || !isAllPositiveElements(second_matrix, n, n)) {
		cout << "Матрицы содержат отрицательные элементы!" << endl;
	}
	else {
		int** mult_result = mult(first_matrix, second_matrix, n);
		cout << "Результат умножения матриц: "; showMatrix(mult_result, n, n);
		del(mult_result, n);
	}

	del(first_matrix, n);
	del(second_matrix, n);

	return 0;
}
