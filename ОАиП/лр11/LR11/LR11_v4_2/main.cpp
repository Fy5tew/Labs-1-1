#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int n, p, A;
	char buffer[33];

	cout << "¬ведите число: "; cin >> A;
	cout << "¬ведите позицию: "; cin >> p;
	cout << "¬ведите количество битов: "; cin >> n;

	_itoa_s(A, buffer, 2);
	cout << "»сходное число: " << buffer << endl;

	_itoa_s(A | (~(~0 << n) << p), buffer, 2);
	cout << "–езультат: " << buffer << endl;

	return 0;
}
