#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_CTYPE, "Russian");
	int number, mask = 0xDB;
	char buffer[33];

	cout << "������� �����: ";
	cin >> number;

	_itoa_s(number, buffer, 2);
	cout << "�������� �����: " << buffer << endl;

	_itoa_s(mask, buffer, 2);
	cout << "�����: " << buffer << endl;

	_itoa_s(mask & number, buffer, 2);
	cout << "���������: " << buffer << endl;

	return 0;
}
