#include <iostream>
#include "utils.h"
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MIN_VALUE = -5;
	const int MAX_VALUE = 11;

	int n;
	int* arr;

	cout << "������� ������ �������: "; cin >> n;
	arr = createEmptyArray(n);
	generateRandomArray(arr, n, MIN_VALUE, MAX_VALUE);
	cout << "������: "; showArray(arr, n); cout << endl;

	int max = MIN_VALUE - 1, max_index = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_index = i;
		}
	}

	int negative_mul = 1, positive_sum = 0;
	for (int i = 0; i < max_index; i++) {
		int value = arr[i];
		if (value < 0) {
			negative_mul *= value;
		}
		else {
			positive_sum += value;
		}
	}

	cout << "������������ ������� �������: " << max << " (������ " << max_index << ")" << endl;
	cout << "������������ ������������� ���������, ������������� �� �������������: " << negative_mul << endl;
	cout << "����� ������������� ���������, ������������� �� �������������: " << positive_sum << endl;

	del(arr);

	return 0;
}
