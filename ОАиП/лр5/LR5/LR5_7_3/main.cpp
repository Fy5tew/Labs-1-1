#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	int a, b, p, q, r, s;

	cout << "Введите размеры участка: "; cin >> a; cin >> b;
	cout << "Введите размеры первого дома: "; cin >> p; cin >> q;
	cout << "Введите размеры второго дома: "; cin >> r; cin >> s;

	bool can;
	if ((p + r < a && q + s < b) || (p + s < a && q + r < b) || (p + r < b && q + s < a) || (p + s < b && q + r < a)) {
		cout << "На данном участке можно разместить оба дома" << endl;
	}
	else {
		cout << "Разместить дома на данном участке не получится" << endl;
	}

	return 0;
}
