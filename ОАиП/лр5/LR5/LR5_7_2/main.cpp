#include <iostream>
using namespace std;

int letterToNumber(char letter) {
	char boardLetters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
	for (int i = 0; i < 8; i++) {
		if (letter == boardLetters[i]) {
			return i;
		}
	}
	return -1;
}

int main() {
	setlocale(LC_CTYPE, "Russian");
	int n, current_l, current_n;
	char k, m;
	// ���� ������
	cout << "������� ������������ ����� (k, 1): "; cin >> k;
	cout << "������� ������������ ������ (m, n): "; cin >> m; cin >> n;
	// ���������� ������ � �������� �������
	int elephant[] = { letterToNumber(k), 0 };
	int piece[] = { letterToNumber(m), n - 1 };
	// �������� ������������ �����
	if ((elephant[0] < 0) || (piece[0] < 0) || (piece[1] < 0) || (piece[1] > 7)) {
		cout << "������������ ������������ �����!" << endl; return 0;
	}
	// �������� ���� ����� �� �����
	current_n = elephant[1];
	for (current_l = elephant[0] - 1; current_l > 0; current_l--) {
		current_n++;
		if (current_l == piece[0] && current_n == piece[1]) {
			cout << "���� �������� ������!" << endl; return 0;
		}
	}
	// �������� ���� ������ �� �����
	current_n = elephant[1];
	for (current_l = elephant[0] + 1; current_l < 7; current_l++) {
		current_n++;
		if (current_l == piece[0] && current_n == piece[1]) {
			cout << "���� �������� ������!" << endl; return 0;
		}
	}
	// ���� ��������� �� ����������� �����
	cout << "������ ����� �� ��������" << endl;
	return 0;
}
