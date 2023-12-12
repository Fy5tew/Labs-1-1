#include <iostream>
#include <Windows.h>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -5;
const int MAX_VALUE = 11;
const int MAX_STRING_SIZE = 100;


// ������ �������
void task1(int** matrix, int n, int m) {
	int zero_count = 0,
		negative_count = 0,
		positive_count = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int value = matrix[i][j];
			if (value < 0) {
				negative_count++;
			}
			else if (value > 0) {
				positive_count++;
			}
			else {
				zero_count++;
			}
		}
	}

	cout << "�������� �������: "; showMatrix(matrix, n, m);
	cout << "���������� ������������� ���������: " << negative_count << endl;
	cout << "���������� ������������� ���������: " << positive_count << endl;
	cout << "���������� ������� ���������: " << zero_count << endl;

	del(matrix, n);
}


// ������ �������
void task2(char* text) {
	int words_count = 1;
	for (int i = 0; i < MAX_STRING_SIZE; i++) {
		if (text[i] == ' ') {
			words_count++;
		}
	}
	cout << "���������� ���� � �����������: " << words_count << endl;
	delete[] text;
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	int opcode;
	cout << "1: ��� ��������� ������, ��������� �� N ����� � � ��������. ����� ���������� �������������, ������������� � ������� ��������� �������." << endl
		<< "2: �������� ���������, ������� ������ ��������� ���� ������ � ���������� ����� ���������� ����. ����� ��������� ���������." << endl
		<< "��� ����: "; cin >> opcode;
	cin.get();

	switch (opcode) {
	case 1: {
		int n, m;
		cout << "������� ������� �������: "; cin >> n >> m;
		int** matrix = createEmptyMatrix(n, m);
		generateRandomMatrix(matrix, n, m, MIN_VALUE, MAX_VALUE);
		task1(matrix, n, m);
		break;
	}
	case 2: {
		char* text = new char[MAX_STRING_SIZE];
		cout << "������� �����������: ";
		gets_s(text, MAX_STRING_SIZE);
		task2(text);
		break;
	}
	default: {
		cout << "�������� �����!" << endl;
	}
	}

	return 0;
}
