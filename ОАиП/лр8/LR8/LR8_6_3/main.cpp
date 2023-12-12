#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int n, value;
	int sign = 0, count = 0;

	cout << "������� ���������� ����� � ������������������: ";
	cin >> n;
	cout << "������� " << n << " ����� ����� �� �������" << endl;

	for (int i = 0; i < n; i++) {
		cin >> value;
		if (sign == 0 && value != 0) {
			sign = (value > 0) ? 1 : -1;
		}
		else if (value < 0 && sign == 1) {
			sign = -1;
			count++;
		}
		else if (value > 0 && sign == -1) {
			sign = 1;
			count++;
		}
	}

	cout << "� ������ ������������������ ���� �������� " << count << " ���(�)" << endl;

	return 0;
}
