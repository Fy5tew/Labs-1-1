#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int A, B, n, m;
	char buffer[33];

	cout << "Введите число A: "; cin >> A;
	cout << "Введите число B: "; cin >> B;
	cout << "Введите позицию n: "; cin >> n;
	cout << "Введите позицию m: "; cin >> m;

	int bits = 0b111 & (A >> n); // Извлечь 3 бита из числа A начиная с позиции n
	int prepared = ((B >> m) << (m + 3)) | (B & ~(~0 << m)); // Вставить 3 бита 000 в число B начиная с позиции m
	int result = prepared | (bits << m); // Вставить извлеченные биты вместо 000

	_itoa_s(A, buffer, 2);
	cout << "Число A: " << buffer << endl;

	_itoa_s(B, buffer, 2);
	cout << "Число B: " << buffer << endl;

	_itoa_s(bits , buffer, 2);
	cout << "Биты для вставки: " << buffer << endl;

	_itoa_s(prepared, buffer, 2);
	cout << "Число B после подготовки: " << buffer << endl;

	_itoa_s(result, buffer, 2);
	cout << "Результат: " << buffer << endl;

	return 0;
}
