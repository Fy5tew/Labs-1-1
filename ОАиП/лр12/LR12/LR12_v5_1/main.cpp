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

	int arr[MAX_SIZE], min_arr[MAX_SIZE], max_arr[MAX_SIZE];
	int* el, * min, * max;
	int size, averange, sum = 0;

	cout << "Введите размер массива: "; cin >> size;

	for (el = arr; el < arr + size; el++) { // Инициализация массива и подсчет суммы всех элементов
		sum += (*el = random(MIN_VALUE, MAX_VALUE));
	}

	averange = sum / size;

	min = min_arr;
	max = max_arr;
	for (el = arr; el < arr + size; el++) { // Разделение массива
		if (*el < averange) {
			*(min++) = *el;
		}
		else {
			*(max++) = *el;
		}
	}

	cout << "Исходный массив: "; showArray(arr, size); cout << endl;
	cout << "Среднее арифметическое элементов массива: " << averange << endl;
	cout << "Массив меньших элементов: "; showArray(min_arr, min - min_arr); cout << endl;
	cout << "Массив больших элементов: "; showArray(max_arr, max - max_arr); cout << endl;

	return 0;
}
