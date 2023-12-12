#include <iostream>
#include "utils.h"
using namespace std;


const int MIN_VALUE = 0;
const int MAX_VALUE = 10;


// Находит значение максимального элемент матрицы
int findMaxMatrixElement(int** matrix, int n, int m) {
	int max_element = MIN_VALUE - 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] > max_element) {
				max_element = matrix[i][j];
			}
		}
	}

	return max_element;
}


// Находит индексы первого вхождения элемента матрицы
int* findMatrixElementIndex(int element, int** matrix, int n, int m) {
	int* index = createEmptyArray(2);
	index[0] = -1; index[1] = -1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == element) {
				index[0] = i;
				index[1] = j;
				break;
			}
		}
		if (index[0] != -1 && index[1] != -1) {
			break;
		}
	}

	return index;
}


// Поменять строки матрицы местами 
void swapMatrixRows(int** matrix, int first_row, int second_row) {
	int* tmp = matrix[first_row];
	matrix[first_row] = matrix[second_row];
	matrix[second_row] = tmp;
}


// Поменять столбцы матрицы местами
void swapMatrixCols(int** matrix, int n, int first_col, int second_col) {
	for (int i = 0; i < n; i++) {
		int tmp = matrix[i][first_col];
		matrix[i][first_col] = matrix[i][second_col];
		matrix[i][second_col] = tmp;
	}
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	int n, m;
	int** matrix;

	cout << "Введите размеры матрицы: "; cin >> n >> m;
	matrix = createEmptyMatrix(n, m);
	generateRandomMatrix(matrix, n, m, MIN_VALUE, MAX_VALUE);
	cout << "Исходная матрица: "; showMatrix(matrix, n, m);

	int max_element = findMaxMatrixElement(matrix, n, m);
	int* max_element_index = findMatrixElementIndex(max_element, matrix, n, m);

	cout << "Индексы максимального элемента: "; showArray(max_element_index, 2); cout << endl << endl;

	for (int row = max_element_index[0]; row > 0; row--) { // Перестановка строк
		swapMatrixRows(matrix, row, row - 1);
	}

	for (int col = max_element_index[1]; col > 0; col--) { // Перестановка столбцов
		swapMatrixCols(matrix, n, col, col - 1);
	}

	cout << "Матрица после перестановок соседних строк и столбцов: "; showMatrix(matrix, n, m);

	del(matrix, n);
	del(max_element_index);

	return 0;
}
