#include <iostream>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -5;
const int MAX_VALUE = 10;


// Находит индекс первого вхождения элемента в массив
int getFirstElementIndex(int element, int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == element) {
			return i;
		}
	}
	return -1; // Если искомого элемента нет в массиве
}


// Находит индекс последнего вхождения элемента в массив
int getLastElementIndex(int element, int* arr, int size) {
	for (int i = size - 1; i >= 0; i--) {
		if (arr[i] == element) {
			return i;
		}
	}
	return -1; // Если искомого элемента нет в массиве
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	int size;
	cout << "Введите размер массива: "; cin >> size;

	int* arr = createEmptyArray(size);
	generateRandomArray(arr, size, MIN_VALUE, MAX_VALUE);

	int first_index = getFirstElementIndex(0, arr, size);
	int last_index = getLastElementIndex(0, arr, size);

	cout << "Исходный массив: "; showArray(arr, size); cout << endl;

	if (first_index == -1 || last_index == -1) {
		cout << "В массиве нет нулевых элементов!" << endl;
	}
	else {
		int sum = 0;
		for (int i = first_index + 1; i < last_index; i++) {
			sum += arr[i];
		}
		cout << "Индекс первого нулевого элемента: " << first_index << endl
			<< "Индекс последнего нулевого элемента: " << last_index << endl
			<< "Сумма элементов между ними: " << sum << endl;
	}

	del(arr);
	
	return 0;
}
