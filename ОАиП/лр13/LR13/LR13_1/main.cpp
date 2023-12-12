#include <iostream>
#include <Windows.h>
using namespace std;


const int MAX_WORD_SIZE = 15;
const int MAX_WORDS_COUNT = 30;
const int MAX_ENDING_SIZE = 10;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int words_count, ending_size;
	char sentence[MAX_WORDS_COUNT][MAX_WORD_SIZE]; // ������ ����
	char ending[MAX_ENDING_SIZE];

	// ���� ������
	cout << "������� ���������� ���� � �����������: "; cin >> words_count;
	cout << "������� ������: ";
	for (int i = 0; i < words_count; i++) {
		cin >> sentence[i];
	}
	cout << "������� ���������: "; cin >> ending;
	ending_size = strlen(ending);

	cout << "�����, ��������������� �� '" << ending << "': ";
	for (int i = 0; i < words_count; i++) {
		char *word, word_ending[MAX_ENDING_SIZE];

		word = sentence[i];

		if (strlen(word) < ending_size) {
			continue;
		}

		// ��������� ��������� �����
		strncpy(word_ending, &word[strlen(word) - ending_size], ending_size);
		word_ending[ending_size] = '\0';

		if (strcmp(word_ending, ending) == 0) {
			cout << word << " ";
		}
	}

	cout << endl;

	return 0;
}
