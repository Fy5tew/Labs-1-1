#include <iostream>
using namespace std;


double f(double x) {
	return 5 - pow(x, 2);
}


int main() {
	double a = 8, b = 12, n = 200;
	double h, x, s;

	h = (b - a) / n;
	x = a; s = 0;

	while (x <= b) {
		s += h * (f(x) + f(x + h)) / 2;
		x += h;
	}

	cout << "s = " << s << endl;

	return 0;
}
