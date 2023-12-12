#include <iostream>
using namespace std;

int letterToNumber(char letter) {
	char boardLetters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
	for (int i = 0; i < 8; i++) {
		if (letter == boardLetters[i]) {
			return i;
		}
	}
	return -1;
}

int main() {
	setlocale(LC_CTYPE, "Russian");
	int n, current_l, current_n;
	char k, m;
	// Ввод данных
	cout << "Введите расположение слона (k, 1): "; cin >> k;
	cout << "Введите расположение фигуры (m, n): "; cin >> m; cin >> n;
	// Приведение данных к удобному формату
	int elephant[] = { letterToNumber(k), 0 };
	int piece[] = { letterToNumber(m), n - 1 };
	// Проверка корректности ввода
	if ((elephant[0] < 0) || (piece[0] < 0) || (piece[1] < 0) || (piece[1] > 7)) {
		cout << "Некорректное расположение фигур!" << endl; return 0;
	}
	// Проверка поля слева от слона
	current_n = elephant[1];
	for (current_l = elephant[0] - 1; current_l > 0; current_l--) {
		current_n++;
		if (current_l == piece[0] && current_n == piece[1]) {
			cout << "Слон угрожает фигуре!" << endl; return 0;
		}
	}
	// Проверка поля справа от слона
	current_n = elephant[1];
	for (current_l = elephant[0] + 1; current_l < 7; current_l++) {
		current_n++;
		if (current_l == piece[0] && current_n == piece[1]) {
			cout << "Слон угрожает фигуре!" << endl; return 0;
		}
	}
	// Если программа не завершилась ранее
	cout << "Фигуре ничто не угрожает" << endl;
	return 0;
}
