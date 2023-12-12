#include <iostream>
#include <Windows.h>
#include "utils.h"
using namespace std;


const int MIN_VALUE = -5;
const int MAX_VALUE = 11;
const int MAX_STRING_SIZE = 100;


// Первое задание
void task1(int* arr, int n) {
	int max = MIN_VALUE, max_count = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] == max) {
			max_count++;
		}
	}

	cout << "Исходный массив: "; showArray(arr, n); cout << endl;
	cout << "Максимальный элемент массива (" << max << ") встречается " << max_count << " раз(а)" << endl;

	del(arr);
}


// Второе задание
void task2(char* text) {
	char* max_word = 0, * min_word = 0;
	int max_word_length = 0, min_word_length = MAX_STRING_SIZE;

	char* word = strtok(text, " ");

	while (word) {
		int word_length = strlen(word);

		if (word_length > max_word_length) {
			max_word = word;
			max_word_length = word_length;
		}
		if (word_length < min_word_length) {
			min_word = word;
			min_word_length = word_length;
		}

		word = strtok(0, " ");
	}

	cout << "Самое короткое слово: " << min_word << " (" << min_word_length << " символов)" << endl;
	cout << "Самое длинное слово: " << max_word << " (" << max_word_length << " символов)" << endl;

	delete[] text;
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	int opcode;
	cout << "1: Задан массив A из n чисел. Подсчитать, сколько раз встречается в нем максимальное число." << endl
		<< "2: Определить самое короткое и самое длинное слово в строке." << endl
		<< "Ваш ввод: "; cin >> opcode;
	cin.get();

	switch (opcode) {
	case 1: {
		int n;
		cout << "Введите количество чисел: "; cin >> n;
		int* arr = createEmptyArray(n);
		generateRandomArray(arr, n, MIN_VALUE, MAX_VALUE);
		task1(arr, n);
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
