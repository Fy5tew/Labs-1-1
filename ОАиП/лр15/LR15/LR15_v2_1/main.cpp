#include <iostream>
#include "utils.h"
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MIN_VALUE = -5;
	const int MAX_VALUE = 11;

	int* A, n;

	cout << "������� ������ �������: "; cin >> n;
	
	A = createEmptyArray(n);
	generateRandomArray(A, n, MIN_VALUE, MAX_VALUE);

	cout << "�������� ������: "; showArray(A, n); cout << endl;

	int last_negative_index = -1;

	for (int i = 0; i < n; i++) {
		if (A[i] < 0) {
			last_negative_index = i;
		}
	}

	if (last_negative_index == -1) {
		cout << "� ������� ��� ��������� ������� ����!" << endl;
	}
	else {
		cout << "���������� ����� k, ��� ������� A[k] < 0: " << last_negative_index << endl;
	}

	del(A);

	return 0;
}
