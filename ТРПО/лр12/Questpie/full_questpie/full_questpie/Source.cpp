
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <Windows.h>
#include "allmodules.h"
using namespace std;

int buff;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true) {
		cout << "-------------------------" << endl;
		cout << "������� ������� ������" << endl;
		cout << "1) ������������� �������" << endl;
		cout << "2) �����������" << endl;
		cout << "3) ��������� �����" << endl;
		cout << "4) ����������" << endl;
		cout << "5) ����������� �����" << endl;
		cout << "6) ����� �� ���������" << endl;
		cin >> buff;

		switch (buff)
		{
		case 1:quest(); break;
		case 2:calc(); break;
		case 3:converter(); break;
		case 4:sec_clock(); break;
		case 5:str_calc(); break;
		case 6: goto exit_program;
		default:cout << "������� �� ����������" << endl;
		}
	}
	exit_program: system("pause");
	return 0;
}