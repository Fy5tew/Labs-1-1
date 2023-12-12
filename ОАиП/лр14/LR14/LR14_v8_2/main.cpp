#include <iostream>
#include <ctime>
using namespace std;


const int MAX_SIZE = 25;


//  Получить случайное число из промежутка
int random(int min, int max) {
	return (int)(((double)rand() / (double)RAND_MAX) * (max - min) + min);
}


// Получить массив случайных чисел длиной length
void generateRandomArray(int arr[MAX_SIZE], int length, int min, int max) {
	for (int i = 0; i < length; i++) {
		arr[i] = random(min, max);
	}
}


// Получить матрицу случайных чисел n на m
void generateRandomMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n, int m, int min, int max) {
	for (int i = 0; i < n; i++) {
		generateRandomArray(matrix[i], m, min, max);
	}
}


// Вывести массив в консоль
void showArray(int arr[MAX_SIZE], int length) {
	cout << "[ ";
	for (int i = 0; i < length; i++) {
		cout << ((i != 0) ? ", " : "") << arr[i];
	}
	cout << " ]";
}


// Вывести матрицу в консоль
void showMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n, int m) {
	cout << endl;
	for (int i = 0; i < n; i++) {
		showArray(matrix[i], m);
		cout << endl;
	}
	cout << endl;
}


// Найти максимальный элемент матрицы и его индексы
int* findMax(int matrix[MAX_SIZE][MAX_SIZE], int n, int m) {
	int max[3] = { -100, -1, -1 };

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int value = matrix[i][j];
			if (value > max[0]) {
				max[0] = value;
				max[1] = i;
				max[2] = j;
			}
		}
	}

	return max;
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MIN_VALUE = -2;
	const int MAX_VALUE = 10;

	int n, m;
	int A[MAX_SIZE][MAX_SIZE];

	cout << "Введите размеры матрицы: "; cin >> n >> m;

	generateRandomMatrix(A, n, m, MIN_VALUE, MAX_VALUE);

	cout << "Исходная матрица:"; showMatrix(A, n, m);

	int row_index = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int a = *(*(A + i) + j);
			if (a < 0) {
				row_index = i;
				break;
			}
		}
		if (row_index >= 0) {
			break;
		}
	}

	if (row_index < 0) {
		cout << "Нет ни одной строки, содержащей отрицательный элемент." << endl;
		return 0;
	}

	cout << "Строка под номером " << row_index + 1 << " содержит отрицательный элемент." << endl;

	if (row_index >= m) {
		cout << "В матрице нет столбца с номером " << row_index + 1 << "." << endl;
		return 0;
	}

	for (int i = 0; i < n; i++) {
		*(*(A + i) + row_index) /= 2;
	}

	cout << endl << "Матрица после изменения столбца под номером " << row_index + 1 << ":"; showMatrix(A, n, m);

	return 0;
}