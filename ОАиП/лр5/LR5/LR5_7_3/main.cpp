#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	int a, b, p, q, r, s;

	cout << "������� ������� �������: "; cin >> a; cin >> b;
	cout << "������� ������� ������� ����: "; cin >> p; cin >> q;
	cout << "������� ������� ������� ����: "; cin >> r; cin >> s;

	bool can;
	if ((p + r < a && q + s < b) || (p + s < a && q + r < b) || (p + r < b && q + s < a) || (p + s < b && q + r < a)) {
		cout << "�� ������ ������� ����� ���������� ��� ����" << endl;
	}
	else {
		cout << "���������� ���� �� ������ ������� �� ���������" << endl;
	}

	return 0;
}
