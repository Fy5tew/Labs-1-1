#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int A;

	cout << "Введите число: "; cin >> A;

	if (A >> 2 << 2 == A) {
		cout << "Данное число кратно 4!";
	}
	else {
		cout << "Данное число не кратно 4!";
	}
	
	return 0;
}
