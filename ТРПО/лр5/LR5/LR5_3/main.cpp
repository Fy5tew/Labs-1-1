#include <iostream>
#include <Windows.h>
using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char weather[10];

	cout << "����� ������ ������? ";
	cin >> weather;

	if (strcmp(weather, "�������") == 0) {
		cout << "������� ���������� � ��������" << endl;
	} 
	else if (strcmp(weather, "������") == 0) {
		cout << "������� ������� ������������ ������" << endl;
	}
	else {
		cout << "������� �������� � ���� � ��� ����� ��� ��� ������" << endl;
	}

	return 0;
}
