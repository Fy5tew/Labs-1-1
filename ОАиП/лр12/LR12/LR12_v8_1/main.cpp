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

	int x_size, y_size, z_size, X[MAX_SIZE], Y[MAX_SIZE], Z[MAX_SIZE];
	int* x, * y, * z;

	cout << "Введите количество элементов первого массива: "; cin >> x_size;
	cout << "Введите количество элементов второго массива: "; cin >> y_size;

	for (int i = 0; i < x_size; i++) { // Инициализация первого массива
		X[i] = random(MIN_VALUE, MAX_VALUE);
	}

	for (int i = 0; i < y_size; i++) { // Инициализация второго массива
		*(Y + i) = random(MIN_VALUE, MAX_VALUE);
	}

	cout << "Первый массив: "; showArray(X, x_size); cout << endl;
	cout << "Второй массив: "; showArray(Y, y_size); cout << endl;

	z = Z;
	for (x = X; x < X + x_size; x++) { // Поиск общих элементов
		for (y = Y; y < Y + y_size; y++) {
			if (*x == *y && *x != -1) {
				*(z++) = *x;
				*x = *y = -1; // Исключить данные элементы из последующих итераций
			}
		}
	}
	z_size = z - Z;

	cout << "Общие элементы массивов: "; showArray(Z, z_size); cout << endl;

	return 0;
}
