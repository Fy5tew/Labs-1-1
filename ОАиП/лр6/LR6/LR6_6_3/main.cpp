#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int number, sign_swap_count = 0;
	bool sign, new_sign;

	cin >> number;
	sign = (number > 0);
	
	while (number != 0) {
		cin >> number;
		new_sign = (number > 0);
		if (sign != new_sign) {
			sign = new_sign;
			sign_swap_count++;
		}
	}

	cout << "Знак в последовательности изменился " << sign_swap_count << " раз";

	return 0;
}
