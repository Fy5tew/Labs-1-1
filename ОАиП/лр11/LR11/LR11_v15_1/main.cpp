#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int A;

	cout << "Введите число A: "; cin >> A;

	if (A >> 1 << 1 == A) {
		cout << "Данное число кратно 2!" << endl;
	}
	else {
		cout << "Данное число не кратно 2!" << endl;
	}

	return 0;
}
