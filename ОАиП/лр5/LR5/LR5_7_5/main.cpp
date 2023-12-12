#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int box[3], package[3];

	cout << "������� ������� ������� (a, b, c): "; cin >> box[0]; cin >> box[1]; cin >> box[2];
	cout << "������� ������� ������� (r, s, t): "; cin >> package[0]; cin >> package[1]; cin >> package[2];
	// ���������� �������� �� �����������
	sort(begin(box), end(box));
	sort(begin(package), end(package));
	// �������� ���� ��������������� ������ ������� � �������
	for (int i = 0; i < 3; i++) {
		if (box[i] > package[i]) { // ���� ���� �� ���� ������� ������� ������ �������������� �� ������� �������
			cout << "��������� ������� � ������ ������� ����������" << endl;
			return 0;
		}
	}
	// ���� ���� �� ���������� �����, ��� ������� ������� ������ ��� ����� �������� �������
	cout << "������� ���������� � ������ �������" << endl;
	return 0;
}
