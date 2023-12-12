#include <iostream>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -5;
const int MAX_VALUE = 10;


// ������� ������ ������� ��������� �������� � ������
int getFirstElementIndex(int element, int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == element) {
			return i;
		}
	}
	return -1; // ���� �������� �������� ��� � �������
}


// ������� ������ ���������� ��������� �������� � ������
int getLastElementIndex(int element, int* arr, int size) {
	for (int i = size - 1; i >= 0; i--) {
		if (arr[i] == element) {
			return i;
		}
	}
	return -1; // ���� �������� �������� ��� � �������
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	int size;
	cout << "������� ������ �������: "; cin >> size;

	int* arr = createEmptyArray(size);
	generateRandomArray(arr, size, MIN_VALUE, MAX_VALUE);

	int first_index = getFirstElementIndex(0, arr, size);
	int last_index = getLastElementIndex(0, arr, size);

	cout << "�������� ������: "; showArray(arr, size); cout << endl;

	if (first_index == -1 || last_index == -1) {
		cout << "� ������� ��� ������� ���������!" << endl;
	}
	else {
		int sum = 0;
		for (int i = first_index + 1; i < last_index; i++) {
			sum += arr[i];
		}
		cout << "������ ������� �������� ��������: " << first_index << endl
			<< "������ ���������� �������� ��������: " << last_index << endl
			<< "����� ��������� ����� ����: " << sum << endl;
	}

	del(arr);
	
	return 0;
}
