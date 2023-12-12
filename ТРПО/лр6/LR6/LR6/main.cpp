#include <iostream>
#include <Windows.h>
#include "input.h"
#include "operations.h"

using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Доступные действия:" << endl
		<< "1. Найти разницу между кодами символов латинского алфавита" << endl
		<< "2. Найти разницу между кодами символов русского алфавита" << endl
		<< "3. Вывести код символа цифры" << endl
		<< "4. Выход из программы" << endl;

	while (true) {
		int opcode = inputOpcode();
		switch (opcode) {
		case 1: {
			latinLetterDiference();
			break;
		}
		case 2: {
			cyrilicLetterDifference();
			break;
		}
		case 3: {
			digitCharCode();
			break;
		}
		case 4: {
			exitProgram();
			break;
		}
		default: {
			cout << "Неверный номер действия!" << endl;
		}
		}
	}

	return 0;
}
