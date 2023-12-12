#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int box[3], package[3];

	cout << "Введите размеры коробки (a, b, c): "; cin >> box[0]; cin >> box[1]; cin >> box[2];
	cout << "Введите размеры посылки (r, s, t): "; cin >> package[0]; cin >> package[1]; cin >> package[2];
	// Сортировка массивов по возрастанию
	sort(begin(box), end(box));
	sort(begin(package), end(package));
	// Проверка всех соответствующих сторон посылки и коробки
	for (int i = 0; i < 3; i++) {
		if (box[i] > package[i]) { // Если хотя бы одна сторона коробки больше соответствущей ей стороны посылки
			cout << "Поместить коробку в данную посылку невозможно" << endl;
			return 0;
		}
	}
	// Если цикл не завершился ранее, все стороны коробки меньше или равны сторонам посылки
	cout << "Коробка поместится в данную посылку" << endl;
	return 0;
}
