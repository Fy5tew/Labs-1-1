const int MIN_DIGIT = 0x30;
const int MAX_DIGIT = 0x39;

const int MIN_LATIN_LOWERCASE = 0x61;
const int MAX_LATIN_LOWERCASE = 0x7A;

const int MIN_LATIN_UPPERCASE = 0x41;
const int MAX_LATIN_UPPERCASE = 0x5A;

const int MIN_CYRILIC_LOWERCASE = 0xE0;
const int MAX_CYRILIC_LOWERCASE = 0xFF;

const int MIN_CYRILIC_UPPERCASE = 0xC0;
const int MAX_CYRILIC_UPPERCASE = 0xDF;


int getCharDifference(unsigned char first, unsigned char second) {
	return first - second;
}


bool isDigit(unsigned char letter) {
	return (letter >= MIN_DIGIT) && (letter <= MAX_DIGIT);
}


bool isLatinLowercase(unsigned char letter) {
	return (letter >= MIN_LATIN_LOWERCASE) && (letter <= MAX_LATIN_LOWERCASE);
}


bool isLatinUppercase(unsigned char letter) {
	return (letter >= MIN_LATIN_UPPERCASE) && (letter <= MAX_LATIN_UPPERCASE);
}


bool isCyrilicLowecase(unsigned char letter) {
	return (letter >= MIN_CYRILIC_LOWERCASE) && (letter <= MAX_CYRILIC_LOWERCASE);
}


bool isCyrilicUppercase(unsigned char letter) {
	return (letter >= MIN_CYRILIC_UPPERCASE) && (letter <= MAX_CYRILIC_UPPERCASE);
}
