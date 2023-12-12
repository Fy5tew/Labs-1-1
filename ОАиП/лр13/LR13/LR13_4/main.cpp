#include <iostream>
#include <Windows.h>
using namespace std;


const int MAX_WORD_LENGTH = 15;


// ������� ������������ ������ �����
void print_reversed(char word[]) {
	for (char* letter = word + strlen(word); letter >= word; letter--) {
		cout << *letter;
	}
	cout << " ";
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int words_count;
	char word[MAX_WORD_LENGTH];

	cout << "������� ���������� ���� � �����������: "; cin >> words_count;
	cout << "������� ����������: ";

	for (int i = 0; i < words_count; i++) {
		cin >> word;
		if (i % 2 == 0) continue;
		print_reversed(word);
	}

	cout << endl;

	return 0;
}
