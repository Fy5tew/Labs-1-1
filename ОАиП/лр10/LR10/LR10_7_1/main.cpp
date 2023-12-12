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

	const int MAX_SIZE = 100, MAX_RAND = 50, MIN_RAND = 0;
	int n, max_start = -1, max_value = 0, arr[MAX_SIZE];

	cout << "������� ���������� ����: "; cin >> n;

	for (int i = 0; i < n; i++) {  // ������������� �������
		arr[i] = random(MIN_RAND, MAX_RAND);
	}

	for (int i = 0; i < n - 6; i++) {  // ����� ������������� �������� �� 7 ����
		int precipitation = 0;
		for (int j = 0; j < 7; j++) {
			precipitation += arr[i + j];
		}
		if (precipitation > max_value) {
			max_value = precipitation;
			max_start = i;
		}
	}

	cout << "�������� ������: ";
	show_array(arr, n);
	cout << endl;
	cout << "���������� ���������� ������� � "
		<< max_start + 1 << " �� " << max_start + 8 << " ����" << endl;

	return 0;
}
