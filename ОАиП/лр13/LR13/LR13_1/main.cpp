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
	char sentence[MAX_WORDS_COUNT][MAX_WORD_SIZE]; // Массив слов
	char ending[MAX_ENDING_SIZE];

	// Ввод данных
	cout << "Введите количество слов в предложении: "; cin >> words_count;
	cout << "Введите строку: ";
	for (int i = 0; i < words_count; i++) {
		cin >> sentence[i];
	}
	cout << "Укажите окончание: "; cin >> ending;
	ending_size = strlen(ending);

	cout << "Слова, заканчивающиеся на '" << ending << "': ";
	for (int i = 0; i < words_count; i++) {
		char *word, word_ending[MAX_ENDING_SIZE];

		word = sentence[i];

		if (strlen(word) < ending_size) {
			continue;
		}

		// Получение окончания слова
		strncpy(word_ending, &word[strlen(word) - ending_size], ending_size);
		word_ending[ending_size] = '\0';

		if (strcmp(word_ending, ending) == 0) {
			cout << word << " ";
		}
	}

	cout << endl;

	return 0;
}
