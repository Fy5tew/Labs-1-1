#include <stdio.h>;
#include <iomanip>;
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	double a, b, c, p, S;

	printf("������� ������ ������� ������������: "); cin >> a;
	printf("������� ������ ������� ������������: "); cin >> b;
	printf("������� ������ ������� ������������: "); cin >> c;

	p = (a + b + c) / 2;
	S = sqrt(p*(p - a)*(p - b)*(p - c));

	cout << "������� ������� ������������ ����� " << S << endl;

	return 0;
}
