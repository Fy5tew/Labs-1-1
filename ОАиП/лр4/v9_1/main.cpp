#include <stdio.h>;
#include <iomanip>;
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	char symbol, space = ' ';

	printf("Введите символ: "); cin >> symbol;

	// Первая стрелка (->)
	cout << setw(40) << setfill(space) << space << symbol << endl;
	cout << setw(42) << setfill(space) << space << symbol << endl;
	cout << setw(44) << setfill(space) << space << symbol << endl;
	cout << setw(20) << setfill(space) << space << setw(26) << setfill(symbol) << symbol << endl;
	cout << setw(44) << setfill(space) << space << symbol << endl;
	cout << setw(42) << setfill(space) << space << symbol << endl;
	cout << setw(40) << setfill(space) << space << symbol << endl << endl;
	// Вторая стрелка (вверх)
	cout << setw(30) << setfill(space) << space << symbol << endl;
	cout << setw(28) << setfill(space) << space << symbol << setw(1) << setfill(space) << space << symbol << setw(1) << setfill(space) << space << symbol << endl;
	cout << setw(26) << setfill(space) << space << symbol << setw(3) << setfill(space) << space << symbol << setw(3) << setfill(space) << space << symbol << endl;
	cout << setw(30) << setfill(space) << space << symbol << endl;
	cout << setw(30) << setfill(space) << space << symbol << endl;
	cout << setw(30) << setfill(space) << space << symbol << endl;
	cout << setw(30) << setfill(space) << space << symbol << endl;
	cout << setw(30) << setfill(space) << space << symbol << endl << endl;
	// Третья стрелка (вниз)
	cout << setw(30) << setfill(space) << space << symbol << endl;
	cout << setw(30) << setfill(space) << space << symbol << endl;
	cout << setw(30) << setfill(space) << space << symbol << endl;
	cout << setw(30) << setfill(space) << space << symbol << endl;
	cout << setw(30) << setfill(space) << space << symbol << endl;
	cout << setw(26) << setfill(space) << space << symbol << setw(3) << setfill(space) << space << symbol << setw(3) << setfill(space) << space << symbol << endl;
	cout << setw(28) << setfill(space) << space << symbol << setw(1) << setfill(space) << space << symbol << setw(1) << setfill(space) << space << symbol << endl;
	cout << setw(30) << setfill(space) << space << symbol << endl << endl;
	// Четвертая стрелка (<-)
	cout << setw(26) << setfill(space) << space << symbol << endl;
	cout << setw(24) << setfill(space) << space << symbol << endl;
	cout << setw(22) << setfill(space) << space << symbol << endl;
	cout << setw(20) << setfill(space) << space << setw(26) << setfill(symbol) << symbol << endl;
	cout << setw(22) << setfill(space) << space << symbol << endl;
	cout << setw(24) << setfill(space) << space << symbol << endl;
	cout << setw(26) << setfill(space) << space << symbol << endl;
	return 0;
}
