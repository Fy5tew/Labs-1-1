#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	char answer;
	cout << "������ ����! ������ ������������������ �� �������? (y/n): "; cin >> answer;

	switch (answer) {
	case 'n': 
		cout << "������, �� ��������!" << endl; 
		break;
	case 'y':
		char firstName[60], lastName[60];
		int age;
		cout << "������, ������� ���� ���: "; cin >> firstName;
		cout << "������� ���� �������: "; cin >> lastName;
		cout << "��� �������: "; cin >> age;
		cout << "�� ������� ������������������ �� �������, " << lastName << " " << firstName << "!" << endl;
		break;
	default:
		cout << "� �� ���� ����� �������!" << endl;
	}

	return 0;
}