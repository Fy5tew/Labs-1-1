#include <stdio.h>;
#include <iomanip>;
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	int A, B, C;

	printf("������� ����� ������ ��������: "); cin >> A;
	printf("������� ����� ������ �����: "); cin >> B;
	printf("������� ����� ������ ���������: "); cin >> C;

	int points = A * 50 + B * 100 + C * 200;
	cout << "����� ���������� ��������� �����: " << points << endl;

	return 0;
}
