#include <iostream>
#include "char_functions.h"
using namespace std;


int inputOpcode() {
	int opcode;
	cout << ">>> ������� ����� ��������: ";
	cin >> opcode;
	return opcode;
}


char inputDigit() {
	unsigned char letter;
	while (true) {
		cout << "������� �����: ";
		cin >> letter;
		if (isDigit(letter)) {
			return letter;
		}
		cout << "��� �� �����!" << endl;
	}
}


char inputLatinLowercase() {
	unsigned char letter;
	while (true) {
		cout << "������� ������ ���������� �������� � ������ ��������: ";
		cin >> letter;
		if (isLatinLowercase(letter)) {
			return letter;
		}
		cout << "�� ����� ������������ ������!" << endl;
	}
}


char inputLatinUppercase() {
	unsigned char letter;
	while (true) {
		cout << "������� ������ ���������� �������� � ������� ��������: ";
		cin >> letter;
		if (isLatinUppercase(letter)) {
			return letter;
		}
		cout << "�� ����� ������������ ������!" << endl;
	}
}


char inputCyrilicLowercase() {
	unsigned char letter;
	while (true) {
		cout << "������� ������ �������� �������� � ������ ��������: ";
		cin >> letter;
		if (isCyrilicLowecase(letter)) {
			return letter;
		}
		cout << "�� ����� ������������ ������!" << endl;
	}
}


char inputCyrilicUppercase() {
	unsigned char letter;
	while (true) {
		cout << "������� ������ �������� �������� � ������� ��������: ";
		cin >> letter;
		if (isCyrilicUppercase(letter)) {
			return letter;
		}
		cout << "�� ����� ������������ ������!" << endl;
	}
}
