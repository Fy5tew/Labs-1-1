#include <iostream>
#include "char_functions.h"
using namespace std;


int inputOpcode() {
	int opcode;
	cout << ">>> Введите номер действия: ";
	cin >> opcode;
	return opcode;
}


char inputDigit() {
	unsigned char letter;
	while (true) {
		cout << "Введите цифру: ";
		cin >> letter;
		if (isDigit(letter)) {
			return letter;
		}
		cout << "Это не цифра!" << endl;
	}
}


char inputLatinLowercase() {
	unsigned char letter;
	while (true) {
		cout << "Введите символ латинского алфавита в нижнем регистре: ";
		cin >> letter;
		if (isLatinLowercase(letter)) {
			return letter;
		}
		cout << "Вы ввели неправильный символ!" << endl;
	}
}


char inputLatinUppercase() {
	unsigned char letter;
	while (true) {
		cout << "Введите символ латинского алфавита в верхнем регистре: ";
		cin >> letter;
		if (isLatinUppercase(letter)) {
			return letter;
		}
		cout << "Вы ввели неправильный символ!" << endl;
	}
}


char inputCyrilicLowercase() {
	unsigned char letter;
	while (true) {
		cout << "Введите символ русского алфавита в нижнем регистре: ";
		cin >> letter;
		if (isCyrilicLowecase(letter)) {
			return letter;
		}
		cout << "Вы ввели неправильный символ!" << endl;
	}
}


char inputCyrilicUppercase() {
	unsigned char letter;
	while (true) {
		cout << "Введите символ русского алфавита в верхнем регистре: ";
		cin >> letter;
		if (isCyrilicUppercase(letter)) {
			return letter;
		}
		cout << "Вы ввели неправильный символ!" << endl;
	}
}
