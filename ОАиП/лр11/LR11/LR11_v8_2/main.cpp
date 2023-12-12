#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int A, B, n, m;
	char buffer[33];

	cout << "������� ����� A: "; cin >> A;
	cout << "������� ����� B: "; cin >> B;
	cout << "������� ������� n: "; cin >> n;
	cout << "������� ������� m: "; cin >> m;

	int bits = 0b111 & (A >> n); // ������� 3 ���� �� ����� A ������� � ������� n
	int prepared = ((B >> m) << (m + 3)) | (B & ~(~0 << m)); // �������� 3 ���� 000 � ����� B ������� � ������� m
	int result = prepared | (bits << m); // �������� ����������� ���� ������ 000

	_itoa_s(A, buffer, 2);
	cout << "����� A: " << buffer << endl;

	_itoa_s(B, buffer, 2);
	cout << "����� B: " << buffer << endl;

	_itoa_s(bits , buffer, 2);
	cout << "���� ��� �������: " << buffer << endl;

	_itoa_s(prepared, buffer, 2);
	cout << "����� B ����� ����������: " << buffer << endl;

	_itoa_s(result, buffer, 2);
	cout << "���������: " << buffer << endl;

	return 0;
}
