#include <iostream>
#include "input.h"
#include "char_functions.h"

using namespace std;


void exitProgram() {
	cout << "Выход из программы..." << endl;
	exit(0);
}


void digitCharCode() {
	unsigned char digit = inputDigit();
	cout << "Код данного символа равен " << (int)digit << endl;
}


void latinLetterDiference() {
	unsigned char lowercase = inputLatinLowercase();
	unsigned char uppercase = inputLatinUppercase();
	int difference = getCharDifference(lowercase, uppercase);
	cout << "Разница между кодами введенных символов равна " << difference << endl;
}


void cyrilicLetterDifference() {
	unsigned char lowercase = inputCyrilicLowercase();
	unsigned char uppercase = inputCyrilicUppercase();
	int difference = getCharDifference(lowercase, uppercase);
	cout << "Разница между кодами введенных символов равна " << difference << endl;
}
