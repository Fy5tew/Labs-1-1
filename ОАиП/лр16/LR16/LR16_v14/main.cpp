#include <iostream>
#include <Windows.h>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -5;
const int MAX_VALUE = 11;
const int MAX_STRING_SIZE = 100;


// Первое задание
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

	cout << "Исходный массив: "; showArray(arr, n); cout << endl;
	cout << "Номер минимального по модулю элемента массива: " << min_element_abs_index + 1 << endl;
	if (first_negative_index == -1) {
		cout << "В массиве нет отрицательных элементов!" << endl;
	}
	else {
		cout << "Сумма модулей элементов, расположенных после первого отрицательного элемента массива: " << after_negative_abs_sum << endl;
	}

	del(arr);
}


// Второе задание
void task2(char* text) {
	char word[] = "БГТУ";
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
		cout << "В тексте есть слово 'БГТУ'!" << endl;
	}
	else {
		cout << "В тексте нет слова 'БГТУ'!" << endl;
	}

	delete[] text;
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	int opcode;
	cout << "1: В одномерном массиве, состоящем из вещественных элементов, вычислить номер минимального по модулю элемента массива и сумму модулей элементов массива, расположенных после первого отрицательного элемента." << endl
		<< "2: Написать программу, определяющую есть ли во введенном с клавиатуры тексте слово 'БГТУ'." << endl
		<< "Ваш ввод: "; cin >> opcode;
	cin.get();

	switch (opcode) {
	case 1: {
		int n;
		cout << "Введите количество элементов массива: "; cin >> n;
		int* arr = createEmptyArray(n);
		generateRandomArray(arr, n, MIN_VALUE, MAX_VALUE);
		task1(arr, n);
		break;
	}
	case 2: {
		char* text = new char[MAX_STRING_SIZE];
		cout << "Введите текст: "; gets_s(text, MAX_STRING_SIZE);
		task2(text);
		break;
	}
	default: {
		cout << "Неверный номер!" << endl;
	}
	}

	return 0;
}
