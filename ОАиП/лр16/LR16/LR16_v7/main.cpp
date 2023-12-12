#include <iostream>
#include <Windows.h>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -5;
const int MAX_VALUE = 11;
const int MAX_STRING_SIZE = 100;


// Первое задание
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
	cout << "Исходная матрица: "; showMatrix(matrix, n, m);
	if (row_with_d != -1) {
		cout << "Номер строки, содержащей число d: " << row_with_d + 1 << endl;
	}
	else {
		cout << "В матрице нет строки, содержащей число d!" << endl;
	}
	del(matrix, n);
}


// Второе задание
void task2(char* text) {
	cout << "Сумма кодов символов каждого слова: ";
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
	cout << "1: Дан двумерный массив, состоящий из N строк и М столбцов, а также число d. Найти строку, содержащую число d." << endl
		<< "2: В строке подсчитать сумму кодов символов каждого слова. Слова в строке разделены пробелами." << endl
		<< "Ваш ввод: "; cin >> opcode;
	cin.get();

	switch (opcode) {
	case 1: {
		int n, m, d;
		cout << "Введите размер массива: "; cin >> n >> m;
		cout << "Введите число d: "; cin >> d;
		int** matrix = createEmptyMatrix(n, m);
		generateRandomMatrix(matrix, n, m, MIN_VALUE, MAX_VALUE);
		task1(matrix, n, m, d);
		break;
	}
	case 2: {
		char* text = new char[MAX_STRING_SIZE];
		cout << "Введите строку: "; gets_s(text, MAX_STRING_SIZE);
		task2(text);
		break;
	}
	default: {
		cout << "Неверный номер!" << endl;
	}
	}

	return 0;
}
