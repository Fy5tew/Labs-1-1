#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int n, value, last_negative_index = 0;

	cout << "Введите количество чисел в последовательности: ";
	cin >> n;
	cout << "Введите " << n << " целых чисел по очереди" << endl;

	for (int i = 1; i < n + 1; i++) {
		cin >> value;
		if (value < 0) {
			last_negative_index = i;
		}
	}

	cout << "Порядковый номер последнего отрицательного элемента последовательности: " 
		<< last_negative_index << endl;

	return 0;
}
