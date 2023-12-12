#include <iostream>
#include <Windows.h>
using namespace std;


const int MAX_SENTENCE_LENGTH = 50;
const int MAX_WORD_LENGTH = 15;


// Запрашивает у пользователя ввод предложения
// centence - Массив, в который нужно ввести предложение
// sentence_length - Количество слов в предложении
// placeholder - То, что нужно вывести перед вводов слов
void inputSentence(char sentence[MAX_SENTENCE_LENGTH][MAX_WORD_LENGTH], int sentence_length, const char placeholder[] = "") {
	cout << placeholder;
	for (int i = 0; i < sentence_length; i++) {
		cin >> sentence[i];
	}
}


// Проверяет наличие слова в предложении
// word - Искомое слово
// sentence - Предложение
// sentence_length - Количество слов в предложении
bool isWordInSentence(char word[], char sentence[MAX_SENTENCE_LENGTH][MAX_WORD_LENGTH], int sentence_length) {
	for (int i = 0; i < sentence_length; i++) {
		if (strcmp(word, sentence[i]) == 0) {
			return true;
		}
	}
	return false;
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int first_sentence_length, second_sentence_length;
	char first_sentence[MAX_SENTENCE_LENGTH][MAX_WORD_LENGTH];  // Массив слов
	char second_sentence[MAX_SENTENCE_LENGTH][MAX_WORD_LENGTH]; // Массив слов

	cout << "Укажите количество слов в первом предложении: "; cin >> first_sentence_length;
	cout << "Укажите количество слов во втором предложении: "; cin >> second_sentence_length;

	inputSentence(first_sentence, first_sentence_length, "Введите первое предложение: ");
	inputSentence(second_sentence, second_sentence_length, "Введите второе предложение: ");

	char min_word[MAX_WORD_LENGTH + 2] = "", word[MAX_WORD_LENGTH];

	for (int i = 0; i < MAX_WORD_LENGTH + 1; i++) { // Инициализация min_word
		min_word[i] = (i == MAX_WORD_LENGTH + 1) ? '\0' : '&';
	}

	for (int i = 0; i < first_sentence_length; i++) {
		strcpy_s(word, first_sentence[i]);
		if (!isWordInSentence(word, second_sentence, second_sentence_length) && strlen(word) < strlen(min_word)) {
			strcpy_s(min_word, word);
		}
	}

	if (strlen(min_word) > MAX_WORD_LENGTH) {
		cout << "Все слова в предложении одинаковы!" << endl;
	}
	else {
		cout << "Самое короткое слово первого предложения, отсутствующее во втором: " << min_word << endl;
	}

	return 0;
}
