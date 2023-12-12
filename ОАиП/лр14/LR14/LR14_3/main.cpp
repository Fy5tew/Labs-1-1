#include <iostream>
#include <ctime>
using namespace std;


const int MAX_SIZE = 25;


//  �������� ��������� ����� �� ����������
int random(int min, int max) {
	return (int)(((double)rand() / (double)RAND_MAX) * (max - min) + min);
}


// �������� ������ ��������� ����� ������ length
void generateRandomArray(int arr[MAX_SIZE], int length, int min, int max) {
	for (int i = 0; i < length; i++) {
		arr[i] = random(min, max);
	}
}


// �������� ������� ��������� ����� n �� m
void generateRandomMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n, int m, int min, int max) {
	for (int i = 0; i < n; i++) {
		generateRandomArray(matrix[i], m, min, max);
	}
}


// ������� ������ � �������
void showArray(int arr[MAX_SIZE], int length) {
	cout << "[ ";
	for (int i = 0; i < length; i++) {
		cout << ((i != 0) ? ", " : "") << arr[i];
	}
	cout << " ]";
}


// ������� ������� � �������
void showMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n, int m) {
	cout << endl;
	for (int i = 0; i < n; i++) {
		showArray(matrix[i], m);
		cout << endl;
	}
	cout << endl;
}


// ����� ������������ ������� ������� � ��� �������
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

	cout << "������� ������ �������: "; cin >> n;
	generateRandomMatrix(matrix, n, n, MIN_VALUE, MAX_VALUE);
	cout << "�������� �������:"; showMatrix(matrix, n, n);

	for (int i = 0; i < n; i++) { // �������� ������� A
		for (int j = 0; j < n; j++) {
			copy[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++) { // ������������ ���������
		int* max, max_value, max_i, max_j;
		
		max = findMax(copy, n, n);
		max_value = max[0];
		max_i = max[1];
		max_j = max[2];

		matrix[max_i][max_j] = matrix[i][i];
		matrix[i][i] = max_value;

		copy[max_i][max_j] = copy[i][i];
		copy[i][i] = -100; // ��������� ������� �� ������ ������������ ���������
	}

	cout << "������� ����� ������������:"; showMatrix(matrix, n, n);

	return 0;
}
