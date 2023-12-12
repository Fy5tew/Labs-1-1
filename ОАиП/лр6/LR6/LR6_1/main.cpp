#include <iostream>
using namespace std;


int main() {
	int y = 5, n = 9;
	double w, s, t = -7.4, j, j_values[] = {0.5, 8.4, 0.3};

	for (int i = 0; i < 3; i++) {
		j = j_values[i];

		w = 0.6 * j + exp(t * j) * pow(4 * y / n, 2);
		s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));

		cout << "j = " << j << endl;
		cout << "w = " << w << endl;
		cout << "s = " << s << endl;
		cout << endl;
	}

	return 0;
}
