#include <iostream>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -10;
const int MAX_VALUE = 2;


// ���������, ���� �� � ������� ���� �� ���� ������� ������� ����
bool hasPositiveValue(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			return true;
		}
	}
	return false;
}


// ������� ������, ���������� ���� �� ���� ������������� ������� � ���������� �� ������ 
int getPositiveRowIndex(int** matrix, int n, int m) {
	for (int i = 0; i < n; i++) {
		if (hasPositiveValue(matrix[i], m)) {
			return i;
		}
	}
	return -1;
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	int n, m;
	cout << "������� ������� �������: "; cin >> n >> m;

	int** matrix = createEmptyMatrix(n, m);
	generateRandomMatrix(matrix, n, m, MIN_VALUE, MAX_VALUE);

	cout << "�������� �������: "; showMatrix(matrix, n, m);

	int positive_row_index = getPositiveRowIndex(matrix, n, m);

	if (positive_row_index == -1) {
		cout << "� ������� ��� ������������� ���������!" << endl;
	}
	else {
		// ���� ������ ����� 0, �� �������� ��������� ������
		int row_index = ((positive_row_index == 0) ? n : positive_row_index) - 1;
		for (int j = 0; j < m; j++) {
			int value = matrix[row_index][j];
			matrix[row_index][j] = -value;
		}
		cout << "������ ������, ���������� ���� �� ���� ������������� �������: " << positive_row_index << endl
			<< "������� ����� ���������: "; showMatrix(matrix, n, m);
	}

	del(matrix, n);

	return 0;
}
