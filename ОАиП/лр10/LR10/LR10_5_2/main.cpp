#include <iostream>
#include <ctime>
using namespace std;


//  Вывести элементы массива
void show_array(int arr[], int arr_size) {
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

	const int MAX_SIZE = 100, MAX_RAND = 99, MIN_RAND = 0;
	int size, count = 0, arr[MAX_SIZE];

	cout << "Введите размер массива: "; cin >> size;

	for (int i = 0; i < size; i++) {  // Инициализация массива
		arr[i] = random(MIN_RAND, MAX_RAND);
	}

	for (int i = 0; i < size - 1; i++) { // Подсчет инверсий
		if (arr[i] > arr[i + 1]) {
			count++;
		}
	}

	cout << "Массив: ";
	show_array(arr, size);
	cout << endl;
	cout << "Число инверсий в массиве: " << count << endl;

	return 0;
}
