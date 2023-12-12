#include <iostream>
#include "utils.h"
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MIN_VALUE = -11;
	const int MAX_VALUE = 11;

	int* arr, n;

	cout << "Введите размер массива: "; cin >> n;

	arr = createEmptyArray(n);
	generateRandomArray(arr, n, MIN_VALUE, MAX_VALUE);
	cout << "Исходный массив: "; showArray(arr, n); cout << endl << endl;

	int min_abs_value_index = -1, min_abs_value = MAX_VALUE;
	for (int i = 0; i < n; i++) {
		int value = abs(arr[i]);
		if (value < min_abs_value) {
			min_abs_value = value;
			min_abs_value_index = i;
		}
	}

	int negative_count = 0, abs_sum = 0;
	for (int i = min_abs_value_index; i < n; i++) {
		int value = arr[i];
		abs_sum += abs(value);
		if (value < 0) {
			negative_count++;
		}
	}

	cout << "Индекс минимального по модулю элемента: " << min_abs_value_index << endl;
	cout << "Количество отрицательных элементов после него: " << negative_count << endl;
	cout << "Сумма модулей элементов после него: " << abs_sum << endl;

	del(arr);

	return 0;
}
