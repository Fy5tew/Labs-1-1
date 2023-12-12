#include <stdio.h>;
#include <iomanip>;
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");
	int A, B, C;

	printf("¬ведите число сбитых самолЄтов: "); cin >> A;
	printf("¬ведите число сбитых ракет: "); cin >> B;
	printf("¬ведите число сбитых спутников: "); cin >> C;

	int points = A * 50 + B * 100 + C * 200;
	cout << "ќбщее количество набранных очков: " << points << endl;

	return 0;
}
