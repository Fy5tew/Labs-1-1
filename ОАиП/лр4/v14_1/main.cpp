#include <stdio.h>;
#include <iomanip>;
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	char symbol, space = ' ';

	printf("Введите символ: "); cin >> symbol;

	cout << setw(20) << setfill(space) << space << setw(1) << setfill(symbol) << symbol << endl;
	cout << setw(19) << setfill(space) << space << setw(3) << setfill(symbol) << symbol << endl;
	cout << setw(18) << setfill(space) << space << setw(5) << setfill(symbol) << symbol << endl;
	cout << setw(17) << setfill(space) << space << setw(7) << setfill(symbol) << symbol << endl;
	cout << setw(16) << setfill(space) << space << setw(9) << setfill(symbol) << symbol << endl;
	cout << setw(15) << setfill(space) << space << setw(11) << setfill(symbol) << symbol << endl;
	cout << setw(14) << setfill(space) << space << setw(13) << setfill(symbol) << symbol << endl;
	cout << setw(15) << setfill(space) << space << setw(11) << setfill(symbol) << symbol << endl;
	cout << setw(16) << setfill(space) << space << setw(9) << setfill(symbol) << symbol << endl;
	cout << setw(17) << setfill(space) << space << setw(7) << setfill(symbol) << symbol << endl;
	cout << setw(18) << setfill(space) << space << setw(5) << setfill(symbol) << symbol << endl;
	cout << setw(19) << setfill(space) << space << setw(3) << setfill(symbol) << symbol << endl;
	cout << setw(20) << setfill(space) << space << setw(1) << setfill(symbol) << symbol << endl;

	return 0;
}
