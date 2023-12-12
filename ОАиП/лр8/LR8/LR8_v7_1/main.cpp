#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int n = 6;
	double a[] = {0.5, 2, 2.5, 1, 0, 8};
	double b[] = {2.3, 4, 0.5, 2, 3, 9};
	double c, d = 0;

	for (int i = 0; i < n; i++) {
		c = sqrt(a[i] + b[i]);
		d += c / (i + 1);
	}

	cout << "d = " << d << endl;

	return 0;
}
