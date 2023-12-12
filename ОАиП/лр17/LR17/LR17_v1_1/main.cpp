#include <iostream>
#include "utils.h"
using namespace std;


const int MIN_VALUE = 0;
const int MAX_VALUE = 10;


// Находит значение максимального элемента массива 
int getMaxElement(int* arr, int size) {
	int max = MIN_VALUE;
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}


// Находит значение минимального элемента массива
int getMinElement(int* arr, int size) {
	int min = MAX_VALUE;
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}


// Находит индекс первого вхождения элемента в массив
int getFirstElementIndex(int element, int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == element) {
			return i;
		}
	}
	return -1;
}


// Находит индекс последнего вхождения элемента в массив
int getLastElementIndex(int element, int* arr, int size) {
	int index = -1;
	for (int i = 0; i < size; i++) {
		if (arr[i] == element) {
			index = i;
		}
	}
	return index;
}


// Находит индекс первого вхождения максимального элемента в массив
int getFirstMaxElementIndex(int* arr, int size) {
	int max_element = getMaxElement(arr, size);
	int first_max_element_index = getFirstElementIndex(max_element, arr, size);
	return first_max_element_index;
}


// Находит индекс последнего вхождения минимального элемента в массив
int getLastMinElementIndex(int* arr, int size) {
	int min_element = getMinElement(arr, size);
	int last_min_element_index = getLastElementIndex(min_element, arr, size);
	return last_min_element_index;
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));
	
	int size;
	cout << "Введите размер массива: "; cin >> size;

	int* arr = createEmptyArray(size);
	generateRandomArray(arr, size, MIN_VALUE, MAX_VALUE);

	int first_max_index = getFirstMaxElementIndex(arr, size);
	int last_min_index = getLastMinElementIndex(arr, size);

	int start = (first_max_index < last_min_index) ? first_max_index : last_min_index;
	int end = (last_min_index > first_max_index) ? last_min_index : first_max_index;

	int sum = 0;
	for (int i = start + 1; i < end; i++) {
		sum += arr[i];
	}

	cout << "Исходный массив: "; showArray(arr, size); cout << endl;
	cout << "Индекс первого максимального элемента: " << first_max_index << endl;
	cout << "Индекс последнего минимального элемента: " << last_min_index << endl;
	cout << "Сумма элементов между ними: " << sum << endl;

	del(arr);

	return 0;
}
