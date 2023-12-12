
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
		cout << "введите Вариант модуля" << endl;
		cout << "1) интерпретатор квестов" << endl;
		cout << "2) калькулятор" << endl;
		cout << "3) конвертер валют" << endl;
		cout << "4) секундомер" << endl;
		cout << "5) калькулятор строк" << endl;
		cout << "6) выход из программы" << endl;
		cin >> buff;

		switch (buff)
		{
		case 1:quest(); break;
		case 2:calc(); break;
		case 3:converter(); break;
		case 4:sec_clock(); break;
		case 5:str_calc(); break;
		case 6: goto exit_program;
		default:cout << "вариант не существует" << endl;
		}
	}
	exit_program: system("pause");
	return 0;
}