#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int days = 1;
	double p, q;

	cout << "������� p: "; cin >> p;
	cout << "������� q: "; cin >> q;

	while (p <= q) {
		p += 3 * p / 100;
		days += 1;
	}

	cout << "������� ����� �������� " << p << " ���. ���. ";
	cout << "��� ����� �������� ��������� " << days << " ����";
	cout << endl;

	return 0;
}
