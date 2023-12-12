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

		cout << ">>> ������� ����� ��������: ";
		cin >> opcode;

		if (opcode == 4) {
			cout << "����� �� ���������...";
			break;
		}
		else if (opcode == 1) {
			cout << "������� ������ ���������� �������� � ������ ��������: ";
			cin >> letter_lowercase;
			if ((letter_lowercase < 0x61) || (letter_lowercase > 0x7A)) {
				cout << "�� ����� ������������ ������!" << endl;
				continue;
			}
			cout << "������� ������ ���������� �������� � ������� ��������: ";
			cin >> letter_uppercase;
			if ((letter_uppercase < 0x41) || (letter_uppercase > 0x5A)) {
				cout << "�� ����� ������������ ������!" << endl;
				continue;
			}
			cout << "������� ����� ������ ��������� �������� ����� " << letter_lowercase - letter_uppercase << endl;
		}
		else if (opcode == 2) {
			cout << "������� ������ �������� �������� � ������ ��������: ";
			cin >> letter_lowercase;
			if ((letter_lowercase < 0xE0) || (letter_lowercase > 0xFF)) {
				cout << "�� ����� ������������ ������!" << endl;
				continue;
			}
			cout << "������� ������ �������� �������� � ������� ��������: ";
			cin >> letter_uppercase;
			if ((letter_uppercase < 0xC0) || (letter_uppercase > 0xDF)) {
				cout << "�� ����� ������������ ������!" << endl;
				continue;
			}
			cout << "������� ����� ������ ��������� �������� ����� " << letter_lowercase - letter_uppercase << endl;
		}
		else if (opcode == 3) {
			cout << "������� �����: ";
			cin >> digit;
			if ((digit < 0x30) || (digit > 0x39)) {
				cout << "��� �� �����!" << endl;
				continue;
			}
			cout << "��� ������� ������� ����� " << (int)digit << endl;
		}
		else {
			cout << "�������� ����� ��������!" << endl;
			continue;
		}
	}

	cout << endl;

	return 0;
}
