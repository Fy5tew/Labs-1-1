#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int A;

	cout << "������� ����� A: "; cin >> A;

	if (A >> 1 << 1 == A) {
		cout << "������ ����� ������ 2!" << endl;
	}
	else {
		cout << "������ ����� �� ������ 2!" << endl;
	}

	return 0;
}
