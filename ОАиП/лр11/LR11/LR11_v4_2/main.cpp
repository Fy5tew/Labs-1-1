#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int n, p, A;
	char buffer[33];

	cout << "������� �����: "; cin >> A;
	cout << "������� �������: "; cin >> p;
	cout << "������� ���������� �����: "; cin >> n;

	_itoa_s(A, buffer, 2);
	cout << "�������� �����: " << buffer << endl;

	_itoa_s(A | (~(~0 << n) << p), buffer, 2);
	cout << "���������: " << buffer << endl;

	return 0;
}
