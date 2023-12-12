#include <iostream>
#include <Windows.h>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -5;
const int MAX_VALUE = 11;
const int MAX_STRING_SIZE = 100;


// ������ �������
void task1(int** matrix, int n, int m, int d) {
	int row_with_d = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == d) {
				row_with_d = i;
				break;
			}
		}
		if (row_with_d != -1) {
			break;
		}
	}
	cout << "�������� �������: "; showMatrix(matrix, n, m);
	if (row_with_d != -1) {
		cout << "����� ������, ���������� ����� d: " << row_with_d + 1 << endl;
	}
	else {
		cout << "� ������� ��� ������, ���������� ����� d!" << endl;
	}
	del(matrix, n);
}


// ������ �������
void task2(char* text) {
	cout << "����� ����� �������� ������� �����: ";
	char* word = strtok(text, " ");
	while (word) {
		int sum = 0;
		for (int i = 0; i < strlen(word); i++) {
			sum += (int)word[i];
		}
		cout << sum << " ";
		word = strtok(0, " ");
	}
	cout << endl;
	delete[] text;
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	int opcode;
	cout << "1: ��� ��������� ������, ��������� �� N ����� � � ��������, � ����� ����� d. ����� ������, ���������� ����� d." << endl
		<< "2: � ������ ���������� ����� ����� �������� ������� �����. ����� � ������ ��������� ���������." << endl
		<< "��� ����: "; cin >> opcode;
	cin.get();

	switch (opcode) {
	case 1: {
		int n, m, d;
		cout << "������� ������ �������: "; cin >> n >> m;
		cout << "������� ����� d: "; cin >> d;
		int** matrix = createEmptyMatrix(n, m);
		generateRandomMatrix(matrix, n, m, MIN_VALUE, MAX_VALUE);
		task1(matrix, n, m, d);
		break;
	}
	case 2: {
		char* text = new char[MAX_STRING_SIZE];
		cout << "������� ������: "; gets_s(text, MAX_STRING_SIZE);
		task2(text);
		break;
	}
	default: {
		cout << "�������� �����!" << endl;
	}
	}

	return 0;
}
