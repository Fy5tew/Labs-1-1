#include <iostream>
#include "utils.h"
using namespace std;


const int MIN_VALUE = 0;
const int MAX_VALUE = 20;
const int SIZE = 4;


// Найти максимальный элемент массива
int findMaxArrayElement(int* arr, int size) {
	int max = MIN_VALUE;
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}


// Найти минимальный элемент массива
int findMinArrayElement(int* arr, int size) {
	int min = MAX_VALUE;
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	int odd_rows_smallest_sum = 0, even_rows_largest_sum = 0;
	int** matrix = createEmptyMatrix(SIZE, SIZE);
	generateRandomMatrix(matrix, SIZE, SIZE, MIN_VALUE, MAX_VALUE);

	for (int i = 0; i < SIZE; i++) {
		if (i % 2 == 0) {
			odd_rows_smallest_sum += findMinArrayElement(matrix[i], SIZE);
		}
		else {
			even_rows_largest_sum += findMaxArrayElement(matrix[i], SIZE);
		}
	}

	cout << "Исходная матрица: "; showMatrix(matrix, SIZE, SIZE);
	cout << "Сумма наименьших элементов нечетных строк: " << odd_rows_smallest_sum << endl;
	cout << "Сумма наибольших элементов четных строк: " << even_rows_largest_sum << endl;

	del(matrix, SIZE);

	return 0;
}
