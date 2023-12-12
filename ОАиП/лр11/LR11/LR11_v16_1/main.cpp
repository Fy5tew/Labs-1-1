#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int A, B;
	char buffer[33];

	cout << "������� ����� A: "; cin >> A;
	cout << "������� ����� B: "; cin >> B;

	int bits = A >> 2 & 0b111; // ������� 3 ���� �� ����� A ������� � ������� 2
	int prepared = (B >> 1 << 4) | (B & 0b1); // �������� � ����� B ���� 000 � ������ �������
	int result = prepared | (bits << 1); // �������� ���� ������ 000

	_itoa_s(A, buffer, 2);
	cout << "����� A: " << buffer << endl;

	_itoa_s(B, buffer, 2);
	cout << "����� B: " << buffer << endl;

	_itoa_s(bits, buffer, 2);
	cout << "���� ��� �������: " << buffer << endl;

	_itoa_s(prepared, buffer, 2);
	cout << "����� B ����� ����������: " << buffer << endl;

	_itoa_s(result, buffer, 2);
	cout << "���������: " << buffer << endl;

	return 0;
}
