#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int days = 1;
	double p, q;

	cout << "Введите p: "; cin >> p;
	cout << "Введите q: "; cin >> q;

	while (p <= q) {
		p += 3 * p / 100;
		days += 1;
	}

	cout << "Выручка фирмы составит " << p << " тыс. руб. ";
	cout << "Для этого придется торговать " << days << " дней";
	cout << endl;

	return 0;
}
