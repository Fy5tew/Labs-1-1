#include <iostream>
#include <ctime>
using namespace std;


//  ������� �������� �������
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


//  �������� ��������� ����� �� ����������
int random(int min, int max) {
	return (int)(((double)rand() / (double)RAND_MAX) * (max - min) + min);
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MAX_SIZE = 100, MIN_VALUE = 0, MAX_VALUE = 20;

	int size, C[MAX_SIZE], B[MAX_SIZE];
	int more_count = 0, less_count = 0, equal_count = 0;
	int* c, * b;

	cout << "������� ������ ��������: "; cin >> size;

	for (c = C, b = B; c < C + size; c++, b++) { // ������������� ��������
		*c = random(MIN_VALUE, MAX_VALUE);
		*b = random(MIN_VALUE, MAX_VALUE);
	}

	for (c = C, b = B; c < C + size; c++, b++) {
		if (*c > *b) {
			more_count++;
		}
		else if (*c < *b) {
			less_count++;
		}
		else {
			equal_count++;
		}
	}

	cout << "������ C: "; showArray(C, size); cout << endl;
	cout << "������ B: "; showArray(B, size); cout << endl;
	cout << "���������� k ��� C[k] > B[k]: " << more_count << endl;
	cout << "���������� k ��� C[k] < B[k]: " << less_count << endl;
	cout << "���������� k ��� C[k] = B[k]: " << equal_count << endl;

	return 0;
}
