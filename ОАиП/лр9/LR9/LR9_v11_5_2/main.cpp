#include <iostream>
using namespace std;


double f(double x) {
	return sin(x) + 1;
}


int main() {
	double a = 1, b = 3, n = 200;
	double h, x, s1, s2, s;

	h = (b - a) / (2 * n);
	x = a + 2 * h;
	s1 = s2 = 0;

	for (int i = 1; i < n; i++) {
		s2 += f(x);
		x += h;
		s1 += f(x);
		x += h;
	}

	s = (h / 3) * (f(a) + 4 * f(a + h) + 4 * s1 + 2 * s2 + f(b));

	cout << "s = " << s << endl;

	return 0;
}
