#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	for (int number = 1000; number < 10000; number++) {
		if (!((number % 2 == 0) && (number % 7 == 0) && (number % 11 == 0))) {
			continue;
		}
		int sum = 0;
		char str_number[5];
		sprintf_s(str_number, "%d", number);
		for (int i = 0; i < strlen(str_number); i++) {
			sum += (int)str_number[i] - 48;;
		}
		if (!(sum == 30)) {
			continue;
		}
		cout << "Номер автомобиля: " << number << endl;
	}

	return 0;
}
