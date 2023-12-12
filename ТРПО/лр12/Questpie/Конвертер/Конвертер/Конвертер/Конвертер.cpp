#include <iostream>


using namespace std;
void BYNto() {
	setlocale(LC_ALL, "Russian");
	float inputBYN, outputUSD, outputEURO, outputRUB;

	cout << "Введите сумму в BYN: ";
	cin >> inputBYN;

	outputUSD = inputBYN * 0.4;
	outputEURO = inputBYN * 0.37;
	outputRUB = inputBYN * 27.84;

	cout << inputBYN << " BYN = " << outputUSD << " USD\n";
	cout << inputBYN << " BYN = " << outputEURO << " EUR\n";
	cout << inputBYN << " BYN = " << outputRUB << " RUB\n";
}
void USDto() {
	setlocale(LC_ALL, "Russian");
	float inputUSD, outputBYN, outputEURO, outputRUB;

	cout << "Введите сумму в USD: ";
	cin >> inputUSD;

	outputBYN = inputUSD * 2.52;
	outputEURO = inputUSD * 0.94;
	outputRUB = inputUSD * 70.25;

	cout << inputUSD << " USD = " << outputBYN << " BYN\n";
	cout << inputUSD << " USD = " << outputEURO << " EUR\n";
	cout << inputUSD << " USD = " << outputRUB << " RUB\n";
}
void EUROto() {
	setlocale(LC_ALL, "Russian");
	float inputEURO, outputBYN, outputUSD, outputRUB;

	cout << "Введите сумму в EUR: ";
	cin >> inputEURO;

	outputBYN = inputEURO * 2.69;
	outputUSD = inputEURO * 1.07;
	outputRUB = inputEURO * 74.93;

	cout << inputEURO << " EUR = " << outputBYN << " BYN\n";
	cout << inputEURO << " EUR = " << outputUSD << " USD\n";
	cout << inputEURO << " EUR = " << outputRUB << " RUB\n";
}
void RUBto() {
	setlocale(LC_ALL, "Russian");
	float inputRUB, outputBYN, outputUSD, outputEURO;

	cout << "ВВедите сумму в RUB: ";
	cin >> inputRUB;

	outputBYN = inputRUB * 0.036;
	outputUSD = inputRUB * 0.014;
	outputEURO = inputRUB * 0.013;

	cout << inputRUB << " RUB = " << outputBYN << " BYN\n";
	cout << inputRUB << " RUB = " << outputUSD << " USD\n";
	cout << inputRUB << " RUB = " << outputEURO << " EUR\n";
}
void main() {
	setlocale(LC_ALL, "Russian");
	float  inputEURO, inputRUB, outputBYN, outputUSD, outputEURO, outputRUB;
	int ChooseInput;
	cout << "Введите Валюту, которую хотите перевести: (1 - BYN, 2 - USD, 3 - EURO, 4 - RUB) \n";
	cin >> ChooseInput;
	switch (ChooseInput)
	{
	case 1: BYNto();break;
	
	case 2: USDto();break;

	case 3: EUROto();break;

	case 4: RUBto();break;
	default:
		break;
	}
}