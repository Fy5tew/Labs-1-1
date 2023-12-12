#include <iostream>
#include <Windows.h>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -5;
const int MAX_VALUE = 11;
const int MAX_STRING_SIZE = 100;


// Первое задание
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

	cout << "Исходная матрица: "; showMatrix(matrix, n, m);
	cout << "Количество отрицательных элементов: " << negative_count << endl;
	cout << "Количество положительных элементов: " << positive_count << endl;
	cout << "Количество нулевых элементов: " << zero_count << endl;

	del(matrix, n);
}


// Второе задание
void task2(char* text) {
	int words_count = 1;
	for (int i = 0; i < MAX_STRING_SIZE; i++) {
		if (text[i] == ' ') {
			words_count++;
		}
	}
	cout << "Количество слов в предложении: " << words_count << endl;
	delete[] text;
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	int opcode;
	cout << "1: Дан двумерный массив, состоящий из N строк и М столбцов. Найти количество отрицательных, положительных и нулевых элементов массива." << endl
		<< "2: Написать программу, которая вводит несколько слов текста и определяет общее количество слов. Слова разделены пробелами." << endl
		<< "Ваш ввод: "; cin >> opcode;
	cin.get();

	switch (opcode) {
	case 1: {
		int n, m;
		cout << "Введите размеры матрицы: "; cin >> n >> m;
		int** matrix = createEmptyMatrix(n, m);
		generateRandomMatrix(matrix, n, m, MIN_VALUE, MAX_VALUE);
		task1(matrix, n, m);
		break;
	}
	case 2: {
		char* text = new char[MAX_STRING_SIZE];
		cout << "Введите предложение: ";
		gets_s(text, MAX_STRING_SIZE);
		task2(text);
		break;
	}
	default: {
		cout << "Неверный номер!" << endl;
	}
	}

	return 0;
}
