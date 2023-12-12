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

	const int MAX_SIZE = 100, MAX_RAND = 3, MIN_RAND = 0;
	int max_count = 0, equal_count, equal_value, size, arr[MAX_SIZE];

	cout << "Введите размер массива: "; cin >> size;

	for (int i = 0; i < size; i++) {  // Инициализация массива
		arr[i] = random(MIN_RAND, MAX_RAND);
	}

	equal_count = 1;
	equal_value = arr[0];
	for (int i = 1; i < size - 1; i++) {
		if (arr[i] == equal_value) {
			equal_count++;
		}
		else {
			equal_value = arr[i];
			equal_count = 1;
		}
		if (equal_count > max_count) {
			max_count = equal_count;
		}
	}

	cout << "Исходный массив: ";
	show_array(arr, size);
	cout << endl;
	cout << "Наибольшее число одинаковых элементов идущих подряд: " << max_count << endl;

	return 0;
}
