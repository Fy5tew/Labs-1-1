#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	int r, p, q;

	cout << "������� ������ ����: "; cin >> r;
	cout << "������� ��������� �����: "; cin >> p; cin >> q;

	int d = 2 * r; // ������� ����
	float h = p * q / (sqrt(pow(p, 2) + pow(q, 2))); // ������ �����
	if (d <= h) {
		cout << "��� ������� ����� ���������" << endl;
	}
	else {
		cout << "��� �� ������� ����� ���������" << endl;
	}

	return 0;
}
