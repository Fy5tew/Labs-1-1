#include <iostream>
#include <ctime>
using namespace std;


//  ������� �������� �������
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


//  �������� ��������� ����� �� ����������
int random(int min, int max) {
	return (int)(((double)rand() / (double)RAND_MAX) * (max - min) + min);
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	const int MAX_SIZE = 100, MAX_RAND = 5, MIN_RAND = 0;
	int size, pairs_count = 0, arr[MAX_SIZE];

	cout << "������� ������ �������: "; cin >> size;

	for (int i = 0; i < size; i++) {  // ������������� �������
		arr[i] = random(MIN_RAND, MAX_RAND);
	}

	for (int i = 0; i < size - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			pairs_count++;
		}
	}

	cout << "�������� ������: ";
	show_array(arr, size);
	cout << endl;
	cout << "���������� ��� �������� ��������� � ����������� ����������: " << pairs_count << endl;

	return 0;
}
