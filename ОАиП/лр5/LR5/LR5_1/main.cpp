#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int a, b, k;

	cout << "������� ����� a: "; cin >> a;
	cout << "������� ����� b: "; cin >> b;
	cout << "������� ����� k: "; cin >> k;

	for (int i = 0; i < 2; i++) {
		int tmp;
		if (!(b > k)) {
			tmp = k;
			k = b;
			b = tmp;
		}
		if (!(a > b)) {
			tmp = b;
			b = a;
			a = tmp;
		}
	}

	cout << a << " " << b << " " << k << endl;

	return 0;
}
