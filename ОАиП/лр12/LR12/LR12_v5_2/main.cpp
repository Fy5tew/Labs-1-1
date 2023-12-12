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

	int size, count = 0, A[MAX_SIZE], B[MAX_SIZE];
	int* a, * b;

	cout << "Введите количество элементов в массивах: "; cin >> size;

	for (a = A, b = B; a < A + size; a++, b++) { // Инициализация массивов
		*a = random(MIN_VALUE, MAX_VALUE);
		*b = random(MIN_VALUE, MAX_VALUE);
	}

	for (a = A; a < A + size; a++) { // Подсчет пар одинаковых элементов
		for (b = B; b < B + size; b++) {
			if (*a == *b) {
				count++;
			}
		}
	}

	cout << "Массив A: "; showArray(A, size); cout << endl;
	cout << "Массив B: "; showArray(B, size); cout << endl;
	cout << "Количество пар одинаковых элементов: " << count << endl;

	return 0;
}
