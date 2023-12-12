#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int number;

	cout << "Введите число: "; cin >> number;
	
	cout << "Делители числа " << number << ": ";
	for (int n = 1; n <= (number / 2); n++) {
		if (number % n == 0) {
			cout << n << " ";
		}
	}
	cout << endl;

	return 0;
}
