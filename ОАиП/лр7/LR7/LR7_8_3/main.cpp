#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int count = 12;
	double c1, c2;

	cout << "¬ведите наполненность первого и второго сосуда: ";
	cin >> c1; cin >> c2;

	for (int i = 0; i < count; i++) {
		if (i % 2 == 0) {
			c1 += c2 / 2;
			c2 /= 2;
		}
		else {
			c2 += c1 / 2;
			c1 /= 2;
		}
	}

	cout << "Ќаполненность сосудов после " << count << " переливаний: ";
	cout << c1 << " " << c2 << endl;

	return 0;
}
