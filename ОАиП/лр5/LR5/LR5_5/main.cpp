#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	char n[5];

	cout << "������� ����� n: "; cin >> n;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (n[i] == n[j] && i != j) {
				cout << "� ������ ����� ������������ ������������ �����!" << endl;
				return 0;
			}
		}
	}
	cout << "����� ������� �� ���������� ��������!" << endl;

	return 0;
}