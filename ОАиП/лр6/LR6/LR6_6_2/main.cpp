#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int n;
	double p, price = 0;

	cout << "¬ведите количество лет n: "; cin >> n;
	cout << "¬ведите процент уценки стоимости p: "; cin >> p;

	for (int year = 1; year <= n; year++) {
		int s;
		cout << "¬ведите стоимость оборудовани€ в " << year << " год: "; cin >> s;
		price += s;
		price -= p * price / 100;
	}

	cout << "ќбща€ стоимость накопленного оборудовани€: " << price;
	cout << endl;

	return 0;
}
