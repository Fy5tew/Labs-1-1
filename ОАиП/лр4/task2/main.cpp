#include <stdio.h>;
#include <iomanip>;
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	double a, b, c, p, S;

	printf("¬ведите первую сторону треугольника: "); cin >> a;
	printf("¬ведите вторую сторону треугольника: "); cin >> b;
	printf("¬ведите третью сторону треугольника: "); cin >> c;

	p = (a + b + c) / 2;
	S = sqrt(p*(p - a)*(p - b)*(p - c));

	cout << "ѕлощадь данного треугольника равна " << S << endl;

	return 0;
}
