#include <iostream>
#include <ctime>
using namespace std;


//  Вывести элементы массива
void showArray(int arr[], int arr_size) {
	cout << "{";
	for (int i = 0; i < arr_size; i++) {
		cout << arr[i];
		if (arr_size - i != 1) {
			cout << ", ";
		}
	}
	cout << "}";
}


//  Получить случайное число из промежутка
int random(int min, int max) {
	return (int)(((double)rand() / (double)RAND_MAX) * (max - min) + min);
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MAX_SIZE = 100, MIN_VALUE = 0, MAX_VALUE = 20;

	int q, x_size, y_size, X[MAX_SIZE], Y[MAX_SIZE];
	int* x, * y;

	cout << "Введите размер первого массива: "; cin >> x_size;
	cout << "Введите размер второго массива: "; cin >> y_size;
	cout << "Введите число q: "; cin >> q;

	for (int i = 0; i < x_size; i++) { // Инициализация первого массива
		X[i] = random(MIN_VALUE, MAX_VALUE);
	}

	for (int i = 0; i < y_size; i++) { // Инициализация второго массива
		Y[i] = random(MIN_VALUE, MAX_VALUE);
	}

	int rem, sum = 2 * MAX_VALUE, min_rem = 2 * MAX_VALUE;
	for (x = X; x < X + x_size; x++) { // Поиск элементов, сумма которых ближе к q
		for (y = Y; y < Y + y_size; y++) {
			if ((rem = abs(q - (*x + *y))) < min_rem) {
				min_rem = rem;
				sum = *x + *y;
			}
		}
	}

	cout << "Первый массив: "; showArray(X, x_size); cout << endl;
	cout << "Второй массив: "; showArray(Y, y_size); cout << endl;
	cout << "Ближайшая сумма: " << sum << endl;

	return 0;
}
