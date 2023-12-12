#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int n1 = 6, n2 = 5;
	double c = 0.7;
	double a[] = { 3, 12, -4, 6.2, 3, 0.4 };
	double b[] = {19, 1, -24, 4.2, 8};

	double d, sum1 = 0, sum2 = 0;

	for (int i = 0; i < n1; i++) {
		sum1 += a[i];
	}
	for (int i = 0; i < n2; i++) {
		sum2 += pow(b[i] - 1, 2);
	}

	d = sum1 - c * sum2;

	cout << "d = " << d << endl;

	return 0;
}
