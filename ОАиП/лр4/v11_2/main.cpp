#include <stdio.h>;
#include <iomanip>;
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	int a = 0, h = 0, P = 0, S = 0;

	while (true) {
		h += 1;
		a = h * 2;
		P = 2 * a + 2 * h;
		S = a * h;

		if (S == P) {
			break;
		}
	}
	
	cout << "���������: " << a << endl;
	cout << "������: " << h << endl;
	cout << "��������: " << P << endl;
	cout << "�������: " << S << endl;

	return 0;
}
