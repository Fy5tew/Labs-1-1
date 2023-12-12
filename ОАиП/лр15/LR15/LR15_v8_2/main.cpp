#include <iostream>
#include "utils.h"
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MIN_VALUE = -11;
	const int MAX_VALUE = 11;

	int n, m;
	int** matrix;

	cout << "Введите размеры матрицы: "; cin >> n >> m;

	matrix = new int* [n]; // Создание пустой матрицы и ее инициализация
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}
	generateRandomMatrix(matrix, n, m, MIN_VALUE, MAX_VALUE);

	cout << "Полученная матрица:"; showMatrix(matrix, n, m);

	int first_zero_column_index = -1;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (matrix[i][j] == 0) {
				first_zero_column_index = j;
				break;
			}
		}
		if (first_zero_column_index >= 0) {
			break;
		}
	}

	if (first_zero_column_index == -1) {
		cout << "В матрице нет элементов равных нулю!" << endl;
	}
	else {
		cout << "Номер первого столбца, содержащего хотя бы один нуль: " 
			<< first_zero_column_index + 1 << endl;
	}
	
	for (int i = 0; i < n; i++) { // Освобождение памяти
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}
