#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	double x[] = {1, 6.7, 4, 6, 17};
	double y, z = 999, sum = 0;

	for (double xi : x) {
		if (2 + xi < z) {
			z = 2 + xi;
		}
	}
	for (int i = 0; i < 5; i++) {
		sum += pow(x[i], 2);
	}

	y = sum + z;

	cout << "y = " << y << endl;

	return 0;
}
