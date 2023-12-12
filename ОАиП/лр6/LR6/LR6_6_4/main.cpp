#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int k, p, n, len = 0;
	char seq[100] = "";

	cout << "Введите число k: "; cin >> k;

	n = 1;
	while (len < k) {
		char str_num[10];
		sprintf_s(str_num, "%d", (int)pow(2, n)); // Запись числа в строку
		strcat_s(seq, str_num);
		len = strlen(seq);
		n++;
	}
	p = (k > 0) ? k - 1 : k; // Чтобы не получить отрицательное число
	cout << "Последовательность символов: " << seq << endl;
	cout << "Цифра под номером " << k << ": " << seq[p];

	return 0;
}
