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

	int t, a_size, b_size, A[MAX_SIZE], B[MAX_SIZE];
	int min_a_count = 0, min_b_count = 0;
	int* a, * b;

	cout << "Введите размер первого массива: "; cin >> a_size;
	cout << "Введите размер второго массива: "; cin >> b_size;
	cout << "Введите значение t: "; cin >> t;

	for (int i = 0; i < a_size; i++) { // Инициализация массивов
		A[i] = random(MIN_VALUE, MAX_VALUE);
	}
	for (int i = 0; i < b_size; i++) {
		B[i] = random(MIN_VALUE, MAX_VALUE);
	}

	for (a = A; a < A + a_size; a++) { // Подсчет количества элементов меньших t
		if (*a < t) { min_a_count++; }
	}
	for (b = B; b < B + b_size; b++) {
		if (*b < t) { min_b_count++; }
	}

	if (min_a_count > min_b_count) {
		cout << "Массив A: "; showArray(A, a_size); cout << endl;
		cout << "Массив B: "; showArray(B, b_size); cout << endl;
	}
	else {
		cout << "Массив B: "; showArray(B, b_size); cout << endl;
		cout << "Массив A: "; showArray(A, a_size); cout << endl;
	}

	cout << "Количество элементов меньших t в массиве A: " << min_a_count << endl;
	cout << "Количество элементов меньших t в массиве B: " << min_b_count << endl;

	return 0;
}
