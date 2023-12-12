#include <iostream>
#include <Windows.h>
using namespace std;


const int MAX_SENTENCE_LENGTH = 50;
const int MAX_WORD_LENGTH = 15;


// ����������� � ������������ ���� �����������
// centence - ������, � ������� ����� ������ �����������
// sentence_length - ���������� ���� � �����������
// placeholder - ��, ��� ����� ������� ����� ������ ����
void inputSentence(char sentence[MAX_SENTENCE_LENGTH][MAX_WORD_LENGTH], int sentence_length, const char placeholder[] = "") {
	cout << placeholder;
	for (int i = 0; i < sentence_length; i++) {
		cin >> sentence[i];
	}
}


// ��������� ������� ����� � �����������
// word - ������� �����
// sentence - �����������
// sentence_length - ���������� ���� � �����������
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
	char first_sentence[MAX_SENTENCE_LENGTH][MAX_WORD_LENGTH];  // ������ ����
	char second_sentence[MAX_SENTENCE_LENGTH][MAX_WORD_LENGTH]; // ������ ����

	cout << "������� ���������� ���� � ������ �����������: "; cin >> first_sentence_length;
	cout << "������� ���������� ���� �� ������ �����������: "; cin >> second_sentence_length;

	inputSentence(first_sentence, first_sentence_length, "������� ������ �����������: ");
	inputSentence(second_sentence, second_sentence_length, "������� ������ �����������: ");

	char min_word[MAX_WORD_LENGTH + 2] = "", word[MAX_WORD_LENGTH];

	for (int i = 0; i < MAX_WORD_LENGTH + 1; i++) { // ������������� min_word
		min_word[i] = (i == MAX_WORD_LENGTH + 1) ? '\0' : '&';
	}

	for (int i = 0; i < first_sentence_length; i++) {
		strcpy_s(word, first_sentence[i]);
		if (!isWordInSentence(word, second_sentence, second_sentence_length) && strlen(word) < strlen(min_word)) {
			strcpy_s(min_word, word);
		}
	}

	if (strlen(min_word) > MAX_WORD_LENGTH) {
		cout << "��� ����� � ����������� ���������!" << endl;
	}
	else {
		cout << "����� �������� ����� ������� �����������, ������������� �� ������: " << min_word << endl;
	}

	return 0;
}
