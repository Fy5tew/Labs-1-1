#include <iostream>
#include "utils.h"
using namespace std;


const int MIN_VALUE = 0;
const int MAX_VALUE = 200;


// ������� ����� �������� ��������� �������
int getOddSum(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 1) {
			sum += arr[i];
		}
	}
	return sum;
}


int main() {
	setlocale(LC_CTYPE, "Russian");
	srand((unsigned)time(NULL));

	int size = 15;

	int* arr = createEmptyArray(size);
	generateRandomArray(arr, size, MIN_VALUE, MAX_VALUE);

	int sum = getOddSum(arr, size);

	cout << "�������� ������: "; showArray(arr, size); cout << endl;
	cout << "����� �������� ���������: " << sum << endl;

	del(arr);

	return 0;
}
