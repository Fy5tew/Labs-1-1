#include <iostream>
#include "utils.h"
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MIN_VALUE = -11;
	const int MAX_VALUE = 11;

	int* arr, k;

	cout << "������� ������ �������: "; cin >> k;

	if (!(arr = (int*)calloc(k, sizeof(int)))) { // ��������� ������ ��� ������
		cout << "������������ ������!" << endl;
		return 0;
	}

	generateRandomArray(arr, k, MIN_VALUE, MAX_VALUE);
	cout << "�������� ������: "; showArray(arr, k); cout << endl;

	int last_zero_index = -1;
	for (int i = 0; i < k; i++) { // ����� ���������� ��������� 0
		if (arr[i] == 0) {
			last_zero_index = i;
		}
	}
	if (last_zero_index == -1) {
		cout << "� ������� ��� �������� ������� ����!" << endl;
		free(arr); // ������������ ������
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

	cout << "������ ���������� ����: " << last_zero_index << endl;
	cout << "���������� ������������� ��������� ����� ����: " << positive_count << endl;
	cout << "����� ��������� ����� ����: " << sum << endl;

	free(arr); // ������������ ������

	return 0;
}