#include <stdio.h>;
#include <iomanip>;
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	char symbol, space = ' ';
	int length, spacing = 10;

	printf("¬ведите символ: "); cin >> symbol;
	printf("¬ведите длину стороны квадрата: "); cin >> length;

	for (int i = 0; i < length; i++) {
		cout << setw(spacing) << setfill(space) << space << setw(length*2) << setfill(symbol) << symbol << endl;
	}

	return 0;
}
