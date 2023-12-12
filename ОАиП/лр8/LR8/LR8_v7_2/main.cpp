#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	double x[] = { 2, 1.3, 0.4, 5, 1, 7 };
	double y, min_x = 999;

	for (double xi : x) {
		if (xi < min_x) {
			min_x = xi;
		}
	}

	for (double t = 0.5; t < 3.1; t += 0.5) {
		if (t > 2) {
			y = min_x;
		}
		else {
			y = cos(pow(t, 2));
		}
		cout << "y = " << y << endl;
	}

	return 0;
}
