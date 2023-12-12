#include <iostream>
using namespace std;


// ����������, �������� �� ������������������ ���� ������������ 
bool is_ascending_seq(char seq[]) {
	int largest = -1;
	for (int i = 0; i < strlen(seq); i++) {
		int digit = (int)seq[i] - 48;
		if (digit <= largest) {
			return false; 
		}
		largest = digit;
	}
	return true;
}


// ����������, �������� �� ����� �������
bool is_prime_number(int number) {
	for (int n = 1; n < number / 2; n++) {
		if ((number % n == 0) && (n != number) && (n != 1)) {
			return false;
		}
	}
	return true;
}


int main() {
	for (int number = 100; number <= 999; number++) {
		double sqrt_number = sqrt(number);
		char str_number[4];
		sprintf_s(str_number, "%d", number);
		
		// ���������� ������� �����
		if (sqrt_number != (int)sqrt_number) { continue; }

		// ���������� �������������� ������������������
		if (!is_ascending_seq(str_number)) { continue; }

		// ��������� �������� �� ������ ������� ������
		if (!is_prime_number(sqrt_number)) { continue; }

		// ���� ����� ������������ ���� ��������
		cout << str_number << endl;
	}

	return 0;
}
