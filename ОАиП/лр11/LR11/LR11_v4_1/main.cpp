#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int A;

	cout << "������� �����: "; cin >> A;

	if (A >> 2 << 2 == A) {
		cout << "������ ����� ������ 4!";
	}
	else {
		cout << "������ ����� �� ������ 4!";
	}
	
	return 0;
}
