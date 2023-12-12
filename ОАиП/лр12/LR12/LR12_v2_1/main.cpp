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

	int n, A[MAX_SIZE], B[MAX_SIZE], S[MAX_SIZE];
	int* a, * b, * s;

	cout << "������� ������ ��������: "; cin >> n;

	for (int i = 0; i < n; i++) { // ������������� ��������
		A[i] = random(MIN_VALUE, MAX_VALUE);
		B[i] = random(MIN_VALUE, MAX_VALUE);
	}

	s = S;
	for (a = A, b = B; a < A + n; a++, b++) {
		*(s++) = *a + *b;
	}

	cout << "������ ������: "; showArray(A, n); cout << endl;
	cout << "������ ������: "; showArray(B, n); cout << endl;
	cout << "���������: "; showArray(S, n); cout << endl;

	return 0;
}
