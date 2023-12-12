#include <iostream>
using namespace std;


int main() {
	int k = 6;
	double d, b;
	double a = 1.33 * pow(10, -3);
	double x, x_values[] = {0.2, 1, -3, -6.1};

	for (int i = 0; i < 4; i++) {
		x = x_values[i];

		d = exp(-x) + (x - a) / log(x);
		if (d >= k * sqrt(2)) {
			b = 6 * d * x;
		}
		else {
			b = sin(a / x);
		}

		cout << "d = " << d << endl;
		cout << "b = " << b << endl;
		cout << endl;
	}

	return 0;
}
