#include <iostream>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -5;
const int MAX_VALUE = 10;


// Проверяет все ли элементы массива положительны 
bool isAllPositive(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			return false;
		}
	}
	return true;
}


// Находит индекс строки, все элементы которой больше нуля
int getPositiveRowIndex(int** matrix, int n, int m) {
	for (int i = 0; i < n; i++) {
		if (isAllPositive(matrix[i], m)) {
			return i;
		}
	}
	return -1;
}


// Находит сумму элементов массива
int getSum(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
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
		cout << "В матрице нет ни одной строки, все элементы которой положительны!" << endl;
	}
	else {
		int sum = getSum(matrix[positive_row_index], m);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				matrix[i][j] -= sum;
			}
		}
		cout << "Индекс строки, все элементы которой больше нуля: " << positive_row_index << endl
			<< "Сумма её элементов: " << sum << endl
			<< "Матрица после изменений: "; showMatrix(matrix, n, m);
	}

	del(matrix, n);

	return 0;
}
