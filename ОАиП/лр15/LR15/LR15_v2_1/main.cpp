#include <iostream>
#include "utils.h"
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MIN_VALUE = -5;
	const int MAX_VALUE = 11;

	int* A, n;

	cout << "Введите размер массива: "; cin >> n;
	
	A = createEmptyArray(n);
	generateRandomArray(A, n, MIN_VALUE, MAX_VALUE);

	cout << "Исходный массив: "; showArray(A, n); cout << endl;

	int last_negative_index = -1;

	for (int i = 0; i < n; i++) {
		if (A[i] < 0) {
			last_negative_index = i;
		}
	}

	if (last_negative_index == -1) {
		cout << "В массиве нет элементов меньших нуля!" << endl;
	}
	else {
		cout << "Наибольшее число k, при котором A[k] < 0: " << last_negative_index << endl;
	}

	del(A);

	return 0;
}
