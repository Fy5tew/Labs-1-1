#include <iostream>
#include <Windows.h>
using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	while (true) {
		int opcode;
		char digit;
		unsigned char letter_lowercase, letter_uppercase;

		cout << ">>> Введите номер действия: ";
		cin >> opcode;

		if (opcode == 4) {
			cout << "Выход из программы...";
			break;
		}
		else if (opcode == 1) {
			cout << "Введите символ латинского алфавита в нижнем регистре: ";
			cin >> letter_lowercase;
			if ((letter_lowercase < 0x61) || (letter_lowercase > 0x7A)) {
				cout << "Вы ввели неправильный символ!" << endl;
				continue;
			}
			cout << "Введите символ латинского алфавита в верхнем регистре: ";
			cin >> letter_uppercase;
			if ((letter_uppercase < 0x41) || (letter_uppercase > 0x5A)) {
				cout << "Вы ввели неправильный символ!" << endl;
				continue;
			}
			cout << "Разница между кодами введенных символов равна " << letter_lowercase - letter_uppercase << endl;
		}
		else if (opcode == 2) {
			cout << "Введите символ русского алфавита в нижнем регистре: ";
			cin >> letter_lowercase;
			if ((letter_lowercase < 0xE0) || (letter_lowercase > 0xFF)) {
				cout << "Вы ввели неправильный символ!" << endl;
				continue;
			}
			cout << "Введите символ русского алфавита в верхнем регистре: ";
			cin >> letter_uppercase;
			if ((letter_uppercase < 0xC0) || (letter_uppercase > 0xDF)) {
				cout << "Вы ввели неправильный символ!" << endl;
				continue;
			}
			cout << "Разница между кодами введенных символов равна " << letter_lowercase - letter_uppercase << endl;
		}
		else if (opcode == 3) {
			cout << "Введите цифру: ";
			cin >> digit;
			if ((digit < 0x30) || (digit > 0x39)) {
				cout << "Это не цифра!" << endl;
				continue;
			}
			cout << "Код данного символа равен " << (int)digit << endl;
		}
		else {
			cout << "Неверный номер действия!" << endl;
			continue;
		}
	}

	cout << endl;

	return 0;
}
