#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int n;
	double p, price = 0;

	cout << "������� ���������� ��� n: "; cin >> n;
	cout << "������� ������� ������ ��������� p: "; cin >> p;

	for (int year = 1; year <= n; year++) {
		int s;
		cout << "������� ��������� ������������ � " << year << " ���: "; cin >> s;
		price += s;
		price -= p * price / 100;
	}

	cout << "����� ��������� ������������ ������������: " << price;
	cout << endl;

	return 0;
}
