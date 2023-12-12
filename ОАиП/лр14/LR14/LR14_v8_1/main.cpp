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

	int n, m;
	int more_count = 0, less_count = 0, equals_count = 0;
	int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE];

	cout << "������� ������� ������: "; cin >> n >> m;

	generateRandomMatrix(A, n, m, MIN_VALUE, MAX_VALUE);
	generateRandomMatrix(B, n, m, MIN_VALUE, MAX_VALUE);

	cout << "������ �������:"; showMatrix(A, n, m);
	cout << "������ �������:"; showMatrix(B, n, m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int a = A[i][j];
			int b = B[i][j];

			if (a == b) {
				equals_count++;
			}
			else if (a < b) {
				less_count++;
			}
			else if (a > b) {
				more_count++;
			}
		}
	}

	cout << "��� ��� A[i][j] < B[i][j]: " << less_count << endl;
	cout << "��� ��� A[i][j] = B[i][j]: " << equals_count << endl;
	cout << "��� ��� A[i][j] > B[i][j]: " << more_count << endl;

	return 0;
}
