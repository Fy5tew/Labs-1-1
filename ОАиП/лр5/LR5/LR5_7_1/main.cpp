#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int numbers[3];

	cout << "������� 3 ����� (����� ������): "; cin >> numbers[0]; cin >> numbers[1]; cin >> numbers[2];

	int divFiveSum = 0;
	for (int number : numbers) {
		divFiveSum += (number % 5 == 0) ? number : 0;
	}

	(divFiveSum == 0) ? cout << "Error" : cout << divFiveSum;

	return 0;
}