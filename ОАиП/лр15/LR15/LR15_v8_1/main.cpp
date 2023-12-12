#include <iostream>
#include "utils.h"
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MIN_VALUE = -11;
	const int MAX_VALUE = 11;

	int* arr, k;

	cout << "Введите размер массива: "; cin >> k;

	if (!(arr = (int*)calloc(k, sizeof(int)))) { // Выделение памяти под массив
		cout << "Недостаточно памяти!" << endl;
		return 0;
	}

	generateRandomArray(arr, k, MIN_VALUE, MAX_VALUE);
	cout << "Исходный массив: "; showArray(arr, k); cout << endl;

	int last_zero_index = -1;
	for (int i = 0; i < k; i++) { // Поиск последнего вхождения 0
		if (arr[i] == 0) {
			last_zero_index = i;
		}
	}
	if (last_zero_index == -1) {
		cout << "В массиве нет элемента равного нулю!" << endl;
		free(arr); // Освобождение памяти
		return 0;
	}

	int sum = 0, positive_count = 0;
	for (int i = last_zero_index; i < k; i++) {
		int value = arr[i];
		sum += value;
		if (value > 0) {
			positive_count++;
		}
	}

	cout << "Индекс последнего нуля: " << last_zero_index << endl;
	cout << "Количество положительных элементов после него: " << positive_count << endl;
	cout << "Сумма элементов после него: " << sum << endl;

	free(arr); // Освобождение памяти

	return 0;
}