#include <iostream>
#include <ctime>
using namespace std;


//  ¬ывести элементы массива
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


//  ѕолучить случайное число из промежутка
int random(int min, int max) {
	return (int)(((double)rand() / (double)RAND_MAX) * (max - min) + min);
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MAX_SIZE = 100, MIN_VALUE = 0, MAX_VALUE = 20;

	int size, seq[MAX_SIZE];
	int* seq_el, number;

	cout << "¬ведите длину последовательности: "; cin >> size;

	for (seq_el = seq; seq_el < seq + size; seq_el++) { // »нициализаци€ массива
		*seq_el = random(MIN_VALUE, MAX_VALUE);
	}

	for (int i = 1; i < MAX_VALUE + 2; i++) { // ѕоиск минимального отсутствующего числа
		bool is_result = true;
		number = i;
		for (seq_el = seq; seq_el < seq + size; seq_el++) {
			if (*seq_el == number) {
				is_result = false;
				break;
			}
		}
		if (is_result) { // если цикл завершилс€ самосто€тельно
			break;
		}
	}

	cout << "ѕоследовательность: "; showArray(seq, size); cout << endl;
	cout << "ћинимальное натуральное число, отсутствующее в последовательности: " << number << endl;

	return 0;
}
