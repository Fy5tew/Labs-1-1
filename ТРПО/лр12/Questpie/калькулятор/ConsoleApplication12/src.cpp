
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;
string buff; char operat;
int a_num, b_num;
int main()
{
	system("chcp 1251 > nul");

	cout << "введите 1 число" << endl;
	cin >> buff;
	try
	{
		a_num = stoi(buff);
	}
	catch (invalid_argument)
	{
		cout << "SYNTAX ERROR"<< endl; system("pause"); return 0;
	}

	cout << "введите оператор" << endl;
	cin >> buff;
	operat = buff.at(0);
	cout << endl;
	cout << "введите 2 число" << endl;
	cin >> buff;
	try
	{
		b_num = stoi(buff);
	}
	catch (invalid_argument)
	{
		cout << "SYNTAX ERROR" << endl; system("pause"); return 0;
	}
	cout << endl;

	switch (operat)
	{
	case '+': cout<< "Ответ = " << (a_num + b_num) << endl; ; break;
	case '-': cout << "Ответ = " << (a_num - b_num) << endl; ; break;
	case '/':if (b_num==0)
	{
		cout << "MATH ERROR" << endl; ; break;
	}
			 else {
		cout << (a_num / b_num) << endl; ; break;
	}
		
	case '*': cout << "Ответ = " << (a_num * b_num) << endl; ; break;
	case '%': cout << "Ответ = " << (a_num % b_num) << endl; ; break;
	default:
		cout << "SYNTAX ERROR" << endl; break;
	}


	system("pause");
	return 0;
}