#include <iostream>
#include <ctime>
using namespace std;


// �������� ��������� ����� �� ����������
int random(int min, int max) {
	return (int)(((double)rand() / (double)RAND_MAX) * (max - min) + min);
}


// ������� ������ ������
int* createEmptyArray(int length) {
	return new int[length];
}


// ������� ������ �������
int** createEmptyMatrix(int n, int m) {
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = createEmptyArray(m);
	}
	return matrix;
}


// ��������� ������ ���������� �������
void generateRandomArray(int* arr, int length, int min, int max) {
	for (int i = 0; i < length; i++) {
		arr[i] = random(min, max);
	}
}


// ��������� ������� ���������� �������
void generateRandomMatrix(int** matrix, int n, int m, int min, int max) {
	for (int i = 0; i < n; i++) {
		generateRandomArray(matrix[i], m, min, max);
	}
}


// ������� ������
void showArray(int* arr, int length) {
	cout << "[ ";
	for (int i = 0; i < length; i++) {
		cout << ((i == 0) ? "" : ", ") << arr[i];
	}
	cout << " ]";
}


// ������� �������
void showMatrix(int** matrix, int n, int m) {
	cout << endl;
	for (int i = 0; i < n; i++) {
		showArray(matrix[i], m);
		cout << endl;
	}
	cout << endl;
}


// ���������� ������ �������
void del(int* arr) {
	delete[] arr;
}


// ���������� ������ �������
void del(int** matrix, int n) {
	for (int i = 0; i < n; i++) {
		del(matrix[i]);
	}
	delete[] matrix;
}
