#include <iostream>
#include <Windows.h>
using namespace std;


const int MAX_STRING_SIZE = 50;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int equal_chars_count = 0, string_size;
	char first_string[MAX_STRING_SIZE], second_string[MAX_STRING_SIZE];

	cout << "Введите первую строку: "; cin >> first_string;
	cout << "Введите вторую строку: "; cin >> second_string;

	// Определяет длину самой короткой строки
	string_size = (strlen(first_string) < strlen(second_string)) ? strlen(first_string) : strlen(second_string);

	cout << "Совпадающие символы: ";

	for (int i = 0; i < string_size; i++) {
		if (first_string[i] == second_string[i]) {
			// Вставляет запятую если это не первые совпадающие символы и выводит их
			cout << (equal_chars_count != 0 ? ", " : "") << first_string[i];
			equal_chars_count++;
		}
	}

	if (equal_chars_count == 0) { // Если нет совпадающих символов
		cout << "(Нет совпадающих символов)";
	}

	cout << endl;

	return 0;
}
