#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int A;
	char buffer[33];

	cout << "������� �����: "; cin >> A;

	_itoa_s(A, buffer, 2);
	cout << "�������� �����: " << buffer << endl;

	_itoa_s(A | 0b110000, buffer, 2);
	cout << "���������: " << buffer << endl;

	return 0;
}
