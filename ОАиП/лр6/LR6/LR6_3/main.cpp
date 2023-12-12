#include <iostream>
using namespace std;


int main() {
	int n = 9;
	double w, s, j, t = -7.4, y, y_values[] = {0.1, -3, 0.5};

	for (int i = 0; i < 3; i++) {
		y = y_values[i];
		j = 0.1;
		while (j < 0.5) {
			w = 0.6 * j + exp(t * j) * pow(4 * y / n, 2);
			s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));

			cout << "y = " << y << endl;
			cout << "j = " << j << endl;
			cout << "w = " << w << endl;
			cout << "s = " << s << endl;
			cout << endl;

			j += 0.1;
		}
	}

	return 0;
}
