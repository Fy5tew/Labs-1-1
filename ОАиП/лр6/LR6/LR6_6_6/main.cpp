#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	char number[100], new_number[100];
	
	cout << "¬ведите число: "; cin >> number;
	
	int j = 0;
	for (unsigned int i = 0; i < strlen(number); i++) {
		char digit = number[i];
		if ((digit != '3') && (digit != '6')) {
			new_number[j++] = digit;
		}
	}
	new_number[j++] = '\0';

	cout << new_number << endl;

	return 0;
}
