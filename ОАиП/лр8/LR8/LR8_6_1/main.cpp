#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int n, value, sum = 0;

	cout << "¬ведите количество чисел в последовательности: ";
	cin >> n;
	cout << "¬ведите " << n << " целых чисел по очереди" << endl;

	for (int i = 0; i < n; i++) {
		cin >> value;
		if (value % 2 == 0) {
			sum += value;
		}
	}

	cout << "—умма четных элементов последовательности равна " << sum << endl;

	return 0;
}
