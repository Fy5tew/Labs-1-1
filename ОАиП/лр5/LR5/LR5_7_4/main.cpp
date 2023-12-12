#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	int r, p, q;

	cout << "¬ведите радиус шара: "; cin >> r;
	cout << "¬ведите диагонали ромба: "; cin >> p; cin >> q;

	int d = 2 * r; // диаметр шара
	float h = p * q / (sqrt(pow(p, 2) + pow(q, 2))); // высота ромба
	if (d <= h) {
		cout << "Ўар пройдет через отверстие" << endl;
	}
	else {
		cout << "Ўар не пройдет через отверстие" << endl;
	}

	return 0;
}
