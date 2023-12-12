#include <stdio.h>;
#include <iomanip>;
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	char symbol, space = ' ';

	printf("Введите символ: "); cin >> symbol;

	// Голова
	cout << setw(20) << setfill(space) << space << setw(4) << setfill(symbol) << symbol << endl;
	cout << setw(18) << setfill(space) << space << setw(8) << setfill(symbol) << symbol << endl;
	cout << setw(18) << setfill(space) << space << setw(8) << setfill(symbol) << symbol << endl;
	cout << setw(20) << setfill(space) << space << setw(4) << setfill(symbol) << symbol << endl;
	// Тело
	cout << setw(21) << setfill(space) << space << setw(2) << setfill(symbol) << symbol << endl;
	cout << setw(16) << setfill(space) << space << setw(12) << setfill(symbol) << symbol << endl;
	cout << setw(21) << setfill(space) << space << setw(2) << setfill(symbol) << symbol << endl;
	cout << setw(21) << setfill(space) << space << setw(2) << setfill(symbol) << symbol << endl;
	cout << setw(21) << setfill(space) << space << setw(2) << setfill(symbol) << symbol << endl;
	cout << setw(21) << setfill(space) << space << setw(2) << setfill(symbol) << symbol << endl;
	// Ноги
	cout << setw(20) << setfill(space) << space << symbol << setw(2) << setfill(space) << space << symbol << endl;
	cout << setw(19) << setfill(space) << space << symbol << setw(4) << setfill(space) << space << symbol << endl;
	cout << setw(18) << setfill(space) << space << symbol << setw(6) << setfill(space) << space << symbol << endl;

	return 0;
}
