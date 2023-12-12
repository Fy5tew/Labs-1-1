#include <iostream>
#include <Windows.h>
using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char weather[10];

	cout << "Какая сейчас погода? ";
	cin >> weather;

	if (strcmp(weather, "хорошая") == 0) {
		cout << "Студент встретится с друзьями" << endl;
	} 
	else if (strcmp(weather, "плохая") == 0) {
		cout << "Студент сделает лабораторную работу" << endl;
	}
	else {
		cout << "Студент посморит в окно и сам решит что ему делать" << endl;
	}

	return 0;
}
