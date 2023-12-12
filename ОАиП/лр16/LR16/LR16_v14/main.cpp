#include <iostream>
#include <Windows.h>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -5;
const int MAX_VALUE = 11;
const int MAX_STRING_SIZE = 100;


// ������ �������
void task1(int* arr, int n) {
	int min_element_abs = MAX_VALUE,
		min_element_abs_index = -1,
		first_negative_index = -1,
		after_negative_abs_sum = 0;

	for (int i = 0; i < n; i++) {
		int value = arr[i];
		int value_abs = abs(value);

		if (value_abs < min_element_abs) {
			min_element_abs = value_abs;
			min_element_abs_index = i;
		}
		if (value < 0 && first_negative_index == -1) {
			first_negative_index = i;
		}
	}

	if (first_negative_index != -1) {
		for (int i = first_negative_index + 1; i < n; i++) {
			after_negative_abs_sum += abs(arr[i]);
		}
	}

	cout << "�������� ������: "; showArray(arr, n); cout << endl;
	cout << "����� ������������ �� ������ �������� �������: " << min_element_abs_index + 1 << endl;
	if (first_negative_index == -1) {
		cout << "� ������� ��� ������������� ���������!" << endl;
	}
	else {
		cout << "����� ������� ���������, ������������� ����� ������� �������������� �������� �������: " << after_negative_abs_sum << endl;
	}

	del(arr);
}


// ������ �������
void task2(char* text) {
	char word[] = "����";
	bool is_word_in_text = false;

	char* text_word = strtok(text, " ");
	while (text_word) {
		if (strcmp(word, text_word) == 0) {
			is_word_in_text = true;
			break;
		}
		text_word = strtok(0, " ");
	}

	if (is_word_in_text) {
		cout << "� ������ ���� ����� '����'!" << endl;
	}
	else {
		cout << "� ������ ��� ����� '����'!" << endl;
	}

	delete[] text;
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	int opcode;
	cout << "1: � ���������� �������, ��������� �� ������������ ���������, ��������� ����� ������������ �� ������ �������� ������� � ����� ������� ��������� �������, ������������� ����� ������� �������������� ��������." << endl
		<< "2: �������� ���������, ������������ ���� �� �� ��������� � ���������� ������ ����� '����'." << endl
		<< "��� ����: "; cin >> opcode;
	cin.get();

	switch (opcode) {
	case 1: {
		int n;
		cout << "������� ���������� ��������� �������: "; cin >> n;
		int* arr = createEmptyArray(n);
		generateRandomArray(arr, n, MIN_VALUE, MAX_VALUE);
		task1(arr, n);
		break;
	}
	case 2: {
		char* text = new char[MAX_STRING_SIZE];
		cout << "������� �����: "; gets_s(text, MAX_STRING_SIZE);
		task2(text);
		break;
	}
	default: {
		cout << "�������� �����!" << endl;
	}
	}

	return 0;
}
