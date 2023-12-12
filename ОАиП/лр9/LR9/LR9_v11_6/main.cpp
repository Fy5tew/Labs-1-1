#include <iostream>
using namespace std;


double f(double x) {
	return 2 * x + pow(x, 3) - 7;
}


int main() {
	double a = 0, b = 4, e = 0.0001;
	double x;

	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if (f(x) * f(a) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}

	cout << "x = " << x << endl;

	return 0;
}
