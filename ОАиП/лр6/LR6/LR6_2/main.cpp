#include <iostream>
using namespace std;


int main() {
	int y = 5, n = 9;
	double w, s, j, t = -7.4;

	j = 0;
	while (j <= 2.1) {
		w = 0.6 * j + exp(t * j) * pow(4 * y / n, 2);
		s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));

		cout << "j = " << j << endl;
		cout << "w = " << w << endl;
		cout << "s = " << s << endl;
		cout << endl;

		j += 0.1;
	}

	return 0;
}
