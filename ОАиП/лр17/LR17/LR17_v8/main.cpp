#include <iostream>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -11;
const int MAX_VALUE = 11;


// ��������� �������� � ������ �������, ������� ������������� �������� �� ����������
void appendValue(int& arr_element, int value) {
	arr_element = (value < 0) ? (int)pow(value, 2) : value;
}


// �������� ������������� �������� ������� �� ���������� � ���������� ����� ������
int* replaceNegativeWithSquares(int* arr, int size) {
	int* new_arr = createEmptyArray(size);

	for (int i = 0; i < size; i++) {
		appendValue(new_arr[i], arr[i]);
	}

	return new_arr;
}


// ������� ������ ��������, ��� �������� ����� ��������� �� ���� �������� ���������� �� ����� ��������� �����
int findElementIndex(int* arr, int size) {
	int index = -1, min_difference = 100;
	for (int element_index = 0; element_index < size; element_index++) {
		int sum_before = 0, sum_after = 0;
		
		for (int i = 0; i < element_index; i++) {
			sum_before += arr[i];
		}
		for (int i = element_index + 1; i < size; i++) {
			sum_after += arr[i];
		}

		int difference = abs(sum_before - sum_after);

		if (difference < min_difference) {
			min_difference = difference;
			index = element_index;
		}
		if (difference == 0) { // ���� ����� �����, �� ��� ������ ���������� �����
			break;
		}
	}
	return index;
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	int size;
	cout << "������� ������ �������: "; cin >> size;

	int* arr = createEmptyArray(size);
	generateRandomArray(arr, size, MIN_VALUE, MAX_VALUE);
	int* arr_without_negatives = replaceNegativeWithSquares(arr, size);

	int index = findElementIndex(arr_without_negatives, size);

	cout << "�������� ������: "; showArray(arr, size); cout << endl;
	cout << "������ ����� ������ ������������� ���������: "; showArray(arr_without_negatives, size); cout << endl;
	cout << "������ ��������, ��� �������� ����� ��������� �� ���� �������� ���������� �� ����� ��������� �����: " << index << endl;

	del(arr);
	del(arr_without_negatives);

	return 0;
}
