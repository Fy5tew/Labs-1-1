#include <iostream>
#include <Windows.h>
#include "input.h"
#include "operations.h"

using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "��������� ��������:" << endl
		<< "1. ����� ������� ����� ������ �������� ���������� ��������" << endl
		<< "2. ����� ������� ����� ������ �������� �������� ��������" << endl
		<< "3. ������� ��� ������� �����" << endl
		<< "4. ����� �� ���������" << endl;

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
			cout << "�������� ����� ��������!" << endl;
		}
		}
	}

	return 0;
}
