#include <stdio.h>;
#include <iomanip>;
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	int a, a_2, a_4;

	printf("¬ведите число a: "); cin >> a;

	a_2 = a * a;
	a_4 = a_2 * a_2;

	cout << "a^4 = " << a_4 << endl;

	return 0;
}
