#include <iostream>
#include <iomanip>
using namespace std;


const int MAX_STRING_SIZE = 50;


int main() {
	setlocale(LC_CTYPE, "Russian");

	int sequence_length;
	int current_group_start_index, current_group_length;
	char current_char, sequence[MAX_STRING_SIZE];

	cout << "Введите строку: "; cin >> sequence;
	sequence_length = strlen(sequence);

	current_char = sequence[0];
	current_group_start_index = 0;
	current_group_length = 1;

	int i;
	char* c;

	for (c = sequence + 1, i = 1; c < sequence + sequence_length; c++, i++) {
		if (*c == current_char) {
			current_group_length++;
		}
		if ((*c != current_char) || (i == sequence_length - 1)) {
			if (current_group_length % 2 == 0) {
				cout << current_group_start_index << ".." << i << ": "
					<< setw(current_group_length) << setfill(current_char)
					<< current_char << " (" << current_group_length << " символов)" << endl;
			}
			current_char = *c;
			current_group_start_index = i;
			current_group_length = 1;
		}
	}

	return 0;
}
