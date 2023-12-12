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

	const int MIN_VALUE = -11;
	const int MAX_VALUE = 11;

	int n, double_n;
	int A[MAX_SIZE][MAX_SIZE];
	int B[MAX_SIZE][MAX_SIZE];

	cout << "������� ������ ������� n: "; cin >> n;
	double_n = 2 * n;

	generateRandomMatrix(A, double_n, double_n, MIN_VALUE, MAX_VALUE);

	cout << "�������� �������:"; showMatrix(A, double_n, double_n);

	for (int i = 0; i < double_n; i++) { // ���������� ������� B ���������� �� ������� A, ������� �� ���������
		for (int j = 0; j < double_n; j++) {
			int value = A[i][j];

			if (i < n && j < n) { // ����� ������� ����
				B[i + n][j + n] = value;
			}
			else if (i < n && j >= n) { // ������ ������� ����
				B[i + n][j - n] = value;
			}
			else if (i >= n && j < n) { // ����� ������ ����
				B[i - n][j + n] = value;
			}
			else if (i >= n && j >= n) { // ������ ������ ����
				B[i - n][j - n] = value;
			}
		}
	}

	cout << "������� ����� ������������ ������:"; showMatrix(B, double_n, double_n);

	return 0;
}