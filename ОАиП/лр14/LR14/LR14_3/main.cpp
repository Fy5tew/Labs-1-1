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

	const int MIN_VALUE = 0;
	const int MAX_VALUE = 10;

	int n;
	int matrix[MAX_SIZE][MAX_SIZE];
	int copy[MAX_SIZE][MAX_SIZE];

	cout << "Введите размер матрицы: "; cin >> n;
	generateRandomMatrix(matrix, n, n, MIN_VALUE, MAX_VALUE);
	cout << "Исходная матрица:"; showMatrix(matrix, n, n);

	for (int i = 0; i < n; i++) { // Копируем матрицу A
		for (int j = 0; j < n; j++) {
			copy[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++) { // Перестановка элементов
		int* max, max_value, max_i, max_j;
		
		max = findMax(copy, n, n);
		max_value = max[0];
		max_i = max[1];
		max_j = max[2];

		matrix[max_i][max_j] = matrix[i][i];
		matrix[i][i] = max_value;

		copy[max_i][max_j] = copy[i][i];
		copy[i][i] = -100; // Исключить элемент из поиска максимальных элементов
	}

	cout << "Матрица после перестановки:"; showMatrix(matrix, n, n);

	return 0;
}
