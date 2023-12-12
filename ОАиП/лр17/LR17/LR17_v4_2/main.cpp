#include <iostream>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -10;
const int MAX_VALUE = 2;


// Проверяет, есть ли в массиве хотя бы один элемент больший нуля
bool hasPositiveValue(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			return true;
		}
	}
	return false;
}


// Находит строку, содержащую хотя бы один положительный элемент и возвращает ее индекс 
int getPositiveRowIndex(int** matrix, int n, int m) {
	for (int i = 0; i < n; i++) {
		if (hasPositiveValue(matrix[i], m)) {
			return i;
		}
	}
	return -1;
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	int n, m;
	cout << "Введите размеры матрицы: "; cin >> n >> m;

	int** matrix = createEmptyMatrix(n, m);
	generateRandomMatrix(matrix, n, m, MIN_VALUE, MAX_VALUE);

	cout << "Исходная матрица: "; showMatrix(matrix, n, m);

	int positive_row_index = getPositiveRowIndex(matrix, n, m);

	if (positive_row_index == -1) {
		cout << "В матрице нет положительных элементов!" << endl;
	}
	else {
		// Если индекс равен 0, то изменяем последнюю строку
		int row_index = ((positive_row_index == 0) ? n : positive_row_index) - 1;
		for (int j = 0; j < m; j++) {
			int value = matrix[row_index][j];
			matrix[row_index][j] = -value;
		}
		cout << "Индекс строки, содержащей хотя бы один положительный элемент: " << positive_row_index << endl
			<< "Матрица после изменений: "; showMatrix(matrix, n, m);
	}

	del(matrix, n);

	return 0;
}
