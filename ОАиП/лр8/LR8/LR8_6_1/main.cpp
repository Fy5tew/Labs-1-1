#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int n, value, sum = 0;

	cout << "������� ���������� ����� � ������������������: ";
	cin >> n;
	cout << "������� " << n << " ����� ����� �� �������" << endl;

	for (int i = 0; i < n; i++) {
		cin >> value;
		if (value % 2 == 0) {
			sum += value;
		}
	}

	cout << "����� ������ ��������� ������������������ ����� " << sum << endl;

	return 0;
}
