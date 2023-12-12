#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int A, B;
	char buffer[33];

	cout << "Введите число A: "; cin >> A;
	cout << "Введите число B: "; cin >> B;

	int bits = A >> 2 & 0b111; // Извлечь 3 бита из числа A начиная с позиции 2
	int prepared = (B >> 1 << 4) | (B & 0b1); // Вставить в число B биты 000 с первой позиции
	int result = prepared | (bits << 1); // Вставить биты вместо 000

	_itoa_s(A, buffer, 2);
	cout << "Число A: " << buffer << endl;

	_itoa_s(B, buffer, 2);
	cout << "Число B: " << buffer << endl;

	_itoa_s(bits, buffer, 2);
	cout << "Биты для вставки: " << buffer << endl;

	_itoa_s(prepared, buffer, 2);
	cout << "Число B после подготовки: " << buffer << endl;

	_itoa_s(result, buffer, 2);
	cout << "Результат: " << buffer << endl;

	return 0;
}
